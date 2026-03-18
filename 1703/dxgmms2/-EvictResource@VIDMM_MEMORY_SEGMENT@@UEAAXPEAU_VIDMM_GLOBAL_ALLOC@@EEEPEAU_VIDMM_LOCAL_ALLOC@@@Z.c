/*
 * XREFs of ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00010E0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001558 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C0001714 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001964 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0015C80 (memmove.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C001E418 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C001E970 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_pqqt @ 0x1C001FB14 (Template_pqqt.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C00216C0 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     Template_qqqxx @ 0x1C002175C (Template_qqqxx.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0048320 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0048608 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00486A8 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004ABC4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00556A0 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0056BDC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0056FF0 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00582B8 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0058308 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059360 (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00593BC (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059580 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059FF8 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A34C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005AF48 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B6D8 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E21C (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E40C (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006373C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C006D220 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006DE3C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C006EE60 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C0094B6C (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00A0F70 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00A1554 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C00A22B8 (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00A9660 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00A9AD8 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::EvictResource(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  unsigned __int8 v6; // r13
  struct _VIDMM_LOCAL_ALLOC *QuadPart; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  VIDMM_GLOBAL *v12; // rcx
  unsigned __int8 v13; // bl
  int v14; // eax
  int v15; // r13d
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edx
  char v21; // bl
  __int64 v22; // rdx
  _BYTE *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  unsigned int PriorityClass; // eax
  _QWORD **v29; // r13
  _QWORD **v30; // r10
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  void *v34; // rdx
  _QWORD *v35; // rbx
  VIDMM_GLOBAL *v36; // rsi
  _QWORD *v37; // r15
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r13
  __int64 v45; // rcx
  int TemporaryResourcesForAllocation; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbx
  bool v50; // r13
  int v51; // ebx
  unsigned __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 *v59; // r13
  NTSTATUS v60; // ebx
  __int64 v61; // r8
  char v62; // al
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rcx
  _QWORD *v74; // rax
  unsigned int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // r8
  _QWORD *v78; // rax
  __int64 v79; // rcx
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // r15
  __int64 v83; // rbx
  unsigned __int8 v84; // al
  int v85; // r9d
  unsigned int v86; // r9d
  unsigned __int64 v87; // rbx
  int v88; // r13d
  unsigned __int64 v89; // r9
  unsigned __int64 v90; // r8
  __int64 v91; // rcx
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r13
  _QWORD *v97; // rax
  int v98; // r8d
  unsigned __int8 v99; // al
  int v100; // r8d
  unsigned __int64 v101; // r13
  unsigned __int64 v102; // r13
  unsigned int v103; // ecx
  unsigned int v104; // eax
  unsigned int v105; // ebx
  char *v106; // rax
  SIZE_T v107; // rbx
  char v108; // r13
  unsigned __int64 v109; // r8
  __int64 v110; // rcx
  unsigned __int64 v111; // rdx
  __int64 v112; // rcx
  SIZE_T v113; // rcx
  char *v114; // rbx
  _QWORD *v115; // rax
  _QWORD *v116; // r13
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  _QWORD *v125; // rax
  signed __int32 v126[8]; // [rsp+0h] [rbp-1A8h] BYREF
  ULONG AllocationType[2]; // [rsp+20h] [rbp-188h]
  ULONG Protect[2]; // [rsp+28h] [rbp-180h]
  struct _MDL *p_MDLForRange; // [rsp+30h] [rbp-178h]
  struct VIDMM_SEGMENT *v130; // [rsp+38h] [rbp-170h]
  union _LARGE_INTEGER *v131; // [rsp+40h] [rbp-168h]
  struct _MDL *v132; // [rsp+48h] [rbp-160h]
  struct _DXGK_TRANSFERFLAGS v133; // [rsp+50h] [rbp-158h]
  char v134; // [rsp+60h] [rbp-148h] BYREF
  char v135; // [rsp+61h] [rbp-147h]
  bool v136[2]; // [rsp+62h] [rbp-146h] BYREF
  unsigned int v137; // [rsp+64h] [rbp-144h]
  int v138; // [rsp+68h] [rbp-140h]
  _DWORD Size[3]; // [rsp+6Ch] [rbp-13Ch]
  struct _MDL *MDLForRange; // [rsp+78h] [rbp-130h] BYREF
  int v141; // [rsp+80h] [rbp-128h]
  union _LARGE_INTEGER v142; // [rsp+88h] [rbp-120h] BYREF
  SIZE_T v143; // [rsp+90h] [rbp-118h] BYREF
  VIDMM_GLOBAL *v144; // [rsp+98h] [rbp-110h]
  void *v145[2]; // [rsp+A0h] [rbp-108h] BYREF
  VIDMM_MEMORY_SEGMENT *v146; // [rsp+B0h] [rbp-F8h] BYREF
  PVOID BaseAddress; // [rsp+B8h] [rbp-F0h] BYREF
  void *v148; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD v149[5]; // [rsp+C8h] [rbp-E0h] BYREF
  _QWORD v150[5]; // [rsp+F0h] [rbp-B8h] BYREF
  _DXGKARG_SETVIDEOPROTECTEDREGION v151; // [rsp+118h] [rbp-90h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+148h] [rbp-60h] BYREF

  v6 = a3;
  v146 = this;
  v144 = a2;
  QuadPart = a6;
  v142.QuadPart = (LONGLONG)a6;
  v134 = 0;
  v135 = 0;
  v138 = -1073741823;
  v10 = 472LL * *((unsigned int *)this + 101);
  v11 = *(_QWORD *)(*((_QWORD *)this + 1) + 40168LL);
  v136[0] = (*(_BYTE *)(v10 + v11 + 436) & 4) != 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = a2;
  if ( *((_DWORD *)a2 + 40) && g_IsInternalRelease )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, a3);
    v56[3] = 270LL;
    v56[4] = 9LL;
    v56[5] = 0LL;
    v56[6] = 0LL;
    v56[7] = 0LL;
    WdLogEvent5_WdCriticalError(v56);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 512, 0LL);
  if ( !a6 )
  {
    QuadPart = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
    v142.QuadPart = (LONGLONG)QuadPart;
  }
  v145[1] = QuadPart;
  v12 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  if ( *((_QWORD *)v12 + 5119) )
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
      v57 = 0LL;
    else
      v57 = (unsigned int)(*((_DWORD *)this + 4) + 1);
    VIDMM_GLOBAL::RecordPageMappingHistory(
      v12,
      v57,
      *((__int64 *)a2 + 18) >> 12,
      *((_QWORD *)a2 + 2) >> 12,
      4,
      a2,
      p_MDLForRange);
  }
  v13 = 0;
  if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
    v13 = v6;
  if ( (*((_DWORD *)a2 + 19) & 0x8000000) != 0 )
    VIDMM_GLOBAL::NotifyContextAllocationEviction(v12, a2);
  v14 = **((_DWORD **)a2 + 65);
  Size[0] = 0x10000;
  if ( (v14 & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  if ( (**((_DWORD **)a2 + 65) & 0x20000) != 0 && (*((_DWORD *)this + 20) & 0x40000) == 0 )
    *((_DWORD *)a2 + 19) |= 0x100000u;
  v15 = 0;
  v141 = 0;
  if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(*((VIDMM_GLOBAL **)this + 1), a2) )
  {
    v15 = 1;
    v141 = 1;
    if ( *((_BYTE *)a2 + 98) )
      *((_BYTE *)a2 + 97) = 0;
    v13 = 0;
  }
  LODWORD(v143) = v15;
  v16 = 0;
  if ( (*((_DWORD *)a2 + 19) & 0x100000) == 0 )
    v16 = v13;
  v137 = v16;
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
  {
    v58 = WdLogNewEntry5_WdEvent(v18, v17);
    *(_QWORD *)(v58 + 24) = a2;
    WdLogEvent5_WdEvent(v58);
    LOBYTE(v19) = 0;
    v137 = v19;
  }
  v20 = *((_DWORD *)a2 + 21);
  LOBYTE(v18) = (v20 & 8) != 0;
  if ( ((unsigned __int8)v18 & ((VIDMM_GLOBAL::_Config & 8) == 0)) != 0 )
    *((_BYTE *)a2 + 98) = 1;
  if ( (_BYTE)v19 && (v20 & 8) != 0 && !*((_BYTE *)a2 + 98) && QuadPart )
  {
    KeStackAttachProcess(**((PRKPROCESS **)QuadPart + 1), &ApcState);
    v59 = (__int64 *)((char *)a2 + 8);
    BaseAddress = VidMmMapViewOfAllocation(QuadPart, 0LL, *((_QWORD *)a2 + 1), &v148, 1);
    if ( BaseAddress )
    {
      v60 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, (PSIZE_T)a2 + 1, 0x1000000u, 4u);
      VidMmUnmapViewOfAllocation(QuadPart, v148);
      v62 = bTracingEnabled;
      if ( v60 < 0 )
      {
        *((_BYTE *)a2 + 98) = 1;
        if ( v62 )
        {
          v66 = (unsigned __int64)*v59 >> 12;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(p_MDLForRange) = 0;
            Protect[0] = v66;
            AllocationType[0] = 0;
            Template_pqqt(v66, &EventUnreset, v61, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, p_MDLForRange);
          }
        }
        v67 = *v59;
        v68 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v68 + 7384);
        *(_QWORD *)(v68 + 7392) += v67;
      }
      else
      {
        if ( bTracingEnabled )
        {
          v63 = (unsigned __int64)*v59 >> 12;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(p_MDLForRange) = 1;
            Protect[0] = v63;
            AllocationType[0] = 0;
            Template_pqqt(v63, &EventUnreset, v61, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, p_MDLForRange);
          }
        }
        v64 = *v59;
        v65 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v65 + 7368);
        *(_QWORD *)(v65 + 7376) += v64;
      }
    }
    KeUnstackDetachProcess(&ApcState);
    v19 = v137;
  }
  v21 = *((_BYTE *)a2 + 98) != 0 ? v19 : 0;
  v22 = *((unsigned int *)a2 + 21);
  if ( (v22 & 8) == 0 && (**((_DWORD **)a2 + 65) & 0x4000003A) == 0 )
  {
    if ( QuadPart )
    {
      LOBYTE(v18) = ((v22 & 2) == 0) & ~*((_BYTE *)QuadPart + 32);
      if ( (_BYTE)v18 )
      {
        if ( !*((_QWORD *)a2 + 33) )
        {
          if ( (*((_DWORD *)a2 + 19) & 0x4000000) == 0 )
          {
            v69 = WdLogNewEntry5_WdAssertion(v18, v22);
            *(_QWORD *)(v69 + 24) = 1641LL;
            WdLogEvent5_WdAssertion(v69);
          }
          if ( !v21 )
            goto LABEL_24;
          VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
        }
      }
    }
  }
  if ( !v21 )
  {
LABEL_24:
    v23 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v23 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
    }
    if ( QuadPart && (*((_BYTE *)QuadPart + 32) & 1) != 0 )
    {
      if ( *v23 )
        WdLogNewEntry5_WdTrace(v23);
      KeStackAttachProcess(**((PRKPROCESS **)QuadPart + 1), &ApcState);
      v41 = VIDMM_GLOBAL::Rotate(
              *((VIDMM_GLOBAL **)this + 1),
              *(struct VIDMM_PROCESS_HEAP_INTERFACE **)(*((_QWORD *)QuadPart + 1) + 24LL),
              *((void **)QuadPart + 3),
              MmToRegularMemoryNoCopy,
              0LL,
              0LL,
              0LL,
              0LL,
              1,
              a2);
      v44 = v41;
      v45 = v41 + 0x80000000;
      if ( (int)v45 >= 0 && v41 != -1073741558 )
      {
        v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v42, v43);
        v70[3] = 270LL;
        v70[4] = 4LL;
        v70[5] = 3LL;
        v70[6] = v44;
        v70[7] = 0LL;
        WdLogEvent5_WdCriticalError(v70);
      }
      *((_BYTE *)QuadPart + 32) &= ~1u;
      KeUnstackDetachProcess(&ApcState);
    }
    if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
      VIDMM_GLOBAL::DiscardAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
    goto LABEL_30;
  }
  if ( (**((_DWORD **)a2 + 65) & 0x8000000) != 0 )
  {
    if ( QuadPart )
    {
      LOBYTE(v18) = ((*((_BYTE *)a2 + 84) & 2) == 0) & ~*((_BYTE *)QuadPart + 32);
      if ( (_BYTE)v18 )
      {
        if ( (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
        {
          if ( (int)VIDMM_SEGMENT::LockAllocationBackingStore(this, a2) < 0 )
            VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
          else
            *((_DWORD *)a2 + 21) |= 2u;
        }
      }
    }
  }
  if ( !*((_DWORD *)a2 + 16) )
    goto LABEL_101;
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v18);
  TemporaryResourcesForAllocation = VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(
                                      *((VIDMM_GLOBAL **)this + 1),
                                      a2);
  v49 = TemporaryResourcesForAllocation;
  v138 = TemporaryResourcesForAllocation;
  v50 = v136[0];
  if ( TemporaryResourcesForAllocation < 0 )
  {
    if ( v136[0] )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v47, v19);
      v71[3] = 270LL;
      v71[4] = 9LL;
      v71[5] = a2;
      v71[6] = v49;
      v71[7] = 0LL;
      WdLogEvent5_WdCriticalError(v71);
    }
    goto LABEL_101;
  }
  if ( QuadPart && (*((_BYTE *)QuadPart + 32) & 1) != 0 )
  {
    memset(v149, 0, sizeof(v149));
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v72);
      v74 = (_QWORD *)WdLogNewEntry5_WdTrace(v73);
      v74[3] = *((_QWORD *)a2 + 33);
      v74[4] = *((_QWORD *)a2 + 31);
      v74[5] = *((int *)a2 + 65);
      v74[6] = *((unsigned int *)a2 + 64);
    }
    if ( *((_BYTE *)a2 + 289) )
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
      *(_QWORD *)AllocationType = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 34), *((_QWORD *)a2 + 35));
      _guard_dispatch_icall_fptr();
      _guard_dispatch_icall_fptr();
    }
    KeStackAttachProcess(**((PRKPROCESS **)QuadPart + 1), &ApcState);
    v149[0] = a2;
    v149[1] = this;
    v149[2] = *((_QWORD *)a2 + 18);
    LODWORD(v149[3]) = 0;
    v75 = VIDMM_GLOBAL::Rotate(
            *((VIDMM_GLOBAL **)this + 1),
            *(struct VIDMM_PROCESS_HEAP_INTERFACE **)(*((_QWORD *)QuadPart + 1) + 24LL),
            *((void **)QuadPart + 3),
            MmToRegularMemory,
            0LL,
            0LL,
            (int (*)(struct _MDL *, struct _MDL *, void *))VIDMM_MEMORY_SEGMENT::RotateCopyCallback,
            v149,
            1,
            a2);
    v138 = v75;
    if ( (int)(v75 + 0x80000000) < 0 )
    {
      if ( v75 != -1073741558 )
        goto LABEL_138;
    }
    else if ( v75 != -1073741558 )
    {
      v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v75, v76, v77);
      v78[3] = 270LL;
      v78[4] = 4LL;
      v78[5] = 2LL;
      v78[6] = v138;
      v78[7] = 0LL;
      WdLogEvent5_WdCriticalError(v78);
LABEL_138:
      *((_BYTE *)QuadPart + 32) &= ~1u;
      KeUnstackDetachProcess(&ApcState);
      v135 = 1;
      goto LABEL_101;
    }
    *((_DWORD *)a2 + 19) |= 0x100000u;
    v138 = 0;
    goto LABEL_138;
  }
  MDLForRange = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 6464LL) & 0x400) == 0 )
  {
    p_MDLForRange = (struct _MDL *)&MDLForRange;
    *(_QWORD *)Protect = &v134;
    LOBYTE(AllocationType[0]) = 0;
    v51 = _guard_dispatch_icall_fptr();
    if ( v51 < 0 )
      goto LABEL_92;
    MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
    if ( MDLForRange )
      goto LABEL_92;
    _guard_dispatch_icall_fptr();
  }
  v51 = -1071775487;
LABEL_92:
  if ( v51 < 0 )
  {
    v82 = 0LL;
    v83 = *((_QWORD *)a2 + 1) >> 1;
    if ( !v50 || (v84 = Use64KbPagesForTransfer(a2, this), v85 = 0x10000, !v84) )
      v85 = 4096;
    v137 = v85;
    while ( v82 != *((_QWORD *)a2 + 1) && !VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
    {
      MDLForRange = 0LL;
      v87 = ~(v86 - 1) & (v86 + v83 - 1);
      if ( (*(_DWORD *)(v19 + 6464) & 0x800) == 0 || v86 == v87 )
      {
        p_MDLForRange = (struct _MDL *)&MDLForRange;
        *(_QWORD *)Protect = &v134;
        LOBYTE(AllocationType[0]) = v86 == v87;
        v88 = _guard_dispatch_icall_fptr();
        if ( v88 >= 0 && !MDLForRange )
        {
          MDLForRange = VidMmGetMDLForRange(a2, v82, v87);
          if ( !MDLForRange )
          {
            _guard_dispatch_icall_fptr();
            v88 = -1071775487;
          }
        }
      }
      else
      {
        v88 = -1071775487;
      }
      if ( v88 >= 0 )
      {
        if ( !v134 )
        {
          *(_QWORD *)AllocationType = MDLForRange;
          _guard_dispatch_icall_fptr();
        }
        v133.0 = 0;
        if ( v136[0] )
        {
          v132 = MDLForRange;
          v131 = 0LL;
          v130 = 0LL;
          v89 = v82;
          v90 = v87;
        }
        else
        {
          v132 = 0LL;
          v131 = (union _LARGE_INTEGER *)((char *)a2 + 256);
          v130 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
          v89 = 0LL;
          v90 = *((_QWORD *)a2 + 1);
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v90,
          v89,
          this,
          (union _LARGE_INTEGER *)a2 + 18,
          0LL,
          v130,
          v131,
          v132,
          v133);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        *(_QWORD *)AllocationType = MDLForRange;
        _guard_dispatch_icall_fptr();
        _guard_dispatch_icall_fptr();
        v82 += v87;
        v83 = *((_QWORD *)a2 + 1) - v82;
      }
      else
      {
        v83 = v87 >> 1;
      }
    }
    QuadPart = (struct _VIDMM_LOCAL_ALLOC *)v142.QuadPart;
  }
  else
  {
    if ( !v134 )
    {
      *(_QWORD *)AllocationType = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
      _guard_dispatch_icall_fptr();
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v48);
      v80 = (_QWORD *)WdLogNewEntry5_WdTrace(v79);
      v80[3] = *((_QWORD *)a2 + 33);
      v80[4] = *((_QWORD *)a2 + 31);
      v80[5] = *((int *)a2 + 65);
      v80[6] = *((unsigned int *)a2 + 64);
    }
    v52 = *((_QWORD *)a2 + 1);
    v133.0 = 0;
    if ( v50 )
    {
      v132 = VidMmGetMDLForRange(a2, 0LL, v52);
      v131 = 0LL;
      v130 = 0LL;
      v52 = *((_QWORD *)a2 + 1);
    }
    else
    {
      v132 = 0LL;
      v131 = (union _LARGE_INTEGER *)((char *)a2 + 256);
      v130 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
    }
    VIDMM_GLOBAL::MemoryTransfer(
      *((VIDMM_GLOBAL **)this + 1),
      a2,
      v52,
      0LL,
      this,
      (union _LARGE_INTEGER *)a2 + 18,
      0LL,
      v130,
      v131,
      v132,
      v133);
    if ( (*((_DWORD *)a2 + 21) & 4) == 0 )
    {
      VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
      goto LABEL_101;
    }
    v81 = WdLogNewEntry5_WdEvent(v54, v53);
    *(_QWORD *)(v81 + 24) = a2;
    WdLogEvent5_WdEvent(v81);
  }
  v135 = 1;
LABEL_101:
  v55 = (unsigned int)v138;
  if ( v138 >= 0 )
    goto LABEL_30;
  if ( (**((_DWORD **)a2 + 65) & 8) != 0 || !QuadPart || (*((_BYTE *)QuadPart + 32) & 1) == 0 )
    goto LABEL_177;
  memset(v150, 0, sizeof(v150));
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v91);
  KeStackAttachProcess(**((PRKPROCESS **)QuadPart + 1), &ApcState);
  v150[0] = a2;
  v150[1] = this;
  v150[2] = *((_QWORD *)a2 + 18);
  LODWORD(v150[3]) = 0;
  v92 = VIDMM_GLOBAL::Rotate(
          *((VIDMM_GLOBAL **)this + 1),
          *(struct VIDMM_PROCESS_HEAP_INTERFACE **)(*((_QWORD *)QuadPart + 1) + 24LL),
          *((void **)QuadPart + 3),
          MmToRegularMemory,
          0LL,
          0LL,
          (int (*)(struct _MDL *, struct _MDL *, void *))VIDMM_MEMORY_SEGMENT::RotateCopyCallback,
          v150,
          1,
          a2);
  v96 = v92;
  v138 = v92;
  if ( ((v92 + 0x80000000) & 0x80000000) != 0 )
  {
    if ( v92 != -1073741558 )
      goto LABEL_176;
LABEL_175:
    *((_DWORD *)a2 + 19) |= 0x100000u;
    v138 = 0;
    goto LABEL_176;
  }
  if ( v92 == -1073741558 )
    goto LABEL_175;
  v97 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v94, v93, v95);
  v97[3] = 270LL;
  v97[4] = 4LL;
  v97[5] = 2LL;
  v97[6] = v96;
  v97[7] = 0LL;
  WdLogEvent5_WdCriticalError(v97);
LABEL_176:
  *((_BYTE *)QuadPart + 32) &= ~1u;
  KeUnstackDetachProcess(&ApcState);
  v55 = (unsigned int)v138;
LABEL_177:
  if ( (int)v55 < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v55);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q(v55, &EventPerformanceWarning, v19, 2);
    v98 = 0;
    v138 = 0;
    if ( (**((_DWORD **)a2 + 65) & 8) == 0 && QuadPart )
    {
      KeStackAttachProcess(**((PRKPROCESS **)QuadPart + 1), &ApcState);
      v98 = 1;
      v138 = 1;
    }
    Size[1] = v98;
    v99 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 17));
    v101 = *((_QWORD *)a2 + 1);
    if ( v99 )
    {
      v102 = v101 >> 16;
      v103 = 0x10000;
    }
    else
    {
      v103 = 4096;
      Size[0] = 4096;
      v102 = v101 >> 12;
    }
    v142 = *(union _LARGE_INTEGER *)((char *)a2 + 144);
    v104 = 0;
    while ( 1 )
    {
      v137 = v104;
      if ( v104 >= (unsigned int)v102 )
        break;
      v105 = v103 * v104;
      VIDMM_GLOBAL::MemoryTransfer(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        v103,
        v103 * v104,
        this,
        &v142,
        0LL,
        0LL,
        0LL,
        *(struct _MDL **)(*((_QWORD *)this + 36) + 8LL),
        0);
      VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
      v142.QuadPart += Size[0];
      v106 = VidMmMapViewOfAllocation(QuadPart, v105, Size[0], v145, 0);
      if ( v106 )
      {
        memmove(v106, *((const void **)this + 35), Size[0]);
        VidMmUnmapViewOfAllocation(QuadPart, v145[0]);
      }
      else
      {
        *((_DWORD *)a2 + 19) |= 0x100000u;
      }
      v104 = v137 + 1;
      v100 = v138;
      v103 = Size[0];
    }
    if ( v100 )
      KeUnstackDetachProcess(&ApcState);
  }
LABEL_30:
  if ( *((_QWORD *)a2 + 60) )
  {
    VIDMM_CPU_HOST_APERTURE::UnmapRange(*((VIDMM_CPU_HOST_APERTURE **)this + 63), a2);
    VIDMM_CPU_HOST_APERTURE::ReleaseRange(*((VIDMM_CPU_HOST_APERTURE **)this + 63), a2);
  }
  *(_QWORD *)&Size[1] = *((_QWORD *)a2 + 19);
  v24 = *(_QWORD *)&Size[1];
  if ( (**((_DWORD **)a2 + 65) & 0x20000) == 0 )
    goto LABEL_33;
  if ( !*(_QWORD *)&Size[1] )
    goto LABEL_35;
  v107 = ~*((_QWORD *)this + 53) & (*((_QWORD *)this + 53) + *((_QWORD *)a2 + 2));
  memset(&v151, 0, sizeof(v151));
  v151.PhysicalAdapterIndex = *((_DWORD *)this + 101);
  if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
    v151.SegmentIndex = 0;
  else
    v151.SegmentIndex = *((_DWORD *)this + 4) + 1;
  v108 = 1;
  if ( *((_DWORD *)this + 109) )
  {
    v108 = 0;
    v143 = 0LL;
    if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                         *((_QWORD *)this + 22),
                         *((_QWORD *)this + 55),
                         *((_QWORD *)this + 56),
                         0,
                         (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                         (__int64)this,
                         (__int64)&v143,
                         (__int64)&v146,
                         (__int64)v136) == -1073741823
      && v143 == *((_QWORD *)a2 + 18) )
    {
      v109 = *((_QWORD *)this + 56);
      v110 = *((_QWORD *)a2 + 19);
      v111 = *(_QWORD *)v110 + *(_QWORD *)(v110 + 8);
      if ( v111 >= v109 )
      {
LABEL_209:
        v111 = *((_QWORD *)this + 56);
      }
      else
      {
        while ( 1 )
        {
          v112 = *(_QWORD *)(v110 + 40);
          if ( v112 == *((_QWORD *)this + 22) + 72LL )
            break;
          v110 = v112 - 40;
          if ( *(_BYTE *)(v110 + 56) != 2 )
            break;
          v111 = *(_QWORD *)v110 + *(_QWORD *)(v110 + 8);
          if ( v111 >= v109 )
            goto LABEL_209;
        }
      }
      v113 = v111 & ~*((_QWORD *)this + 53);
      v143 = v113;
      if ( v113 > *((_QWORD *)this + 55) )
      {
        v151.CurrentStartOffset = *((_QWORD *)this + 55);
        v151.CurrentSize = *((_QWORD *)this + 57);
        v151.NewStartOffset = v113;
        v151.NewSize = v109 - v113;
        *((_QWORD *)this + 57) = v109 - v113;
        *((_QWORD *)this + 55) = v113;
        v108 = 1;
      }
    }
  }
  else
  {
    v151.CurrentStartOffset = *((_QWORD *)a2 + 18);
    v151.CurrentSize = v107;
  }
  if ( v108 )
  {
    v114 = (char *)operator new[](0x68uLL, 0x31356956u, PagedPool);
    v115 = operator new[](0x28uLL, 0x38356956u, PagedPool);
    v116 = v115;
    if ( v114 )
    {
      if ( v115 )
      {
        memset(v114, 0, 0x68uLL);
        *((_QWORD *)v114 + 2) = DeferredSetVprCallback;
        *((_QWORD *)v114 + 4) = DeferredSetVprCompletionCallback;
        *(_DXGKARG_SETVIDEOPROTECTEDREGION *)(v114 + 56) = v151;
        *((_QWORD *)v114 + 5) = *((_QWORD *)this + 1);
        *((_QWORD *)v114 + 6) = v116;
        v116[2] = this;
        v116[3] = *((_QWORD *)a2 + 19);
        v116[4] = *((_QWORD *)a2 + 2);
        *((_QWORD *)v114 + 3) = v114;
        VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
        VIDMM_GLOBAL::FlushPagingBuffer(*((VIDMM_GLOBAL **)this + 1), 0, 0LL, 0LL);
        VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
          *((VIDMM_LINEAR_POOL **)this + 22),
          *((void **)a2 + 19),
          v151.CurrentStartOffset,
          v151.NewStartOffset);
        DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
          (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41024LL),
          (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v114);
        *((_QWORD *)a2 + 19) = 0LL;
        goto LABEL_230;
      }
      operator delete(v114);
    }
    if ( v116 )
      operator delete(v116);
    if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                          + 41024LL)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v117, &EventPerformanceWarning, v118, 24);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
    }
    VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 101));
    VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v151);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qqqxx(
        v120,
        v119,
        v121,
        v151.PhysicalAdapterIndex,
        v151.SegmentIndex,
        v151.VprIndex,
        v151.NewStartOffset,
        v151.NewSize);
    if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2288LL),
                &v151) < 0
      && g_IsInternalRelease )
    {
      v125 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v123, v122, v124);
      v125[3] = 270LL;
      v125[4] = 9LL;
      v125[5] = 0LL;
      v125[6] = 0LL;
      v125[7] = 0LL;
      WdLogEvent5_WdCriticalError(v125);
    }
  }
LABEL_230:
  v24 = *(_QWORD *)&Size[1];
LABEL_33:
  if ( v24 )
  {
    _guard_dispatch_icall_fptr();
    *((_QWORD *)a2 + 19) = 0LL;
  }
LABEL_35:
  v25 = (_QWORD *)((char *)a2 + 416);
  v26 = *((_QWORD *)a2 + 52);
  v27 = (_QWORD *)*((_QWORD *)a2 + 53);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v26 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 416)
    || (_QWORD *)*v27 != v25 )
  {
    __fastfail(3u);
  }
  *v27 = v26;
  *(_QWORD *)(v26 + 8) = v27;
  *v25 = 0LL;
  *((_QWORD *)a2 + 53) = 0LL;
  if ( QuadPart && *((_QWORD *)QuadPart + 1) )
    VidMmRecordAlloc(
      *((VIDMM_GLOBAL **)this + 1),
      (__int64)a2,
      (__int64)QuadPart,
      (__int64)this,
      *((_QWORD *)a2 + 2),
      1);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 336LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 102));
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL * PriorityClass + 352) += *((_QWORD *)a2 + 2);
  v29 = (_QWORD **)((char *)a2 + 296);
  v30 = (_QWORD **)*((_QWORD *)a2 + 37);
  while ( v30 != v29 )
  {
    v31 = *((_QWORD *)this + 1);
    v32 = *(_QWORD *)((*(v30 - 6))[2] + 8LL * *(unsigned int *)(*(_QWORD *)(v31 + 24) + 200LL));
    if ( v32 )
      v33 = *(_QWORD *)(v32 + 16) + 184LL * *((unsigned int *)this + 5);
    else
      v33 = 0LL;
    VidMmRecordEviction(v31 + 7128, v33 + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v31 + 8));
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 40160LL) -= *((_QWORD *)a2 + 2) >> 12;
  *(_WORD *)(*((_QWORD *)a2 + 65) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 65) + 24LL) = 0LL;
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  if ( v135 )
    _guard_dispatch_icall_fptr();
  v34 = (void *)*((_QWORD *)a2 + 50);
  if ( v34 )
  {
    VIDMM_SEGMENT::MakeRangePageable(this, v34);
    *((_QWORD *)a2 + 50) = 0LL;
  }
  if ( !v141 )
  {
    *((_BYTE *)a2 + 98) = 0;
    *((_DWORD *)a2 + 21) &= ~8u;
  }
  *((_DWORD *)a2 + 19) &= ~0x4000000u;
  v144 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  if ( (*((_BYTE *)v144 + 40872) & 1) != 0 )
  {
    v35 = *v29;
    if ( *v29 != v29 )
    {
      v36 = v144;
      do
      {
        v37 = (_QWORD *)*(v35 - 2);
        if ( v37 != v35 - 2 )
        {
          do
          {
            VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(v36, (struct VIDMM_ALLOC *)(v37 - 5));
            v37 = (_QWORD *)*v37;
          }
          while ( v37 != v35 - 2 );
          v29 = (_QWORD **)((char *)a2 + 296);
        }
        v35 = (_QWORD *)*v35;
      }
      while ( v35 != v29 );
    }
  }
  ExReleasePushLockExclusiveEx((char *)a2 + 512, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v38, v39);
  v40 = *((_QWORD *)this + 1);
  _InterlockedOr(v126, 0);
  ++*(_QWORD *)(v40 + 40);
}
