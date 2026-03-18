/*
 * XREFs of ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0DE0
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A59D4 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00A5C30 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C001654C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C00AAB8C (OutputDuplProcessDestroyDevice.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E978C (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1EA8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x1C00F2748 (-DrainResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C00F27B8 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00F3264 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F3654 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C018A048 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C018A3C8 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C018A420 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceState(DXGDEVICE *this, PERESOURCE **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  void *v7; // rcx
  struct DXGOVERLAY **i; // rsi
  void *v9; // rcx
  char v10; // si
  __int64 v11; // rcx
  struct DXGCONTEXT **j; // rdi
  struct DXGPAGINGQUEUE **k; // rdi
  unsigned int v14; // edx
  DXGADAPTER *v15; // rcx
  struct _ERESOURCE *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v20[24]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v21[24]; // [rsp+58h] [rbp-20h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v17 + 24) = 742LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  v6 = (_QWORD *)WdLogNewEntry5_WdEvent(v5, v4);
  v6[3] = this;
  v6[4] = *((unsigned int *)this + 83);
  v6[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v6);
  v7 = (void *)*((_QWORD *)this + 215);
  *((_DWORD *)this + 18) = 1;
  if ( v7 )
  {
    KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v20, (struct _KTHREAD **)this + 17);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 632LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  for ( i = (struct DXGOVERLAY **)((char *)this + 376); *i != (struct DXGOVERLAY *)i; DXGDEVICE::DestroyOverlay(
                                                                                        this,
                                                                                        *i) )
    ;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  if ( *((_DWORD *)this + 106) == 4 )
  {
    DXGDEVICE::DrainClientResources(this);
    DXGDEVICE::DrainClientAllocations(this);
  }
  else
  {
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 211), this);
    v9 = (void *)*((_QWORD *)this + 215);
    if ( v9 )
    {
      KeWaitForSingleObject(v9, Executive, 0, 0, 0LL);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v21, (struct _KTHREAD **)this + 17);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    }
    if ( *((_QWORD *)this + 77) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v10 = 0;
      }
      else
      {
        v10 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      DXGDEVICE::FlushScheduler(this, 1LL);
      if ( v10 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
      if ( *((DXGDEVICE **)this + 81) != (DXGDEVICE *)((char *)this + 648) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL) + 152LL))(*((_QWORD *)this + 77));
    }
    DXGDEVICE::DrainResources(this);
    DXGDEVICE::DrainAllocations(this);
    DXGDEVICE::DestroyDevice(this, (struct COREDEVICEACCESS *)a2);
  }
  for ( j = (struct DXGCONTEXT **)((char *)this + 360);
        *j != (struct DXGCONTEXT *)j;
        DXGDEVICE::DestroyContext(this, *j, 0LL) )
  {
    ;
  }
  if ( *((DXGDEVICE **)this + 81) != (DXGDEVICE *)((char *)this + 648) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v18 + 24) = 876LL;
    WdLogEvent5_WdAssertion(v18);
  }
  for ( k = (struct DXGPAGINGQUEUE **)((char *)this + 392);
        *k != (struct DXGPAGINGQUEUE *)k;
        DXGDEVICE::DestroyPagingQueue((PERESOURCE *)this, *k, 0LL) )
  {
    ;
  }
  DXGDEVICE::DestroyAllDeviceSyncObjects(this);
  v14 = *((_DWORD *)this + 83);
  if ( v14 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 5), v14);
    *((_DWORD *)this + 83) = 0;
  }
  v15 = (DXGADAPTER *)*((_QWORD *)this + 211);
  if ( v15 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v15);
    *((_QWORD *)this + 211) = 0LL;
  }
  v16 = (struct _ERESOURCE *)*((_QWORD *)this + 13);
  if ( v16 )
  {
    ExDeleteResourceLite(v16);
    operator delete(*((void **)this + 13));
    *((_QWORD *)this + 13) = 0LL;
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
}
