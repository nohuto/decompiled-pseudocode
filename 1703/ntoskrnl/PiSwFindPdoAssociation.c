/*
 * XREFs of PiSwFindPdoAssociation @ 0x14045A1C0
 * Callers:
 *     PiSwGetChildPdo @ 0x14045A090 (PiSwGetChildPdo.c)
 *     PiSwIrpStartCreateWorker @ 0x14045FDC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwRemovePdoAssociation @ 0x14056D6C0 (PiSwRemovePdoAssociation.c)
 *     PiSwProcessParentRemoveIrp @ 0x140570C2C (PiSwProcessParentRemoveIrp.c)
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
