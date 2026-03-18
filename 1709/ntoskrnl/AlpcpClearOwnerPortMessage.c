/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x1404636D8
 * Callers:
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140463024 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x1404633D0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140464F28 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
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
