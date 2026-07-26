/*
 * XREFs of ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C0067B30
 * Callers:
 *     NdisSetJobObjectCompartmentId @ 0x1C00EE63C (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00418D4 (ndisIfDereferenceCompartmentForUser.c)
 */

void __fastcall ndisCmDereferenceCompartment(unsigned int *a1)
{
  ndisIfDereferenceCompartmentForUser(a1);
}
