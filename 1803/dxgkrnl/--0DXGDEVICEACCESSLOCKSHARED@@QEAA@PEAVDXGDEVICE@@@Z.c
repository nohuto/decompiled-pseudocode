/*
 * XREFs of ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002694
 * Callers:
 *     DxgkGetContextSchedulingPriority @ 0x1C009CE20 (DxgkGetContextSchedulingPriority.c)
 *     DxgkQueryResourceInfo @ 0x1C00AABD0 (DxgkQueryResourceInfo.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00ABF30 (DxgkQueryResourceInfoFromNtHandle.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C00D15C4 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkGetAllocationPriority @ 0x1C016C260 (DxgkGetAllocationPriority.c)
 *     DxgkQueryAllocationResidency @ 0x1C016CDD0 (DxgkQueryAllocationResidency.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C016D3D0 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C018E5A0 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetOverlayState @ 0x1C01ADF20 (DxgkGetOverlayState.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C01B2984 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 *     DxgkCreateProtectedSession @ 0x1C01BAD20 (DxgkCreateProtectedSession.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C01C3170 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C001B460 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 */

DXGDEVICEACCESSLOCKSHARED *__fastcall DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
        DXGDEVICEACCESSLOCKSHARED *this,
        struct DXGDEVICE *a2)
{
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  if ( a2 )
    DXGDEVICEACCESSLOCKSHARED::Acquire(this);
  return this;
}
