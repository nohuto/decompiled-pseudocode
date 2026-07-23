/*
 * XREFs of ExpRefreshSystemTime @ 0x1405A57F4
 * Callers:
 *     NtInitializeRegistry @ 0x140585198 (NtInitializeRegistry.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x140026E40 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14003C460 (ExSystemTimeToLocalTime.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExLocalTimeToSystemTime @ 0x140136510 (ExLocalTimeToSystemTime.c)
 *     KeSetSystemTime @ 0x140138470 (KeSetSystemTime.c)
 *     RtlTimeToTimeFields @ 0x140144710 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x14014B7EC (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAcquireTimeRefreshLock @ 0x140563098 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A588C (ExpRefreshTimeZoneInformation.c)
 */

void ExpRefreshSystemTime()
{
  char v0; // bl
  int v1; // edi
  LARGE_INTEGER v2; // rax
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER v4; // [rsp+28h] [rbp-28h] BYREF
  LARGE_INTEGER Time; // [rsp+30h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+38h] [rbp-18h] BYREF

  ExAcquireTimeRefreshLock(1u);
  v0 = ExpSystemIsInCmosMode;
  if ( (unsigned __int8)HalQueryRealTimeClock(&TimeFields) )
  {
    RtlTimeFieldsToTime(&TimeFields, &Time);
    v1 = ExpLastTimeZoneBias;
    if ( (unsigned __int8)ExpRefreshTimeZoneInformation() )
    {
      if ( v1 != ExpLastTimeZoneBias )
      {
        v2.QuadPart = MEMORY[0xFFFFF78000000014];
        SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
        if ( !ExpRealTimeIsUniversal )
        {
          if ( v0 )
          {
            ExLocalTimeToSystemTime(&Time, &v4);
            KeSetSystemTime((__int64)&v4, (__int64)&SystemTime, 0);
            goto LABEL_9;
          }
          ExSystemTimeToLocalTime(&SystemTime, &Time);
          RtlTimeToTimeFields(&Time, &TimeFields);
          HalSetRealTimeClock(&TimeFields);
          v2 = SystemTime;
        }
        v4 = v2;
LABEL_9:
        PoNotifySystemTimeSet();
      }
    }
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
