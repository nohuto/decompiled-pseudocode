/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0062D60
 * Callers:
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0055950 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0057A7C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0064280 (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0065CE0 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0065F84 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00677E0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0073F10 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0012528 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C001696C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pcc @ 0x1C0021698 (McTemplateK0pcc.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004D0D8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00587C0 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005B3AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C818 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0060F04 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0061B40 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C0072890 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C009A57C (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009CBB0 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyOneAllocation(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        char a4)
{
  int v4; // r13d
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  char *v12; // rax
  bool v13; // di
  struct _KTHREAD *v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  volatile signed __int32 *v18; // rax
  int v19; // edi
  int v20; // esi
  int v21; // r12d
  int v22; // r11d
  int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  int *v27; // rsi
  int v28; // eax
  __int64 v29; // rbp
  int v30; // r9d
  __int64 v31; // rcx
  char **v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  int *v35; // rdi
  __int64 v36; // rsi
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdi
  _QWORD *v41; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v42[2]; // [rsp+20h] [rbp-218h]
  struct _KEVENT **v43; // [rsp+28h] [rbp-210h]
  int v44; // [rsp+48h] [rbp-1F0h]
  int v45; // [rsp+60h] [rbp-1D8h]
  char v46; // [rsp+104h] [rbp-134h]
  char v47; // [rsp+108h] [rbp-130h]
  int v48; // [rsp+10Ch] [rbp-12Ch]
  int v49; // [rsp+110h] [rbp-128h]
  int v50; // [rsp+114h] [rbp-124h]
  char v51; // [rsp+128h] [rbp-110h]
  __int64 v52; // [rsp+130h] [rbp-108h]
  __int64 v53; // [rsp+138h] [rbp-100h]
  _QWORD v54[12]; // [rsp+160h] [rbp-D8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1C0h] [rbp-78h] BYREF

  LOBYTE(v4) = 0;
  if ( a2 )
    v9 = *((_QWORD *)a2 + 3);
  else
    v9 = 0LL;
  v51 = v9;
  if ( g_IsInternalReleaseOrDbg )
  {
    v33 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v33 + 24) = a3;
    *(_QWORD *)(v33 + 32) = a2;
  }
  if ( this != (struct _KTHREAD **)-39912LL && this[4990] == KeGetCurrentThread() )
  {
    v34 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v34 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v34);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(this + 4989, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v30 = *((_DWORD *)this + 9982);
      if ( v30 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v10, (__int64)&EventBlockThread, v11, v30);
    }
    ExAcquirePushLockExclusiveEx(this + 4989, 0LL);
  }
  this[4990] = KeGetCurrentThread();
  v12 = (char *)a3 + 400;
  if ( *((_QWORD *)a3 + 50) )
  {
    v31 = *(_QWORD *)v12;
    if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 || (v32 = (char **)*((_QWORD *)a3 + 51), *v32 != v12) )
      __fastfail(3u);
    *v32 = (char *)v31;
    *(_QWORD *)(v31 + 8) = v32;
    *(_QWORD *)v12 = 0LL;
  }
  if ( *((_QWORD *)a3 + 52) )
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList((VIDMM_GLOBAL *)this, a3);
  this[4990] = 0LL;
  ExReleasePushLockExclusiveEx(this + 4989, 0LL);
  KeLeaveCriticalRegion();
  v13 = KeGetCurrentThread() != *((struct _KTHREAD **)*this + 1);
  if ( (*((_DWORD *)a3 + 21) & 4) != 0 )
  {
    if ( *((_QWORD *)a3 + 17) || *((_QWORD *)a3 + 33) )
    {
      memset(v54, 0, 0x58uLL);
      v28 = *((_DWORD *)a3 + 19) & 0x3F;
      LODWORD(v54[0]) = 112;
      HIDWORD(v54[0]) = v28;
      v54[5] = a3;
      LODWORD(v54[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait((VIDMM_GLOBAL *)this, (struct _VIDMM_SYSTEM_COMMAND *)v54);
      v13 = 0;
    }
    v29 = *(_QWORD *)(*((_QWORD *)a3 + 13) + 40LL);
    if ( (*((_DWORD *)a3 + 21) & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore((struct VIDMM_GLOBAL *)this, a3, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore((VIDMM_GLOBAL *)this, *((_QWORD *)a3 + 1));
      *((_DWORD *)a3 + 21) &= ~2u;
    }
    KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a3 + 13) + 8LL), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation((VIDMM_GLOBAL *)this, (struct _KEVENT *)(v29 - 40), 0LL, 0, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)a3 + 13) = 0LL;
  }
  if ( v13 )
  {
    v14 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v14 + 48, 0LL);
    *((_QWORD *)v14 + 7) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v14 + 48, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( a4 )
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, a3);
  if ( (*((_DWORD *)a3 + 23) & 1) != 0 )
    VIDMM_GLOBAL::UncommitGlobalBackingStore((VIDMM_GLOBAL *)this, a3, 1);
  VidMmiClosePartition(**((volatile signed __int32 ***)a3 + 61));
  v18 = (volatile signed __int32 *)*((_QWORD *)a3 + 62);
  if ( v18 )
  {
    v16 = (unsigned int)_InterlockedDecrement(v18);
    if ( (_DWORD)v16 )
    {
      if ( (int)v16 < 0 )
      {
        v35 = (int *)*((_QWORD *)a3 + 62);
        v36 = *v35;
        v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
        v37[3] = 270LL;
        v37[4] = 66LL;
        v37[5] = v35;
        v37[6] = v36;
        v37[7] = 0LL;
        WdLogEvent5_WdCriticalError(v37);
      }
    }
    else
    {
      VIDMM_GLOBAL::DestroyCrossAdapterAllocation((VIDMM_GLOBAL *)v16, *((struct _VIDMM_CROSSADAPTER_ALLOC **)a3 + 62));
    }
    *((_QWORD *)a3 + 62) = 0LL;
  }
  if ( bTracingEnabled )
  {
    v16 = *((_QWORD *)a3 + 63);
    if ( *(_WORD *)(v16 + 4) && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LOBYTE(v43) = *((_BYTE *)a3 + 432);
      *(_BYTE *)&v42[0].0 = *(_BYTE *)(v16 + 4);
      McTemplateK0pcc(v16, &EventReportOfferAllocation, v17, a3, *(_QWORD *)&v42[0].0, v43);
    }
    if ( bTracingEnabled )
    {
      v17 = *((_QWORD *)a3 + 5);
      if ( v17 )
        v15 = *(_QWORD *)(v17 + 24);
      else
        v15 = 0LL;
      if ( v9 )
      {
        v52 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
        v53 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 56LL);
      }
      else
      {
        LOBYTE(v52) = 0;
        v53 = 0LL;
      }
      LOBYTE(v19) = 0;
      LOBYTE(v20) = 0;
      LOBYTE(v21) = 0;
      v16 = *((unsigned int *)a3 + 18);
      LOBYTE(v22) = 0;
      LOBYTE(v50) = 0;
      LOBYTE(v49) = 0;
      LOBYTE(v48) = 0;
      v47 = 0;
      v46 = 0;
      if ( v15 )
      {
        v22 = *(_DWORD *)v15;
        v19 = *(_DWORD *)(v15 + 4);
        v20 = *(_DWORD *)(v15 + 8);
        v21 = *(_DWORD *)(v15 + 12);
        v4 = *(_DWORD *)(v15 + 16);
        v50 = *(_DWORD *)(v15 + 20);
        v49 = *(_DWORD *)(v15 + 24);
        v48 = *(_DWORD *)(v15 + 28);
        v23 = *(_DWORD *)(v15 + 32);
        v15 = *(unsigned int *)(v15 + 36);
        v46 = v15;
        v47 = v23;
      }
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht(
          *((_QWORD *)a3 + 2),
          (__int64)&EventDestroyAdapterAllocation,
          v17,
          v53,
          v51,
          v52,
          **((_DWORD **)a3 + 63),
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          v44,
          *((_DWORD *)a3 + 17),
          v16,
          v45,
          *((_DWORD *)a3 + 16),
          *((_DWORD *)a3 + 94),
          (char)a3,
          v17,
          0,
          v22,
          v19,
          v20,
          v21,
          v4,
          v50,
          v49,
          v48,
          v47,
          v46,
          (*((_DWORD *)a3 + 21) & 2) != 0,
          *((_QWORD *)a3 + 45),
          *((_BYTE *)a3 + 76) & 0x3F,
          BYTE1(*((_DWORD *)a3 + 19)) & 1);
    }
  }
  this[952] = (struct _KTHREAD *)((char *)this[952] + *((_QWORD *)a3 + 2));
  ++*((_DWORD *)this + 1902);
  v24 = *((_QWORD *)a3 + 2);
  if ( (**((_DWORD **)a3 + 63) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1934);
    this[968] = (struct _KTHREAD *)((char *)this[968] + v24);
  }
  else
  {
    ++*((_DWORD *)this + 1938);
    this[970] = (struct _KTHREAD *)((char *)this[970] + v24);
  }
  this[5017] = (struct _KTHREAD *)((char *)this[5017] - *((_QWORD *)a3 + 2));
  v25 = *((_QWORD *)a3 + 40);
  if ( v25 )
  {
    if ( *(_QWORD *)(v25 + 8) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v38 + 24) = 342LL;
      WdLogEvent5_WdAssertion(v38);
    }
    if ( *(_DWORD *)(v25 + 24) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v39 + 24) = 343LL;
      WdLogEvent5_WdAssertion(v39);
    }
    operator delete((void *)v25);
  }
  v26 = *((_QWORD *)a3 + 63);
  if ( v26 )
  {
    v27 = *(int **)(v26 + 16);
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27, 0xFFFFFFFF) == 1 )
      {
        if ( v27[2] )
        {
          v40 = v27[2];
          v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
          v41[3] = 270LL;
          v41[4] = 42LL;
          v41[5] = v27;
          v41[6] = v40;
          v41[7] = 0LL;
          WdLogEvent5_WdCriticalError(v41);
        }
        operator delete(v27);
      }
      *(_QWORD *)(*((_QWORD *)a3 + 63) + 16LL) = 0LL;
    }
  }
  if ( !*((_DWORD *)a3 + 95) )
  {
    operator delete(*((void **)a3 + 63));
    *((_DWORD *)a3 + 19) |= 0x200000u;
    _VIDMM_GLOBAL_ALLOC::~_VIDMM_GLOBAL_ALLOC(a3);
    operator delete(a3);
  }
}
