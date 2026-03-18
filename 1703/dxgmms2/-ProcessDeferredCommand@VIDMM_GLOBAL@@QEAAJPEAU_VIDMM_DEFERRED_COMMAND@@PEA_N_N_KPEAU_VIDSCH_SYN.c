/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C00919BC (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0091A78 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001964 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001F5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002678 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00027FC (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0002AB8 (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0006490 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiMarkDeviceAsError @ 0x1C00127A4 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     VidSchCancelDeviceCommand @ 0x1C00291D0 (VidSchCancelDeviceCommand.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004911C (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004B274 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004B3B0 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004C460 (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004D484 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C004D6DC (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z @ 0x1C004D764 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C004D794 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C004D878 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C004D8B0 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C004EC08 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C004EC20 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00558D4 (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055990 (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0055A2C (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055A78 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0056CCC (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0056D00 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0056F40 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00573C0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00582B8 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00586F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C005928C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C005A190 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C005BD30 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006DC14 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006DD5C (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006DE3C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C006DF40 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00915B4 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00916A0 (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0091830 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C00918B8 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0092834 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C0092FA4 (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C009460C (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0094D3C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C0094D64 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C0095458 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C0095A6C (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0095F3C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?ResumeFlipQueuesIfSuspendedForMove@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A3834 (-ResumeFlipQueuesIfSuspendedForMove@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00A9660 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     VidSchWaitForPagingFence @ 0x1C00ACE6C (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_DEFERRED_COMMAND *a2,
        bool *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        unsigned __int8 a7,
        struct VIDMM_ALLOC **a8)
{
  int v8; // r11d
  bool v9; // r14
  bool *v10; // r9
  __int64 v11; // r8
  __int64 v14; // r13
  struct _VIDMM_GLOBAL_ALLOC ***v15; // rsi
  __int64 v16; // rbx
  unsigned int v17; // r12d
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // eax
  bool *v24; // r13
  __int64 v25; // rcx
  _DWORD *v26; // rax
  struct _VIDSCH_SYNC_OBJECT *v27; // r13
  unsigned __int64 v28; // rbx
  unsigned int v29; // r12d
  bool v30; // zf
  unsigned int v31; // ebx
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rax
  struct _KEVENT *v35; // rcx
  __int64 result; // rax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  struct VIDMM_ALLOC **v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // r8d
  _QWORD *v44; // rdx
  struct _VIDMM_GLOBAL_ALLOC **v45; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v46; // rax
  struct _VIDMM_GLOBAL_ALLOC **v47; // rcx
  struct _VIDMM_GLOBAL_ALLOC **v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // r8
  VIDMM_GLOBAL *v51; // rcx
  __int64 *v52; // r8
  struct _VIDMM_LOCAL_ALLOC *v53; // rdx
  char v54; // bl
  VIDMM_GLOBAL *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // r8
  struct _VIDMM_LOCAL_ALLOC *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // r8
  _QWORD *v61; // r13
  volatile signed __int32 *v62; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v63; // rbx
  int v64; // ecx
  unsigned int v65; // eax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  struct _VIDMM_LOCAL_ALLOC *v69; // rcx
  struct _VIDMM_GLOBAL_ALLOC ***v70; // rax
  char v71; // al
  __int64 v72; // rax
  bool v73; // al
  __int64 v74; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v75; // rcx
  __int64 v76; // rax
  int v77; // r10d
  unsigned int inited; // eax
  __int64 v79; // rcx
  _QWORD *v80; // rax
  unsigned int v81; // eax
  _BYTE *v82; // rcx
  unsigned int v83; // eax
  int v84; // edx
  unsigned int v85; // ecx
  VIDMM_GLOBAL *v86; // rbx
  VIDMM_GLOBAL *v87; // r14
  _QWORD *v88; // rax
  char v89; // r14
  VIDMM_GLOBAL *v90; // rcx
  VIDMM_GLOBAL *v91; // rcx
  __int64 v92; // rax
  __int64 *v93; // rax
  VIDMM_DEVICE **v94; // r13
  __int64 v95; // rcx
  int v96; // eax
  struct _VIDMM_GLOBAL_ALLOC *v97; // r13
  struct _VIDMM_GLOBAL_ALLOC *v98; // rbx
  __int64 *v99; // r14
  __int64 v100; // r14
  VIDMM_GLOBAL *v101; // rcx
  struct VIDMM_ALLOC **v102; // rbx
  unsigned int v103; // r9d
  unsigned int v104; // r11d
  struct _D3DDDI_SEGMENTPREFERENCE v105; // ebx
  int v106; // r10d
  __int64 v107; // rcx
  unsigned int v108; // r10d
  char v109; // r9
  __int64 v110; // rax
  __int64 v111; // r14
  __int64 v112; // rcx
  int v113; // ecx
  int v114; // eax
  int v115; // r14d
  __int64 v116; // r10
  __int64 v117; // r11
  char v118; // r14
  __int64 v119; // r9
  int v120; // eax
  unsigned __int8 v121; // r14
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  int v128; // ebx
  __int64 v129; // rax
  __int64 v130; // r14
  __int64 v131; // rdx
  __int64 v132; // r8
  VIDMM_PROCESS_ADAPTER_INFO *v133; // r10
  unsigned __int8 v134; // al
  __int64 v135; // rcx
  __int64 v136; // rax
  unsigned int v137; // eax
  __int64 v138; // rbx
  char v139; // r14
  _QWORD *v140; // rax
  __int64 v141; // rax
  __int64 v142; // rbx
  _QWORD *v143; // rax
  _QWORD *v144; // rax
  __int64 v145; // rax
  int v146; // r9d
  __int64 v147; // rax
  _QWORD *v148; // rcx
  __int64 v149; // rcx
  __int64 v150; // rax
  int v151; // r9d
  VIDMM_GLOBAL *v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // rax
  __int64 v155; // r8
  _QWORD *v156; // rcx
  int v157; // r9d
  __int64 v158; // rbx
  __int64 v159; // r8
  __int64 v160; // rcx
  unsigned int updated; // [rsp+50h] [rbp-B0h]
  bool v163; // [rsp+60h] [rbp-A0h]
  struct VIDMM_ALLOC **v164; // [rsp+68h] [rbp-98h]
  struct _VIDMM_GLOBAL_ALLOC *v165; // [rsp+70h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC *v166; // [rsp+70h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC *NewAllocOwner; // [rsp+70h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC *v168; // [rsp+70h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC *v169; // [rsp+70h] [rbp-90h]
  char v170; // [rsp+78h] [rbp-88h]
  char v171; // [rsp+7Ch] [rbp-84h] BYREF
  char v172; // [rsp+7Dh] [rbp-83h]
  struct _VIDMM_LOCAL_ALLOC *v173; // [rsp+80h] [rbp-80h]
  int v174; // [rsp+88h] [rbp-78h]
  unsigned int v175[2]; // [rsp+90h] [rbp-70h]
  unsigned int v176; // [rsp+98h] [rbp-68h]
  bool v177; // [rsp+9Ch] [rbp-64h] BYREF
  int v178; // [rsp+A0h] [rbp-60h] BYREF
  int v179; // [rsp+A8h] [rbp-58h] BYREF
  VIDMM_PROCESS_ADAPTER_INFO *v180; // [rsp+B0h] [rbp-50h]
  struct _VIDSCH_SYNC_OBJECT *v181; // [rsp+B8h] [rbp-48h]
  int v182; // [rsp+C0h] [rbp-40h]
  struct _VIDMM_GLOBAL_ALLOC ***v183; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v184; // [rsp+D0h] [rbp-30h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v185; // [rsp+D8h] [rbp-28h] BYREF
  char v186[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v187[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v188[24]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v189[24]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v190[32]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v191[16]; // [rsp+150h] [rbp+50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1D0h] [rbp+D0h] BYREF

  v8 = 0;
  v172 = a4;
  v9 = 0;
  v10 = a3;
  v11 = (__int64)a8;
  v181 = a6;
  v14 = 0LL;
  *(_QWORD *)v175 = 0LL;
  *a8 = 0LL;
  v15 = (struct _VIDMM_GLOBAL_ALLOC ***)*((_QWORD *)a2 + 2);
  v183 = v15;
  v173 = 0LL;
  if ( v15 )
  {
    *(_QWORD *)v175 = *v15;
    v14 = **(_QWORD **)v175;
    v9 = (*(_DWORD *)(**(_QWORD **)v175 + 76LL) & 0x20000000) != 0;
    v173 = *(struct _VIDMM_LOCAL_ALLOC **)(**(_QWORD **)v175 + 104LL);
  }
  v16 = *((_QWORD *)a2 + 1);
  v163 = 0;
  updated = 0;
  v165 = (struct _VIDMM_GLOBAL_ALLOC *)v16;
  if ( !v16 )
  {
    v16 = (__int64)v15[1];
    v165 = (struct _VIDMM_GLOBAL_ALLOC *)v16;
  }
  *v10 = 0;
  v17 = 0;
  v18 = *(_DWORD *)a2;
  ++*((_QWORD *)this + 575);
  *((_DWORD *)this + 2) = v18;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 805) = v16;
  *((_QWORD *)this + 806) = v15;
  if ( *((_DWORD *)this + 1604) )
  {
    do
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        Template_p((__int64)this, &EventPagingStartPreparation, v11, *((_QWORD *)this + v17 + 143));
        v8 = 0;
      }
      v19 = v17;
      if ( *((_DWORD *)this + v17 + 414) != *((_DWORD *)this + v17 + 478)
        || *((_DWORD *)this + v17 + 542) != *((_DWORD *)this + v17 + 606) )
      {
        v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v11);
        v88[3] = 270LL;
        v88[4] = 33LL;
        v88[5] = this;
        v88[6] = 0LL;
        v88[7] = 0LL;
        WdLogEvent5_WdCriticalError(v88);
        v8 = 0;
      }
      ++v17;
      *((_DWORD *)this + v19 + 1022) = *((_DWORD *)this + v19 + 414);
      *((_DWORD *)this + v19 + 1086) = *((_DWORD *)this + v19 + 542);
      *((_DWORD *)this + v19 + 958) = 0;
    }
    while ( v17 < *((_DWORD *)this + 1604) );
    v16 = (__int64)v165;
    v11 = (__int64)a8;
    v10 = a3;
  }
  v20 = *(_QWORD *)(v16 + 32);
  if ( *(_BYTE *)(v20 + 164)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 160), 0, 0)
    || *(_BYTE *)(*((_QWORD *)this + 3) + 2244LL)
    || *(_BYTE *)(*((_QWORD *)this + 2) + 665LL) )
  {
    *((_DWORD *)a2 + 19) = -1071775232;
    *((_BYTE *)a2 + 72) = 1;
  }
  v21 = 1LL;
  if ( *((_BYTE *)a2 + 72) )
  {
    v20 = (unsigned int)(*(_DWORD *)a2 - 203);
    if ( (unsigned int)v20 <= 0xB )
    {
      v77 = 2281;
      if ( _bittest(&v77, v20) )
      {
        v25 = *((unsigned int *)a2 + 19);
        goto LABEL_190;
      }
    }
    if ( *(_DWORD *)a2 == 113 )
      *((_BYTE *)a2 + 64) = 0;
  }
  v22 = *(_DWORD *)a2;
  v176 = v22;
  if ( v22 == 200 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v15;
    if ( *((_DWORD *)v15 + 26) || *((_DWORD *)v15 + 39) )
    {
      v142 = *((int *)v15 + 26);
      v143 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v21, v11);
      v143[3] = 270LL;
      v143[4] = 42LL;
      v143[5] = this;
      v143[6] = v15;
      v143[7] = v142;
      WdLogEvent5_WdCriticalError(v143);
      v16 = (__int64)v165;
    }
    v37 = *((_DWORD *)v15 + 7) & 3;
    if ( v37 == 2 )
    {
      v166 = **v15;
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v15;
      VIDMM_DEVICE::RemoveCommitment((VIDMM_DEVICE *)v15[1], (__int64 **)v15, 0);
      if ( !*((_DWORD *)v166 + 40)
        && (**((_DWORD **)v166 + 65) & 0x40000000) == 0
        && !*((_DWORD *)v166 + 41)
        && (*((_DWORD *)v166 + 19) & 0x20000000) == 0 )
      {
        VIDMM_SEGMENT::MarkResourcesForEviction(*((VIDMM_LINEAR_POOL ***)v166 + 17), v166, 0LL, 0LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_p(v20, &EventMarkAllocation, v11, v15);
        v38 = *((_QWORD *)v166 + 2);
        ++*((_DWORD *)this + 1802);
        *((_QWORD *)this + 902) += v38;
      }
    }
    else if ( v37 == 1 )
    {
      v21 = (__int64)v15[7];
      v66 = v15 + 7;
      v20 = (__int64)v15[8];
      if ( *(struct _VIDMM_GLOBAL_ALLOC ****)(v21 + 8) != v15 + 7 || *(_QWORD **)v20 != v66 )
        __fastfail(3u);
      *(_QWORD *)v20 = v21;
      *(_QWORD *)(v21 + 8) = v20;
      *((_DWORD *)v15 + 7) &= 0xFFFFFFFC;
      v15[8] = 0LL;
      *v66 = 0LL;
    }
    if ( (*((_BYTE *)v15 + 25) & 1) != 0 )
      VIDMM_GLOBAL::UnpinOneAllocation(this, v15, 3LL);
    if ( (*((_DWORD *)v15 + 7) & 0x10) != 0 && g_IsInternalRelease )
    {
      v144 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v21, v11);
      v144[5] = 0LL;
      v144[6] = 0LL;
      v144[7] = 0LL;
      v144[3] = 270LL;
      v144[4] = 9LL;
      WdLogEvent5_WdCriticalError(v144);
    }
    if ( v15 == *(struct _VIDMM_GLOBAL_ALLOC ****)(v16 + 240) )
      *(_QWORD *)(v16 + 240) = 0LL;
    v39 = *(_QWORD *)(v16 + 16);
    v30 = v39 == -328;
    v40 = (struct VIDMM_ALLOC **)(v39 + 328);
    v164 = v40;
    if ( !v30 && v40[1] == KeGetCurrentThread() )
    {
      v145 = WdLogNewEntry5_WdAssertion(v40, v21);
      *(_QWORD *)(v145 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v145);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v164, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v146 = *((_DWORD *)v164 + 4);
        if ( v146 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v41, &EventBlockThread, v42, v146);
      }
      ExAcquirePushLockExclusiveEx(v164, 0LL);
    }
    v43 = 0;
    v164[1] = KeGetCurrentThread();
    if ( ((*((_BYTE *)v15 + 25) & 1) != 0) | *((_DWORD *)v15 + 38) )
    {
      v44 = *(_QWORD **)(v16 + 16);
      if ( bTracingEnabled && *(_DWORD *)(*v44 + 6416LL) )
      {
        do
        {
          v147 = v43++;
          v148 = (_QWORD *)(v44[6] + 264 * v147);
          v148[20] = v148[17];
          v148[21] = v148[18];
          v148[22] = v148[19];
        }
        while ( v43 < *(_DWORD *)(*v44 + 6416LL) );
      }
      v45 = v15[14];
      v46 = (struct _VIDMM_GLOBAL_ALLOC *)(v15 + 14);
      v47 = v15[15];
      if ( v45[1] != (struct _VIDMM_GLOBAL_ALLOC *)(v15 + 14) || *v47 != v46 )
        __fastfail(3u);
      *v47 = (struct _VIDMM_GLOBAL_ALLOC *)v45;
      v45[1] = (struct _VIDMM_GLOBAL_ALLOC *)v47;
      v48 = *(struct _VIDMM_GLOBAL_ALLOC ***)(v16 + 168);
      if ( *v48 != (struct _VIDMM_GLOBAL_ALLOC *)(v16 + 160) )
        __fastfail(3u);
      *(_QWORD *)v46 = v16 + 160;
      v15[15] = v48;
      *v48 = v46;
      *(_QWORD *)(v16 + 168) = v46;
      VIDMM_DEVICE::DecrementCurrentUsage((VIDMM_DEVICE *)v16, (__int64 **)v15);
      VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v16 + 16), v49, v50);
    }
    *((_DWORD *)v15 + 38) = 0;
    v164[1] = 0LL;
    ExReleasePushLockExclusiveEx(v164, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v14 + 320));
    if ( *((int *)v15[12] + 2) > 0 )
    {
      memset(v191, 0, sizeof(v191));
      v149 = *(_QWORD *)(v16 + 32);
      LODWORD(v191[5]) = 3;
      v191[6] = v15;
      VidSchCancelDeviceCommand(v149, (__int64)v191, 1, 0);
    }
    v53 = 0LL;
    v54 = 0;
    NewAllocOwner = 0LL;
    if ( (**(_DWORD **)(v14 + 520) & 0x20000000) != 0 )
    {
      v52 = (__int64 *)*v15;
      v69 = (*v15)[5];
      v53 = (struct _VIDMM_LOCAL_ALLOC *)(*v15 + 5);
      if ( v69 == v53 )
      {
LABEL_127:
        v71 = 1;
      }
      else
      {
        while ( 1 )
        {
          v70 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)v69 - 40);
          v69 = *(struct _VIDMM_LOCAL_ALLOC **)v69;
          if ( v70 != v15 && (*((_DWORD *)v70 + 7) & 4) == 0 )
            break;
          if ( v69 == v53 )
            goto LABEL_127;
        }
        v71 = 0;
      }
      if ( v52 != (__int64 *)v173 )
      {
        if ( v71 )
          *((_BYTE *)v52 + 32) |= 2u;
        goto LABEL_85;
      }
      if ( !v71 )
      {
LABEL_85:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 320), (__int64)v53, (__int64)v52);
        if ( v54 )
        {
          if ( this != (VIDMM_GLOBAL *)-39912LL && *((struct _KTHREAD **)this + 4990) == KeGetCurrentThread() )
          {
            v150 = WdLogNewEntry5_WdAssertion(v55, v21);
            *(_QWORD *)(v150 + 24) = 1167LL;
            WdLogEvent5_WdAssertion(v150);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39912, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v151 = *((_DWORD *)this + 9982);
              if ( v151 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v56, &EventBlockThread, v57, v151);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 39912, 0LL);
          }
          *((_QWORD *)this + 4990) = KeGetCurrentThread();
          if ( *(_QWORD *)(v14 + 448) )
          {
            v152 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 3) + 200LL);
            VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
              v152,
              (struct _VIDMM_GLOBAL_ALLOC *)v14,
              *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)v173 + 1) + 16LL) + 8LL * (_QWORD)v152));
            if ( NewAllocOwner )
            {
              v153 = *(unsigned int *)(*((_QWORD *)this + 3) + 200LL);
              v154 = *((_QWORD *)NewAllocOwner + 1);
              v155 = *(_QWORD *)(*(_QWORD *)(v154 + 16) + 8 * v153) + 384LL;
              v156 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v154 + 16) + 8 * v153) + 392LL);
              if ( *v156 != v155 )
                __fastfail(3u);
              *(_QWORD *)(v14 + 448) = v155;
              *(_QWORD *)(v14 + 456) = v156;
              *v156 = v14 + 448;
              *(_QWORD *)(v155 + 8) = v14 + 448;
            }
          }
          *((_QWORD *)this + 4990) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 39912, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v163 && !v9 )
        {
          if ( *(_QWORD *)(v14 + 136) )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v55);
            v58 = v173;
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, char, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v14 + 136) + 48LL))(
              *(_QWORD *)(v14 + 136),
              v14,
              0LL,
              0LL,
              1,
              v173);
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v14 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          else
          {
            v58 = v173;
          }
          if ( *(_QWORD *)(v14 + 264) )
            VIDMM_GLOBAL::EvictTemporaryAllocation(v55, (struct _VIDMM_GLOBAL_ALLOC *)v14);
          if ( (*(_DWORD *)(v14 + 84) & 2) != 0 )
          {
            VIDMM_SEGMENT::UnlockAllocationBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v14, v58);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v14 + 8));
            *(_DWORD *)(v14 + 84) &= ~2u;
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39912, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v157 = *((_DWORD *)this + 9982);
              if ( v157 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v59, &EventBlockThread, v60, v157);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 39912, 0LL);
          }
          v61 = (_QWORD *)(v14 + 432);
          *((_QWORD *)this + 4990) = KeGetCurrentThread();
          if ( *v61 )
          {
            v79 = *v61;
            v80 = (_QWORD *)v61[1];
            if ( *(_QWORD **)(*v61 + 8LL) != v61 || (_QWORD *)*v80 != v61 )
              __fastfail(3u);
            *v80 = v79;
            *(_QWORD *)(v79 + 8) = v80;
            *v61 = 0LL;
          }
          *((_QWORD *)this + 4990) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 39912, 0LL);
          KeLeaveCriticalRegion();
        }
        *((_DWORD *)v15 + 7) |= 4u;
        v62 = (volatile signed __int32 *)v15[24];
        if ( v62 && _InterlockedExchangeAdd(v62 + 8, 0xFFFFFFFF) == 1 )
          ADAPTER_RENDER::NotifyDeferredDestructionComplete(
            *((ADAPTER_RENDER **)this + 2),
            (struct DXGTERMINATIONTRACKER *)v15[24]);
        v25 = 0LL;
        v24 = a3;
        goto LABEL_20;
      }
      v72 = WdLogNewEntry5_WdEvent(v69, v53);
      *(_QWORD *)(v72 + 24) = v14;
      *(_QWORD *)(v72 + 32) = v15;
      WdLogEvent5_WdEvent(v72);
      *((_BYTE *)v173 + 32) |= 2u;
      NewAllocOwner = VIDMM_GLOBAL::FindNewAllocOwner(this, (struct _VIDMM_GLOBAL_ALLOC *)v14);
      VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(this, (struct _VIDMM_GLOBAL_ALLOC *)v14, v173);
      v73 = VIDMM_GLOBAL::TransferAllocationOwnership(this, v15, v173, (PRKPROCESS **)NewAllocOwner);
      v75 = (struct _VIDMM_GLOBAL_ALLOC *)*(unsigned int *)(v14 + 84);
      v163 = !v73;
      if ( ((unsigned __int8)v75 & 4) != 0 )
      {
        v75 = *(struct _VIDMM_GLOBAL_ALLOC **)(v14 + 104);
        NewAllocOwner = v75;
      }
      v76 = WdLogNewEntry5_WdEvent(v75, v74);
      *(_QWORD *)(v76 + 24) = *(_QWORD *)(v14 + 104);
      WdLogEvent5_WdEvent(v76);
      v53 = NewAllocOwner;
    }
    else
    {
      v163 = 1;
    }
    v54 = 1;
    if ( (*(_BYTE *)(v14 + 92) & 3) == 3 )
      VIDMM_GLOBAL::TransferAllocationDecommit(v51, (struct _VIDMM_GLOBAL_ALLOC *)v14, v173, v53);
    goto LABEL_85;
  }
  if ( v22 != 113 )
  {
    if ( v22 != 206 )
    {
      switch ( v22 )
      {
        case 0x77u:
          updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
                      this,
                      *((PVOID *)a2 + 4),
                      (struct VIDMM_ALLOC **)v11);
          v25 = updated;
          if ( updated != -1073741267 )
            goto LABEL_117;
          v24 = a3;
          goto LABEL_212;
        case 0xCBu:
          if ( g_IsInternalReleaseOrDbg )
          {
            v92 = WdLogNewEntry5_WdTrace(v20);
            v11 = (__int64)a8;
            v10 = a3;
            *(_QWORD *)(v92 + 24) = v15;
          }
          if ( *(_BYTE *)(v14 + 96) )
          {
            v25 = 3223191814LL;
            goto LABEL_190;
          }
          if ( !*(_DWORD *)(v14 + 164) )
          {
            v82 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
              v82 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
              v11 = (__int64)a8;
              v10 = a3;
            }
            if ( *(_QWORD *)(v14 + 136) )
            {
              v83 = **(_DWORD **)(v14 + 520);
              if ( (v83 & 0x40000000) == 0
                && ((v83 & 0x20000000) == 0 || v83 < 0x80000000)
                && (v83 & 0x80000) == 0
                && (v83 & 0x20000) == 0 )
              {
                if ( *v82 )
                  WdLogNewEntry5_WdTrace(v82);
                VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                  *(VIDMM_WORKER_THREAD **)this,
                  (struct _VIDMM_GLOBAL_ALLOC *)v14);
                VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v15);
                VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
                v11 = (__int64)a8;
                v10 = a3;
              }
            }
          }
          v84 = 4;
          v85 = **(_DWORD **)(v14 + 520);
          if ( (v85 & 0x20000) != 0 )
          {
            v84 = *((_DWORD *)a2 + 8);
          }
          else if ( (v85 & 0x40000000) != 0 || v85 >= 0x80000000 )
          {
            v84 = 3;
          }
          updated = VIDMM_GLOBAL::PageInOneAllocation(
                      (__int64)this,
                      (__int64 **)v15,
                      v84,
                      a7,
                      v10,
                      (struct VIDMM_ALLOC **)v11);
          v25 = updated;
          if ( (updated & 0x80000000) == 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 164));
          v86 = (VIDMM_GLOBAL *)((char *)this + 3720);
          v87 = (VIDMM_GLOBAL *)*((_QWORD *)this + 465);
          if ( v87 != (VIDMM_GLOBAL *)((char *)this + 3720) )
          {
            do
            {
              v93 = (__int64 *)*((_QWORD *)v87 - 7);
              v94 = (VIDMM_DEVICE **)((char *)v87 - 56);
              v87 = *(VIDMM_GLOBAL **)v87;
              v95 = *v93;
              v96 = *(_DWORD *)(*v93 + 128);
              if ( v96 )
              {
                if ( v96 == 1 )
                  VIDMM_SEGMENT::ReclaimResource(*(VIDMM_LINEAR_POOL ***)(v95 + 136), (struct _VIDMM_GLOBAL_ALLOC *)v95);
                VIDMM_DEVICE::AddCommitment(v94[1], (struct VIDMM_ALLOC *)v94);
              }
            }
            while ( v87 != v86 );
            v25 = updated;
          }
          v24 = a3;
          *((_QWORD *)this + 466) = (char *)this + 3720;
          *(_QWORD *)v86 = v86;
          goto LABEL_20;
        case 0xCFu:
          if ( !*((_DWORD *)v15 + 38) && (*((_BYTE *)v15 + 25) & 1) == 0 )
          {
            if ( (*((_DWORD *)a2 + 8) & 1) != 0 )
              v11 = 1LL;
            else
              LOBYTE(v11) = 0;
            VIDMM_GLOBAL::EvictOneAllocation(this, (__int64 **)v15, v11);
          }
          _InterlockedDecrement((volatile signed __int32 *)v15 + 41);
          v25 = 0LL;
          v24 = a3;
          goto LABEL_20;
        case 0xD0u:
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v14;
          KeEnterCriticalRegion();
          v100 = v14 + 512;
          ExAcquirePushLockExclusiveEx(v14 + 512, 0LL);
          if ( *(_QWORD *)(v14 + 264) )
          {
            VIDMM_GLOBAL::EvictTemporaryAllocation(v101, (struct _VIDMM_GLOBAL_ALLOC *)v14);
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v14 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          VIDMM_GLOBAL::CalculateLockData(this, &v179, v15);
          if ( v179 == 4 )
          {
            v102 = a8;
            v24 = a3;
          }
          else
          {
            KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)v175 + 8LL), &ApcState);
            v102 = a8;
            v24 = a3;
            updated = VIDMM_GLOBAL::LockInternal(
                        this,
                        (struct VIDMM_LOCK2_DATA *)&v179,
                        (struct VIDMM_ALLOC *)v15,
                        *((void ***)a2 + 4),
                        *((_DWORD *)a2 + 10),
                        a3,
                        a8);
            KeUnstackDetachProcess(&ApcState);
            if ( v179 != 4 )
              goto LABEL_229;
          }
          updated = VIDMM_GLOBAL::LockInternal(
                      this,
                      (struct VIDMM_LOCK2_DATA *)&v179,
                      (struct VIDMM_ALLOC *)v15,
                      *((void ***)a2 + 4),
                      *((_DWORD *)a2 + 10),
                      v24,
                      v102);
