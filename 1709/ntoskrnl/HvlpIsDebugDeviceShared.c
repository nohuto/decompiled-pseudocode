/*
 * XREFs of HvlpIsDebugDeviceShared @ 0x1401E9E44
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x14015D5D8 (HvlDebuggerSupportInitialize.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1401348B0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HviGetDebugDeviceOptions @ 0x14028B430 (HviGetDebugDeviceOptions.c)
 */

bool HvlpIsDebugDeviceShared()
{
  char v0; // bl
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v3[3]; // [rsp+28h] [rbp-20h] BYREF
  int v4; // [rsp+34h] [rbp-14h]

  v0 = 0;
  v2 = 0LL;
  HviGetHypervisorFeatures(v3);
  if ( (v4 & 0x800) != 0 )
  {
    HviGetDebugDeviceOptions(&v2);
    v0 = v2;
  }
  return (v0 & 4) != 0;
}
