/*
 * XREFs of AlpcpLogWaitForReply @ 0x1406DE844
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x140466D78 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14049FAA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406DE40C (AlpcpInvokeLogCallbacks.c)
 */

char __fastcall AlpcpLogWaitForReply(__int64 a1)
{
  __int128 v1; // xmm0
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]

  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v2 = *(_DWORD *)(a1 + 264);
  v5 = 3;
  v4 = v1;
  v6 = v2;
  return AlpcpInvokeLogCallbacks((__int64)&v4, 0x20u);
}
