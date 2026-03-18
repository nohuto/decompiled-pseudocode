/*
 * XREFs of IopPnPCompleteRequest @ 0x14012289C
 * Callers:
 *     IopPnPDispatch @ 0x14055A4F0 (IopPnPDispatch.c)
 * Callees:
 *     <none>
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}
