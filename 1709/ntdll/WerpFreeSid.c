/*
 * XREFs of WerpFreeSid @ 0x180002620
 * Callers:
 *     SendMessageToWERService @ 0x18000242C (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x18000265C (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall WerpFreeSid(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  v3 = 12LL;
  if ( a1 )
    return ZwFreeVirtualMemory(-1LL, &v2, &v3, 0x8000LL);
  else
    return 3221225485LL;
}
