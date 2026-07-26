/*
 * XREFs of NdisGetAndReferenceCompartmentJobObject @ 0x1C0067D20
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfGetCompartmentJobObject @ 0x1C0041990 (ndisIfGetCompartmentJobObject.c)
 */

__int64 __fastcall NdisGetAndReferenceCompartmentJobObject(unsigned int a1, unsigned int *a2, __int64 a3)
{
  return ndisIfGetCompartmentJobObject(a1, a2, a3);
}
