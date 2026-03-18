/*
 * XREFs of ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00550FC
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054B90 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00A35B0 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0017A80 (memmove.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0022578 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0022C8C (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp @ 0x1C002618C (McTemplateK0qqqxxp.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0055F90 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005DCA0 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C005E324 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C005E3CC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005FCC4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FAC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0061D04 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00621CC (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0062910 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00653C0 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B4F4 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0078A44 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0078B70 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00799F8 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009DF90 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00A2FD4 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B129C (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00B1634 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B3FBC (-ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferToSegment(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _MDL *a3,
        unsigned __int8 a4)
{
  unsigned int v7; // edi
  __int64 v8; // r13
  __int64 v9; // rdx
  VIDMM_GLOBAL *v10; // rcx
  unsigned int v11; // r9d
  __int64 v12; // r14
  __int64 v13; // rcx
  __int16 v14; // cx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r15
  unsigned int v26; // r12d
  unsigned __int64 v27; // r15
  unsigned int v28; // eax
  size_t v29; // rcx
  const void *v30; // rax
  SIZE_T v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r8
  SIZE_T v37; // rdx
  __int64 v38; // r8
  _QWORD *v39; // rax
  SIZE_T v40; // r15
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r8
  SIZE_T v44; // rdx
  __int64 v45; // r8
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  struct _MDL *v48; // [rsp+30h] [rbp-148h]
  bool v49; // [rsp+60h] [rbp-118h] BYREF
  bool v50; // [rsp+61h] [rbp-117h] BYREF
  unsigned int v51; // [rsp+64h] [rbp-114h]
  unsigned int v52; // [rsp+68h] [rbp-110h]
  struct _MDL *v53; // [rsp+70h] [rbp-108h]
  int v54; // [rsp+78h] [rbp-100h]
  int v55; // [rsp+80h] [rbp-F8h]
  struct _DXGK_TRANSFERFLAGS v56[2]; // [rsp+88h] [rbp-F0h]
  struct _MDL *v57; // [rsp+90h] [rbp-E8h]
  union _LARGE_INTEGER v58; // [rsp+98h] [rbp-E0h] BYREF
  size_t Size; // [rsp+A0h] [rbp-D8h]
  VIDMM_MEMORY_SEGMENT *v60; // [rsp+A8h] [rbp-D0h]
  __int64 v61; // [rsp+B0h] [rbp-C8h]
  struct _VIDMM_GLOBAL_ALLOC *v62; // [rsp+B8h] [rbp-C0h]
  void *v63; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned __int64 v64; // [rsp+C8h] [rbp-B0h]
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-A8h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v66; // [rsp+100h] [rbp-78h] BYREF

  v53 = a3;
  v60 = this;
  v62 = a2;
  *(_QWORD *)&v56[0].0 = 0LL;
  v54 = 0;
  v7 = 0;
  v49 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v8 = *((_QWORD *)a2 + 13);
  v61 = v8;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
  {
    LODWORD(v12) = -1073741130;
    if ( !a4 )
    {
      v23 = WdLogNewEntry5_WdEvent(v10, v9);
      *(_QWORD *)(v23 + 24) = a2;
      WdLogEvent5_WdEvent(v23);
      return (unsigned int)v12;
    }
    goto LABEL_11;
  }
  LODWORD(v12) = -1073741823;
  if ( (*((_DWORD *)a2 + 21) & 0x20) != 0 )
  {
    if ( *((int *)a2 + 87) > 0 )
    {
      VIDMM_GLOBAL::UnlockAllocation(v10, (struct _VIDMM_LOCAL_ALLOC *)v8, 0LL, *((_QWORD *)a2 + 1), 0, 0);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      *((_DWORD *)a2 + 21) &= ~2u;
      --*((_DWORD *)a2 + 87);
    }
    memset(&v66, 0, 0x28uLL);
    *(_QWORD *)&v66.VprIndex = this;
    v66.CurrentStartOffset = *((_QWORD *)a2 + 27);
    *(_QWORD *)&v66.PhysicalAdapterIndex = a2;
    LODWORD(v66.CurrentSize) = v56[0];
    KeStackAttachProcess(**(PRKPROCESS **)(v8 + 8), &ApcState);
    v12 = (int)VIDMM_GLOBAL::Rotate(
                 *((_QWORD *)this + 1),
                 *(_QWORD *)(*(_QWORD *)(v8 + 8) + 24LL),
                 *(_QWORD *)(v8 + 24),
                 0LL,
                 v53,
                 *((_QWORD *)a2 + 2),
                 VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback,
                 &v66,
                 2 * (unsigned int)a4,
                 a2);
    KeUnstackDetachProcess(&ApcState);
    v22 = *((_QWORD *)a2 + 33);
    if ( v22 )
      _guard_dispatch_icall_fptr();
    if ( a4 )
    {
      if ( (int)v12 >= 0 )
        goto LABEL_36;
      *((_DWORD *)a2 + 19) |= 0x100000u;
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        *((_QWORD *)a2 + 2),
        v21,
        *((struct VIDMM_SEGMENT **)a2 + 28),
        (union _LARGE_INTEGER *)a2 + 27);
    }
    else
    {
      if ( (int)v12 < 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v22, v20);
        *(_QWORD *)(v24 + 24) = v12;
LABEL_44:
        WdLogEvent5_WdAssertion(v24);
        return (unsigned int)v12;
      }
      LODWORD(v12) = 0;
    }
    if ( (int)v12 < 0 )
    {
LABEL_37:
      *((_BYTE *)a2 + 98) = 1;
      v49 = 1;
      goto LABEL_11;
    }
LABEL_36:
    *(_BYTE *)(v8 + 32) |= 1u;
    goto LABEL_37;
  }
  if ( !*((_BYTE *)a2 + 97) )
  {
    if ( *(_QWORD *)(v8 + 24) )
      _guard_dispatch_icall_fptr();
    if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        *((_QWORD *)a2 + 1),
        v11,
        this,
        (union _LARGE_INTEGER *)a2 + 27);
    LODWORD(v12) = 0;
    v49 = 1;
  }
  if ( (int)v12 < 0 )
  {
    v50 = 0;
    LODWORD(v12) = VIDMM_MEMORY_SEGMENT::TransferMemory(
                     this,
                     a2,
                     DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL,
                     *((struct VIDMM_SEGMENT **)a2 + 28),
                     *(union _LARGE_INTEGER *)((char *)a2 + 216),
                     &v50,
                     &v49);
    if ( v50 )
      _guard_dispatch_icall_fptr();
    if ( (int)v12 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v18);
      LODWORD(v12) = 0;
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v18, (__int64)&EventPerformanceWarning, v19, 2);
      if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
        KeStackAttachProcess(**(PRKPROCESS **)(v8 + 8), &ApcState);
      v25 = *((_QWORD *)a2 + 1);
      if ( Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 28)) )
      {
        v26 = 0x10000;
        v27 = v25 >> 16;
      }
      else
      {
        v26 = 4096;
        v27 = v25 >> 12;
      }
      v51 = v26;
      v55 = v27;
      v58 = *(union _LARGE_INTEGER *)((char *)a2 + 216);
      v28 = 0;
      v29 = v26;
      v53 = (struct _MDL *)v26;
      for ( Size = v26; ; v29 = Size )
      {
        v52 = v28;
        if ( v28 >= (unsigned int)v27 )
          break;
        v64 = v26 * v28;
        v30 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v8, (unsigned int)v64, v29, &v63, 0);
        if ( v30 )
        {
          memmove(*((void **)this + 32), v30, Size);
          v57 = v53;
          VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v8, v63);
        }
        else
        {
          *((_DWORD *)a2 + 19) |= 0x100000u;
          v57 = v53;
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          Size,
          v64,
          0LL,
          0LL,
          *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
          this,
          &v58,
          0LL,
          v56[0]);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v58.QuadPart += (LONGLONG)v57;
        v28 = v52 + 1;
      }
      v49 = 1;
      if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  if ( (**((_DWORD **)a2 + 63) & 0x20000) == 0 )
    goto LABEL_11;
  v31 = *((_QWORD *)a2 + 2);
  memset(&v66, 0, sizeof(v66));
  v66.PhysicalAdapterIndex = *((_DWORD *)this + 95);
  if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
    v66.SegmentIndex = 0;
  else
    v66.SegmentIndex = *((_DWORD *)this + 4) + 1;
  if ( *((_DWORD *)this + 103) )
  {
    v40 = *((_QWORD *)a2 + 27) & ~*((_QWORD *)this + 50);
    if ( v40 < *((_QWORD *)this + 52) )
    {
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                            + 41600LL)) )
      {
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v41, (__int64)&EventPerformanceWarning, v42, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41640LL), Executive, 0, 0, 0LL);
      }
      VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(this, a2);
      VIDMM_SEGMENT::ReclaimScrubRegionResources(this, a2);
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      v66.CurrentStartOffset = *((_QWORD *)this + 52);
      v66.CurrentSize = *((_QWORD *)this + 54);
      v66.NewStartOffset = v40;
      v44 = *((_QWORD *)this + 53) - v40;
      v66.NewSize = v44;
      *((_QWORD *)this + 54) = v44;
      *((_QWORD *)this + 52) = v40;
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqxxp(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v44,
          v43,
          v66.PhysicalAdapterIndex,
          v66.SegmentIndex,
          v66.VprIndex,
          v40,
          v44,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      LODWORD(v12) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                       *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2464LL),
                       &v66);
      if ( (int)v12 < 0 && g_IsInternalRelease )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v45);
        v46[3] = 270LL;
        v46[4] = 9LL;
        v46[5] = 0LL;
        v46[6] = 0LL;
        v46[7] = 0LL;
        WdLogEvent5_WdCriticalError(v46);
      }
    }
    if ( (int)v12 < 0 )
      goto LABEL_43;
    *((_DWORD *)a2 + 20) |= 0x200u;
    *((_QWORD *)this + 55) += v31;
    if ( g_IsInternalReleaseOrDbg )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v33);
      v47[3] = v31;
      v33 = *((_QWORD *)this + 55);
      v47[4] = v33;
      v47[5] = a2;
    }
  }
  else
  {
    if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                          + 41600LL)) )
    {
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v34, (__int64)&EventPerformanceWarning, v35, 24);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41640LL), Executive, 0, 0, 0LL);
    }
    VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    v37 = *((_QWORD *)a2 + 27);
    v66.NewStartOffset = v37;
    v66.NewSize = v31;
    if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqxxp(
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
        v37,
        v36,
        v66.PhysicalAdapterIndex,
        v66.SegmentIndex,
        v66.VprIndex,
        v37,
        v31,
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
    LODWORD(v12) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                     *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2464LL),
                     &v66);
    if ( (int)v12 < 0 && g_IsInternalRelease )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v38);
      v39[3] = 270LL;
      v39[4] = 9LL;
      v39[5] = 0LL;
      v39[6] = 0LL;
      v39[7] = 0LL;
      WdLogEvent5_WdCriticalError(v39);
    }
  }
  if ( (int)v12 < 0 )
  {
LABEL_43:
    v24 = WdLogNewEntry5_WdAssertion(v33, v32);
    *(_QWORD *)(v24 + 24) = 1016LL;
    goto LABEL_44;
  }
LABEL_11:
  v13 = *((_QWORD *)a2 + 28);
  *((_QWORD *)a2 + 17) = v13;
  *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 27);
  if ( (*(_DWORD *)(v13 + 80) & 0x1000) != 0 )
    v14 = 0;
  else
    v14 = *(_DWORD *)(v13 + 16) + 1;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = v14;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
  *((_QWORD *)a2 + 28) = 0LL;
  v15 = *((_DWORD *)a2 + 21);
  if ( (v15 & 2) != 0 )
  {
    VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, 0LL);
    VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 21) &= ~2u;
    v15 = *((_DWORD *)a2 + 21);
  }
  if ( v49 && (v15 & 8) == 0 && !*((_QWORD *)a2 + 33) )
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
  if ( (**((_DWORD **)a2 + 63) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 1), a2, 1u);
  v16 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v16 + 41528) )
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) == 0 )
      v7 = *((_DWORD *)this + 4) + 1;
    VIDMM_GLOBAL::RecordPageMappingHistory(v16, v7, *((__int64 *)a2 + 18) >> 12, *((_QWORD *)a2 + 2) >> 12, 3, a2, v48);
  }
  return (unsigned int)v12;
}
