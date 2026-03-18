/*
 * XREFs of DxgkEndDisplayCalloutBatch @ 0x1C0118CCC
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0011068 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEndDisplayCalloutBatch(__int64 a1)
{
  return ADAPTER_DISPLAY::EndDisplayCalloutBatch(*(DXGADAPTER ***)(a1 + 2280));
}