LABEL_229:
          ExReleasePushLockExclusiveEx(v100, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_230;
        case 0xD1u:
          inited = VIDMM_GLOBAL::InitContextAllocation(
                     (ADAPTER_RENDER **)this,
                     (__int64 **)v15,
                     1,
                     v10,
                     (struct VIDMM_ALLOC **)v11);
          v24 = a3;
          v25 = inited;
          updated = inited;
          goto LABEL_20;
        case 0xD2u:
          v21 = *(unsigned __int16 *)(*(_QWORD *)(v14 + 520) + 4LL);
          if ( !(((*((_BYTE *)v15 + 25) & 1) != 0) | *((_DWORD *)v15 + 38)) || (unsigned __int16)v21 >= 2u )
            goto LABEL_198;
          v81 = VIDMM_GLOBAL::PageInOneAllocation(
                  (__int64)this,
                  (__int64 **)v15,
                  0,
                  a7,
                  v10,
                  (struct VIDMM_ALLOC **)v11);
          *(_DWORD *)(v14 + 80) &= ~0x40u;
          v25 = v81;
          v24 = a3;
          updated = v81;
          goto LABEL_20;
        case 0xD3u:
          v97 = (struct _VIDMM_GLOBAL_ALLOC *)(*((_QWORD *)a2 + 4) + 296LL);
          v168 = v97;
          v98 = *(struct _VIDMM_GLOBAL_ALLOC **)v97;
          if ( *(struct _VIDMM_GLOBAL_ALLOC **)v97 == v97 )
            goto LABEL_198;
          do
          {
            v99 = (__int64 *)*((_QWORD *)v98 - 2);
            if ( v99 != (__int64 *)((char *)v98 - 16) )
            {
              do
              {
                VIDMM_GLOBAL::EvictOneAllocation(this, (__int64 **)v99 - 5, 0LL);
                v99 = (__int64 *)*v99;
              }
              while ( v99 != (__int64 *)((char *)v98 - 16) );
              v97 = v168;
            }
            v98 = *(struct _VIDMM_GLOBAL_ALLOC **)v98;
          }
          while ( v98 != v97 );
          v25 = 0LL;
          goto LABEL_117;
        case 0xD4u:
          VIDMM_GLOBAL::UpdateAllocationPriority(this, (struct VIDMM_ALLOC *)v15, *((_DWORD *)a2 + 8));
          v25 = 0LL;
          goto LABEL_117;
        case 0xD5u:
          VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v16, 0, -1);
          VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)v16);
          v89 = 0;
          if ( !*(_QWORD *)(v16 + 176) )
          {
            v89 = 1;
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v187,
              (struct _KTHREAD **)(*(_QWORD *)v16 + 41536LL));
            VIDMM_GLOBAL::InsertToPenaltyBox(*(_QWORD *)v16, v16, 4LL);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v187);
          }
          if ( v15 )
            VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)v16, (VIDMM_DEVICE **)v15);
          else
            VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v16);
          VIDMM_GLOBAL::EvictFromFaultedList(v90, (struct VIDMM_DEVICE *)v16);
          updated = VIDMM_GLOBAL::PageInFromFaultedList(this, (struct VIDMM_DEVICE *)v16);
          VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v16, 0);
          VIDMM_DEVICE::ResumePagingQueues((VIDMM_DEVICE *)v16);
          if ( v89 )
          {
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v188,
              (struct _KTHREAD **)(*(_QWORD *)v16 + 41536LL));
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v91, (struct _LIST_ENTRY *)(v16 + 176));
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v188);
          }
          goto LABEL_198;
        case 0xD6u:
          v103 = *((_DWORD *)a2 + 12);
          v104 = *(_DWORD *)(v14 + 68);
          v105.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v14 + 72);
          v106 = *(_DWORD *)(v14 + 76) >> 7;
          LOBYTE(v106) = (*(_DWORD *)(v14 + 76) & 0x80) != 0;
          v176 = *(_DWORD *)(v14 + 76) & 0x3F;
          v107 = 472LL * v176;
          v174 = v106;
          v108 = v103 >> 1;
          LOBYTE(v108) = (v103 & 2) != 0;
          v109 = (v103 & 4) != 0;
          v180 = (VIDMM_PROCESS_ADAPTER_INFO *)v176;
          v110 = *((_QWORD *)this + 5021);
          v169 = (struct _VIDMM_GLOBAL_ALLOC *)v107;
          v175[0] = v104;
          LODWORD(v173) = v108;
          v170 = v109;
          v111 = v107 + v110;
          if ( (_BYTE)v108 )
          {
            v112 = *(_QWORD *)(v14 + 136);
            v104 = *((_DWORD *)a2 + 9);
            v175[0] = v104;
            if ( v112
              && *(_DWORD *)(v14 + 128)
              && !_bittest((const int *)&v104, (unsigned __int8)(*(_BYTE *)(v112 + 20) - *(_BYTE *)(v111 + 20))) )
            {
              VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                *(VIDMM_WORKER_THREAD **)this,
                (struct _VIDMM_GLOBAL_ALLOC *)v14);
              VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v15);
              VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
              v11 = (__int64)a8;
              v109 = v170;
              LOBYTE(v108) = (_BYTE)v173;
              v104 = v175[0];
            }
            *(_DWORD *)(v14 + 68) = v104;
            v113 = *(_DWORD *)(v14 + 76) ^ (*(_DWORD *)(v14 + 76) ^ (*((unsigned __int8 *)a2 + 53) << 6)) & 0x40;
            *(_DWORD *)(v14 + 76) = v113;
            v174 = *((unsigned __int8 *)a2 + 52);
            v114 = v113 ^ ((unsigned __int8)v113 ^ (unsigned __int8)((_BYTE)v174 << 7)) & 0x80;
            v107 = (__int64)v169;
            *(_DWORD *)(v14 + 76) = v114;
          }
          if ( (*((_DWORD *)a2 + 12) & 1) != 0 )
          {
            v115 = 1 << (*(_WORD *)(v111 + 28) - *(_BYTE *)(v111 + 20));
            if ( (*((_DWORD *)a2 + 11) & 1) != 0 )
            {
              if ( *(_DWORD *)(v14 + 128) && (*(_DWORD *)(*(_QWORD *)(v14 + 136) + 80LL) & 0x1000) != 0 )
              {
                VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                  *(VIDMM_WORKER_THREAD **)this,
                  (struct _VIDMM_GLOBAL_ALLOC *)v14);
                VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v15);
                VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
                v11 = (__int64)a8;
                v109 = v170;
                LOBYTE(v108) = (_BYTE)v173;
                v104 = v175[0];
              }
              if ( (*(_DWORD *)(v14 + 76) & 0x40) != 0 )
                *(_DWORD *)(v14 + 68) &= ~v115;
              *(_DWORD *)v15[12] |= 0x8000u;
            }
            v107 = (__int64)v169;
          }
          if ( !v109 )
            goto LABEL_266;
          v105.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)*((_DWORD *)a2 + 10);
          v116 = 0LL;
          v117 = 0LL;
          if ( v105.0 )
          {
            if ( (*(_BYTE *)&v105.0 & 0x1F) != 0 )
            {
              v116 = *(_QWORD *)(*((_QWORD *)this + 464)
                               + 8LL
                               * ((*((_DWORD *)a2 + 10) & 0x1Fu) + *(_DWORD *)(v107 + *((_QWORD *)this + 5021) + 20) - 1));
              v107 = (__int64)v169;
              LOBYTE(v174) = *(_BYTE *)(v116 + 80) & 1;
            }
            if ( ((v105.Value >> 6) & 0x1F) != 0 )
            {
              v107 = ((v105.Value >> 6) & 0x1F) - 1 + *(_DWORD *)(v107 + *((_QWORD *)this + 5021) + 20);
              v117 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v107);
            }
          }
          v118 = 0;
          if ( !*(_DWORD *)(v14 + 128) )
            goto LABEL_263;
          v119 = *(_QWORD *)(v14 + 136);
          if ( v116 == v119 || v117 == v119 )
          {
            if ( *(_DWORD *)(v14 + 72) == v105.0 || (v107 = *(_QWORD *)(v14 + 104)) == 0 || !*(_QWORD *)(v107 + 8) )
            {
LABEL_262:
              v109 = v170;
LABEL_263:
              v120 = (*(_DWORD *)(v14 + 76) ^ ((unsigned __int8)v174 << 10)) & 0x400;
              *(struct _D3DDDI_SEGMENTPREFERENCE *)(v14 + 72) = v105;
              *(_DWORD *)(v14 + 76) ^= v120;
              if ( v118 )
              {
                VidMmRecordAlloc(this, v14, *(_QWORD *)(v14 + 104), *(_QWORD *)(v14 + 136), *(_QWORD *)(v14 + 16), 0);
                v11 = (__int64)a8;
                v109 = v170;
              }
              v104 = v175[0];
              LOBYTE(v108) = (_BYTE)v173;
LABEL_266:
              v21 = *(unsigned int *)(v14 + 76);
              v121 = *(_DWORD *)(v14 + 76) >> 12;
              v174 = v121;
              if ( v109 && (_BYTE)v108 )
              {
                v107 = (unsigned int)v21 ^ ((unsigned int)v21 ^ (*((_DWORD *)a2 + 8) << 12)) & 0xF0000;
                *(_DWORD *)(v14 + 76) = v107;
                *(_DWORD *)(v14 + 76) = v107 ^ ((unsigned __int16)v107 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)a2 + 8) << 12)) & 0xF000;
              }
              if ( v109 != (_BYTE)v108 )
              {
                if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
                        (VIDMM_GLOBAL *)v107,
                        *(struct _D3DDDI_SEGMENTPREFERENCE *)(v14 + 72),
                        v104) )
                {
                  v124 = WdLogNewEntry5_WdAssertion(v123, v122);
                  *(_QWORD *)(v124 + 24) = 10274LL;
                  WdLogEvent5_WdAssertion(v124);
                  VidSchiMarkDeviceAsError((__int64)v15[1][4], 21);
                }
                MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v176, v105, &v177);
                v178 = 0;
                if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                        this,
                        v176,
                        v175[0],
                        MostPreferredSegment,
                        (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v178) )
                {
                  v127 = WdLogNewEntry5_WdAssertion(v126, v21);
                  *(_QWORD *)(v127 + 24) = 10286LL;
                  WdLogEvent5_WdAssertion(v127);
                  VidSchiMarkDeviceAsError((__int64)v15[1][4], 21);
                }
                v11 = (__int64)a8;
                *(_DWORD *)(v14 + 76) ^= (*(_DWORD *)(v14 + 76) ^ (v178 << 12)) & 0xF0000 ^ (*(_WORD *)(v14 + 76) ^ (unsigned __int16)((_WORD)v178 << 12)) & 0xF000;
              }
              v128 = v121 >> 4;
              if ( (v128 != (HIWORD(*(_DWORD *)(v14 + 76)) & 0xF)
                 || ((v121 ^ (unsigned __int8)(*(_DWORD *)(v14 + 76) >> 12)) & 0xF) != 0)
                && *((_BYTE *)v15 + 25) & 1 | *((_DWORD *)v15 + 38) )
              {
                v129 = *(_DWORD *)(v14 + 76) & 0x3F;
                v180 = *(VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 104) + 8LL) + 16LL)
                                                      + 8LL * (_QWORD)v180);
                v130 = *((_QWORD *)v180 + 6) + 264 * v129;
                DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
                  (DXGAUTOPUSHLOCKEXCLUSIVE *)v189,
                  (struct _KTHREAD **)v180 + 41);
                VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(v180);
                v134 = v174;
                if ( (((unsigned __int8)v174 ^ (unsigned __int8)(*(_DWORD *)(v14 + 76) >> 12)) & 0xF) != 0 )
                {
                  *(_QWORD *)(v130 + 8LL * (v174 & 0xF) + 136) -= *(_QWORD *)(v14 + 16);
                  v131 = (unsigned __int8)HIBYTE(*(_WORD *)(v14 + 76)) >> 4;
                  *(_QWORD *)(v130 + 8 * v131 + 136) += *(_QWORD *)(v14 + 16);
                }
                if ( v128 != (*(_WORD *)(v14 + 78) & 0xF) )
                {
                  *(_QWORD *)(v130 + 8LL * (v134 >> 4) + 72) -= *(_QWORD *)(v14 + 16);
                  v135 = v130 + 8LL * (*(_WORD *)(v14 + 78) & 0xF);
                  *(_QWORD *)(v135 + 72) += *(_QWORD *)(v14 + 16);
                }
                VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(v133, v131, v132);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v189);
                v11 = (__int64)a8;
              }
              *((_DWORD *)a2 + 12) &= 0xFFFFFFF8;
              if ( *((_BYTE *)v15 + 25) & 1 | *((_DWORD *)v15 + 38) )
              {
                v136 = *(_QWORD *)(v14 + 520);
                v24 = a3;
                if ( *(_WORD *)(v136 + 4) >= 2u )
                {
LABEL_230:
                  v25 = updated;
                }
                else
                {
                  v137 = VIDMM_GLOBAL::PageInOneAllocation(
                           (__int64)this,
                           (__int64 **)v15,
                           0,
                           a7,
                           a3,
                           (struct VIDMM_ALLOC **)v11);
                  v25 = v137;
                  updated = v137;
                }
                goto LABEL_20;
              }
              goto LABEL_198;
            }
            v118 = 1;
            VidMmRecordAlloc(this, v14, *(_QWORD *)(v14 + 104), v119, *(_QWORD *)(v14 + 16), 1);
          }
          else
          {
            VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
              *(VIDMM_WORKER_THREAD **)this,
              (struct _VIDMM_GLOBAL_ALLOC *)v14);
            VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v15);
            VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
          }
          v11 = (__int64)a8;
          goto LABEL_262;
        case 0xD7u:
          v138 = *((_QWORD *)a2 + 4);
          v139 = 0;
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v190,
            (struct _KTHREAD **)this + 4989);
          if ( *(_QWORD *)(v138 + 448) )
          {
            VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, (struct _VIDMM_GLOBAL_ALLOC *)v138);
            v139 = 1;
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v190);
          if ( v139 )
            VIDMM_GLOBAL::DecommitGlobalAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)v138);
          v24 = a3;
          v25 = 0LL;
          updated = 0;
          goto LABEL_20;
        default:
          v140 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, 1LL, v11);
          v140[5] = (int)v176;
          v140[3] = 270LL;
          v140[4] = 5LL;
          v140[6] = -1073741811LL;
          v140[7] = 0LL;
          WdLogEvent5_WdCriticalError(v140);
          v24 = a3;
          v25 = 0LL;
          goto LABEL_20;
      }
    }
    v63 = **v15;
    if ( !*((_DWORD *)v63 + 86) )
    {
LABEL_112:
      if ( (*((_BYTE *)v15 + 25) & 1) != 0 )
        v64 = 1;
      else
        v64 = v8;
      if ( v64 | *((_DWORD *)v15 + 38) && *(_WORD *)(*((_QWORD *)v63 + 65) + 4LL) < 2u )
      {
        v65 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (__int64 **)v15, 0, a7, v10, (struct VIDMM_ALLOC **)v11);
        v25 = v65;
        updated = v65;
LABEL_117:
        v24 = a3;
        goto LABEL_20;
      }
