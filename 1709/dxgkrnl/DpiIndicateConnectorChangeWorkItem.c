/*
 * XREFs of DpiIndicateConnectorChangeWorkItem @ 0x1C0104BA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkQueryConnectionChanges @ 0x1C0011A64 (DxgkQueryConnectionChanges.c)
 */

void __fastcall DpiIndicateConnectorChangeWorkItem(__int64 IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  DxgkQueryConnectionChanges(IoObject, 0, 0, 0, 1);
  IoFreeWorkItem(IoWorkItem);
}
