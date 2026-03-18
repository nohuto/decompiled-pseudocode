/*
 * XREFs of PiSwPdoAssociationFree @ 0x1406CE22C
 * Callers:
 *     PiSwDeviceFree @ 0x1406CDAD4 (PiSwDeviceFree.c)
 *     PiSwRemovePdoAssociation @ 0x1406CE704 (PiSwRemovePdoAssociation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[2]);
  ObfDereferenceObject(P[3]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
