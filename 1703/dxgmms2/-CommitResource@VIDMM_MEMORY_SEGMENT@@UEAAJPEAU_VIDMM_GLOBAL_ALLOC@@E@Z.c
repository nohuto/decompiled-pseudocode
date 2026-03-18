/*
 * XREFs of ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004A470
 * Callers:
 *     <none>
 * Callees:
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001250 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C0001454 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001558 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001964 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0015C80 (memmove.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C001E418 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C001E970 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_qqqxx @ 0x1C002175C (Template_qqqxx.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0048320 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0048608 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00486A8 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004911C (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00556A0 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0056B54 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0056BDC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00582B8 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059360 (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00593BC (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059580 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A34C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A4A0 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005AF48 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E21C (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006373C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006DE3C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C0094B6C (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C009B250 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C009B30C (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A0EB8 (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00A0F70 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z @ 0x1C00A21B4 (-MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C00A22B8 (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 *     ?ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A30A8 (-ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::CommitResource(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  VIDMM_GLOBAL *v6; // r9
  struct _VIDMM_LOCAL_ALLOC *v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r15
  char v14; // r12
  __int64 v15; // rcx
  __int16 v16; // cx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ecx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // r12d
  unsigned __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  VIDMM_CPU_HOST_APERTURE *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  PMDL v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _MDL *v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r9
  void *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rcx
  void *v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // r13
  unsigned __int64 v51; // r12
  unsigned int v52; // r15d
  __int64 v53; // r8
  unsigned __int64 v54; // r12
  int v55; // eax
  unsigned __int8 v56; // al
  unsigned __int64 v57; // r12
  unsigned int v58; // r13d
  unsigned __int64 v59; // r12
  unsigned int i; // eax
  char *v61; // rax
  SIZE_T v62; // r12
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // r8
  SIZE_T v69; // rcx
  _QWORD *v70; // rax
  SIZE_T v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // r8
  SIZE_T v76; // rcx
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  int v80; // eax
  bool v81; // zf
  __int64 v82; // rdx
  signed __int32 v83[8]; // [rsp+0h] [rbp-188h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-168h]
  union _LARGE_INTEGER *v85; // [rsp+28h] [rbp-160h]
  union _LARGE_INTEGER *p_MDLForRange; // [rsp+30h] [rbp-158h]
  struct VIDMM_SEGMENT *v87; // [rsp+38h] [rbp-150h]
  union _LARGE_INTEGER *v88; // [rsp+40h] [rbp-148h]
  struct _MDL *v89; // [rsp+48h] [rbp-140h]
  struct _DXGK_TRANSFERFLAGS v90; // [rsp+50h] [rbp-138h]
  char v91; // [rsp+60h] [rbp-128h]
  char v92; // [rsp+61h] [rbp-127h] BYREF
  bool v93; // [rsp+62h] [rbp-126h]
  struct _MDL *MDLForRange; // [rsp+68h] [rbp-120h] BYREF
  int v95; // [rsp+70h] [rbp-118h]
  int v96; // [rsp+74h] [rbp-114h]
  size_t Size; // [rsp+78h] [rbp-110h]
  struct _VIDMM_LOCAL_ALLOC *v98; // [rsp+80h] [rbp-108h]
  struct _MDL *v99; // [rsp+88h] [rbp-100h]
  int v100; // [rsp+90h] [rbp-F8h]
  int v101; // [rsp+98h] [rbp-F0h]
  union _LARGE_INTEGER v102; // [rsp+A0h] [rbp-E8h] BYREF
  unsigned __int64 v103; // [rsp+A8h] [rbp-E0h]
  VIDMM_MEMORY_SEGMENT *v104; // [rsp+B0h] [rbp-D8h]
  struct _VIDMM_LOCAL_ALLOC *v105; // [rsp+B8h] [rbp-D0h]
  struct _VIDMM_GLOBAL_ALLOC *v106; // [rsp+C0h] [rbp-C8h]
  void *v107; // [rsp+C8h] [rbp-C0h] BYREF
  _QWORD v108[5]; // [rsp+D0h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-90h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v110; // [rsp+128h] [rbp-60h] BYREF

  v104 = this;
  v106 = a2;
  v92 = 0;
  v91 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v99 = 0LL;
  v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v93 = (*(_BYTE *)(472LL * *((unsigned int *)this + 101) + *((_QWORD *)v6 + 5021) + 436) & 4) != 0;
  v7 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
  v98 = v7;
  v105 = v7;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(v6, a2, 1u);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8) + 24) = a2;
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
  {
    v38 = WdLogNewEntry5_WdEvent(v10, v9);
    *(_QWORD *)(v38 + 24) = a2;
    WdLogEvent5_WdEvent(v38);
    return 3221226166LL;
  }
  if ( a3 != 1
    || ((*((_DWORD *)this + 20) & 0x20) == 0 ? (v39 = *((_QWORD *)a2 + 2)) : (v39 = *((_QWORD *)a2 + 3)),
        result = VIDMM_SEGMENT::MakeRangeNonPageable(this, *((_QWORD *)a2 + 27), v39, (void **)a2 + 50),
        (int)result >= 0) )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
    v100 = 0;
    LODWORD(v13) = -1073741823;
    if ( (*((_DWORD *)a2 + 21) & 0x20) != 0 )
    {
      if ( *((int *)a2 + 87) > 0 )
      {
        VIDMM_GLOBAL::UnlockAllocation(*((VIDMM_GLOBAL **)this + 1), v7, 0LL, *((_QWORD *)a2 + 1), 0, 0);
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
        *((_DWORD *)a2 + 21) &= ~2u;
        --*((_DWORD *)a2 + 87);
      }
      v30 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 63);
      if ( v30 )
      {
        LODWORD(v13) = VIDMM_CPU_HOST_APERTURE::MapRange(v30, a2);
        if ( (int)v13 < 0 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v32, v31);
          *(_QWORD *)(v40 + 24) = 591LL;
          WdLogEvent5_WdAssertion(v40);
          return (unsigned int)v13;
        }
        v33 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
                *((VIDMM_CPU_HOST_APERTURE **)this + 63),
                *((void **)v7 + 2),
                (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 504),
                *((_QWORD *)a2 + 27),
                *((_QWORD *)a2 + 2));
      }
      else
      {
        v41 = *((_QWORD *)a2 + 28);
        v42 = (void *)*((_QWORD *)v7 + 2);
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 300LL) & 8) != 0 )
          v33 = VidMmiBuildMdlFromMdl(
                  v42,
                  *((_QWORD *)a2 + 2),
                  *(struct _MDL **)(v41 + 32),
                  *((_QWORD *)a2 + 27) / 4096LL);
        else
          v33 = VidMmiBuildMdlForContiguousMmIo(
                  v42,
                  *((_QWORD *)a2 + 2),
                  (union _LARGE_INTEGER)(*((_QWORD *)a2 + 27) + *(_QWORD *)(v41 + 32)));
      }
      v36 = v33;
      v99 = v33;
      if ( !v33 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v35, v34);
        *(_QWORD *)(v43 + 24) = 648LL;
        WdLogEvent5_WdAssertion(v43);
        return 3221225495LL;
      }
      memset(v108, 0, sizeof(v108));
      v108[1] = this;
      v108[2] = *((_QWORD *)a2 + 27);
      v108[0] = a2;
      LODWORD(v108[3]) = 0;
      KeStackAttachProcess(**((PRKPROCESS **)v7 + 1), &ApcState);
      v13 = (int)VIDMM_GLOBAL::Rotate(
                   *((VIDMM_GLOBAL **)this + 1),
                   *(struct VIDMM_PROCESS_HEAP_INTERFACE **)(*((_QWORD *)v7 + 1) + 24LL),
                   *((void **)v7 + 3),
                   MmToFrameBuffer,
                   v36,
                   *((_QWORD *)a2 + 2),
                   (int (*)(struct _MDL *, struct _MDL *, void *))VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback,
                   v108,
                   0,
                   a2);
      KeUnstackDetachProcess(&ApcState);
      v12 = *((_QWORD *)a2 + 33);
      if ( v12 )
        _guard_dispatch_icall_fptr();
      if ( (int)v13 < 0 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v11, v37);
        *(_QWORD *)(v44 + 24) = v13;
        WdLogEvent5_WdAssertion(v44);
        goto LABEL_157;
      }
      *((_BYTE *)v7 + 32) |= 1u;
      *((_BYTE *)a2 + 98) = 1;
    }
    else
    {
      if ( *((_BYTE *)a2 + 97) )
      {
LABEL_10:
        if ( (int)v13 >= 0 || !*((_DWORD *)a2 + 16) )
        {
LABEL_11:
          v14 = v91;
          goto LABEL_12;
        }
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v11);
        LODWORD(v13) = VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
        v95 = v13;
        if ( (int)v13 < 0 )
        {
          DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v24, v25);
          v48 = (void *)*((_QWORD *)a2 + 50);
          if ( v48 )
          {
            VIDMM_SEGMENT::MakeRangePageable(this, v48);
            *((_QWORD *)a2 + 50) = 0LL;
          }
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v47);
          return (unsigned int)v13;
        }
        MDLForRange = 0LL;
        if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 6464LL) & 0x400) == 0 )
        {
          p_MDLForRange = (union _LARGE_INTEGER *)&MDLForRange;
          v85 = (union _LARGE_INTEGER *)&v92;
          LOBYTE(Timeout) = 0;
          v26 = _guard_dispatch_icall_fptr();
          if ( v26 < 0 )
            goto LABEL_43;
          MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
          if ( MDLForRange )
            goto LABEL_43;
          _guard_dispatch_icall_fptr();
        }
        v26 = -1071775487;
LABEL_43:
        if ( v26 >= 0 )
        {
          if ( !v92 )
          {
            Timeout = (PLARGE_INTEGER)MDLForRange;
            _guard_dispatch_icall_fptr();
          }
          v90.0 = 0;
          v27 = *((_QWORD *)a2 + 1);
          v89 = 0LL;
          v88 = (union _LARGE_INTEGER *)((char *)a2 + 216);
          v87 = this;
          if ( v93 )
          {
            p_MDLForRange = (union _LARGE_INTEGER *)MDLForRange;
            v85 = 0LL;
            Timeout = 0LL;
          }
          else
          {
            p_MDLForRange = 0LL;
            v85 = (union _LARGE_INTEGER *)((char *)a2 + 256);
            Timeout = (PLARGE_INTEGER)*((_QWORD *)a2 + 33);
          }
          VIDMM_GLOBAL::MemoryTransfer(
            *((VIDMM_GLOBAL **)this + 1),
            a2,
            v27,
            0LL,
            (struct VIDMM_SEGMENT *)Timeout,
            v85,
            (struct _MDL *)p_MDLForRange,
            v87,
            v88,
            v89,
            v90);
          if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
          {
            v49 = WdLogNewEntry5_WdEvent(v29, v28);
            *(_QWORD *)(v49 + 24) = a2;
            WdLogEvent5_WdEvent(v49);
            _guard_dispatch_icall_fptr();
          }
          else
          {
            VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
          }
          goto LABEL_11;
        }
        v50 = 0LL;
        v51 = *((_QWORD *)a2 + 1) >> 1;
        if ( !v93 || (v52 = 0x10000, !Use64KbPagesForTransfer(a2, this)) )
          v52 = 4096;
        while ( 1 )
        {
          if ( v50 == *((_QWORD *)a2 + 1) || VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
          {
            _guard_dispatch_icall_fptr();
            v14 = 1;
            v91 = 1;
            LODWORD(v13) = v95;
            v7 = v98;
LABEL_12:
            if ( (int)v13 < 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
                WdLogNewEntry5_WdTrace(v11);
              LODWORD(v13) = 0;
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v11, &EventPerformanceWarning, v12, 2);
              if ( (**((_DWORD **)a2 + 65) & 8) == 0 )
                KeStackAttachProcess(**((PRKPROCESS **)v7 + 1), &ApcState);
              v56 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 28));
              v57 = *((_QWORD *)a2 + 1);
              if ( v56 )
              {
                v58 = 0x10000;
                v59 = v57 >> 16;
              }
              else
              {
                v58 = 4096;
                v59 = v57 >> 12;
              }
              v95 = v59;
              LODWORD(Size) = v58;
              v102 = *(union _LARGE_INTEGER *)((char *)a2 + 216);
              for ( i = 0; ; i = v96 + 1 )
              {
                v96 = i;
                if ( i >= (unsigned int)v59 )
                  break;
                v103 = v58 * i;
                v101 = v58 * i;
                v61 = VidMmMapViewOfAllocation(v98, (unsigned int)v103, v58, &v107, 0);
                if ( v61 )
                {
                  memmove(*((void **)this + 35), v61, v58);
                  VidMmUnmapViewOfAllocation(v98, v107);
                }
                else
                {
                  *((_DWORD *)a2 + 19) |= 0x100000u;
                }
                VIDMM_GLOBAL::MemoryTransfer(
                  *((VIDMM_GLOBAL **)this + 1),
                  a2,
                  v58,
                  (unsigned int)v103,
                  0LL,
                  0LL,
                  *(struct _MDL **)(*((_QWORD *)this + 36) + 8LL),
                  this,
                  &v102,
                  0LL,
                  0);
                VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
                v102.QuadPart += v58;
              }
              v14 = 1;
              v91 = 1;
              if ( (**((_DWORD **)a2 + 65) & 8) == 0 )
                KeUnstackDetachProcess(&ApcState);
            }
            if ( (**((_DWORD **)a2 + 65) & 0x20000) == 0 )
            {
LABEL_14:
              *((_DWORD *)a2 + 32) = 2;
              v15 = *((_QWORD *)a2 + 28);
              *((_QWORD *)a2 + 17) = v15;
              *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 27);
              *((_QWORD *)a2 + 19) = *((_QWORD *)a2 + 26);
              if ( (*(_DWORD *)(v15 + 80) & 0x1000) != 0 )
                v16 = 0;
              else
                v16 = *(_DWORD *)(v15 + 16) + 1;
              *(_WORD *)(*((_QWORD *)a2 + 65) + 6LL) = v16;
              *(_QWORD *)(*((_QWORD *)a2 + 65) + 24LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
              *((_QWORD *)a2 + 28) = 0LL;
              *((_QWORD *)a2 + 26) = 0LL;
              *((_BYTE *)a2 + 97) = 1;
              v17 = (_QWORD *)((char *)a2 + 416);
              v18 = *((_QWORD *)this + 24);
              if ( *(VIDMM_MEMORY_SEGMENT **)v18 != (VIDMM_MEMORY_SEGMENT *)((char *)this + 184) )
                __fastfail(3u);
              *v17 = (char *)this + 184;
              *((_QWORD *)a2 + 53) = v18;
              *(_QWORD *)v18 = v17;
              *((_QWORD *)this + 24) = v17;
              v19 = *((_DWORD *)a2 + 18);
              if ( !v19
                || ((v12 = *((_DWORD *)this + 20) & 0x1000, (*((_DWORD *)this + 20) & 0x1000) != 0)
                  ? (v18 = 0LL)
                  : (v18 = (unsigned int)(*((_DWORD *)this + 4) + 1)),
                    (*((_DWORD *)a2 + 18) & 0x1F) == (_DWORD)v18
                 || (!(_DWORD)v12 ? (v80 = *((_DWORD *)this + 4) + 1) : (v80 = 0),
                     v81 = ((v19 >> 6) & 0x1F) == v80,
                     v20 = 0,
                     v81)) )
              {
                v20 = 0x800000;
              }
              *((_DWORD *)a2 + 19) = v20 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
              if ( v98 && *((_QWORD *)v98 + 1) )
                VidMmRecordAlloc(
                  *((VIDMM_GLOBAL **)this + 1),
                  (__int64)a2,
                  (__int64)v98,
                  (__int64)this,
                  *((_QWORD *)a2 + 2),
                  0);
              *(_QWORD *)(*((_QWORD *)this + 1) + 40160LL) += *((_QWORD *)a2 + 2) >> 12;
              if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
              {
                VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, 0LL);
                VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
                *((_DWORD *)a2 + 21) &= ~2u;
              }
              if ( v14 && (*((_DWORD *)a2 + 21) & 8) == 0 && !*((_QWORD *)a2 + 33) )
                VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
              if ( (**((_DWORD **)a2 + 65) & 0x10000) != 0 )
                VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 1), a2, 1u);
              v21 = *((_QWORD *)this + 1);
              if ( *(_QWORD *)(v21 + 40952) )
              {
                if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
                  v82 = 0LL;
                else
                  v82 = (unsigned int)(*((_DWORD *)this + 4) + 1);
                VIDMM_GLOBAL::RecordPageMappingHistory(
                  v21,
                  v82,
                  *((__int64 *)a2 + 18) >> 12,
                  *((_QWORD *)a2 + 2) >> 12,
                  3,
                  a2,
                  p_MDLForRange);
              }
              DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v18, v12);
              v22 = *((_QWORD *)this + 1);
              _InterlockedOr(v83, 0);
              ++*(_QWORD *)(v22 + 40);
              return 0LL;
            }
            v62 = *((_QWORD *)a2 + 2);
            memset(&v110, 0, sizeof(v110));
            v110.PhysicalAdapterIndex = *((_DWORD *)this + 101);
            if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
              v110.SegmentIndex = 0;
            else
              v110.SegmentIndex = *((_DWORD *)this + 4) + 1;
            if ( *((_DWORD *)this + 109) )
            {
              v71 = *((_QWORD *)a2 + 27) & ~*((_QWORD *)this + 53);
              if ( v71 < *((_QWORD *)this + 55) )
              {
                if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41024LL)) )
                {
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    Template_q(v72, &EventPerformanceWarning, v73, 24);
                  KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
                }
                VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(this, a2);
                VIDMM_SEGMENT::ReclaimScrubRegionResources(this, a2);
                VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
                VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 101));
                v110.CurrentStartOffset = *((_QWORD *)this + 55);
                v110.CurrentSize = *((_QWORD *)this + 57);
                v110.NewStartOffset = v71;
                v76 = *((_QWORD *)this + 56) - v71;
                v110.NewSize = v76;
                *((_QWORD *)this + 57) = v76;
                *((_QWORD *)this + 55) = v71;
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  Template_qqqxx(v76, v74, v75, v110.PhysicalAdapterIndex, v110.SegmentIndex, v110.VprIndex, v71, v76);
                LODWORD(v13) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                                 *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2288LL),
                                 &v110);
                if ( (int)v13 < 0 && g_IsInternalRelease )
                {
                  v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v64, v63, v12);
                  v77[3] = 270LL;
                  v77[4] = 9LL;
                  v77[5] = 0LL;
                  v77[6] = 0LL;
                  v77[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v77);
                }
              }
              if ( (int)v13 >= 0 )
              {
                *((_DWORD *)a2 + 20) |= 0x200u;
                *((_QWORD *)this + 58) += v62;
                if ( g_IsInternalReleaseOrDbg )
                {
                  v78 = (_QWORD *)WdLogNewEntry5_WdTrace(v64);
                  v78[3] = v62;
                  v64 = *((_QWORD *)this + 58);
                  v78[4] = v64;
                  v78[5] = a2;
                }
                goto LABEL_154;
              }
            }
            else
            {
              if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41024LL)) )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  Template_q(v65, &EventPerformanceWarning, v66, 24);
                KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
              }
              VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
              VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 101));
              v69 = *((_QWORD *)a2 + 27);
              v110.NewStartOffset = v69;
              v110.NewSize = v62;
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_qqqxx(v69, v67, v68, v110.PhysicalAdapterIndex, v110.SegmentIndex, v110.VprIndex, v69, v62);
              LODWORD(v13) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                               *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2288LL),
                               &v110);
              if ( (int)v13 < 0 && g_IsInternalRelease )
              {
                v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v64, v63, v12);
                v70[3] = 270LL;
                v70[4] = 9LL;
                v70[5] = 0LL;
                v70[6] = 0LL;
                v70[7] = 0LL;
                WdLogEvent5_WdCriticalError(v70);
              }
LABEL_154:
              if ( (int)v13 >= 0 )
              {
                v14 = v91;
                goto LABEL_14;
              }
            }
            v79 = WdLogNewEntry5_WdAssertion(v64, v63);
            *(_QWORD *)(v79 + 24) = 1249LL;
            WdLogEvent5_WdAssertion(v79);
            v36 = v99;
LABEL_157:
            if ( *((_QWORD *)a2 + 60) )
              VIDMM_CPU_HOST_APERTURE::UnmapRange(*((VIDMM_CPU_HOST_APERTURE **)this + 63), a2);
            DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v45, v46);
            if ( v36 )
              ExFreePoolWithTag(v36, 0);
            return (unsigned int)v13;
          }
          MDLForRange = 0LL;
          v54 = ~(v52 - 1) & (v52 + v51 - 1);
          if ( (*(_DWORD *)(v53 + 6464) & 0x800) != 0 && v52 != v54 )
            goto LABEL_92;
          p_MDLForRange = (union _LARGE_INTEGER *)&MDLForRange;
          v85 = (union _LARGE_INTEGER *)&v92;
          LOBYTE(Timeout) = v52 == v54;
          v55 = _guard_dispatch_icall_fptr();
          v96 = v55;
          if ( v55 < 0 )
            goto LABEL_100;
          if ( !MDLForRange )
            break;
LABEL_97:
          if ( v55 < 0 )
          {
LABEL_100:
            v51 = v54 >> 1;
          }
          else
          {
            if ( !v92 )
            {
              Timeout = (PLARGE_INTEGER)MDLForRange;
              _guard_dispatch_icall_fptr();
            }
            v90.0 = 0;
            v89 = 0LL;
            v88 = (union _LARGE_INTEGER *)((char *)a2 + 216);
            v87 = this;
            if ( v93 )
            {
              p_MDLForRange = (union _LARGE_INTEGER *)MDLForRange;
              v85 = 0LL;
              Timeout = 0LL;
            }
            else
            {
              p_MDLForRange = 0LL;
              v85 = (union _LARGE_INTEGER *)((char *)a2 + 256);
              Timeout = (PLARGE_INTEGER)*((_QWORD *)a2 + 33);
            }
            VIDMM_GLOBAL::MemoryTransfer(
              *((VIDMM_GLOBAL **)this + 1),
              a2,
              v54,
              v50,
              (struct VIDMM_SEGMENT *)Timeout,
              v85,
              (struct _MDL *)p_MDLForRange,
              v87,
              v88,
              v89,
              v90);
            VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
            Timeout = (PLARGE_INTEGER)MDLForRange;
            _guard_dispatch_icall_fptr();
            _guard_dispatch_icall_fptr();
            v50 += v54;
            v51 = *((_QWORD *)a2 + 1) - v50;
          }
        }
        MDLForRange = VidMmGetMDLForRange(a2, v50, v54);
        if ( MDLForRange )
        {
          v55 = v96;
          goto LABEL_97;
        }
        _guard_dispatch_icall_fptr();
LABEL_92:
        v55 = -1071775487;
        goto LABEL_97;
      }
      if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
        VIDMM_GLOBAL::FillAllocationInternal(
          *((VIDMM_GLOBAL **)this + 1),
          *((_DWORD *)a2 + 19) & 0x3F,
          a2,
          *((_QWORD *)a2 + 1),
          0,
          this,
          (union _LARGE_INTEGER *)a2 + 27);
    }
    v91 = 1;
    LODWORD(v13) = 0;
    goto LABEL_10;
  }
  return result;
}
