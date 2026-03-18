/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x1404DDF58
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1404CB2A0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchCloseMessage @ 0x1404DB6F0 (AlpcpDispatchCloseMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404DD564 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404DDDF4 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x1404DEDF4 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
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
