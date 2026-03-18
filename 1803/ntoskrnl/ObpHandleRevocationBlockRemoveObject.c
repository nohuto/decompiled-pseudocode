/*
 * XREFs of ObpHandleRevocationBlockRemoveObject @ 0x140552910
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140085580 (NtSetInformationWorkerFactory.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObpProcessRemoveObjectQueue @ 0x140552770 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x140758C60 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

__int64 __fastcall ObpHandleRevocationBlockRemoveObject(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 > 2 )
    return ObpHandleRevocationBlockRemoveInsertedObject(a1, v1, 0LL, 0LL);
  return result;
}
