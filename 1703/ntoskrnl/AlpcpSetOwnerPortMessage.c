/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x140474A2C
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x140430220 (AlpcpDispatchReplyToPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140472A18 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x1404745FC (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404748C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140523D60 (AlpcpDispatchReplyToWaitingThread.c)
 * Callees:
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
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
