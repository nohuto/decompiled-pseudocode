/*
 * XREFs of AlpcpLogReceiveMessage @ 0x140749514
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1404CAA80 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveSynchronousReply @ 0x1404CBD10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x140558B14 (AlpcpReceiveDirectMessagePort.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1407492FC (AlpcpInvokeLogCallbacks.c)
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
