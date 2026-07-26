/*
 * XREFs of ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C00686B0
 * Callers:
 *     NdisSetJobObjectCompartmentId @ 0x1C00F1248 (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     ndisIfDereferenceCompartmentForUser @ 0x1C0013FF4 (ndisIfDereferenceCompartmentForUser.c)
 */

void __fastcall ndisCmDereferenceCompartment(unsigned int *a1)
{
  ndisIfDereferenceCompartmentForUser(a1);
}
