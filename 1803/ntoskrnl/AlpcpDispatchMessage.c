/*
 * XREFs of AlpcpDispatchMessage @ 0x1404DC48C
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1404CB2A0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1404CCD20 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1404DEDF4 (AlpcpDispatchReplyToPort.c)
 */

__int64 __fastcall AlpcpDispatchMessage(__int64 *a1)
{
  __int64 v1; // rax

  v1 = a1[1];
  if ( !*(_QWORD *)(v1 + 24) )
    return AlpcpDispatchNewMessage(a1);
  if ( *(_QWORD *)(v1 + 32) )
    return AlpcpDispatchReplyToWaitingThread((__int64)a1);
  return AlpcpDispatchReplyToPort();
}
