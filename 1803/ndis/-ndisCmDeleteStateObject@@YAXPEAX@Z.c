/*
 * XREFs of ?ndisCmDeleteStateObject@@YAXPEAX@Z @ 0x1C0009500
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfDereferenceCompartmentForUser @ 0x1C0013FF4 (ndisIfDereferenceCompartmentForUser.c)
 */

void __fastcall ndisCmDeleteStateObject(_QWORD *a1)
{
  if ( a1[1] )
    ndisIfDereferenceCompartmentForUser();
}
