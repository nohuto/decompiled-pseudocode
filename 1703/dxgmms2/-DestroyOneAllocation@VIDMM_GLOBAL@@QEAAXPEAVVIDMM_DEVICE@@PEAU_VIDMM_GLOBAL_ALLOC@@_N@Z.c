/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FF10
 * Callers:
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0050CF8 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0053D10 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00610A0 (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062978 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062C1C (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0063ED4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C006E6FC (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C001447C (Template_pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pcc @ 0x1C001F5C0 (Template_pcc.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004911C (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0055C08 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00582B8 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059580 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C005E164 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C005EE20 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0094D3C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyOneAllocation(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        char a4)
{
  int v4; // r13d
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  char *v12; // rax
  int *v13; // rdx
  __int64 v14; // r8
  VIDMM_GLOBAL *CurrentThread; // rcx
  bool v16; // di
  struct _KTHREAD *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  int *v22; // rsi
  int v23; // eax
  __int64 v24; // r14
  __int64 v25; // rdx
  char **v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // r9d
  __int64 v30; // r9
  __int64 v31; // r10
  int v32; // ebp
  int v33; // r14d
  int v34; // r15d
  int v35; // r12d
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  _QWORD *v40; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v41[2]; // [rsp+20h] [rbp-208h]
  struct _KEVENT **v42; // [rsp+28h] [rbp-200h]
  int v43; // [rsp+48h] [rbp-1E0h]
  int v44; // [rsp+60h] [rbp-1C8h]
  int v45; // [rsp+108h] [rbp-120h]
  int v46; // [rsp+10Ch] [rbp-11Ch]
  int v47; // [rsp+110h] [rbp-118h]
  int v48; // [rsp+114h] [rbp-114h]
  int v49; // [rsp+118h] [rbp-110h]
  __int64 v50; // [rsp+130h] [rbp-F8h]
  _QWORD v51[12]; // [rsp+150h] [rbp-D8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1B0h] [rbp-78h] BYREF

  LOBYTE(v4) = 0;
  if ( a2 )
    v9 = *((_QWORD *)a2 + 3);
  else
    v9 = 0LL;
  v50 = v9;
  if ( g_IsInternalReleaseOrDbg )
  {
    v27 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v27 + 24) = a3;
    *(_QWORD *)(v27 + 32) = a2;
  }
  if ( this != (struct _KTHREAD **)-39912LL && this[4990] == KeGetCurrentThread() )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v28 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v28);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(this + 4989, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v29 = *((_DWORD *)this + 9982);
      if ( v29 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v10, &EventBlockThread, v11, v29);
    }
    ExAcquirePushLockExclusiveEx(this + 4989, 0LL);
  }
  this[4990] = KeGetCurrentThread();
  v12 = (char *)a3 + 432;
  if ( *((_QWORD *)a3 + 54) )
  {
    v25 = *(_QWORD *)v12;
    v26 = (char **)*((_QWORD *)a3 + 55);
    if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 || *v26 != v12 )
      __fastfail(3u);
    *v26 = (char *)v25;
    *(_QWORD *)(v25 + 8) = v26;
    *(_QWORD *)v12 = 0LL;
  }
  if ( *((_QWORD *)a3 + 56) )
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList((VIDMM_GLOBAL *)this, a3);
  this[4990] = 0LL;
  ExReleasePushLockExclusiveEx(this + 4989, 0LL);
  KeLeaveCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  v16 = CurrentThread != *((VIDMM_GLOBAL **)*this + 1);
  if ( (*((_DWORD *)a3 + 21) & 4) != 0 )
  {
    if ( *((_QWORD *)a3 + 17) || *((_QWORD *)a3 + 33) )
    {
      memset(v51, 0, 0x58uLL);
      v23 = *((_DWORD *)a3 + 19) & 0x3F;
      LODWORD(v51[0]) = 112;
      HIDWORD(v51[0]) = v23;
      v51[5] = a3;
      LODWORD(v51[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait((VIDMM_GLOBAL *)this, (struct _VIDMM_SYSTEM_COMMAND *)v51);
      v16 = 0;
    }
    v24 = *(_QWORD *)(*((_QWORD *)a3 + 13) + 40LL);
    if ( (*((_DWORD *)a3 + 21) & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore((struct VIDMM_GLOBAL *)this, a3, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore((VIDMM_GLOBAL *)this, *((_QWORD *)a3 + 1));
      *((_DWORD *)a3 + 21) &= ~2u;
    }
    KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a3 + 13) + 8LL), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation((VIDMM_GLOBAL *)this, (struct _KEVENT *)(v24 - 40), 0LL, 0, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    v9 = v50;
    *((_QWORD *)a3 + 13) = 0LL;
  }
  if ( v16 )
  {
    v17 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v17 + 48, 0LL);
    *((_QWORD *)v17 + 7) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v17 + 48, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( a4 )
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, a3);
  if ( (*((_DWORD *)a3 + 23) & 1) != 0 )
  {
    LOBYTE(v14) = 1;
    VIDMM_GLOBAL::UncommitGlobalBackingStore(CurrentThread, a3, v14);
  }
  v18 = (unsigned __int8)bTracingEnabled;
  if ( bTracingEnabled )
  {
    v13 = (int *)*((_QWORD *)a3 + 65);
    if ( *((_WORD *)v13 + 2) && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LOBYTE(v42) = *((_BYTE *)a3 + 464);
      *(_BYTE *)&v41[0].0 = *((_BYTE *)v13 + 4);
      Template_pcc((unsigned __int8)bTracingEnabled, &EventReportOfferAllocation, v14, a3, *(_QWORD *)&v41[0].0, v42);
      v18 = (unsigned __int8)bTracingEnabled;
    }
    if ( (_BYTE)v18 )
    {
      v14 = *((_QWORD *)a3 + 5);
      if ( v14 )
        v13 = *(int **)(v14 + 24);
      else
        v13 = 0LL;
      if ( v9 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
        v31 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 56LL);
      }
      else
      {
        LOBYTE(v30) = 0;
        v31 = 0LL;
      }
      LOBYTE(v32) = 0;
      LOBYTE(v33) = 0;
      v18 = *((unsigned int *)a3 + 18);
      LOBYTE(v34) = 0;
      LOBYTE(v35) = 0;
      v36 = **((_DWORD **)a3 + 65);
      LOBYTE(v49) = 0;
      LOBYTE(v48) = 0;
      LOBYTE(v47) = 0;
      LOBYTE(v46) = 0;
      LOBYTE(v45) = 0;
      if ( v13 )
      {
        v32 = *v13;
        v33 = v13[1];
        v34 = v13[2];
        v35 = v13[3];
        v4 = v13[4];
        v49 = v13[5];
        v48 = v13[6];
        v47 = v13[7];
        v46 = v13[8];
        v45 = v13[9];
        v36 = **((_DWORD **)a3 + 65);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        Template_pppqxqqqqqqqpppqqqqqqqqqqtpht(
          *((_QWORD *)a3 + 2),
          &EventDestroyAdapterAllocation,
          v14,
          v31,
          v50,
          v30,
          v36,
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          v43,
          *((_DWORD *)a3 + 17),
          v18,
          v44,
          *((_DWORD *)a3 + 16),
          *((_DWORD *)a3 + 102),
          (char)a3,
          v14,
          0,
          v32,
          v33,
          v34,
          v35,
          v4,
          v49,
          v48,
          v47,
          v46,
          v45,
          (*((_DWORD *)a3 + 21) & 2) != 0,
          *((_QWORD *)a3 + 45),
          *((_BYTE *)a3 + 76) & 0x3F,
          BYTE1(*((_DWORD *)a3 + 19)) & 1);
    }
  }
  this[952] = (struct _KTHREAD *)((char *)this[952] + *((_QWORD *)a3 + 2));
  ++*((_DWORD *)this + 1902);
  v19 = *((_QWORD *)a3 + 2);
  if ( (**((_DWORD **)a3 + 65) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1934);
    this[968] = (struct _KTHREAD *)((char *)this[968] + v19);
  }
  else
  {
    ++*((_DWORD *)this + 1938);
    this[970] = (struct _KTHREAD *)((char *)this[970] + v19);
  }
  this[5017] = (struct _KTHREAD *)((char *)this[5017] - *((_QWORD *)a3 + 2));
  v20 = *((_QWORD *)a3 + 40);
  if ( v20 )
  {
    if ( *(_QWORD *)(v20 + 8) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v18, v13);
      *(_QWORD *)(v37 + 24) = 331LL;
      WdLogEvent5_WdAssertion(v37);
    }
    if ( *(_DWORD *)(v20 + 24) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v18, v13);
      *(_QWORD *)(v38 + 24) = 332LL;
      WdLogEvent5_WdAssertion(v38);
    }
    operator delete((void *)v20);
  }
  v21 = *((_QWORD *)a3 + 65);
  if ( v21 )
  {
    v22 = *(int **)(v21 + 16);
    if ( v22 )
    {
      if ( _InterlockedExchangeAdd(v22, 0xFFFFFFFF) == 1 )
      {
        if ( v22[2] )
        {
          v39 = v22[2];
          v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v13, v14);
          v40[3] = 270LL;
          v40[4] = 42LL;
          v40[5] = v22;
          v40[6] = v39;
          v40[7] = 0LL;
          WdLogEvent5_WdCriticalError(v40);
        }
        operator delete(v22);
      }
      *(_QWORD *)(*((_QWORD *)a3 + 65) + 16LL) = 0LL;
    }
  }
  if ( !*((_DWORD *)a3 + 103) )
  {
    operator delete(*((void **)a3 + 65));
    *((_DWORD *)a3 + 19) |= 0x200000u;
    operator delete(a3);
  }
}
