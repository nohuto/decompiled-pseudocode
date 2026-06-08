/*
 * XREFs of IsTurboModeSupported @ 0x1C0001B64
 * Callers:
 *     SetGV3PerfState @ 0x1C0001980 (SetGV3PerfState.c)
 *     SetEfficientTurboDisablePolicy @ 0x1C0001AD0 (SetEfficientTurboDisablePolicy.c)
 *     SetTurboDisablePolicy @ 0x1C0007150 (SetTurboDisablePolicy.c)
 *     InitDriver @ 0x1C0031C84 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004A70 (GetCpuIdInfo.c)
 */

bool IsTurboModeSupported()
{
  bool result; // al
  unsigned int v1[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v2[16]; // [rsp+30h] [rbp-28h] BYREF

  GetCpuIdInfo(0LL, v1);
  result = 0;
  if ( v1[0] >= 6 )
  {
    GetCpuIdInfo(6LL, v2);
    if ( (v2[0] & 2) != 0 )
      return 1;
  }
  return result;
}
