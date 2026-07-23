/*
 * XREFs of NtSetSystemTime @ 0x14075653C
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1407556D4 (ExpSetTimeZoneInformation.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1400134F0 (RtlTimeToTimeFields.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     RtlTimeFieldsToTime @ 0x14011C830 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x140131D60 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x140145660 (ExLocalTimeToSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x14015D400 (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeSetSystemTime @ 0x14020497C (KeSetSystemTime.c)
 *     ExpSetSystemTime @ 0x14043A934 (ExpSetSystemTime.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x14046C524 (ExAcquireTimeRefreshLock.c)
 *     RtlIsMultiSessionSku @ 0x140513550 (RtlIsMultiSessionSku.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405C1FB4 (ExpRefreshTimeZoneInformation.c)
 *     RtlCapabilityCheck @ 0x1407215D0 (RtlCapabilityCheck.c)
 *     SeAuditSystemTimeChange @ 0x140729BAC (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v6; // rcx
  LONGLONG QuadPart; // rax
  NTSTATUS v8; // ebx
  char v9; // di
  LARGE_INTEGER v10; // rax
  BOOLEAN HasCapability[8]; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER SystemTimea; // [rsp+38h] [rbp-50h] BYREF
  LARGE_INTEGER v13; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+48h] [rbp-40h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+50h] [rbp-38h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+60h] [rbp-28h] BYREF

  *(_DWORD *)&CapabilityName.Length = 2228256;
  CapabilityName.Buffer = L"systemManagement";
  if ( !SystemTime )
  {
    v8 = -1073741811;
    ExAcquireTimeRefreshLock(1u);
    v9 = ExpSystemIsInCmosMode;
    if ( !(unsigned __int8)HalQueryRealTimeClock(&TimeFields) )
      goto LABEL_32;
    RtlTimeFieldsToTime(&TimeFields, &Time);
    if ( !ExpRefreshTimeZoneInformation() )
      goto LABEL_32;
    v10.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTimea.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v9 )
      {
        ExLocalTimeToSystemTime(&Time, &v13);
        KeSetSystemTime((__int64)&v13, (__int64)&SystemTimea, 0);
LABEL_31:
        PoNotifySystemTimeSet(&v13, &SystemTimea, 3u);
        v8 = 0;
LABEL_32:
        ExReleaseResourceLite(&ExpTimeRefreshLock);
        KeLeaveCriticalRegion();
        return v8;
      }
      ExSystemTimeToLocalTime(&SystemTimea, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
      v10 = SystemTimea;
    }
    v13 = v10;
    goto LABEL_31;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode)
    && (RtlIsMultiSessionSku() || RtlCapabilityCheck(0LL, &CapabilityName, HasCapability) < 0 || !HasCapability[0])
    || PsIsCurrentThreadInServerSilo() )
  {
    return -1073741727;
  }
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)SystemTime & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( NewSystemTime )
    {
      if ( ((unsigned __int8)NewSystemTime & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = (__int64)NewSystemTime;
      if ( (unsigned __int64)NewSystemTime >= 0x7FFFFFFF0000LL )
        v6 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v6 = *(_BYTE *)v6;
      *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
    }
    QuadPart = SystemTime->QuadPart;
    v13 = *SystemTime;
  }
  else
  {
    QuadPart = SystemTime->QuadPart;
    v13 = *SystemTime;
  }
  if ( HIDWORD(QuadPart) > 0x20000000 )
    return -1073741811;
  ExAcquireTimeRefreshLock(1u);
  ExpSetSystemTime(1, 0, 1u, v13, &SystemTimea);
  SeAuditSystemTimeChange(SystemTimea.QuadPart, v13.QuadPart);
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  if ( NewSystemTime )
    *NewSystemTime = SystemTimea;
  return 0;
}
