/*
 * XREFs of AlpcpLogUnwait @ 0x1406B29A4
 * Callers:
 *     AlpcpWaitForSingleObject @ 0x140024478 (AlpcpWaitForSingleObject.c)
 *     AlpcpSignalAndWait @ 0x1400E7A20 (AlpcpSignalAndWait.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406B26C4 (AlpcpInvokeLogCallbacks.c)
 */

__int64 __fastcall AlpcpLogUnwait(int a1)
{
  __int128 v1; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]

  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v5 = a1;
  v4 = 5;
  v3 = v1;
  return AlpcpInvokeLogCallbacks((__int64)&v3, 0x20u);
}
