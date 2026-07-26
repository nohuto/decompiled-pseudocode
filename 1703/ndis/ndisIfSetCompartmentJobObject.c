/*
 * XREFs of ndisIfSetCompartmentJobObject @ 0x1C00D15C4
 * Callers:
 *     NdisSetJobObjectCompartmentId @ 0x1C00E460C (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall ndisIfSetCompartmentJobObject(__int64 a1, void *a2)
{
  void *v4; // rcx
  LONG_PTR result; // rax

  v4 = *(void **)(a1 + 1720);
  if ( v4 )
  {
    result = ObfDereferenceObject(v4);
    *(_QWORD *)(a1 + 1720) = 0LL;
  }
  if ( a2 )
  {
    result = ObfReferenceObject(a2);
    *(_QWORD *)(a1 + 1720) = a2;
  }
  return result;
}
