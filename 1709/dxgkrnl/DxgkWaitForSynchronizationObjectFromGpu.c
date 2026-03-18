/*
 * XREFs of DxgkWaitForSynchronizationObjectFromGpu @ 0x1C00E8F70
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K@Z @ 0x1C00E8F90 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1)
{
  return DxgkWaitForSynchronizationObjectFromGpuInternal(a1, 1, 0, 0LL);
}
