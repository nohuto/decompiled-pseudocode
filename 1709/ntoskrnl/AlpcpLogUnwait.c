/*
 * XREFs of AlpcpLogUnwait @ 0x1406DE6EC
 * Callers:
 *     AlpcpSignalAndWait @ 0x14006B0B0 (AlpcpSignalAndWait.c)
 *     AlpcpWaitForSingleObject @ 0x14011BDFC (AlpcpWaitForSingleObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406DE40C (AlpcpInvokeLogCallbacks.c)
 */

char __fastcall AlpcpLogUnwait(int a1)
{
  __int128 v1; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]

  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v5 = a1;
  v4 = 5;
  v3 = v1;
  return AlpcpInvokeLogCallbacks((__int64)&v3, 0x20u);
}
