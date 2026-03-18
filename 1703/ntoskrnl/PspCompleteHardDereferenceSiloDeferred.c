/*
 * XREFs of PspCompleteHardDereferenceSiloDeferred @ 0x1406DE790
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageEmptyArrayNonReadonly @ 0x14023A820 (PspStorageEmptyArrayNonReadonly.c)
 */

LONG_PTR __fastcall PspCompleteHardDereferenceSiloDeferred(ULONG_PTR *a1)
{
  ULONG_PTR v1; // rbx
  ULONG_PTR v3; // rcx

  v1 = a1[161];
  if ( v1 )
  {
    PspStorageEmptyArrayNonReadonly(a1[161], 0x20u);
    v3 = *(_QWORD *)(v1 + 512);
    if ( v3 )
      PspStorageEmptyArrayNonReadonly(v3, 0x100u);
  }
  return ObfDereferenceObject(a1);
}
