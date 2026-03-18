/*
 * XREFs of IopPnPCompleteRequest @ 0x14013A680
 * Callers:
 *     IopPnPDispatch @ 0x1405B9E90 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}
