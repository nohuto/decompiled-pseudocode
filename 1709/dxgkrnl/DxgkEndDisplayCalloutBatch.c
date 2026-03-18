/*
 * XREFs of DxgkEndDisplayCalloutBatch @ 0x1C0105F40
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0011A64 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C010657C (-EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkEndDisplayCalloutBatch(__int64 a1)
{
  return ADAPTER_DISPLAY::EndDisplayCalloutBatch(*(ADAPTER_DISPLAY **)(a1 + 2304));
}
