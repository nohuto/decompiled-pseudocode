/*
 * XREFs of PiSwFindPdoAssociation @ 0x1405E80EC
 * Callers:
 *     PiSwRemovePdoAssociation @ 0x1405C3E9C (PiSwRemovePdoAssociation.c)
 *     PiSwIrpStartCreateWorker @ 0x1405C6A7C (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessParentRemoveIrp @ 0x1405C8E48 (PiSwProcessParentRemoveIrp.c)
 *     PiSwGetChildPdo @ 0x1405E7FB8 (PiSwGetChildPdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiSwFindPdoAssociation(__int64 a1, __int64 a2, char a3)
{
  char v3; // r9
  _QWORD *v4; // r11
  _QWORD *v5; // rax
  unsigned __int64 v6; // r10
  __int64 v7; // rcx

  v3 = 0;
  v4 = (_QWORD *)(a1 + 128);
  v5 = *(_QWORD **)(a1 + 128);
  v6 = 0LL;
  while ( v5 != v4 )
  {
    v6 = (unsigned __int64)v5;
    if ( a3 )
      v7 = v5[2];
    else
      v7 = v5[3];
    if ( v7 == a2 )
    {
      v3 = 1;
      return v6 & -(__int64)(v3 != 0);
    }
    v5 = (_QWORD *)*v5;
  }
  return v6 & -(__int64)(v3 != 0);
}
