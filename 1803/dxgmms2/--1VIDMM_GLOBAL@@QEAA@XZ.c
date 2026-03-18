/*
 * XREFs of ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C009E970
 * Callers:
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C0022B18 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0002778 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C00031C4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0003850 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0004B24 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0004BA0 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C001552C (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0025B30 (-ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00309F8 (-VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C005DC18 (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0073EE0 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009FA40 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009FB64 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00AACD4 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::~VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  VIDMM_GLOBAL **v2; // rdx
  VIDMM_GLOBAL **v3; // rcx
  bool v4; // zf
  __int64 v5; // rsi
  unsigned int i; // ebx
  __int64 v7; // rcx
  unsigned int j; // ebx
  struct _VIDMM_DMA_BUFFER *v9; // rdx
  VIDMM_DMA_POOL *v10; // rcx
  __int64 v11; // rbx
  VIDMM_PARTITION *v12; // rax
  VIDMM_PARTITION *v13; // rbx
  VIDMM_PARTITION **v14; // rcx
  VIDMM_PARTITION *v15; // rax
  VIDMM_PARTITION *k; // rcx
  unsigned int m; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  unsigned int v21; // ebx
  _QWORD *v22; // rdx
  void (__fastcall ***v23)(_QWORD, __int64); // r8
  void *v24; // rcx
  void *v25; // rcx
  char *v26; // rcx
  char *v27; // rbx
  unsigned int n; // ebx
  struct _PCW_INSTANCE *v29; // rcx
  char *v30; // rcx
  char *v31; // rbx
  char v32[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v33; // [rsp+38h] [rbp-20h]
  int v34; // [rsp+40h] [rbp-18h]

  DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
    (DXGAUTOEXPUSHLOCKEXCLUSIVE *)v32,
    (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
  v2 = (VIDMM_GLOBAL **)*((_QWORD *)this + 5254);
  if ( v2[1] != (VIDMM_GLOBAL *)((char *)this + 42032)
    || (v3 = (VIDMM_GLOBAL **)*((_QWORD *)this + 5255), *v3 != (VIDMM_GLOBAL *)((char *)this + 42032)) )
  {
    __fastfail(3u);
  }
  v4 = v34 == 1;
  *v3 = (VIDMM_GLOBAL *)v2;
  v2[1] = (VIDMM_GLOBAL *)v3;
  if ( v4 )
  {
    ExReleasePushLockSharedEx(v33, 0LL);
  }
  else if ( v34 == 2 )
  {
    ExReleasePushLockExclusiveEx(v33, 0LL);
  }
  *((_BYTE *)this + 7072) = 1;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v3) + 24) = this;
  VIDMM_GLOBAL::DoDeferredUnlock(this);
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
  if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v5 + 16)) >= 2400 )
  {
    for ( i = 0; i < *(_DWORD *)(v5 + 64); ++i )
    {
      v7 = *(_QWORD *)(v5 + 8LL * i + 440);
      if ( (*(_DWORD *)(v7 + 12) & 2) != 0 )
        VidSchiDestroyNodeSchedulingLog((struct _VIDSCH_NODE *)v7);
    }
  }
  VIDMM_GLOBAL::DestroyPagingFenceObjects(this);
  for ( j = 0; j < *((_DWORD *)this + 1748); ++j )
  {
    v9 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + j + 143);
    if ( v9 )
    {
      VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)this + j + 79), v9, 1);
      *((_QWORD *)this + j + 143) = 0LL;
    }
    v10 = (VIDMM_DMA_POOL *)*((_QWORD *)this + j + 79);
    if ( v10 )
      VIDMM_DMA_POOL::`scalar deleting destructor'(v10);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40896));
  if ( (*((_BYTE *)this + 41448) & 0x20) != 0 )
    VIDMM_PROCESS::CloseAdapter(g_pVidMmSystemProcess, this);
  v11 = *(_QWORD *)this;
  *((_QWORD *)this + 5212) = 0LL;
  if ( v11 )
  {
    ObfReferenceObject(*(PVOID *)(v11 + 8));
    VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(v11, 2, 1);
    KeWaitForSingleObject(*(PVOID *)(v11 + 8), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v11 + 8));
    operator delete(*(void **)(v11 + 152));
    *(_QWORD *)(v11 + 152) = 0LL;
    if ( *(_QWORD *)this )
      operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
    (DXGAUTOEXPUSHLOCKSHARED *)v32,
    (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
  v12 = (VIDMM_PARTITION *)VIDMM_PARTITION::_PartitionTree;
  v13 = 0LL;
  while ( v12 )
  {
    v13 = v12;
    v12 = *(VIDMM_PARTITION **)v12;
  }
  while ( v13 )
  {
    VIDMM_PARTITION::ResetAdapter(v13, this);
    v14 = (VIDMM_PARTITION **)*((_QWORD *)v13 + 1);
    v15 = v13;
    if ( v14 )
    {
      v13 = (VIDMM_PARTITION *)*((_QWORD *)v13 + 1);
      for ( k = *v14; k; k = *(VIDMM_PARTITION **)k )
        v13 = k;
    }
    else
    {
      while ( 1 )
      {
        v13 = (VIDMM_PARTITION *)(*((_QWORD *)v13 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v13 || *(VIDMM_PARTITION **)v13 == v15 )
          break;
        v15 = v13;
      }
    }
  }
  if ( v34 == 1 )
  {
    ExReleasePushLockSharedEx(v33, 0LL);
  }
  else if ( v34 == 2 )
  {
    ExReleasePushLockExclusiveEx(v33, 0LL);
  }
  for ( m = 0; m < *((_DWORD *)this + 1748); ++m )
  {
    v18 = *((_QWORD *)this + 5090);
    v19 = 1560LL * m;
    if ( (*(_BYTE *)(v19 + v18 + 512) & 1) == 0 )
      PcwCloseInstance(*(PPCW_INSTANCE *)(v19 + v18 + 864));
  }
  v20 = (_QWORD *)*((_QWORD *)this + 464);
  if ( v20 )
  {
    v21 = 0;
    if ( *((_DWORD *)this + 926) )
    {
      v22 = (_QWORD *)*((_QWORD *)this + 464);
      do
      {
        v23 = (void (__fastcall ***)(_QWORD, __int64))v20[v21];
        if ( v23 )
        {
          (**v23)(v20[v21], 1LL);
          v20 = (_QWORD *)*((_QWORD *)this + 464);
          v22 = v20;
        }
        ++v21;
      }
      while ( v21 < *((_DWORD *)this + 926) );
      v20 = v22;
    }
    operator delete(v20);
    *((_QWORD *)this + 464) = 0LL;
  }
  v24 = (void *)*((_QWORD *)this + 876);
  if ( v24 )
    ZwClose(v24);
  operator delete(*((void **)this + 875));
  v25 = (void *)*((_QWORD *)this + 1050);
  if ( v25 )
  {
    operator delete(v25);
    *((_QWORD *)this + 1049) = 0LL;
    *((_QWORD *)this + 1050) = 0LL;
    *((_QWORD *)this + 1051) = 0LL;
  }
  v26 = (char *)*((_QWORD *)this + 5187);
  if ( v26 )
  {
    v27 = v26 - 8;
    `vector destructor iterator'(
      v26,
      24LL,
      *((_QWORD *)v26 - 1),
      (void (__fastcall *)(char *))VIDMM_PAGING_HISTORY_ENTRY::~VIDMM_PAGING_HISTORY_ENTRY);
    operator delete(v27);
  }
  operator delete(*((void **)this + 5191));
  for ( n = 0; n < *((_DWORD *)this + 1748); ++n )
  {
    v29 = *(struct _PCW_INSTANCE **)(1560LL * n + *((_QWORD *)this + 5090) + 1552);
    if ( v29 )
      PcwCloseInstance(v29);
  }
  v30 = (char *)*((_QWORD *)this + 5090);
  if ( v30 )
  {
    v31 = v30 - 8;
    `vector destructor iterator'(
      v30,
      1560LL,
      *((_QWORD *)v30 - 1),
      (void (__fastcall *)(char *))VidMmFreeDeferredDmaBufferMapping);
    operator delete(v31);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 40768));
}
