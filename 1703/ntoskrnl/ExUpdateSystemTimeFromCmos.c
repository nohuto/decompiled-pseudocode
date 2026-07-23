/*
 * XREFs of ExUpdateSystemTimeFromCmos @ 0x140409AF8
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     ExpTimeRefreshWork @ 0x14041A8E0 (ExpTimeRefreshWork.c)
 *     KdpTimeSlipWork @ 0x14078B790 (KdpTimeSlipWork.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x140026E40 (RtlTimeFieldsToTime.c)
 *     ExLocalTimeToSystemTime @ 0x140136510 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x140409E44 (ExpSetSystemTime.c)
 */

BOOLEAN __fastcall ExUpdateSystemTimeFromCmos(char a1, unsigned int a2)
{
  unsigned __int64 v3; // rbx
  BOOLEAN result; // al
  int v5; // edx
  unsigned __int64 v6; // rcx
  LARGE_INTEGER Time; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-20h] BYREF

  if ( !a2 )
    a2 = ExpMaxTimeSeperationBeforeCorrect;
  v3 = 10000000LL * a2;
  result = HalQueryRealTimeClock(&TimeFields);
  if ( result )
  {
    result = RtlTimeFieldsToTime(&TimeFields, &Time);
    if ( result )
    {
      if ( ExpRealTimeIsUniversal )
        SystemTime = Time;
      else
        ExLocalTimeToSystemTime(&Time, &SystemTime);
      result = MEMORY[0xFFFFF78000000014];
      v9 = MEMORY[0xFFFFF78000000014];
      if ( SystemTime.QuadPart <= MEMORY[0xFFFFF78000000014] )
        v6 = MEMORY[0xFFFFF78000000014] - SystemTime.QuadPart;
      else
        v6 = SystemTime.QuadPart - MEMORY[0xFFFFF78000000014];
      if ( v6 > v3 )
      {
        LOBYTE(v5) = a1;
        return ExpSetSystemTime(0, v5, 2, SystemTime.LowPart, (__int64)&v9);
      }
    }
  }
  return result;
}
