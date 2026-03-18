/*
 * XREFs of DxgkWaitForSynchronizationObjectFromCpu @ 0x1C008D190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1)
{
  return DxgkWaitForSynchronizationObjectFromCpuInternal(a1, 1, 0LL);
}
