/*
 * XREFs of ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004EAD0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C009CF50 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00180C0 (memmove.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0020054 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00206F8 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp @ 0x1C00237DC (McTemplateK0qqqxxp.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C004C388 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C004C5EC (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C004C664 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004D0D8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0058120 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C005990C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C00599B8 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005B3AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C5E8 (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C644 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C818 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005D61C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005DAD4 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005E2B0 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FE8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0066C00 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00799E4 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C009CABC (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A9458 (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00A9510 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AB704 (-ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferToSegment(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _MDL *a3,
        unsigned __int8 a4)
{
  unsigned int v7; // esi
  VIDMM_GLOBAL *v8; // rcx
  struct _VIDMM_LOCAL_ALLOC *v9; // r13
  __int64 v10; // rdx
  VIDMM_GLOBAL *v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // r9d
  __int64 v14; // r15
  char v15; // r12
  __int64 v16; // rcx
  __int16 v17; // cx
  __int64 v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // r12d
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // r9d
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // r12
  unsigned int v35; // r15d
  __int64 v36; // r8
  unsigned __int64 v37; // r12
  int v38; // eax
  unsigned __int8 v39; // al
  unsigned __int64 v40; // r12
  unsigned int v41; // r13d
  unsigned __int64 v42; // r12
  unsigned int i; // eax
  char *v44; // rax
  SIZE_T v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r8
  SIZE_T v51; // rdx
  __int64 v52; // r8
  _QWORD *v53; // rax
  SIZE_T v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r8
  SIZE_T v58; // rdx
  __int64 v59; // r8
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  struct _MDL *p_MDLForRange; // [rsp+30h] [rbp-138h]
  union _LARGE_INTEGER *v63; // [rsp+40h] [rbp-128h]
  union _LARGE_INTEGER *v64; // [rsp+40h] [rbp-128h]
  char v65; // [rsp+60h] [rbp-108h]
  bool v66; // [rsp+62h] [rbp-106h]
  struct _MDL *MDLForRange; // [rsp+68h] [rbp-100h] BYREF
  unsigned int v68; // [rsp+70h] [rbp-F8h]
  int v69; // [rsp+74h] [rbp-F4h]
  struct _VIDMM_LOCAL_ALLOC *v70; // [rsp+78h] [rbp-F0h]
  size_t Size; // [rsp+80h] [rbp-E8h]
  int v72; // [rsp+88h] [rbp-E0h]
  union _LARGE_INTEGER v73; // [rsp+90h] [rbp-D8h] BYREF
  VIDMM_MEMORY_SEGMENT *v74; // [rsp+98h] [rbp-D0h]
  struct _VIDMM_LOCAL_ALLOC *v75; // [rsp+A0h] [rbp-C8h]
  struct _VIDMM_GLOBAL_ALLOC *v76; // [rsp+A8h] [rbp-C0h]
  void *v77; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int64 v78; // [rsp+B8h] [rbp-B0h]
  unsigned __int64 v79; // [rsp+C0h] [rbp-A8h]
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-A0h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v81; // [rsp+F8h] [rbp-70h] BYREF

  Size = (size_t)a3;
  v74 = this;
  v76 = a2;
  v7 = 0;
  v72 = 0;
  v65 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v8 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v66 = (*(_BYTE *)(1552LL * *((unsigned int *)this + 95) + *((_QWORD *)v8 + 5021) + 436) & 4) != 0;
  v9 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
  v70 = v9;
  v75 = v9;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(v8, a2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
  {
    LODWORD(v14) = -1073741130;
    if ( a4 )
    {
      v15 = 0;
      goto LABEL_13;
    }
    v29 = WdLogNewEntry5_WdEvent(v11, v10);
    *(_QWORD *)(v29 + 24) = a2;
    WdLogEvent5_WdEvent(v29);
    return (unsigned int)v14;
  }
  LODWORD(v14) = -1073741823;
  if ( (*((_DWORD *)a2 + 21) & 0x20) != 0 )
  {
    if ( *((int *)a2 + 87) > 0 )
    {
      VIDMM_GLOBAL::UnlockAllocation(v11, v9, 0LL, *((_QWORD *)a2 + 1), 0, 0);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      *((_DWORD *)a2 + 21) &= ~2u;
      --*((_DWORD *)a2 + 87);
    }
    memset(&v81, 0, 0x28uLL);
    *(_QWORD *)&v81.VprIndex = this;
    v81.CurrentStartOffset = *((_QWORD *)a2 + 27);
    *(_QWORD *)&v81.PhysicalAdapterIndex = a2;
    LODWORD(v81.CurrentSize) = 0;
    KeStackAttachProcess(**((PRKPROCESS **)v9 + 1), &ApcState);
    v14 = (int)VIDMM_GLOBAL::Rotate(
                 *((_QWORD *)this + 1),
                 *(_QWORD *)(*((_QWORD *)v9 + 1) + 24LL),
                 *((_QWORD *)v9 + 3),
                 0LL,
                 Size,
                 *((_QWORD *)a2 + 2),
                 VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback,
                 &v81,
                 2 * (unsigned int)a4,
                 a2);
    KeUnstackDetachProcess(&ApcState);
    v28 = *((_QWORD *)a2 + 33);
    if ( v28 )
      _guard_dispatch_icall_fptr();
    if ( a4 )
    {
      if ( (int)v14 >= 0 )
        goto LABEL_46;
      *((_DWORD *)a2 + 19) |= 0x100000u;
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        *((_QWORD *)a2 + 2),
        v27,
        *((struct VIDMM_SEGMENT **)a2 + 28),
        (union _LARGE_INTEGER *)a2 + 27);
    }
    else
    {
      if ( (int)v14 < 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v28, v26);
        *(_QWORD *)(v30 + 24) = v14;
        goto LABEL_55;
      }
      LODWORD(v14) = 0;
    }
    if ( (int)v14 < 0 )
    {
LABEL_47:
      *((_BYTE *)a2 + 98) = 1;
      v15 = 1;
      goto LABEL_13;
    }
LABEL_46:
    *((_BYTE *)v9 + 32) |= 1u;
    goto LABEL_47;
  }
  if ( !*((_BYTE *)a2 + 97) )
  {
    if ( *((_QWORD *)v9 + 3) )
      _guard_dispatch_icall_fptr();
    if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        *((_QWORD *)a2 + 1),
        v13,
        this,
        (union _LARGE_INTEGER *)a2 + 27);
    LODWORD(v14) = 0;
    v65 = 1;
  }
  if ( (int)v14 >= 0 || !*((_DWORD *)a2 + 16) )
    goto LABEL_10;
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v11);
  LODWORD(v14) = VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
  v68 = v14;
  if ( (int)v14 >= 0 )
  {
    MDLForRange = 0LL;
    if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 6464LL) & 0x400) == 0 )
    {
      p_MDLForRange = (struct _MDL *)&MDLForRange;
      v22 = _guard_dispatch_icall_fptr();
      if ( v22 < 0 )
        goto LABEL_33;
      MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
      if ( MDLForRange )
        goto LABEL_33;
      _guard_dispatch_icall_fptr();
    }
    v22 = -1071775487;
LABEL_33:
    if ( v22 >= 0 )
    {
      _guard_dispatch_icall_fptr();
      v23 = *((_QWORD *)a2 + 1);
      v63 = (union _LARGE_INTEGER *)((char *)a2 + 216);
      if ( v66 )
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v23,
          0LL,
          0LL,
          0LL,
          MDLForRange,
          this,
          v63,
          0LL,
          0);
      else
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v23,
          0LL,
          *((struct VIDMM_SEGMENT **)a2 + 33),
          (union _LARGE_INTEGER *)a2 + 32,
          0LL,
          this,
          v63,
          0LL,
          0);
      if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
      {
        v32 = WdLogNewEntry5_WdEvent(v25, v24);
        *(_QWORD *)(v32 + 24) = a2;
        WdLogEvent5_WdEvent(v32);
        _guard_dispatch_icall_fptr();
      }
      else
      {
        VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
      }
LABEL_10:
      v15 = v65;
      goto LABEL_11;
    }
    v33 = 0LL;
    v34 = *((_QWORD *)a2 + 1) >> 1;
    if ( !v66 || (v35 = 0x10000, !Use64KbPagesForTransfer(a2, this)) )
      v35 = 4096;
    while ( 1 )
    {
      if ( v33 == *((_QWORD *)a2 + 1) || VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
      {
        _guard_dispatch_icall_fptr();
        v15 = 1;
        v65 = 1;
        LODWORD(v14) = v68;
        v9 = v70;
LABEL_11:
        if ( (int)v14 < 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v11);
          LODWORD(v14) = 0;
          if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q((__int64)v11, (__int64)&EventPerformanceWarning, v12, 2);
          if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
            KeStackAttachProcess(**((PRKPROCESS **)v9 + 1), &ApcState);
          v39 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 28));
          v40 = *((_QWORD *)a2 + 1);
          if ( v39 )
          {
            v41 = 0x10000;
            v42 = v40 >> 16;
          }
          else
          {
            v41 = 4096;
            v42 = v40 >> 12;
          }
          v68 = v41;
          LODWORD(MDLForRange) = v42;
          v73 = *(union _LARGE_INTEGER *)((char *)a2 + 216);
          for ( i = 0; ; i = v69 + 1 )
          {
            v69 = i;
            if ( i >= (unsigned int)v42 )
              break;
            Size = v41;
            v79 = v41;
            v78 = v41 * i;
            v44 = VidMmMapViewOfAllocation(v70, (unsigned int)v78, v41, &v77, 0);
            if ( v44 )
            {
              memmove(*((void **)this + 32), v44, Size);
              VidMmUnmapViewOfAllocation(v70, v77);
            }
            else
            {
              *((_DWORD *)a2 + 19) |= 0x100000u;
            }
            VIDMM_GLOBAL::MemoryTransfer(
              *((VIDMM_GLOBAL **)this + 1),
              a2,
              v79,
              v78,
              0LL,
              0LL,
              *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
              this,
              &v73,
              0LL,
              0);
            VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
            v73.QuadPart += Size;
          }
          v15 = 1;
          v65 = 1;
          if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
            KeUnstackDetachProcess(&ApcState);
        }
        if ( (**((_DWORD **)a2 + 63) & 0x20000) == 0 )
        {
LABEL_13:
          v16 = *((_QWORD *)a2 + 28);
          *((_QWORD *)a2 + 17) = v16;
          *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 27);
          if ( (*(_DWORD *)(v16 + 80) & 0x1000) != 0 )
            v17 = 0;
          else
            v17 = *(_DWORD *)(v16 + 16) + 1;
          *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = v17;
          *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
          *((_QWORD *)a2 + 28) = 0LL;
          if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
          {
            VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, 0LL);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
            *((_DWORD *)a2 + 21) &= ~2u;
          }
          if ( v15 && (*((_DWORD *)a2 + 21) & 8) == 0 && !*((_QWORD *)a2 + 33) )
            VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
          if ( (**((_DWORD **)a2 + 63) & 0x10000) != 0 )
            VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 1), a2, 1u);
          v18 = *((_QWORD *)this + 1);
          if ( *(_QWORD *)(v18 + 40952) )
          {
            if ( (*((_DWORD *)this + 20) & 0x1000) == 0 )
              v7 = *((_DWORD *)this + 4) + 1;
            VIDMM_GLOBAL::RecordPageMappingHistory(
              v18,
              v7,
              *((__int64 *)a2 + 18) >> 12,
              *((_QWORD *)a2 + 2) >> 12,
              3,
              a2,
              p_MDLForRange);
          }
          return (unsigned int)v14;
        }
        v45 = *((_QWORD *)a2 + 2);
        memset(&v81, 0, sizeof(v81));
        v81.PhysicalAdapterIndex = *((_DWORD *)this + 95);
        if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
          v81.SegmentIndex = 0;
        else
          v81.SegmentIndex = *((_DWORD *)this + 4) + 1;
        if ( *((_DWORD *)this + 103) )
        {
          v54 = *((_QWORD *)a2 + 27) & ~*((_QWORD *)this + 50);
          if ( v54 < *((_QWORD *)this + 52) )
          {
            if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                                  + 41024LL)) )
            {
              if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v55, (__int64)&EventPerformanceWarning, v56, 24);
              KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
            }
            VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(this, a2);
            VIDMM_SEGMENT::ReclaimScrubRegionResources(this, a2);
            VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
            VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
            v81.CurrentStartOffset = *((_QWORD *)this + 52);
            v81.CurrentSize = *((_QWORD *)this + 54);
            v81.NewStartOffset = v54;
            v58 = *((_QWORD *)this + 53) - v54;
            v81.NewSize = v58;
            *((_QWORD *)this + 54) = v58;
            *((_QWORD *)this + 52) = v54;
            if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0qqqxxp(
                *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
                v58,
                v57,
                v81.PhysicalAdapterIndex,
                v81.SegmentIndex,
                v81.VprIndex,
                v54,
                v58,
                *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
            LODWORD(v14) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                             *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2312LL),
                             &v81);
            if ( (int)v14 < 0 && g_IsInternalRelease )
            {
              v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v46, v59);
              v60[3] = 270LL;
              v60[4] = 9LL;
              v60[5] = 0LL;
              v60[6] = 0LL;
              v60[7] = 0LL;
              WdLogEvent5_WdCriticalError(v60);
            }
          }
          if ( (int)v14 >= 0 )
          {
            *((_DWORD *)a2 + 20) |= 0x200u;
            *((_QWORD *)this + 55) += v45;
            if ( g_IsInternalReleaseOrDbg )
            {
              v61 = (_QWORD *)WdLogNewEntry5_WdTrace(v47);
              v61[3] = v45;
              v47 = *((_QWORD *)this + 55);
              v61[4] = v47;
              v61[5] = a2;
            }
            goto LABEL_132;
          }
        }
        else
        {
          if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                                + 41024LL)) )
          {
            if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v48, (__int64)&EventPerformanceWarning, v49, 24);
            KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
          }
          VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
          v51 = *((_QWORD *)a2 + 27);
          v81.NewStartOffset = v51;
          v81.NewSize = v45;
          if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qqqxxp(
              *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
              v51,
              v50,
              v81.PhysicalAdapterIndex,
              v81.SegmentIndex,
              v81.VprIndex,
              v51,
              v45,
              *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
          LODWORD(v14) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                           *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2312LL),
                           &v81);
          if ( (int)v14 < 0 && g_IsInternalRelease )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v46, v52);
            v53[3] = 270LL;
            v53[4] = 9LL;
            v53[5] = 0LL;
            v53[6] = 0LL;
            v53[7] = 0LL;
            WdLogEvent5_WdCriticalError(v53);
          }
LABEL_132:
          if ( (int)v14 >= 0 )
          {
            v15 = v65;
            goto LABEL_13;
          }
        }
        v30 = WdLogNewEntry5_WdAssertion(v47, v46);
        *(_QWORD *)(v30 + 24) = 1250LL;
LABEL_55:
        WdLogEvent5_WdAssertion(v30);
        return (unsigned int)v14;
      }
      MDLForRange = 0LL;
      v37 = ~(v35 - 1) & (v35 + v34 - 1);
      if ( (*(_DWORD *)(v36 + 6464) & 0x800) != 0 && v35 != v37 )
        goto LABEL_71;
      p_MDLForRange = (struct _MDL *)&MDLForRange;
      v38 = _guard_dispatch_icall_fptr();
      v69 = v38;
      if ( v38 < 0 )
        goto LABEL_78;
      if ( !MDLForRange )
        break;
LABEL_76:
      if ( v38 < 0 )
      {
LABEL_78:
        v34 = v37 >> 1;
      }
      else
      {
        _guard_dispatch_icall_fptr();
        v64 = (union _LARGE_INTEGER *)((char *)a2 + 216);
        if ( v66 )
          VIDMM_GLOBAL::MemoryTransfer(
            *((VIDMM_GLOBAL **)this + 1),
            a2,
            v37,
            v33,
            0LL,
            0LL,
            MDLForRange,
            this,
            v64,
            0LL,
            0);
        else
          VIDMM_GLOBAL::MemoryTransfer(
            *((VIDMM_GLOBAL **)this + 1),
            a2,
            v37,
            v33,
            *((struct VIDMM_SEGMENT **)a2 + 33),
            (union _LARGE_INTEGER *)a2 + 32,
            0LL,
            this,
            v64,
            0LL,
            0);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        _guard_dispatch_icall_fptr();
        _guard_dispatch_icall_fptr();
        v33 += v37;
        v34 = *((_QWORD *)a2 + 1) - v33;
      }
    }
    MDLForRange = VidMmGetMDLForRange(a2, v33, v37);
    if ( MDLForRange )
    {
      v38 = v69;
      goto LABEL_76;
    }
    _guard_dispatch_icall_fptr();
LABEL_71:
    v38 = -1071775487;
    goto LABEL_76;
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v20, v21);
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v31);
  return (unsigned int)v14;
}
