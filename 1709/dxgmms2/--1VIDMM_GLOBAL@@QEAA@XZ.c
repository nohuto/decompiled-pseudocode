/*
 * XREFs of ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00997F4
 * Callers:
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C00205CC (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C000217C (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000E6E4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0013804 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C0015C90 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0016694 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0023180 (-ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C005284C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C0058090 (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0074E58 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009A5F8 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00A3B40 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::~VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  VIDMM_GLOBAL **v4; // rcx
  bool v5; // zf
  unsigned int i; // ebx
  struct _VIDMM_DMA_BUFFER *v7; // rdx
  VIDMM_DMA_POOL *v8; // rcx
  __int64 v9; // rbx
  VIDMM_PARTITION *v10; // rax
  VIDMM_PARTITION *v11; // rbx
  VIDMM_PARTITION *v12; // rax
  VIDMM_PARTITION *v13; // rcx
  unsigned int j; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int k; // ebx
  void (__fastcall ***v18)(_QWORD, __int64); // rcx
  void *v19; // rcx
  void *v20; // rcx
  char *v21; // rcx
  char *v22; // rbx
  unsigned int m; // ebx
  struct _PCW_INSTANCE *v24; // rcx
  char *v25; // rcx
  char *v26; // rbx
  char v27[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v28; // [rsp+38h] [rbp-20h]
  int v29; // [rsp+40h] [rbp-18h]

  DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
    (DXGAUTOEXPUSHLOCKEXCLUSIVE *)v27,
    (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
  v3 = *((_QWORD *)this + 5181);
  if ( *(VIDMM_GLOBAL **)(v3 + 8) != (VIDMM_GLOBAL *)((char *)this + 41448)
    || (v4 = (VIDMM_GLOBAL **)*((_QWORD *)this + 5182), *v4 != (VIDMM_GLOBAL *)((char *)this + 41448)) )
  {
    __fastfail(3u);
  }
  v5 = v29 == 1;
  *v4 = (VIDMM_GLOBAL *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( v5 )
  {
    ExReleasePushLockSharedEx(v28, 0LL);
  }
  else if ( v29 == 2 )
  {
    ExReleasePushLockExclusiveEx(v28, 0LL);
  }
  *((_BYTE *)this + 6496) = 1;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v4) + 24) = this;
  VIDMM_GLOBAL::DoDeferredUnlock(this, v3, v2);
  VIDMM_GLOBAL::DestroyPagingFenceObjects(this);
  for ( i = 0; i < *((_DWORD *)this + 1604); ++i )
  {
    v7 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + i + 143);
    if ( v7 )
    {
      VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)this + i + 79), v7, 1);
      *((_QWORD *)this + i + 143) = 0LL;
    }
    v8 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
    if ( v8 )
      VIDMM_DMA_POOL::`scalar deleting destructor'(v8);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40320));
  if ( (*((_BYTE *)this + 40872) & 0x10) != 0 )
    VIDMM_PROCESS::CloseAdapter(g_pVidMmSystemProcess, this);
  v9 = *(_QWORD *)this;
  *((_QWORD *)this + 5140) = 0LL;
  if ( v9 )
  {
    ObfReferenceObject(*(PVOID *)(v9 + 8));
    VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(v9, 2, 1);
    KeWaitForSingleObject(*(PVOID *)(v9 + 8), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v9 + 8));
    operator delete(*(void **)(v9 + 152));
    *(_QWORD *)(v9 + 152) = 0LL;
    if ( *(_QWORD *)this )
      operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
    (DXGAUTOEXPUSHLOCKSHARED *)v27,
    (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
  v10 = (VIDMM_PARTITION *)VIDMM_PARTITION::_PartitionTree;
  v11 = 0LL;
  while ( v10 )
  {
    v11 = v10;
    v10 = *(VIDMM_PARTITION **)v10;
  }
  while ( v11 )
  {
    VIDMM_PARTITION::ResetAdapter(v11, this);
    v12 = (VIDMM_PARTITION *)*((_QWORD *)v11 + 1);
    v13 = v11;
    if ( v12 )
    {
      do
      {
        v11 = v12;
        v12 = *(VIDMM_PARTITION **)v12;
      }
      while ( v12 );
    }
    else
    {
      while ( 1 )
      {
        v11 = (VIDMM_PARTITION *)(*((_QWORD *)v11 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v11 || *(VIDMM_PARTITION **)v11 == v13 )
          break;
        v13 = v11;
      }
    }
  }
  if ( v29 == 1 )
  {
    ExReleasePushLockSharedEx(v28, 0LL);
  }
  else if ( v29 == 2 )
  {
    ExReleasePushLockExclusiveEx(v28, 0LL);
  }
  for ( j = 0; j < *((_DWORD *)this + 1604); ++j )
  {
    v15 = *((_QWORD *)this + 5021);
    v16 = 1552LL * j;
    if ( (*(_BYTE *)(v16 + v15 + 504) & 1) == 0 )
      PcwCloseInstance(*(PPCW_INSTANCE *)(v16 + v15 + 856));
  }
  if ( *((_QWORD *)this + 464) )
  {
    for ( k = 0; k < *((_DWORD *)this + 926); ++k )
    {
      v18 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 464) + 8LL * k);
      if ( v18 )
        (**v18)(v18, 1LL);
    }
    operator delete(*((void **)this + 464));
    *((_QWORD *)this + 464) = 0LL;
  }
  v19 = (void *)*((_QWORD *)this + 804);
  if ( v19 )
    ZwClose(v19);
  operator delete(*((void **)this + 803));
  v20 = (void *)*((_QWORD *)this + 978);
  if ( v20 )
  {
    operator delete(v20);
    *((_QWORD *)this + 977) = 0LL;
    *((_QWORD *)this + 978) = 0LL;
    *((_QWORD *)this + 979) = 0LL;
  }
  v21 = (char *)*((_QWORD *)this + 5115);
  if ( v21 )
  {
    v22 = v21 - 8;
    `vector destructor iterator'(
      v21,
      24LL,
      *((_QWORD *)v21 - 1),
      (void (__fastcall *)(char *))VIDMM_PAGING_HISTORY_ENTRY::~VIDMM_PAGING_HISTORY_ENTRY);
    operator delete(v22);
  }
  operator delete(*((void **)this + 5119));
  for ( m = 0; m < *((_DWORD *)this + 1604); ++m )
  {
    v24 = *(struct _PCW_INSTANCE **)(1552LL * m + *((_QWORD *)this + 5021) + 1544);
    if ( v24 )
      PcwCloseInstance(v24);
  }
  v25 = (char *)*((_QWORD *)this + 5021);
  if ( v25 )
  {
    v26 = v25 - 8;
    `vector destructor iterator'(
      v25,
      1552LL,
      *((_QWORD *)v25 - 1),
      (void (__fastcall *)(char *))VidMmFreeDeferredDmaBufferMapping);
    operator delete(v26);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)this + 314);
}
