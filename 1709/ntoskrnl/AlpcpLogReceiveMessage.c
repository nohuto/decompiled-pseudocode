/*
 * XREFs of AlpcpLogReceiveMessage @ 0x1406DE624
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x14049EAE0 (AlpcpReceiveMessagePort.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1404A2C40 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveDirectMessagePort @ 0x14056F0C0 (AlpcpReceiveDirectMessagePort.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406DE40C (AlpcpInvokeLogCallbacks.c)
 */

char __fastcall AlpcpLogReceiveMessage(__int64 a1)
{
  __int128 v1; // xmm0
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]

  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v2 = *(_DWORD *)(a1 + 264);
  v5 = 2;
  v4 = v1;
  v6 = v2;
  return AlpcpInvokeLogCallbacks((__int64)&v4, 0x20u);
}
