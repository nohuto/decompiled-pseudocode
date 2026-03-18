/*
 * XREFs of ObpReleaseLookupContext @ 0x14001908C
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140484700 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140486408 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x1404873F0 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 *     ObpCreateSymbolicLinkName @ 0x14058C2D8 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x1405C6D8C (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x1400190C8 (ObpUnlockDirectory.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall ObpReleaseLookupContext(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  if ( *(_BYTE *)(a1 + 30) )
    result = ObpUnlockDirectory(*(_QWORD *)a1, a1);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    result = ObfDereferenceObject(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
