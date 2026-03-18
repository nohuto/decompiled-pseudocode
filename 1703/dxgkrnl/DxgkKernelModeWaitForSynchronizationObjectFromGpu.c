/*
 * XREFs of DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C008AD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkKernelModeWaitForSynchronizationObjectFromGpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1)
{
  return DxgkWaitForSynchronizationObjectFromGpuInternal(a1, 0, 1, 0LL);
}
