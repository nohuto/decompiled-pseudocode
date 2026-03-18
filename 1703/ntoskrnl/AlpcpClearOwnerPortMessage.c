/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x14043054C
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x14042F9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140430220 (AlpcpDispatchReplyToPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140474350 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
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
