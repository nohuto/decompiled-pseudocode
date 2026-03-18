/*
 * XREFs of AlpcpDispatchMessage @ 0x140475DF8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpDispatchMessage(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v1 + 24) )
    return AlpcpDispatchNewMessage();
  if ( *(_QWORD *)(v1 + 32) )
    return AlpcpDispatchReplyToWaitingThread();
  return AlpcpDispatchReplyToPort(a1);
}