LABEL_198:
      v25 = updated;
      goto LABEL_117;
    }
    if ( !VIDMM_GLOBAL::NeedsApertureForLock(this, **v15) || (*((_DWORD *)v63 + 19) & 0x40) != 0 )
    {
      v11 = (__int64)a8;
      v21 = 1LL;
      goto LABEL_112;
    }
    v141 = WdLogNewEntry5_WdWarning(v68, v67);
    *(_QWORD *)(v141 + 24) = v63;
    WdLogEvent5_WdWarning(v141);
    v25 = 3221225473LL;
LABEL_190:
    updated = v25;
    goto LABEL_117;
  }
  v23 = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
          (VIDMM_GLOBAL *)v20,
          (struct _VIDMM_DEFERRED_COMMAND *)((char *)a2 + 32),
          (struct VIDMM_ALLOC **)v11);
  v24 = a3;
  v25 = v23;
  updated = v23;
  if ( v23 == -1073741267 )
  {
LABEL_212:
    *v24 = 1;
    goto LABEL_213;
  }
LABEL_20:
  if ( *v24 )
  {
LABEL_213:
    VIDMM_GLOBAL::EndPreparation(this, v21, 0LL, 0, 0LL, 0LL);
    goto LABEL_40;
  }
  v26 = (_DWORD *)*((_QWORD *)a2 + 3);
  if ( v26 )
    *v26 = v25;
  v27 = v181;
  v28 = a5;
  v29 = 0;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  v30 = *((_DWORD *)this + 1604) == 0;
  v185 = v27;
  v184 = a5;
  if ( !v30 )
  {
    do
    {
      v31 = 0;
      v32 = 472LL * v29;
      if ( *(_DWORD *)(v32 + *((_QWORD *)this + 5021) + 24) )
      {
        do
        {
          v33 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v31 + *(_DWORD *)(v32 + *((_QWORD *)this + 5021) + 20)));
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 144LL))(v33);
          ++v31;
        }
        while ( v31 < *(_DWORD *)(v32 + *((_QWORD *)this + 5021) + 24) );
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_p(v25, &EventPagingEndPreparation, v11, *((_QWORD *)this + v29 + 143));
      if ( *((_DWORD *)this + v29 + 414) != *((_DWORD *)this + v29 + 478)
        || *((_DWORD *)this + v29 + 542) != *((_DWORD *)this + v29 + 606) )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v29, 0, 0LL, 0LL, 0, 0);
      }
      v25 = *((_QWORD *)this + v29 + 143);
      if ( v25 )
        *(_DWORD *)(v25 + 172) = *(_DWORD *)(v25 + 168);
      ++v29;
    }
    while ( v29 < *((_DWORD *)this + 1604) );
    v15 = v183;
    v28 = a5;
    v27 = v181;
  }
  if ( *((_BYTE *)this + 41712) )
  {
    v158 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * *((unsigned int *)this + 10429));
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, *(_DWORD *)(v158 + 404));
    v159 = *(_QWORD *)(v158 + 48);
    v160 = *(_QWORD *)(v158 + 176);
    v171 = 0;
    VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
      v160,
      0,
      v159,
      0,
      (__int64)VIDMM_SEGMENT::ResumeDevicesOnAllocationCB,
      v158,
      0LL,
      (__int64)v186,
      (__int64)&v171);
    VIDMM_SEGMENT::ResumeFlipQueuesIfSuspendedForMove((VIDMM_SEGMENT *)v158);
    v28 = a5;
    *((_BYTE *)this + 41712) = 0;
    *((_DWORD *)this + 10429) = -1;
  }
  if ( v172 )
  {
    v34 = *((_QWORD *)this + 2);
    v182 = 0;
    VidSchSignalSyncObjectsFromGpu(
      *(unsigned int *)(*(_QWORD *)(v34 + 416) + 56LL),
      *(__int64 **)(*(_QWORD *)(v34 + 416) + 232LL),
      1u,
      (void **)&v185,
      0,
      &v184);
    v25 = *((unsigned int *)this + 1604);
    if ( (unsigned int)v25 > 1 )
      VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)this + 2) + 416LL), v27, v28, (unsigned int)((1 << v25) - 1));
  }
  *((_QWORD *)this + 805) = 0LL;
  *((_QWORD *)this + 806) = 0LL;
  *((_DWORD *)this + 2) = 0;
LABEL_40:
  if ( *(_DWORD *)a2 == 200 )
  {
    v35 = (struct _KEVENT *)(*((_QWORD *)a2 + 2) + 72LL);
LABEL_47:
    KeSetEvent(v35, 0, 0);
    goto LABEL_48;
  }
  if ( !*a3 && v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 40, 0xFFFFFFFF) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v25) + 24) = v15;
    v35 = (struct _KEVENT *)(v15 + 21);
    goto LABEL_47;
  }
LABEL_48:
  result = updated;
  *((_DWORD *)a2 + 19) = updated;
  return result;
}
