/*
 * XREFs of PiDqIrpComplete @ 0x1405235D8
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140523298 (PiDqIrpQueryCreate.c)
 *     PiDqIrpQueryGetResult @ 0x140523AD4 (PiDqIrpQueryGetResult.c)
 *     PiDqQueryCompletePendedIrp @ 0x1405DDDC8 (PiDqQueryCompletePendedIrp.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 */

void __fastcall PiDqIrpComplete(IRP *a1, int a2, unsigned int a3, _OWORD *a4)
{
  ULONG_PTR v4; // rax
  _OWORD *UserBuffer; // rax

  v4 = 0LL;
  if ( a2 >= 0 )
  {
    if ( a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4653063 )
      UserBuffer = a1->UserBuffer;
    else
      UserBuffer = &a1->AssociatedIrp.MasterIrp->Type;
    *UserBuffer = *a4;
    v4 = a3;
  }
  a1->IoStatus.Information = v4;
  a1->IoStatus.Status = a2;
  IofCompleteRequest(a1, 0);
}
