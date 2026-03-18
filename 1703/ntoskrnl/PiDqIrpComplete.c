/*
 * XREFs of PiDqIrpComplete @ 0x1404B8FB0
 * Callers:
 *     PiDqQueryCompletePendedIrp @ 0x14045B784 (PiDqQueryCompletePendedIrp.c)
 *     PiDqIrpQueryGetResult @ 0x1404B80E4 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x1404B9328 (PiDqIrpQueryCreate.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 */

void __fastcall PiDqIrpComplete(IRP *a1, int a2, unsigned int a3, _OWORD *a4)
{
  _OWORD *UserBuffer; // rax

  if ( a2 < 0 )
  {
    a1->IoStatus.Information = 0LL;
  }
  else
  {
    if ( a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4653063 )
      UserBuffer = a1->UserBuffer;
    else
      UserBuffer = &a1->AssociatedIrp.MasterIrp->Type;
    *UserBuffer = *a4;
    a1->IoStatus.Information = a3;
  }
  a1->IoStatus.Status = a2;
  IofCompleteRequest(a1, 0);
}
