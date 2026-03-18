/*
 * XREFs of CmpVolumeContextCleanup @ 0x1406F7508
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140495B50 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14054E060 (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeContextCreate @ 0x14065197C (CmpVolumeContextCreate.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PiPagePathSetState @ 0x14064FDDC (PiPagePathSetState.c)
 */

LONG_PTR __fastcall CmpVolumeContextCleanup(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  if ( *(_BYTE *)(a1 + 64) )
    result = PiPagePathSetState(*(struct _FILE_OBJECT **)(a1 + 48), 0);
  v3 = *(void **)(a1 + 48);
  if ( v3 )
    return ObfDereferenceObject(v3);
  return result;
}
