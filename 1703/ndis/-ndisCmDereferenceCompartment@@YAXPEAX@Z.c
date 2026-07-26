/*
 * XREFs of ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C0067358
 * Callers:
 *     NdisSetJobObjectCompartmentId @ 0x1C00E460C (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ndisCmDereferenceCompartment(unsigned int *a1)
{
  ndisIfDereferenceCompartmentForUser(a1);
}
