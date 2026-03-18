/*
 * XREFs of ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4
 * Callers:
 *     ?VmBusBlt@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002B310 (-VmBusBlt@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusFlushDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D6F0 (-VmBusFlushDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMakeResident@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002DA50 (-VmBusMakeResident@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002DE60 (-VmBusMapGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C008B0E0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C008B680 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     DxgkMarkDeviceAsError @ 0x1C008B7C0 (DxgkMarkDeviceAsError.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C008D1C0 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     DxgkGetDeviceState @ 0x1C008F710 (DxgkGetDeviceState.c)
 *     DxgkOfferAllocations @ 0x1C0091F00 (DxgkOfferAllocations.c)
 *     DxgkSetQueuedLimit @ 0x1C00946E0 (DxgkSetQueuedLimit.c)
 *     DxgkSetDisplayMode @ 0x1C0096EF0 (DxgkSetDisplayMode.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkShutdownBootGraphics @ 0x1C0098E90 (DxgkShutdownBootGraphics.c)
 *     DxgkQueryAllocationResidency @ 0x1C009C3C0 (DxgkQueryAllocationResidency.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C009C690 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkQueryResourceInfo @ 0x1C009CCD0 (DxgkQueryResourceInfo.c)
 *     DxgkLock @ 0x1C009DBE0 (DxgkLock.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C009DE60 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C009DEE0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C009DF70 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     DxgkUnlock @ 0x1C009F070 (DxgkUnlock.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C00A4090 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C00A4D40 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkUnlock2 @ 0x1C00BEED0 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x1C00CA6A0 (DxgkLock2.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00DD060 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00FC010 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     DxgkCreateContextVirtual @ 0x1C00FC280 (DxgkCreateContextVirtual.c)
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00FC810 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00FD580 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00FD820 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00FDB80 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     DxgkConfigureSharedResource @ 0x1C00FFFD0 (DxgkConfigureSharedResource.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0100160 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0101280 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C017E0B0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkGetAllocationPriority @ 0x1C0180060 (DxgkGetAllocationPriority.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C0180320 (DxgkGetResourcePresentPrivateDriverData.c)
 *     DxgkReclaimAllocations @ 0x1C0180B00 (DxgkReclaimAllocations.c)
 *     DxgkSetAllocationPriority @ 0x1C0180DF0 (DxgkSetAllocationPriority.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01812F0 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkInvalidateCache @ 0x1C0182120 (DxgkInvalidateCache.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0182880 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C0183130 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     DxgkCreateContext @ 0x1C01845C0 (DxgkCreateContext.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C018A260 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C018A770 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C018ACA0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     DxgkPinDirectFlipResources @ 0x1C018B9E0 (DxgkPinDirectFlipResources.c)
 *     DxgkSetGammaRamp @ 0x1C018BE70 (DxgkSetGammaRamp.c)
 *     DxgkUnpinDirectFlipResources @ 0x1C018C3B0 (DxgkUnpinDirectFlipResources.c)
 *     DxgkWaitForIdle @ 0x1C018C7E0 (DxgkWaitForIdle.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C018FD24 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0199510 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     DxgkCreateOverlay @ 0x1C019A970 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C019AFA0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C019B490 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C019B820 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C019BCC0 (DxgkUpdateOverlay.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C01A7F50 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     DxgkCreateSwapChain @ 0x1C01BE8F0 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C01BF0A0 (DxgkOpenSwapChain.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

DXGDEVICEBYHANDLE *__fastcall DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        DXGDEVICEBYHANDLE *this,
        __int64 a2,
        struct _KTHREAD **a3,
        struct DXGDEVICE **a4)
{
  char *v4; // rbx
  unsigned int v7; // esi
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ecx
  struct _KTHREAD *v12; // r8
  int v13; // edx
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // r9

  v4 = (char *)(a3 + 21);
  v7 = a2;
  if ( a3 != (struct _KTHREAD **)-168LL && a3[22] == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((unsigned int *)v4 + 4);
      if ( (_DWORD)v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v9, &EventBlockThread, v10, v17);
    }
    ExAcquirePushLockSharedEx(v4, 0LL);
  }
  v11 = (v7 >> 6) & 0xFFFFFF;
  if ( v11 < *((_DWORD *)a3 + 52)
    && (v12 = a3[24],
        v13 = *((_DWORD *)v12 + 4 * v11 + 2),
        ((v7 >> 26) & 0x30) == (*((_BYTE *)v12 + 16 * v11 + 8) & 0x30))
    && (v13 & 0x1000) == 0
    && (v13 & 0xF) != 0
    && (*((_BYTE *)v12 + 16 * v11 + 8) & 0xF) == 3 )
  {
    v14 = *((_QWORD *)v12 + 2 * v11);
  }
  else
  {
    v14 = 0LL;
  }
  *(_QWORD *)this = v14;
  if ( v14 )
    _InterlockedIncrement64((volatile signed __int64 *)(v14 + 64));
  *a4 = *(struct DXGDEVICE **)this;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
