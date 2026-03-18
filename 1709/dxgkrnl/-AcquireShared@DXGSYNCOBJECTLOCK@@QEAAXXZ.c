/*
 * XREFs of ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C007A948 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C0091A90 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C00BC620 (-CreateSharedSyncNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z.c)
 *     DxgkShareObjects @ 0x1C00BEEE0 (DxgkShareObjects.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F0AC0 (DxgkOpenResourceFromNtHandle.c)
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

void __fastcall DXGSYNCOBJECTLOCK::AcquireShared(DXGSYNCOBJECTLOCK *this)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax

  if ( *((_BYTE *)this + 8) )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v3[3] = 275LL;
    v3[4] = 4LL;
    v3[5] = this;
    v3[6] = 0LL;
    v3[7] = 0LL;
    WdLogEvent5_WdCriticalError(v3);
  }
  v2 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 336), 1u);
  *((_BYTE *)this + 8) = 1;
}
