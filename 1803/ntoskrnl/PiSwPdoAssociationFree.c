/*
 * XREFs of PiSwPdoAssociationFree @ 0x1405C3EF0
 * Callers:
 *     PiSwRemovePdoAssociation @ 0x1405C3E9C (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceFree @ 0x1405C41F8 (PiSwDeviceFree.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[2]);
  ObfDereferenceObject(P[3]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
