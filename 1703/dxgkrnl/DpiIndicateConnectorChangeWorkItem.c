/*
 * XREFs of DpiIndicateConnectorChangeWorkItem @ 0x1C01C2340
 * Callers:
 *     <none>
 * Callees:
 *     DxgkQueryConnectionChanges @ 0x1C0011068 (DxgkQueryConnectionChanges.c)
 */

void __fastcall DpiIndicateConnectorChangeWorkItem(__int64 IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  DxgkQueryConnectionChanges(IoObject, 0LL, 0, 0, 1);
  IoFreeWorkItem(IoWorkItem);
}
