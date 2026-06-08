/*
 * XREFs of IsMonitorMWaitSupported @ 0x1C001FF6C
 * Callers:
 *     InitMonitorMWaitSupport @ 0x1C001FEC0 (InitMonitorMWaitSupport.c)
 *     InitDriver @ 0x1C0036040 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004EE0 (GetCpuIdInfo.c)
 */

bool IsMonitorMWaitSupported()
{
  int v1; // [rsp+20h] [rbp-38h] BYREF
  char v2; // [rsp+28h] [rbp-30h]
  unsigned int v3[4]; // [rsp+30h] [rbp-28h] BYREF

  GetCpuIdInfo(1u, &v1);
  if ( (v2 & 8) == 0 )
    return 0;
  GetCpuIdInfo(0, v3);
  return v3[0] >= 5;
}
