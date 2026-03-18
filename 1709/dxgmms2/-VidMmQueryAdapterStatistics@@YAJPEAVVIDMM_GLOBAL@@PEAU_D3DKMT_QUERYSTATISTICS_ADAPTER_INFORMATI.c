/*
 * XREFs of ?VidMmQueryAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION@@@Z @ 0x1C00208A0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAdapterStatistics@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION@@@Z @ 0x1C0022100 (-QueryAdapterStatistics@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION@@@Z.c)
 */

__int64 __fastcall VidMmQueryAdapterStatistics(
        struct VIDMM_GLOBAL *a1,
        struct _D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION *a2)
{
  return VIDMM_GLOBAL::QueryAdapterStatistics(a1, a2);
}
