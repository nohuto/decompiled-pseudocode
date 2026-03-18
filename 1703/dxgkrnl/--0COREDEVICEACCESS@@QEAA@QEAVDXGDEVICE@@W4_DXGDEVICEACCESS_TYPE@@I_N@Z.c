/*
 * XREFs of ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998
 * Callers:
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0004C60 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C00134E0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C0013D3C (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0013E4C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C0014ABC (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0026584 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0029D78 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@@Z @ 0x1C002AE80 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusBlt@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002B310 (-VmBusBlt@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCreateAllocation@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002BC70 (-VmBusCreateAllocation@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusFlushDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D6F0 (-VmBusFlushDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMakeResident@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002DA50 (-VmBusMakeResident@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002DE60 (-VmBusMapGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C008A0B0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C008B0E0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C008B680 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     DxgkGetContextSchedulingPriority @ 0x1C008B9E0 (DxgkGetContextSchedulingPriority.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C008DBB0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 *     DxgkPresent @ 0x1C008FA90 (DxgkPresent.c)
 *     DxgkReclaimAllocations2 @ 0x1C0091C30 (DxgkReclaimAllocations2.c)
 *     DxgkOfferAllocations @ 0x1C0091F00 (DxgkOfferAllocations.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0092C50 (DxgkMapGpuVirtualAddress.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C0093F70 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C00946E0 (DxgkSetQueuedLimit.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00949F0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DxgkDisplayOnOff @ 0x1C0096610 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C0096940 (-DxgkCddDestroy@@YAJIIQEAXE@Z.c)
 *     DxgkSetDisplayMode @ 0x1C0096EF0 (DxgkSetDisplayMode.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C009A370 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkQueryAllocationResidency @ 0x1C009C3C0 (DxgkQueryAllocationResidency.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C009C690 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkQueryResourceInfo @ 0x1C009CCD0 (DxgkQueryResourceInfo.c)
 *     DxgkLock @ 0x1C009DBE0 (DxgkLock.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C009DE60 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C009DEE0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C009DF70 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C00A2CC0 (DxgkSetContextInProcessSchedulingPriority.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C00A4090 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00A4AB0 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C00A4D40 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00A4F10 (DxgkSetContextSchedulingPriority.c)
 *     DxgkUnlock2 @ 0x1C00BEED0 (DxgkUnlock2.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00C0148 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00C0C88 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     DxgkLock2 @ 0x1C00CA6A0 (DxgkLock2.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00CAEC0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00CBD30 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00D38B0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ProcessStatusChange@DXGPROCESS@@AEAAXXZ @ 0x1C00D6C70 (-ProcessStatusChange@DXGPROCESS@@AEAAXXZ.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00D73B0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00DD060 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00ED468 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00ED624 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00FB2EC (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkDestroyDevice @ 0x1C00FBB20 (DxgkDestroyDevice.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00FC010 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     DxgkCreateContextVirtual @ 0x1C00FC280 (DxgkCreateContextVirtual.c)
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00FC810 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00FDB80 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     DxgkConfigureSharedResource @ 0x1C00FFFD0 (DxgkConfigureSharedResource.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0100160 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0101280 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C011D5B0 (-DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     DxgkGetAllocationPriority @ 0x1C0180060 (DxgkGetAllocationPriority.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C0180320 (DxgkGetResourcePresentPrivateDriverData.c)
 *     DxgkReclaimAllocations @ 0x1C0180B00 (DxgkReclaimAllocations.c)
 *     DxgkSetAllocationPriority @ 0x1C0180DF0 (DxgkSetAllocationPriority.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01812F0 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkInvalidateCache @ 0x1C0182120 (DxgkInvalidateCache.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0182880 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0182CC0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C0183130 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     DxgkCreateContext @ 0x1C01845C0 (DxgkCreateContext.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018750C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C0187A5C (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C018A260 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C018A770 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C018ACA0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C018B6A0 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkPinDirectFlipResources @ 0x1C018B9E0 (DxgkPinDirectFlipResources.c)
 *     DxgkSetGammaRamp @ 0x1C018BE70 (DxgkSetGammaRamp.c)
 *     DxgkUnpinDirectFlipResources @ 0x1C018C3B0 (DxgkUnpinDirectFlipResources.c)
 *     DxgkWaitForIdle @ 0x1C018C7E0 (DxgkWaitForIdle.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C018FD24 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C01939D4 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0199510 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     DxgkCreateOverlay @ 0x1C019A970 (DxgkCreateOverlay.c)
 *     DxgkUpdateAllocationProperty @ 0x1C019C080 (DxgkUpdateAllocationProperty.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C019FE1C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C01A1B20 (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 *     DxgkRender @ 0x1C01A43F0 (DxgkRender.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C01A7F50 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C01AE4A0 (-OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPT.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01AE5E4 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01BAA50 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C01BB110 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C01BB650 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkCreateSwapChain @ 0x1C01BE8F0 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C01BF0A0 (DxgkOpenSwapChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COREDEVICEACCESS::COREDEVICEACCESS(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v6; // ebp
  char v8; // si
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rax

  v6 = a3;
  v8 = 1;
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
  *(_QWORD *)(a1 + 24) = v9;
  *(_BYTE *)(a1 + 32) = 0;
  if ( v9 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(v9 + 24), 1uLL);
    *(_QWORD *)(a1 + 16) = -1LL;
  }
  if ( !(_DWORD)a3 || (v10 = *(_QWORD *)(a2 + 1800)) == 0 )
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
  *(_QWORD *)(a1 + 56) = v10;
  *(_BYTE *)(a1 + 64) = 0;
  if ( v10 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(v10 + 24), 1uLL);
    *(_QWORD *)(a1 + 48) = -1LL;
  }
  *(_QWORD *)(a1 + 72) = a2;
  if ( (_DWORD)a3 == 1 && !a5 )
  {
    v11 = *(_QWORD *)(a2 + 1800);
    if ( v11 && *(_QWORD *)(v11 + 2280) )
      goto LABEL_13;
    v14 = WdLogNewEntry5_WdAssertion(-1LL, a2, a3, v9);
    *(_QWORD *)(v14 + 24) = 1209LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !v6 )
  {
LABEL_14:
    v8 = 0;
    goto LABEL_15;
  }
LABEL_13:
  v12 = *(_QWORD *)(a2 + 1800);
  if ( v12 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL) || !v12 )
    goto LABEL_14;
LABEL_15:
  result = a1;
  *(_BYTE *)(a1 + 80) = v8;
  return result;
}
