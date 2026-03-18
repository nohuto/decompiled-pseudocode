/*
 * XREFs of ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1C00D11C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C00D11E0 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 */

__int64 __fastcall DxgkCddSignalSynchronizationObjectFromGpu(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1)
{
  return DxgkSignalSynchronizationObjectFromGpuInternal(a1, 0);
}
