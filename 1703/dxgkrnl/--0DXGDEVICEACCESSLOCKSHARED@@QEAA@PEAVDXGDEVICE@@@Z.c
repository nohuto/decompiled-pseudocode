/*
 * XREFs of ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002034
 * Callers:
 *     DxgkGetContextSchedulingPriority @ 0x1C008B9E0 (DxgkGetContextSchedulingPriority.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C008EE90 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkQueryAllocationResidency @ 0x1C009C3C0 (DxgkQueryAllocationResidency.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C009C690 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkQueryResourceInfo @ 0x1C009CCD0 (DxgkQueryResourceInfo.c)
 *     DxgkGetAllocationPriority @ 0x1C0180060 (DxgkGetAllocationPriority.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01812F0 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C018B6A0 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetOverlayState @ 0x1C019B820 (DxgkGetOverlayState.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C019FE1C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C01A7F50 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0014404 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
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
