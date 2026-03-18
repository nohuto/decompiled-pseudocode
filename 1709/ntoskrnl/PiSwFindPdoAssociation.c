/*
 * XREFs of PiSwFindPdoAssociation @ 0x1405E3F10
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x14055E648 (PiSwProcessParentRemoveIrp.c)
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     PiSwGetChildPdo @ 0x1405E3DF8 (PiSwGetChildPdo.c)
 *     PiSwRemovePdoAssociation @ 0x1406CE704 (PiSwRemovePdoAssociation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiSwFindPdoAssociation(__int64 a1, __int64 a2, char a3)
{
  char v3; // r9
  _QWORD *v4; // r11
  _QWORD *v5; // rax
  unsigned __int64 v6; // r10
  __int64 v8; // rcx

  v3 = 0;
  v4 = (_QWORD *)(a1 + 128);
  v5 = *(_QWORD **)(a1 + 128);
  v6 = 0LL;
  while ( v5 != v4 )
  {
    v6 = (unsigned __int64)v5;
    if ( a3 )
      v8 = v5[2];
    else
      v8 = v5[3];
    if ( v8 == a2 )
    {
      v3 = 1;
      return v6 & -(__int64)(v3 != 0);
    }
    v5 = (_QWORD *)*v5;
  }
  return v6 & -(__int64)(v3 != 0);
}
