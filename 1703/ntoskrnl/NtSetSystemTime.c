/*
 * XREFs of NtSetSystemTime @ 0x140716E0C
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x140715FA8 (ExpSetTimeZoneInformation.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x140026E40 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14003C460 (ExSystemTimeToLocalTime.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     ExLocalTimeToSystemTime @ 0x140136510 (ExLocalTimeToSystemTime.c)
 *     KeSetSystemTime @ 0x140138470 (KeSetSystemTime.c)
 *     RtlTimeToTimeFields @ 0x140144710 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x14014B7EC (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x140409E44 (ExpSetSystemTime.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x140563098 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A588C (ExpRefreshTimeZoneInformation.c)
 *     SeAuditSystemTimeChange @ 0x1406F211C (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v6; // rcx
  LONGLONG QuadPart; // rax
  NTSTATUS v8; // ebx
  char v9; // di
  LARGE_INTEGER v10; // rax
  LARGE_INTEGER SystemTimea; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER v12; // [rsp+38h] [rbp-30h] BYREF
  LARGE_INTEGER Time; // [rsp+40h] [rbp-28h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-20h] BYREF

  if ( !SystemTime )
  {
    v8 = -1073741811;
    ExAcquireTimeRefreshLock(1u);
    v9 = ExpSystemIsInCmosMode;
    if ( !(unsigned __int8)HalQueryRealTimeClock(&TimeFields) )
      goto LABEL_29;
    RtlTimeFieldsToTime(&TimeFields, &Time);
    if ( !ExpRefreshTimeZoneInformation() )
      goto LABEL_29;
    v10.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTimea.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v9 )
      {
        ExLocalTimeToSystemTime(&Time, &v12);
        KeSetSystemTime((__int64)&v12, (__int64)&SystemTimea, 0);
LABEL_28:
        PoNotifySystemTimeSet();
        v8 = 0;
LABEL_29:
        ExReleaseResourceLite(&ExpTimeRefreshLock);
        KeLeaveCriticalRegion();
        return v8;
      }
      ExSystemTimeToLocalTime(&SystemTimea, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
      v10 = SystemTimea;
    }
    v12 = v10;
    goto LABEL_28;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) || PsIsCurrentThreadInServerSilo() )
    return -1073741727;
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
    v12 = *SystemTime;
  }
  else
  {
    QuadPart = SystemTime->QuadPart;
    v12 = *SystemTime;
  }
  if ( HIDWORD(QuadPart) > 0x20000000 )
    return -1073741811;
  ExAcquireTimeRefreshLock(1u);
  ExpSetSystemTime(1, 0, 1LL, v12, (__int64)&SystemTimea);
  SeAuditSystemTimeChange(SystemTimea.QuadPart, v12.QuadPart);
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  if ( NewSystemTime )
    *NewSystemTime = SystemTimea;
  return 0;
}
