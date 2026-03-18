/*
 * XREFs of ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000E3DC
 * Callers:
 *     DxgkGetContextSchedulingPriority @ 0x1C00F1EB0 (DxgkGetContextSchedulingPriority.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00F20D0 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkQueryResourceInfo @ 0x1C00F23A0 (DxgkQueryResourceInfo.c)
 *     DxgkGetAllocationPriority @ 0x1C0184130 (DxgkGetAllocationPriority.c)
 *     DxgkQueryAllocationResidency @ 0x1C0184C10 (DxgkQueryAllocationResidency.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01854C0 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C01A0580 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetOverlayState @ 0x1C01B22D0 (DxgkGetOverlayState.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C01B6B50 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 *     DxgkCreateProtectedSession @ 0x1C01BC230 (DxgkCreateProtectedSession.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C01C1CE0 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

DXGDEVICEACCESSLOCKSHARED *__fastcall DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
        DXGDEVICEACCESSLOCKSHARED *this,
        struct DXGDEVICE *a2)
{
  struct _KEVENT *v4; // rsi
  unsigned __int8 v6; // si

  *(_QWORD *)this = a2;
  if ( a2 )
  {
    v4 = (struct _KEVENT *)(*((_QWORD *)a2 + 2) + 72LL);
    if ( !KeReadStateEvent(v4) )
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)a2 + 13), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 96LL));
      v6 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread);
      ExAcquireResourceSharedLite(*((PERESOURCE *)a2 + 13), 1u);
      if ( v6 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return this;
}
