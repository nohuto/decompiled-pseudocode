/*
 * XREFs of ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00FE700
 * Callers:
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C0023CB4 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1EA8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmFreeDeferredDmaBufferMapping@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C002C978 (-VidMmFreeDeferredDmaBufferMapping@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00F8670 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0107B68 (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGPRESENT@@QEAA@XZ @ 0x1C0107BBC (--1DXGPRESENT@@QEAA@XZ.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2B0C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::~DXGCONTEXT(DXGCONTEXT *this, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  DXGPRESENT *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  struct _VIDMM_DMA_BUFFER *v11; // rdx
  void *v12; // rcx
  struct DXGHWQUEUE **i; // r14
  struct DXGHWQUEUE *v14; // rax
  unsigned int v15; // ebp
  _QWORD *v16; // rbx
  void *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v3 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2);
  v3[3] = this;
  v3[4] = *((unsigned int *)this + 6);
  v3[5] = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  WdLogEvent5_WdEvent(v3);
  v4 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v4 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 104)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v18 + 24) = 658LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v19 + 24) = 659LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !*((_BYTE *)this + 396) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v20 + 24) = 665LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v7 = (DXGPRESENT *)*((_QWORD *)this + 19);
  if ( v7 )
  {
    DXGPRESENT::DestroyStagingBuffer(v7, *((struct DXGDEVICE **)this + 2));
    v17 = (void *)*((_QWORD *)this + 19);
    if ( v17 )
    {
      DXGPRESENT::~DXGPRESENT(*((DXGPRESENT **)this + 19));
      ExFreePoolWithTag(v17, 0);
    }
    *((_QWORD *)this + 19) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 17);
  if ( v8 )
  {
    MmUnsecureVirtualMemory(v8);
    *((_QWORD *)this + 17) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 16);
  if ( v9 )
  {
    if ( !*((_QWORD *)this + 15) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v21 + 24) = 699LL;
      WdLogEvent5_WdAssertion(v21);
      v9 = (void *)*((_QWORD *)this + 16);
    }
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 15, (PSIZE_T)this + 14, 0x8000u);
    *((_QWORD *)this + 15) = 0LL;
    *((_DWORD *)this + 26) = 0;
    *((_QWORD *)this + 14) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 12);
  if ( v10 )
  {
    MmUnsecureVirtualMemory(v10);
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
    v22 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v22 + 24) = 741LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v11 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 43);
  if ( v11 )
  {
    VIDMM_EXPORT::VidMmFreeDeferredDmaBufferMapping(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
      v11);
    *((_QWORD *)this + 43) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 8);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
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
    v23 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v23 + 24) = 764LL;
    WdLogEvent5_WdAssertion(v23);
  }
  for ( i = (struct DXGHWQUEUE **)((char *)this + 368); ; DXGCONTEXT::DestroyHwQueue(this, *i, 0LL) )
  {
    v14 = *i;
    if ( *i == (struct DXGHWQUEUE *)i )
      break;
  }
  v15 = *((_DWORD *)this + 6);
  if ( v15 )
  {
    v16 = *(_QWORD **)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v16 + 26));
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v16 + 29), v15);
    v16[27] = 0LL;
    ExReleasePushLockExclusiveEx(v16 + 26, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 6) = 0;
    v14 = *i;
  }
  if ( v14 != (struct DXGHWQUEUE *)i )
  {
    v24 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v24 + 24) = 699LL;
    WdLogEvent5_WdAssertion(v24);
  }
  *((_QWORD *)this + 2) = 0LL;
}
