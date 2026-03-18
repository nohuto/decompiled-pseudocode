/*
 * XREFs of PiSwRemovePdoAssociation @ 0x1405C3E9C
 * Callers:
 *     PiSwUnassociateDeviceObject @ 0x1405C3E5C (PiSwUnassociateDeviceObject.c)
 * Callees:
 *     PiSwPdoAssociationFree @ 0x1405C3EF0 (PiSwPdoAssociationFree.c)
 *     PiSwFindPdoAssociation @ 0x1405E80EC (PiSwFindPdoAssociation.c)
 */

__int64 __fastcall PiSwRemovePdoAssociation(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *PdoAssociation; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx

  v2 = 0;
  PdoAssociation = (_QWORD *)PiSwFindPdoAssociation(a1, a2, 0LL);
  if ( PdoAssociation )
  {
    v4 = *PdoAssociation;
    if ( *(_QWORD **)(*PdoAssociation + 8LL) != PdoAssociation
      || (v5 = (_QWORD *)PdoAssociation[1], (_QWORD *)*v5 != PdoAssociation) )
    {
      __fastfail(3u);
    }
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    PiSwPdoAssociationFree(PdoAssociation);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v2;
}
