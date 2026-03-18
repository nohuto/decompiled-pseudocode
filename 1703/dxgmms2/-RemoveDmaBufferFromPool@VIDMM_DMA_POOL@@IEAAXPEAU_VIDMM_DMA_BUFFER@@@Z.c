/*
 * XREFs of ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C006E6FC
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0063BC0 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C006E65C (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C009A524 (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C009A6A8 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     Template_pppxxxp @ 0x1C0020BD0 (Template_pppxxxp.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C005EE20 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FF10 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0063D90 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C006D728 (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C009355C (-FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DMA_POOL::RemoveDmaBufferFromPool(struct VIDMM_DEVICE **this, struct _VIDMM_DMA_BUFFER *a2)
{
  struct _VIDMM_DMA_BUFFER *v4; // rcx
  struct _VIDMM_DMA_BUFFER **v5; // rax
  struct _KEVENT *v6; // rdx
  VIDMM_GLOBAL *v7; // rcx
  struct VIDMM_DEVICE *v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int8 v14; // [rsp+68h] [rbp+10h] BYREF
  int v15; // [rsp+70h] [rbp+18h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = this;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_pppxxxp(
      *((unsigned int *)a2 + 13),
      *((unsigned int *)a2 + 12),
      (__int64)*this,
      this[3],
      *((_QWORD *)*this + 3),
      a2,
      *((_QWORD *)a2 + 5),
      *((unsigned int *)a2 + 12),
      *((unsigned int *)a2 + 13),
      *((_QWORD *)a2 + 7));
  if ( *((_BYTE *)a2 + 24) && (v14 = 0, VIDMM_DMA_POOL::WaitDmaBufferNotBusy((VIDMM_DMA_POOL *)this, a2, 1, &v14), v14) )
  {
    v13 = WdLogNewEntry5_WdEvent(v12, v11);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = this;
    WdLogEvent5_WdEvent(v13);
  }
  else
  {
    --*((_DWORD *)this + 23);
    VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
    v4 = *(struct _VIDMM_DMA_BUFFER **)a2;
    v5 = (struct _VIDMM_DMA_BUFFER **)*((_QWORD *)a2 + 1);
    if ( *(struct _VIDMM_DMA_BUFFER **)(*(_QWORD *)a2 + 8LL) != a2 || *v5 != a2 )
      __fastfail(3u);
    *v5 = v4;
    *((_QWORD *)v4 + 1) = v5;
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    operator delete(*((void **)a2 + 22));
    operator delete(*((void **)a2 + 16));
    operator delete(*((void **)a2 + 15));
    operator delete(*((void **)a2 + 14));
    operator delete(*((void **)a2 + 13));
    if ( ((_BYTE)this[4] & 1) != 0 )
      VIDMM_GLOBAL::FreePagingBufferResources(*this, *((struct VIDMM_ALLOC **)a2 + 8));
    v6 = (struct _KEVENT *)*((_QWORD *)a2 + 8);
    v7 = *this;
    v15 = 1;
    VIDMM_GLOBAL::CloseOneAllocation(v7, v6, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    VIDMM_GLOBAL::DestroyOneAllocation((struct _KTHREAD **)*this, this[2], *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 7), 0);
    if ( *((_DWORD *)this + 23) == 2
      && this[5] == this[6]
      && *((_DWORD *)this + 16) == *((_DWORD *)this + 17)
      && *((_DWORD *)this + 19) == *((_DWORD *)this + 20) )
    {
      *((_DWORD *)this + 8) |= 8u;
    }
    *((_DWORD *)this + 32) -= *((_DWORD *)a2 + 10);
    v8 = this[2];
    *((_DWORD *)this + 33) += -24 * *((_DWORD *)a2 + 12);
    *((_DWORD *)this + 34) += -24 * *((_DWORD *)a2 + 13);
    if ( v8 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 1) + 16LL)
                     + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v8 + 24LL) + 200LL));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9 + 400, 0LL);
      *(_QWORD *)(v9 + 416) -= *((_QWORD *)a2 + 5);
      --*(_DWORD *)(v9 + 408);
      *(_DWORD *)(v9 + 424) += -24 * *((_DWORD *)a2 + 12);
      *(_DWORD *)(v9 + 428) += -24 * *((_DWORD *)a2 + 13);
      ExReleasePushLockExclusiveEx(v9 + 400, 0LL);
      KeLeaveCriticalRegion();
    }
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, -*((_QWORD *)a2 + 5));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, -24LL * *((unsigned int *)a2 + 12));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, -24LL * *((unsigned int *)a2 + 13));
    operator delete(a2);
  }
}
