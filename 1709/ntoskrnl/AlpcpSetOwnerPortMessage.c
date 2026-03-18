/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x1404674B8
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x1404633D0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchCloseMessage @ 0x1404651EC (AlpcpDispatchCloseMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140466D78 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchConnectionRequest @ 0x140467354 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14049FAA0 (AlpcpDispatchReplyToWaitingThread.c)
 * Callees:
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 */

__int64 __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2, unsigned __int8 a3)
{
  __int64 result; // rax

  if ( a3 )
    ObfReferenceObject(a2);
  result = (*(_DWORD *)(a1 + 40) ^ (a3 << 12)) & 0x1000;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 40) ^= result;
  return result;
}
