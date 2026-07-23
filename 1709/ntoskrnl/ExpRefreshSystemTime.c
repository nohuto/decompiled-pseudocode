/*
 * XREFs of ExpRefreshSystemTime @ 0x1405C1F1C
 * Callers:
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1400134F0 (RtlTimeToTimeFields.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlTimeFieldsToTime @ 0x14011C830 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x140131D60 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x140145660 (ExLocalTimeToSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x14015D400 (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeSetSystemTime @ 0x14020497C (KeSetSystemTime.c)
 *     ExAcquireTimeRefreshLock @ 0x14046C524 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405C1FB4 (ExpRefreshTimeZoneInformation.c)
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
        PoNotifySystemTimeSet(&v4, &SystemTime, 3u);
      }
    }
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
