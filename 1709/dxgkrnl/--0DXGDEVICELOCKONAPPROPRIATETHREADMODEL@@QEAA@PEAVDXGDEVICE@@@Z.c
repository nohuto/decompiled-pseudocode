/*
 * XREFs of ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004104
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00BC8C4 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00EA91C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F0FE4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     DxgkReclaimAllocations @ 0x1C0184F00 (DxgkReclaimAllocations.c)
 *     DxgkInvalidateCache @ 0x1C0186390 (DxgkInvalidateCache.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C018E930 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJI@Z @ 0x1C018F1D0 (-DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJI@Z.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191640 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193E30 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199770 (-VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkUpdateAllocationProperty @ 0x1C01B2B50 (DxgkUpdateAllocationProperty.c)
 *     DxgkRender @ 0x1C01BDFB0 (DxgkRender.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

DXGDEVICELOCKONAPPROPRIATETHREADMODEL *__fastcall DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL *this,
        struct DXGDEVICE *a2)
{
  __int64 v3; // rcx
  struct _KEVENT *v4; // rbx
  __int64 v5; // rsi
  struct _KEVENT *v7; // rcx
  __int64 v8; // rbx
  unsigned __int8 v9; // si
  __int64 v10; // rax
  unsigned __int8 v11; // bl

  *(_QWORD *)this = a2;
  v3 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *(int *)(v3 + 1968) >= 0x2000 || *(_BYTE *)(v3 + 2252) )
    *((_DWORD *)this + 2) = *((_DWORD *)DXGGLOBAL::GetGlobal(v3) + 203);
  else
    *((_DWORD *)this + 2) = 0;
  v4 = *(struct _KEVENT **)(*(_QWORD *)this + 16LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 328LL) == 2 )
  {
    if ( KeReadStateEvent(v4 + 4) )
      goto LABEL_5;
    v7 = v4 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v4 + 3) )
      goto LABEL_5;
    v7 = v4 + 3;
  }
  KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
LABEL_5:
  if ( !*((_DWORD *)this + 2) )
  {
    v8 = *(_QWORD *)this;
    KeEnterCriticalRegion();
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v8 + 104), 0) )
      return this;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) + 96LL));
    v9 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v8 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v8 + 104), 1u);
    if ( v9 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v8 + 16) + 16LL));
    v10 = *(_QWORD *)(v8 + 16);
LABEL_24:
    ExReleasePushLockSharedEx(*(_QWORD *)(v10 + 16) + 96LL, 0LL);
    KeLeaveCriticalRegion();
    return this;
  }
  v5 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v5 + 112, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL) + 96LL));
    v11 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v5 + 112));
    if ( v11 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL));
    v10 = *(_QWORD *)(v5 + 16);
    goto LABEL_24;
  }
  return this;
}
