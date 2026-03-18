/*
 * XREFs of DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C00D6F30
 * Callers:
 *     ?SignalTokenSync@CAdapter@@UEAAJPEAX_K@Z @ 0x1C0014110 (-SignalTokenSync@CAdapter@@UEAAJPEAX_K@Z.c)
 *     ?AddWaitToContext@CAdapter@@UEAAJII_K@Z @ 0x1C004B260 (-AddWaitToContext@CAdapter@@UEAAJII_K@Z.c)
 * Callees:
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00FBCF0 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

__int64 __fastcall DxgkKernelModeWaitForSynchronizationObjectFromGpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1)
{
  return DxgkWaitForSynchronizationObjectFromGpuInternal(a1, 0, 1, 0LL, 1);
}
