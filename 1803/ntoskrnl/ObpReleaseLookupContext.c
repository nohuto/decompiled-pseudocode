/*
 * XREFs of ObpReleaseLookupContext @ 0x1400610F8
 * Callers:
 *     ObReferenceObjectByName @ 0x1404D2990 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D4B8C (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     ObpDeleteNameCheck @ 0x140519A30 (ObpDeleteNameCheck.c)
 *     ObpCreateSymbolicLinkName @ 0x14057B354 (ObpCreateSymbolicLinkName.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 *     ObCreateObjectTypeEx @ 0x14062189C (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x140061134 (ObpUnlockDirectory.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
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
