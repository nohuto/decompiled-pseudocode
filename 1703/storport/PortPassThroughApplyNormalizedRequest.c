/*
 * XREFs of PortPassThroughApplyNormalizedRequest @ 0x1C0046EA8
 * Callers:
 *     PortPassThroughMarshalResultsFromSrb @ 0x1C00474F4 (PortPassThroughMarshalResultsFromSrb.c)
 * Callees:
 *     <none>
 */

char __fastcall PortPassThroughApplyNormalizedRequest(__int128 *a1, IRP *a2)
{
  _IRP *MasterIrp; // rdi
  _IRP *v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  __int128 v8; // xmm1
  _LIST_ENTRY v9; // xmm0

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  LOBYTE(v5) = IoIs32bitProcess(a2);
  v6 = *a1;
  if ( (_BYTE)v5 )
  {
    v5 = a2->AssociatedIrp.MasterIrp;
    v7 = *((_QWORD *)a1 + 2);
    *(_OWORD *)&v5->Type = v6;
    *(_QWORD *)&v5->Flags = v7;
  }
  else
  {
    v8 = a1[1];
    *(_OWORD *)&MasterIrp->Type = v6;
    v9 = (_LIST_ENTRY)a1[2];
    *(_OWORD *)&MasterIrp->Flags = v8;
    *(_QWORD *)&v8 = *((_QWORD *)a1 + 6);
    MasterIrp->ThreadListEntry = v9;
    MasterIrp->IoStatus.Pointer = (void *)v8;
  }
  return (char)v5;
}
