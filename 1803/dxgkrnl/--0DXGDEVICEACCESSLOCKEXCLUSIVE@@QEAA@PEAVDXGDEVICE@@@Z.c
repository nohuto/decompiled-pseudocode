/*
 * XREFs of ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954
 * Callers:
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0016D90 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C001A250 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C001ACEC (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001ADFC (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C001B6B0 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C001BA70 (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0024A9C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     DxgkMarkDeviceAsError @ 0x1C00988D0 (DxgkMarkDeviceAsError.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C0099CC0 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkCreateContext @ 0x1C009C470 (DxgkCreateContext.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CB0C (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkConfigureSharedResource @ 0x1C00A0250 (DxgkConfigureSharedResource.c)
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00A0808 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C00A0B50 (DxgkSetQueuedLimit.c)
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C00A0DF8 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00CB390 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z @ 0x1C00CE9F0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C00D9CCC (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C00DC610 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00DFE10 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00F35B0 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1C00F7D3C (-ProcessStatusChange@DXGPROCESS@@IEAAXXZ.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C010A2A0 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010A57C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C010E060 (DxgkSetContextSchedulingPriority.c)
 *     DxgkPinDirectFlipResources @ 0x1C0110740 (DxgkPinDirectFlipResources.c)
 *     DxgkUnpinDirectFlipResources @ 0x1C01111E0 (DxgkUnpinDirectFlipResources.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0153F70 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkSetAllocationPriority @ 0x1C016D0E0 (DxgkSetAllocationPriority.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJII_KIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C016F800 (-DxgkPresentVirtualFrameBuffer@@YAJII_KIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0170610 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017BE90 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F650 (-VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017FC20 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01808D0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C018AAF4 (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C018D150 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C018D660 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C018DBA0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     DxgkSetGammaRamp @ 0x1C018E900 (DxgkSetGammaRamp.c)
 *     DxgkWaitForIdle @ 0x1C018EE80 (DxgkWaitForIdle.c)
 *     DxgkSetDisplayMode @ 0x1C0194F30 (DxgkSetDisplayMode.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C01A2618 (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     DxgkCreateHwQueue @ 0x1C01A50E0 (DxgkCreateHwQueue.c)
 *     DxgkSubmitPresentBltToHwQueue @ 0x1C01A5B30 (DxgkSubmitPresentBltToHwQueue.c)
 *     DxgkCreateOverlay @ 0x1C01AD040 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C01AD610 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C01ADB30 (DxgkFlipOverlay.c)
 *     DxgkUpdateOverlay @ 0x1C01AE3F0 (DxgkUpdateOverlay.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C01B6B70 (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C01B7840 (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C01B7A30 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C01B7E4C (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 *     OutputDuplPresent @ 0x1C01CD6F8 (OutputDuplPresent.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01CF160 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01DB5A0 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C01DBC00 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C01DC260 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkCreateSwapChain @ 0x1C01E0B00 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C01E1490 (DxgkOpenSwapChain.c)
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C01EA3E8 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

DXGDEVICEACCESSLOCKEXCLUSIVE *__fastcall DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        DXGDEVICEACCESSLOCKEXCLUSIVE *this,
        struct DXGDEVICE *a2)
{
  struct _KEVENT *v3; // rax
  struct _KEVENT *v4; // rdi
  __int64 v5; // rdi
  unsigned __int8 v7; // si
  __int64 v8; // r8

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    v3 = (struct _KEVENT *)*((_QWORD *)a2 + 2);
    v4 = v3 + 4;
    if ( *((_DWORD *)a2 + 82) != 2 )
      v4 = v3 + 3;
    if ( !KeReadStateEvent(v4) )
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
    v5 = *(_QWORD *)this;
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL) + 96LL));
      v7 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v8, 40LL);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 104), 1u);
      if ( v7 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_DWORD *)this + 2) = 1;
  }
  return this;
}
