/*
 * XREFs of ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00920D8
 * Callers:
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C001E85C (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000241C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0002BC0 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C0013B00 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C004DE58 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C0055610 (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006EEDC (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00929F4 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C009B898 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::~VIDMM_GLOBAL(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  __int64 i; // rbx
  struct _VIDMM_DMA_BUFFER *v5; // rdx
  VIDMM_DMA_POOL *v6; // rcx
  __int64 v7; // rbx
  __int64 j; // rbx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  void *v10; // rcx
  void *v11; // rcx
  char *v12; // rcx
  char *v13; // rbx
  char *v14; // rcx
  char *v15; // rbx
  char *v16; // rcx

  *((_BYTE *)this + 6496) = 1;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  VIDMM_GLOBAL::DoDeferredUnlock(this, a2, a3);
  VIDMM_GLOBAL::DestroyPagingFenceObjects(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1604); i = (unsigned int)(i + 1) )
  {
    v5 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + i + 143);
    if ( v5 )
    {
      VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)this + i + 79), v5, 1);
      *((_QWORD *)this + i + 143) = 0LL;
    }
    v6 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
    if ( v6 )
      VIDMM_DMA_POOL::`scalar deleting destructor'(v6);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40320));
  if ( (*((_BYTE *)this + 40872) & 0x10) != 0 )
    VIDMM_PROCESS::CloseAdapter(g_pVidMmSystemProcess, this);
  *((_QWORD *)this + 5140) = 0LL;
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    ObfReferenceObject(*(PVOID *)(v7 + 8));
    VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(v7, 2, 1);
    KeWaitForSingleObject(*(PVOID *)(v7 + 8), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v7 + 8));
    operator delete(*(void **)(v7 + 152));
    *(_QWORD *)(v7 + 152) = 0LL;
    if ( *(_QWORD *)this )
      operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  if ( *((_QWORD *)this + 464) )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 926); j = (unsigned int)(j + 1) )
    {
      v9 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 464) + 8 * j);
      if ( v9 )
        (**v9)(v9, 1LL);
    }
    operator delete(*((void **)this + 464));
    *((_QWORD *)this + 464) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 804);
  if ( v10 )
    ZwClose(v10);
  operator delete(*((void **)this + 803));
  v11 = (void *)*((_QWORD *)this + 978);
  if ( v11 )
  {
    operator delete(v11);
    *((_QWORD *)this + 977) = 0LL;
    *((_QWORD *)this + 978) = 0LL;
    *((_QWORD *)this + 979) = 0LL;
  }
  v12 = (char *)*((_QWORD *)this + 5115);
  if ( v12 )
  {
    v13 = v12 - 8;
    `vector destructor iterator'(
      v12,
      24LL,
      *((_QWORD *)v12 - 1),
      (void (__fastcall *)(char *))VIDMM_PAGING_HISTORY_ENTRY::~VIDMM_PAGING_HISTORY_ENTRY);
    operator delete(v13);
  }
  operator delete(*((void **)this + 5119));
  v14 = (char *)*((_QWORD *)this + 5021);
  if ( v14 )
  {
    v15 = v14 - 8;
    `vector destructor iterator'(
      v14,
      472LL,
      *((_QWORD *)v14 - 1),
      (void (__fastcall *)(char *))VidMmFreeDeferredDmaBufferMapping);
    operator delete(v15);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)this + 314);
  v16 = (char *)*((_QWORD *)this + 5150);
  if ( v16 != (char *)this + 41208 )
  {
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
  }
}
