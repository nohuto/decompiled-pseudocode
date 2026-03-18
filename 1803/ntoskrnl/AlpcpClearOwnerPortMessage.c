/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x1404DF100
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404DB380 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404DE4F0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1404DEDF4 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall AlpcpClearOwnerPortMessage(__int64 a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      result = ObfDereferenceObject(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
