/*
 * XREFs of WmipOpenCloseCleanup @ 0x14045D180
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 */

__int64 __fastcall WmipOpenCloseCleanup(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = 0;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
