/*
 * XREFs of ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009C68C
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082E60 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00830DC (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0002C08 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x1C0092AF4 (-DrainResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0092B64 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00937A8 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0093D2C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00954A0 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D730 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C009DF28 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C00F3BA8 (OutputDuplProcessDestroyDevice.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C019CC14 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C019CC7C (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C019CCD4 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceState(DXGDEVICE *this, PERESOURCE **a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  struct DXGOVERLAY **i; // rsi
  void *v8; // rcx
  char v9; // si
  __int64 v10; // rcx
  struct DXGCONTEXT **j; // rdi
  struct DXGPAGINGQUEUE **k; // rdi
  unsigned int v13; // edx
  DXGADAPTER *v14; // rcx
  struct _ERESOURCE *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v20[24]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v21[24]; // [rsp+58h] [rbp-20h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v17 + 24) = 689LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  v5 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v5[3] = this;
  v5[4] = *((unsigned int *)this + 83);
  v5[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v5);
  v6 = (void *)*((_QWORD *)this + 213);
  *((_DWORD *)this + 18) = 1;
  if ( v6 )
  {
    KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v20, (struct _KTHREAD **)this + 17);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 616LL));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  for ( i = (struct DXGOVERLAY **)((char *)this + 360); *i != (struct DXGOVERLAY *)i; DXGDEVICE::DestroyOverlay(
                                                                                        this,
                                                                                        *i) )
    ;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  if ( *((_DWORD *)this + 102) == 4 )
  {
    DXGDEVICE::DrainClientResources(this);
    DXGDEVICE::DrainClientAllocations(this);
  }
  else
  {
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 209), this);
    v8 = (void *)*((_QWORD *)this + 213);
    if ( v8 )
    {
      KeWaitForSingleObject(v8, Executive, 0, 0, 0LL);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v21, (struct _KTHREAD **)this + 17);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    }
    if ( *((_QWORD *)this + 75) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      DXGDEVICE::FlushScheduler(this, 1LL);
      if ( v9 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
      if ( *((DXGDEVICE **)this + 79) != (DXGDEVICE *)((char *)this + 632) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 504LL) + 8LL) + 152LL))(*((_QWORD *)this + 75));
    }
    DXGDEVICE::DrainResources((struct _KTHREAD **)this);
    DXGDEVICE::DrainAllocations((struct _KTHREAD **)this);
    DXGDEVICE::DestroyDevice((ADAPTER_RENDER **)this, (struct COREDEVICEACCESS *)a2);
  }
  for ( j = (struct DXGCONTEXT **)((char *)this + 344);
        *j != (struct DXGCONTEXT *)j;
        DXGDEVICE::DestroyContext(this, *j, 0LL) )
  {
    ;
  }
  if ( *((DXGDEVICE **)this + 79) != (DXGDEVICE *)((char *)this + 632) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v18 + 24) = 823LL;
    WdLogEvent5_WdAssertion(v18);
  }
  for ( k = (struct DXGPAGINGQUEUE **)((char *)this + 376);
        *k != (struct DXGPAGINGQUEUE *)k;
        DXGDEVICE::DestroyPagingQueue((PERESOURCE *)this, *k, 0LL) )
  {
    ;
  }
  DXGDEVICE::DestroyAllDeviceSyncObjects(this);
  v13 = *((_DWORD *)this + 83);
  if ( v13 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 5), v13);
    *((_DWORD *)this + 83) = 0;
  }
  v14 = (DXGADAPTER *)*((_QWORD *)this + 209);
  if ( v14 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v14);
    *((_QWORD *)this + 209) = 0LL;
  }
  v15 = (struct _ERESOURCE *)*((_QWORD *)this + 13);
  if ( v15 )
  {
    ExDeleteResourceLite(v15);
    v16 = (void *)*((_QWORD *)this + 13);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    *((_QWORD *)this + 13) = 0LL;
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
}
