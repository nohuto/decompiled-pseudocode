/*
 * XREFs of ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AD4
 * Callers:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkCreateContextVirtual @ 0x1C0090D00 (DxgkCreateContextVirtual.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C009177C (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C0092E44 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C0092F9C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0093804 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0093AC8 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C01ACABC (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(DXGDEVICEACCESSLOCKEXCLUSIVE *this)
{
  struct _KEVENT *v2; // rbx
  __int64 v3; // rbx
  struct _KEVENT *v4; // rcx
  unsigned __int8 v5; // si

  v2 = *(struct _KEVENT **)(*(_QWORD *)this + 16LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 328LL) == 2 )
  {
    if ( KeReadStateEvent(v2 + 4) )
      goto LABEL_3;
    v4 = v2 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v2 + 3) )
      goto LABEL_3;
    v4 = v2 + 3;
  }
  KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
LABEL_3:
  v3 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 96LL));
    v5 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 104), 1u);
    if ( v5 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)this + 2) = 1;
}
