/*
 * XREFs of ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C007A948 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C0091A90 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C00BC620 (-CreateSharedSyncNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z.c)
 *     DxgkShareObjects @ 0x1C00BEEE0 (DxgkShareObjects.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C00CF68C (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F0AC0 (DxgkOpenResourceFromNtHandle.c)
 *     ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0177E5C (-SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01854C0 (DxgkUpdateGpuVirtualAddress.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01944A0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199A90 (-VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C01ABB54 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C01AFB30 (DxgkOpenSyncObjectFromNtHandle.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C01AFF10 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     DxgkPresentRedirected @ 0x1C01B8440 (DxgkPresentRedirected.c)
 *     DxgkCreateProtectedSession @ 0x1C01BC230 (DxgkCreateProtectedSession.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C01C1CE0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01C75B0 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01D6074 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     <none>
 */

DXGSYNCOBJECTLOCK *__fastcall DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK(DXGSYNCOBJECTLOCK *this, struct DXGGLOBAL *const a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 1946LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)this + 336LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v6 + 24) = 1951LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return this;
}
