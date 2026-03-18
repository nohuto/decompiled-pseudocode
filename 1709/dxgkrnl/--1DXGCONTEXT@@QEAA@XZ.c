/*
 * XREFs of ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00C1280
 * Callers:
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C001D56C (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D730 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmFreeDeferredDmaBufferMapping@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0024450 (-VidMmFreeDeferredDmaBufferMapping@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C008A250 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00BE990 (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGPRESENT@@QEAA@XZ @ 0x1C00BE9E4 (--1DXGPRESENT@@QEAA@XZ.c)
 */

void __fastcall DXGCONTEXT::~DXGCONTEXT(DXGCONTEXT *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  DXGPRESENT *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  struct _VIDMM_DMA_BUFFER *v9; // rdx
  void *v10; // rcx
  unsigned int v11; // ebp
  _QWORD *v12; // rbx
  void *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v2 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v2[3] = this;
  v2[4] = *((unsigned int *)this + 6);
  v2[5] = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  WdLogEvent5_WdEvent(v2);
  v3 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v3 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 104)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v14 + 24) = 568LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v15 + 24) = 569LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_BYTE *)this + 396) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v16 + 24) = 575LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v6 = (DXGPRESENT *)*((_QWORD *)this + 19);
  if ( v6 )
  {
    DXGPRESENT::DestroyStagingBuffer(v6, *((struct DXGDEVICE **)this + 2));
    v13 = (void *)*((_QWORD *)this + 19);
    if ( v13 )
    {
      DXGPRESENT::~DXGPRESENT(*((DXGPRESENT **)this + 19));
      ExFreePoolWithTag(v13, 0);
    }
    *((_QWORD *)this + 19) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 17);
  if ( v7 )
  {
    MmUnsecureVirtualMemory(v7);
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( *((_QWORD *)this + 16) )
  {
    if ( !*((_QWORD *)this + 15) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v17 + 24) = 609LL;
      WdLogEvent5_WdAssertion(v17);
    }
    ExFreePoolWithTag(*((PVOID *)this + 16), 0);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 15, (PSIZE_T)this + 14, 0x8000u);
    *((_QWORD *)this + 15) = 0LL;
    *((_DWORD *)this + 26) = 0;
    *((_QWORD *)this + 14) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 12);
  if ( v8 )
  {
    MmUnsecureVirtualMemory(v8);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( *((_QWORD *)this + 11) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 11, (PSIZE_T)this + 10, 0x8000u);
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 18) = 0;
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( *((_QWORD *)this + 39) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v18 + 24) = 651LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v9 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 43);
  if ( v9 )
  {
    VIDMM_EXPORT::VidMmFreeDeferredDmaBufferMapping(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL),
      v9);
    *((_QWORD *)this + 43) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 8);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 7) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 7, (PSIZE_T)this + 6, 0x8000u);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( *((DXGCONTEXT **)this + 37) != (DXGCONTEXT *)((char *)this + 296) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v19 + 24) = 674LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v11 = *((_DWORD *)this + 6);
  if ( v11 )
  {
    v12 = *(_QWORD **)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v12 + 25));
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v12 + 28), v11);
    v12[26] = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 25, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 6) = 0;
  }
  if ( *((DXGCONTEXT **)this + 46) != (DXGCONTEXT *)((char *)this + 368) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v20 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v20);
  }
  *((_QWORD *)this + 2) = 0LL;
}
