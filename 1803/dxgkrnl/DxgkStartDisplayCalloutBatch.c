/*
 * XREFs of DxgkStartDisplayCalloutBatch @ 0x1C01586A4
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C003BA24 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?StartDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0157A78 (-StartDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkStartDisplayCalloutBatch(__int64 a1)
{
  return ADAPTER_DISPLAY::StartDisplayCalloutBatch(*(DXGADAPTER ***)(a1 + 2456));
}
