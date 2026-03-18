/*
 * XREFs of ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744
 * Callers:
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0004C60 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000D728 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C00134E0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C0013D3C (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0013E4C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?VmBusBlt@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002B310 (-VmBusBlt@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusFlushDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D6F0 (-VmBusFlushDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C008A0B0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkMarkDeviceAsError @ 0x1C008B7C0 (DxgkMarkDeviceAsError.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C008DBB0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 *     DxgkPresent @ 0x1C008FA90 (DxgkPresent.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C0093F70 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C00946E0 (DxgkSetQueuedLimit.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00949F0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C0096940 (-DxgkCddDestroy@@YAJIIQEAXE@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C00A2CC0 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00A4F10 (DxgkSetContextSchedulingPriority.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C00BFFF0 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00C0148 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00C0C88 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00D38B0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C00D5EDC (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D5FD4 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ProcessStatusChange@DXGPROCESS@@AEAAXXZ @ 0x1C00D6C70 (-ProcessStatusChange@DXGPROCESS@@AEAAXXZ.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00FB2EC (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkDestroyDevice @ 0x1C00FBB20 (DxgkDestroyDevice.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00FC010 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     DxgkCreateContextVirtual @ 0x1C00FC280 (DxgkCreateContextVirtual.c)
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00FC810 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     DxgkConfigureSharedResource @ 0x1C00FFFD0 (DxgkConfigureSharedResource.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0101280 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C011D5B0 (-DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     DxgkSetAllocationPriority @ 0x1C0180DF0 (DxgkSetAllocationPriority.c)
 *     DxgkCreateContext @ 0x1C01845C0 (DxgkCreateContext.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C0187A5C (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C018A260 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C018A770 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C018ACA0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     DxgkPinDirectFlipResources @ 0x1C018B9E0 (DxgkPinDirectFlipResources.c)
 *     DxgkSetGammaRamp @ 0x1C018BE70 (DxgkSetGammaRamp.c)
 *     DxgkUnpinDirectFlipResources @ 0x1C018C3B0 (DxgkUnpinDirectFlipResources.c)
 *     DxgkWaitForIdle @ 0x1C018C7E0 (DxgkWaitForIdle.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0199510 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     DxgkCreateOverlay @ 0x1C019A970 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C019AFA0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C019B490 (DxgkFlipOverlay.c)
 *     DxgkUpdateOverlay @ 0x1C019BCC0 (DxgkUpdateOverlay.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C01A1B20 (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C01A20F8 (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C01A232C (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 *     DxgkCreateSwapChain @ 0x1C01BE8F0 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C01BF0A0 (DxgkOpenSwapChain.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICEACCESSLOCKEXCLUSIVE::Release(DXGDEVICEACCESSLOCKEXCLUSIVE *this)
{
  if ( *((_DWORD *)this + 2) )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)this + 104LL));
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 2) = 0;
  }
}
