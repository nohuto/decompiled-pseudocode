/*
 * XREFs of ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00D159C
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00D0CAC (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C00D11E0 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C00F40D0 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00FBCF0 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C01A2C00 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueue @ 0x1C01A72C0 (DxgkSubmitWaitForSyncObjectsToHwQueue.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C01C3170 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(PVOID *a1)
{
  if ( *a1 != a1 + 1 )
  {
    if ( *a1 )
      ExFreePoolWithTag(*a1, 0);
  }
}
