/*
 * XREFs of NtSetSystemTime @ 0x1407BD00C
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1407BC1A0 (ExpSetTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlTimeFieldsToTime @ 0x1400C0BA0 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x1400D25F0 (ExSystemTimeToLocalTime.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     RtlTimeToTimeFields @ 0x1401457D0 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x14014D0A0 (ExLocalTimeToSystemTime.c)
 *     KeSetSystemTime @ 0x14014E78C (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x14016E698 (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x1404710F4 (ExpSetSystemTime.c)
 *     ExAcquireTimeRefreshLock @ 0x14048DB94 (ExAcquireTimeRefreshLock.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     RtlIsMultiSessionSku @ 0x140509250 (RtlIsMultiSessionSku.c)
 *     ExpRefreshTimeZoneInformation @ 0x14062FA98 (ExpRefreshTimeZoneInformation.c)
 *     RtlCapabilityCheck @ 0x140784D70 (RtlCapabilityCheck.c)
 *     SeAuditSystemTimeChange @ 0x14078DF4C (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
      goto LABEL_31;
    RtlTimeFieldsToTime(&TimeFields, &Time);
    if ( !ExpRefreshTimeZoneInformation() )
      goto LABEL_31;
    v10.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTimea.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v9 )
      {
        ExLocalTimeToSystemTime(&Time, &v13);
        KeSetSystemTime((__int64)&v13, (__int64)&SystemTimea, 0);
        goto LABEL_30;
      }
      ExSystemTimeToLocalTime(&SystemTimea, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
      v10 = SystemTimea;
    }
    v13 = v10;
LABEL_30:
    PoNotifySystemTimeSet((__int64 *)&v13, (__int64 *)&SystemTimea);
    v8 = 0;
LABEL_31:
    ExReleaseResourceLite(&ExpTimeRefreshLock);
    KeLeaveCriticalRegion();
    return v8;
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
  ExpSetSystemTime(1, 0, 1LL, v13, (__int64 *)&SystemTimea);
  SeAuditSystemTimeChange(SystemTimea.QuadPart, v13.QuadPart);
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  if ( NewSystemTime )
    *NewSystemTime = SystemTimea;
  return 0;
}
