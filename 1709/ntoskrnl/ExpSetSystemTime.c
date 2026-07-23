/*
 * XREFs of ExpSetSystemTime @ 0x14043A934
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x14043A854 (ExUpdateSystemTimeFromCmos.c)
 *     NtSetSystemTime @ 0x14075653C (NtSetSystemTime.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1400134F0 (RtlTimeToTimeFields.c)
 *     ExSystemTimeToLocalTime @ 0x140131D60 (ExSystemTimeToLocalTime.c)
 *     PoNotifySystemTimeSet @ 0x14015D400 (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeSetSystemTime @ 0x14020497C (KeSetSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405C1FB4 (ExpRefreshTimeZoneInformation.c)
 */

__int64 __fastcall ExpSetSystemTime(char a1, char a2, unsigned int a3, LARGE_INTEGER a4, _QWORD *a5)
{
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+28h] [rbp-28h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-20h] BYREF

  SystemTime = a4;
  if ( ExpRealTimeIsUniversal )
    LocalTime = a4;
  else
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  KeSetSystemTime((__int64)&SystemTime, (__int64)a5, a2 != 0 ? 3 : 0);
  if ( a1 )
  {
    ExpRefreshTimeZoneInformation();
    if ( !ExpSystemIsInCmosMode )
    {
      if ( ExpRealTimeIsUniversal )
        LocalTime = SystemTime;
      else
        ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
      RtlTimeToTimeFields(&LocalTime, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
    }
  }
  return PoNotifySystemTimeSet(&SystemTime, a5, a3);
}
