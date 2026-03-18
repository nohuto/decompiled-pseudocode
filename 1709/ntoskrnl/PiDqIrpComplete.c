/*
 * XREFs of PiDqIrpComplete @ 0x14054CC4C
 * Callers:
 *     PiDqIrpQueryCreate @ 0x14054C90C (PiDqIrpQueryCreate.c)
 *     PiDqIrpQueryGetResult @ 0x14054D9E8 (PiDqIrpQueryGetResult.c)
 *     PiDqQueryCompletePendedIrp @ 0x14059ED40 (PiDqQueryCompletePendedIrp.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
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
