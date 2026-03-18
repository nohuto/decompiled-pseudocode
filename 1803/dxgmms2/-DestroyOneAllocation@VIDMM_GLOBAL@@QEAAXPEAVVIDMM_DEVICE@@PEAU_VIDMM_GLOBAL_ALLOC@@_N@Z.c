/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0067090
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00573B4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C00592D8 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005C240 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0068680 (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C006A144 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C006A3E4 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C007AAF8 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0002734 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C001625C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0023A54 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     McTemplateK0pcc @ 0x1C0023FE4 (McTemplateK0pcc.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0055F90 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C0056210 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005FCC4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FAC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00652D0 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0065EE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006C280 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C009F9C4 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A30C4 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyOneAllocation(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        char a4)
{
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rcx
  bool v13; // di
  int v14; // eax
  struct _KTHREAD *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  KSPIN_LOCK *v18; // rdx
  int v19; // eax
  int *v20; // rdx
  __int64 v21; // rcx
  int v22; // edi
  unsigned int v23; // r9d
  int v24; // esi
  int v25; // r12d
  int v26; // r13d
  int v27; // r9d
  int v28; // r11d
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rsi
  int *v32; // rsi
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rbp
  int v36; // r9d
  _QWORD *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  int *v41; // rdi
  __int64 v42; // rsi
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdi
  _QWORD *v47; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v48[2]; // [rsp+20h] [rbp-228h]
  struct _KEVENT **v49; // [rsp+28h] [rbp-220h]
  int v50; // [rsp+48h] [rbp-200h]
  int v51; // [rsp+60h] [rbp-1E8h]
  int v52; // [rsp+100h] [rbp-148h]
  int v53; // [rsp+104h] [rbp-144h]
  int v54; // [rsp+108h] [rbp-140h]
  int v55; // [rsp+10Ch] [rbp-13Ch]
  int v56; // [rsp+110h] [rbp-138h]
  char v57; // [rsp+114h] [rbp-134h]
  char v58; // [rsp+128h] [rbp-120h]
  __int64 v59; // [rsp+130h] [rbp-118h]
  __int64 v60; // [rsp+138h] [rbp-110h]
  _BYTE v61[8]; // [rsp+158h] [rbp-F0h] BYREF
  char *v62; // [rsp+160h] [rbp-E8h]
  int v63; // [rsp+168h] [rbp-E0h]
  _QWORD v64[12]; // [rsp+170h] [rbp-D8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1D0h] [rbp-78h] BYREF

  if ( a2 )
    v8 = *((_QWORD *)a2 + 3);
  else
    v8 = 0LL;
  v58 = v8;
  if ( g_IsInternalReleaseOrDbg )
  {
    v38 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v38 + 24) = a3;
    *(_QWORD *)(v38 + 32) = a2;
  }
  v62 = (char *)(this + 5061);
  if ( this != (struct _KTHREAD **)-40488LL && this[5062] == KeGetCurrentThread() )
  {
    v39 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v39 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v39);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(this + 5061, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v36 = *((_DWORD *)this + 10126);
      if ( v36 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v9, (__int64)&EventBlockThread, v10, v36);
    }
    ExAcquirePushLockExclusiveEx(this + 5061, 0LL);
  }
  this[5062] = KeGetCurrentThread();
  v11 = (_QWORD *)((char *)a3 + 400);
  v12 = *((_QWORD *)a3 + 50);
  v63 = 2;
  if ( v12 )
  {
    if ( *(_QWORD **)(v12 + 8) != v11 || (v37 = (_QWORD *)*((_QWORD *)a3 + 51), (_QWORD *)*v37 != v11) )
      __fastfail(3u);
    *v37 = v12;
    *(_QWORD *)(v12 + 8) = v37;
    *v11 = 0LL;
  }
  if ( *((_QWORD *)a3 + 52) )
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList((VIDMM_GLOBAL *)this, a3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v61);
  v13 = KeGetCurrentThread() != *((struct _KTHREAD **)*this + 1);
  v14 = *((_DWORD *)a3 + 21);
  if ( (v14 & 4) != 0 )
  {
    if ( *((_QWORD *)a3 + 17) || *((_QWORD *)a3 + 33) )
    {
      memset(v64, 0, 0x58uLL);
      v33 = *((_DWORD *)a3 + 19) & 0x3F;
      LODWORD(v64[0]) = 112;
      HIDWORD(v64[0]) = v33;
      v64[5] = a3;
      LODWORD(v64[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait((VIDMM_GLOBAL *)this, (struct _VIDMM_SYSTEM_COMMAND *)v64);
      v14 = *((_DWORD *)a3 + 21);
      v13 = 0;
    }
    v34 = *((_QWORD *)a3 + 13);
    v35 = *(_QWORD *)(v34 + 40);
    if ( (v14 & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore((struct VIDMM_GLOBAL *)this, a3, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore((VIDMM_GLOBAL *)this, *((_QWORD *)a3 + 1));
      *((_DWORD *)a3 + 21) &= ~2u;
      v34 = *((_QWORD *)a3 + 13);
    }
    KeStackAttachProcess(**(PRKPROCESS **)(v34 + 8), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation((VIDMM_GLOBAL *)this, (struct _KEVENT *)(v35 - 40), 0LL, 0, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)a3 + 13) = 0LL;
  }
  if ( v13 )
  {
    v15 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v15 + 48, 0LL);
    *((_QWORD *)v15 + 7) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v15 + 48, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( a4 )
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, a3);
  if ( (*((_DWORD *)a3 + 23) & 1) != 0 )
    VIDMM_GLOBAL::UncommitGlobalBackingStore((VIDMM_GLOBAL *)this, a3, 1);
  VidMmiClosePartition(**((volatile signed __int32 ***)a3 + 61));
  v18 = (KSPIN_LOCK *)*((_QWORD *)a3 + 62);
  if ( v18 )
  {
    VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v16, v18, a3);
    v16 = (unsigned int)_InterlockedDecrement(*((volatile signed __int32 **)a3 + 62));
    if ( (_DWORD)v16 )
    {
      if ( (int)v16 < 0 )
      {
        v41 = (int *)*((_QWORD *)a3 + 62);
        v42 = *v41;
        v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v40, v17);
        v43[3] = 270LL;
        v43[4] = 66LL;
        v43[5] = v41;
        v43[6] = v42;
        v43[7] = 0LL;
        WdLogEvent5_WdCriticalError(v43);
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
      LOBYTE(v49) = *((_BYTE *)a3 + 432);
      *(_BYTE *)&v48[0].0 = *(_WORD *)(v16 + 4);
      McTemplateK0pcc(v16, &EventReportOfferAllocation, v17, a3, *(_QWORD *)&v48[0].0, v49);
      v16 = *((_QWORD *)a3 + 63);
    }
    v19 = *(_DWORD *)v16;
    if ( bTracingEnabled )
    {
      v17 = *((_QWORD *)a3 + 5);
      if ( v17 )
        v20 = *(int **)(v17 + 24);
      else
        v20 = 0LL;
      if ( v8 )
      {
        v59 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL);
        v21 = *(_QWORD *)(v8 + 40);
        LOBYTE(v8) = 0;
        v60 = *(_QWORD *)(v21 + 64);
      }
      else
      {
        LOBYTE(v59) = 0;
        v60 = 0LL;
      }
      LOBYTE(v22) = v8;
      v23 = *((_DWORD *)a3 + 19);
      v57 = v23 & 0x3F;
      LOBYTE(v24) = v8;
      LOBYTE(v25) = v8;
      LOBYTE(v26) = v8;
      v27 = (v23 >> 8) & 1;
      v16 = *((unsigned int *)a3 + 18);
      LOBYTE(v28) = v8;
      LOBYTE(v56) = v8;
      LOBYTE(v55) = v8;
      LOBYTE(v54) = v8;
      LOBYTE(v53) = v8;
      LOBYTE(v52) = v8;
      if ( v20 )
      {
        v28 = *v20;
        v22 = v20[1];
        v24 = v20[2];
        v25 = v20[3];
        v26 = v20[4];
        v56 = v20[5];
        v55 = v20[6];
        v54 = v20[7];
        v52 = v20[9];
        v53 = v20[8];
      }
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht(
          *((_QWORD *)a3 + 2),
          (__int64)&EventDestroyAdapterAllocation,
          v17,
          v60,
          v58,
          v59,
          v19,
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          v50,
          *((_DWORD *)a3 + 17),
          v16,
          v51,
          *((_DWORD *)a3 + 16),
          *((_DWORD *)a3 + 94),
          (char)a3,
          v17,
          0,
          v28,
          v22,
          v24,
          v25,
          v26,
          v56,
          v55,
          v54,
          v53,
          v52,
          (*((_DWORD *)a3 + 21) & 2) != 0,
          *((_QWORD *)a3 + 45),
          v57,
          v27);
    }
  }
  this[1024] = (struct _KTHREAD *)((char *)this[1024] + *((_QWORD *)a3 + 2));
  ++*((_DWORD *)this + 2046);
  v29 = *((_QWORD *)a3 + 2);
  if ( (**((_DWORD **)a3 + 63) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 2078);
    this[1040] = (struct _KTHREAD *)((char *)this[1040] + v29);
  }
  else
  {
    ++*((_DWORD *)this + 2082);
    this[1042] = (struct _KTHREAD *)((char *)this[1042] + v29);
  }
  this[5086] = (struct _KTHREAD *)((char *)this[5086] - *((_QWORD *)a3 + 2));
  v30 = *((_QWORD *)a3 + 40);
  if ( v30 )
  {
    if ( *(_QWORD *)(v30 + 8) )
    {
      v44 = WdLogNewEntry5_WdAssertion(v16, v29);
      *(_QWORD *)(v44 + 24) = 386LL;
      WdLogEvent5_WdAssertion(v44);
    }
    if ( *(_DWORD *)(v30 + 24) )
    {
      v45 = WdLogNewEntry5_WdAssertion(v16, v29);
      *(_QWORD *)(v45 + 24) = 387LL;
      WdLogEvent5_WdAssertion(v45);
    }
    operator delete((void *)v30);
  }
  v31 = *((_QWORD *)a3 + 63);
  if ( v31 )
  {
    v32 = *(int **)(v31 + 16);
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32, 0xFFFFFFFF) == 1 )
      {
        if ( v32[2] )
        {
          v46 = v32[2];
          v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v29, v17);
          v47[3] = 270LL;
          v47[4] = 42LL;
          v47[5] = v32;
          v47[6] = v46;
          v47[7] = 0LL;
          WdLogEvent5_WdCriticalError(v47);
        }
        operator delete(v32);
      }
      *(_QWORD *)(*((_QWORD *)a3 + 63) + 16LL) = 0LL;
    }
  }
  if ( !*((_DWORD *)a3 + 95) )
  {
    operator delete(*((void **)a3 + 63));
    *((_DWORD *)a3 + 19) |= 0x200000u;
    _VIDMM_GLOBAL_ALLOC::~_VIDMM_GLOBAL_ALLOC((PVOID *)a3);
    operator delete(a3);
  }
}
