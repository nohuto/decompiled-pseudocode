/*
 * XREFs of ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8DFC
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CF778 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C00CFB00 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00061C0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0006C7C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C009DAA0 (OutputDuplProcessDestroyDevice.c)
 *     ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x1C00BFCA0 (-DrainResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C00BFD10 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00C091C (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C0EFC (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1D74 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1E20 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00CA330 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C0187380 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01873E8 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C0187440 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceState(DXGDEVICE *this, PERESOURCE **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGOVERLAY **i; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // si
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct DXGCONTEXT **j; // rdi
  struct DXGPAGINGQUEUE **k; // rdi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  DXGADAPTER *v37; // rcx
  struct _ERESOURCE *v38; // rcx
  void *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  _BYTE v42[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v43[24]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v44[24]; // [rsp+58h] [rbp-20h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v40 + 24) = 688LL;
    WdLogEvent5_WdAssertion(v40);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  v8 = (_QWORD *)WdLogNewEntry5_WdEvent(v5);
  v8[3] = this;
  v8[4] = *((unsigned int *)this + 83);
  v8[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v8);
  v11 = (void *)*((_QWORD *)this + 229);
  *((_DWORD *)this + 18) = 1;
  if ( v11 )
  {
    KeWaitForSingleObject(v11, Executive, 0, 0, 0LL);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v43,
      (struct _KTHREAD **)this + 17,
      v12,
      v13);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
  }
  if ( *((_QWORD *)this + 230) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL) + 8LL) + 528LL))();
    *((_QWORD *)this + 230) = 0LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v42, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 520LL), v9, v10);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
  for ( i = (struct DXGOVERLAY **)((char *)this + 360); *i != (struct DXGOVERLAY *)i; DXGDEVICE::DestroyOverlay(
                                                                                        this,
                                                                                        *i) )
    ;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v42, v14, v15, v16);
  if ( *((_DWORD *)this + 102) == 4 )
  {
    DXGDEVICE::DrainClientResources(this);
    DXGDEVICE::DrainClientAllocations(this);
  }
  else
  {
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 225), this);
    v21 = (void *)*((_QWORD *)this + 229);
    if ( v21 )
    {
      KeWaitForSingleObject(v21, Executive, 0, 0, 0LL);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v44,
        (struct _KTHREAD **)this + 17,
        v22,
        v23);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v44);
    }
    if ( *((_QWORD *)this + 75) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v24 = 0;
      }
      else
      {
        v24 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      DXGDEVICE::FlushScheduler(this, 1LL);
      if ( v24 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
      if ( *((DXGDEVICE **)this + 79) != (DXGDEVICE *)((char *)this + 632) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL) + 8LL) + 152LL))(*((_QWORD *)this + 75));
    }
    DXGDEVICE::DrainResources((struct _KTHREAD **)this, v18, v19, v20);
    DXGDEVICE::DrainAllocations((struct _KTHREAD **)this, v25, v26, v27);
    DXGDEVICE::DestroyDevice(this, (struct COREDEVICEACCESS *)a2);
  }
  for ( j = (struct DXGCONTEXT **)((char *)this + 344);
        *j != (struct DXGCONTEXT *)j;
        DXGDEVICE::DestroyContext((PERESOURCE *)this, *j, 0LL, v31) )
  {
    ;
  }
  if ( *((DXGDEVICE **)this + 79) != (DXGDEVICE *)((char *)this + 632) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
    *(_QWORD *)(v41 + 24) = 828LL;
    WdLogEvent5_WdAssertion(v41);
  }
  for ( k = (struct DXGPAGINGQUEUE **)((char *)this + 376);
        *k != (struct DXGPAGINGQUEUE *)k;
        DXGDEVICE::DestroyPagingQueue((PERESOURCE *)this, *k, 0LL, v31) )
  {
    ;
  }
  DXGDEVICE::DestroyAllDeviceSyncObjects(this);
  v36 = *((unsigned int *)this + 83);
  if ( (_DWORD)v36 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 5), v36);
    *((_DWORD *)this + 83) = 0;
  }
  v37 = (DXGADAPTER *)*((_QWORD *)this + 225);
  if ( v37 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v37);
    *((_QWORD *)this + 225) = 0LL;
  }
  v38 = (struct _ERESOURCE *)*((_QWORD *)this + 13);
  if ( v38 )
  {
    ExDeleteResourceLite(v38);
    v39 = (void *)*((_QWORD *)this + 13);
    if ( v39 )
      ExFreePoolWithTag(v39, 0);
    *((_QWORD *)this + 13) = 0LL;
  }
  if ( v42[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v42, v36, v34, v35);
}
