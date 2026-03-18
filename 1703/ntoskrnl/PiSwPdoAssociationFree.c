/*
 * XREFs of PiSwPdoAssociationFree @ 0x14056D714
 * Callers:
 *     PiSwRemovePdoAssociation @ 0x14056D6C0 (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceFree @ 0x14056DDEC (PiSwDeviceFree.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *a1)
{
  ObfDereferenceObject(a1[2]);
  ObfDereferenceObject(a1[3]);
  ExFreePoolWithTag(a1, 0x57706E50u);
}
