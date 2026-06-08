/*
 * XREFs of IsTurboModeSupported @ 0x1C0003BD0
 * Callers:
 *     SetGV3PerfState @ 0x1C00018E0 (SetGV3PerfState.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C00072E0 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C00073C0 (SetTurboDisablePolicy.c)
 *     InitDriver @ 0x1C0036040 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004EE0 (GetCpuIdInfo.c)
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
