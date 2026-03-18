/*
 * XREFs of ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C006118C
 * Callers:
 *     VidMmQueryAllocationResidency @ 0x1C0012FA0 (VidMmQueryAllocationResidency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::QueryAllocationResidency(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC **a2)
{
  return VIDMM_GLOBAL::QueryLocalAllocationResidency(this, *a2);
}
