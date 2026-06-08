/*
 * XREFs of IsPerformanceEnergyBiasSupported @ 0x1C00036CC
 * Callers:
 *     InitDriver @ 0x1C0035EF0 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004C80 (GetCpuIdInfo.c)
 */

bool IsPerformanceEnergyBiasSupported()
{
  char v0; // bl
  unsigned int v2[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  GetCpuIdInfo(0LL, v2);
  if ( v2[0] >= 6 )
  {
    GetCpuIdInfo(6LL, v3);
    return (v3[8] & 8) != 0;
  }
  return v0;
}
