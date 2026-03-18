/*
 * XREFs of PiSwRemovePdoAssociation @ 0x1406CE704
 * Callers:
 *     PiSwUnassociateDeviceObject @ 0x1406CE854 (PiSwUnassociateDeviceObject.c)
 * Callees:
 *     PiSwFindPdoAssociation @ 0x1405E3F10 (PiSwFindPdoAssociation.c)
 *     PiSwPdoAssociationFree @ 0x1406CE22C (PiSwPdoAssociationFree.c)
 */

__int64 __fastcall PiSwRemovePdoAssociation(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  PVOID *PdoAssociation; // rax
  PVOID *v4; // rcx
  PVOID **v5; // rdx

  v2 = 0;
  PdoAssociation = (PVOID *)PiSwFindPdoAssociation(a1, a2, 0);
  if ( PdoAssociation )
  {
    v4 = (PVOID *)*PdoAssociation;
    if ( *((PVOID **)*PdoAssociation + 1) != PdoAssociation || (v5 = (PVOID **)PdoAssociation[1], *v5 != PdoAssociation) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    PiSwPdoAssociationFree(PdoAssociation);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v2;
}
