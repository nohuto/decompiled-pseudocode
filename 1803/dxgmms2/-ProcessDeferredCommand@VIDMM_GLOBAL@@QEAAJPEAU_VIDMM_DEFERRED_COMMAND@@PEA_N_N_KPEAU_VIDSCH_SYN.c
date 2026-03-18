/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C009E168 (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009E224 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0004CD4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0005084 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0005100 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0005148 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0005214 (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0005984 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 *     VidSchCancelDeviceCommand @ 0x1C002E0F8 (VidSchCancelDeviceCommand.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002F060 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0055F90 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E4BC (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C005E500 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005E61C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005EAB0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005FCC4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005FD88 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005FF5C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006007C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00600E8 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0060750 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0060D84 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0061B30 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0061D04 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C006307C (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C00637A0 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C006BF5C (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006C018 (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C0B4 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C006CDC4 (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C006D100 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C006D170 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0072E2C (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00759DC (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0076744 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00767CC (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00767F4 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00768D8 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0076900 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0079D04 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007A19C (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C009DC7C (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C009DD68 (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009DF90 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C009DFD0 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C009E058 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F5BC (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A0144 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C00A0244 (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C00A2354 (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A30C4 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00A30F4 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00A3C54 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00A42C8 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A4774 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A82F8 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetProcessGpuVa@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00AA118 (-GetProcessGpuVa@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STO.c)
 *     VidSchiResumeFlipQueues @ 0x1C00BC34C (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00BE7D0 (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        VIDMM_GLOBAL *this,
        __int64 a2,
        bool *a3,
        char a4,
        SIZE_T a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        unsigned __int8 a7,
        struct VIDMM_ALLOC **a8)
{
  unsigned int v8; // r10d
  bool v9; // r15
  bool *v10; // r9
  struct VIDMM_ALLOC **v11; // r8
  unsigned int *v12; // r14
  VIDMM_GLOBAL *v13; // rdi
  __int64 v14; // r13
  struct _VIDMM_GLOBAL_ALLOC ***v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r12
  int v18; // eax
  unsigned int v19; // r12d
  bool v20; // zf
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r12
  int v25; // eax
  bool *v26; // r13
  __int64 v27; // rdx
  int inited; // r12d
  int v29; // eax
  __int64 v30; // r12
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _VIDMM_GLOBAL_ALLOC **v33; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v34; // rax
  struct _VIDMM_GLOBAL_ALLOC **v35; // rcx
  struct _VIDMM_GLOBAL_ALLOC **v36; // rdx
  __int64 v37; // rdx
  VIDMM_GLOBAL *v38; // rcx
  VIDMM_DEVICE *v39; // r8
  struct _VIDMM_LOCAL_ALLOC *v40; // r12
  char v41; // bl
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // r12
  VIDMM_GLOBAL *v47; // rcx
  struct _VIDMM_LOCAL_ALLOC *v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 *v51; // r13
  __int64 v52; // rax
  int *v53; // rax
  bool v54; // r12
  SIZE_T v55; // rbx
  unsigned int v56; // r13d
  unsigned int v57; // ebx
  __int64 v58; // r12
  __int64 v59; // r15
  __int64 v60; // rcx
  _QWORD **v61; // r15
  __int64 v62; // r9
  int v63; // r8d
  _QWORD *v64; // r9
  struct _KEVENT *v65; // rcx
  __int64 result; // rax
  struct _VIDMM_GLOBAL_ALLOC *v67; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v68; // rcx
  struct _VIDMM_GLOBAL_ALLOC ***v69; // rax
  char v70; // al
  __int64 v71; // rax
  bool v72; // al
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  _QWORD *v78; // rax
  int v79; // eax
  __int64 **v80; // rcx
  int v81; // r9d
  int v82; // r9d
  int v83; // r9d
  __int64 v84; // rcx
  __int64 v85; // rcx
  int v86; // ecx
  int v87; // edx
  _QWORD *v88; // rbx
  _QWORD *v89; // r15
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  char v92; // r12
  VIDMM_GLOBAL *v93; // rcx
  VIDMM_GLOBAL *v94; // rcx
  __int64 v95; // rax
  __int64 *v96; // rax
  VIDMM_DEVICE **v97; // r12
  int v98; // eax
  _QWORD **v99; // r13
  _QWORD *i; // rbx
  _QWORD *j; // r15
  __int64 v102; // r15
  VIDMM_GLOBAL *v103; // rcx
  struct VIDMM_ALLOC **v104; // rbx
  int v105; // edx
  struct _D3DDDI_SEGMENTPREFERENCE v106; // ebx
  __int64 v107; // rcx
  char v108; // r10
  char v109; // r11
  __int64 v110; // r15
  unsigned __int8 v111; // r12
  __int64 v112; // rcx
  int v113; // r9d
  unsigned int v114; // r12d
  int v115; // eax
  unsigned int v116; // r9d
  int v117; // r10d
  int v118; // r15d
  int v119; // eax
  __int64 v120; // r10
  __int64 v121; // r11
  char v122; // r15
  __int64 v123; // r9
  __int64 v124; // rcx
  int v125; // eax
  unsigned __int64 v126; // rcx
  unsigned int v127; // r12d
  int v128; // eax
  unsigned int v129; // r15d
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rax
  unsigned int v137; // r15d
  __int64 v138; // r12
  __int64 v139; // rbx
  unsigned int v140; // r9d
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rax
  struct _VIDMM_GLOBAL_ALLOC *v144; // rbx
  __int64 v145; // r15
  _QWORD *v146; // rax
  __int64 v147; // rax
  __int64 v148; // rbx
  _QWORD *v149; // rax
  _QWORD *v150; // rax
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // rax
  VIDMM_GLOBAL *v154; // rcx
  __int64 v155; // rdx
  __int64 v156; // rax
  __int64 **v157; // rcx
  struct _VIDSCH_SYNC_OBJECT *v158; // r14
  struct VIDMM_MONITORED_FENCE_STORAGE *v159; // rsi
  struct VIDMM_PROCESS *v160; // r9
  VIDMM_FENCE_STORAGE_PAGE *v161; // rcx
  D3DGPU_VIRTUAL_ADDRESS ProcessGpuVa; // rax
  ADAPTER_RENDER *v163; // rcx
  int v164; // r12d
  __int64 v165; // r8
  _QWORD *v166; // r13
  _QWORD *v167; // rax
  VIDMM_DEVICE *v168; // rcx
  _QWORD *v169; // rdx
  __int64 v170; // rbx
  _QWORD *v171; // rax
  int v172; // [rsp+20h] [rbp-E0h]
  int updated; // [rsp+40h] [rbp-C0h]
  bool v174; // [rsp+44h] [rbp-BCh]
  bool v175; // [rsp+44h] [rbp-BCh]
  int v177; // [rsp+54h] [rbp-ACh]
  bool v178; // [rsp+54h] [rbp-ACh]
  char v179; // [rsp+54h] [rbp-ACh]
  char v181; // [rsp+5Ch] [rbp-A4h]
  unsigned __int8 v182; // [rsp+5Ch] [rbp-A4h]
  VIDMM_DEVICE *v183; // [rsp+68h] [rbp-98h]
  VIDMM_DEVICE *NewAllocOwner; // [rsp+68h] [rbp-98h]
  VIDMM_DEVICE *v185; // [rsp+68h] [rbp-98h]
  VIDMM_DEVICE *v186; // [rsp+68h] [rbp-98h]
  struct _VIDMM_LOCAL_ALLOC *v187; // [rsp+70h] [rbp-90h]
  unsigned int v188; // [rsp+70h] [rbp-90h]
  bool v189; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v190[2]; // [rsp+80h] [rbp-80h]
  int v191; // [rsp+88h] [rbp-78h] BYREF
  int v192; // [rsp+90h] [rbp-70h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v193; // [rsp+98h] [rbp-68h]
  struct _VIDSCH_SYNC_OBJECT *v194; // [rsp+A0h] [rbp-60h]
  SIZE_T v195; // [rsp+A8h] [rbp-58h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v196; // [rsp+B0h] [rbp-50h] BYREF
  int v197; // [rsp+B8h] [rbp-48h]
  int v198; // [rsp+BCh] [rbp-44h]
  struct _VIDMM_GLOBAL_ALLOC ***v199; // [rsp+C0h] [rbp-40h]
  __int64 v200; // [rsp+C8h] [rbp-38h]
  _BYTE v201[24]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v202[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v203[24]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v204[24]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v205[16]; // [rsp+130h] [rbp+30h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v206; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2F0h] [rbp+1F0h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = a3;
  v11 = a8;
  v12 = (unsigned int *)a2;
  v200 = a2;
  v13 = this;
  v193 = a6;
  v14 = 0LL;
  *a8 = 0LL;
  v15 = *(struct _VIDMM_GLOBAL_ALLOC ****)(a2 + 16);
  v199 = v15;
  *(_QWORD *)v190 = 0LL;
  v187 = 0LL;
  if ( v15 )
  {
    *(_QWORD *)v190 = *v15;
    v14 = **(_QWORD **)v190;
    v9 = (*(_DWORD *)(**(_QWORD **)v190 + 76LL) & 0x20000000) != 0;
    v187 = *(struct _VIDMM_LOCAL_ALLOC **)(**(_QWORD **)v190 + 104LL);
  }
  v16 = *(_QWORD *)(a2 + 8);
  v174 = 0;
  updated = 0;
  v183 = (VIDMM_DEVICE *)v16;
  if ( !v16 )
  {
    v16 = (__int64)v15[1];
    v183 = (VIDMM_DEVICE *)v16;
  }
  *v10 = 0;
  v17 = *((int *)this + 2);
  v18 = *(_DWORD *)a2;
  v177 = *(_DWORD *)a2;
  if ( (_DWORD)v17 )
  {
    v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a8);
    v90[3] = 270LL;
    v90[4] = 64LL;
    v90[5] = v13;
    v90[6] = v17;
    v90[7] = v177;
    WdLogEvent5_WdCriticalError(v90);
    v18 = v177;
    v8 = 0;
    v11 = a8;
    v10 = a3;
  }
  ++*((_QWORD *)v13 + 575);
  v19 = 0;
  v20 = *((_DWORD *)v13 + 1748) == 0;
  *((_DWORD *)v13 + 2) = v18;
  *((_DWORD *)v13 + 12) = -1;
  *((_QWORD *)v13 + 877) = v16;
  *((_QWORD *)v13 + 878) = v15;
  if ( !v20 )
  {
    do
    {
      v21 = v19;
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0p((__int64)this, &EventPagingStartPreparation, (__int64)v11, *((_QWORD *)v13 + v19 + 143));
        v8 = 0;
      }
      this = (VIDMM_GLOBAL *)*((unsigned int *)v13 + v19 + 414);
      if ( (_DWORD)this != *((_DWORD *)v13 + v19 + 478) || *((_DWORD *)v13 + v19 + 542) != *((_DWORD *)v13 + v19 + 606) )
      {
        v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v11);
        v91[3] = 270LL;
        v91[4] = 33LL;
        v91[5] = v13;
        v91[6] = 0LL;
        v91[7] = 0LL;
        WdLogEvent5_WdCriticalError(v91);
        this = (VIDMM_GLOBAL *)*((unsigned int *)v13 + v19 + 414);
        v8 = 0;
      }
      v22 = *((_DWORD *)v13 + v19++ + 542);
      *((_DWORD *)v13 + v21 + 1086) = v22;
      *((_DWORD *)v13 + v21 + 958) = 0;
      *((_DWORD *)v13 + v21 + 1022) = (_DWORD)this;
    }
    while ( v19 < *((_DWORD *)v13 + 1748) );
    v16 = (__int64)v183;
    v11 = a8;
    v10 = a3;
  }
  v23 = *(_QWORD *)(v16 + 32);
  if ( *(_BYTE *)(v23 + 188)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 184), 0, 0)
    || *(_BYTE *)(*((_QWORD *)v13 + 3) + 2414LL)
    || *(_BYTE *)(*((_QWORD *)v13 + 2) + 777LL) )
  {
    v12[19] = -1071775232;
    *((_BYTE *)v12 + 72) = 1;
  }
  else if ( !*((_BYTE *)v12 + 72) )
  {
    goto LABEL_19;
  }
  v23 = *v12;
  if ( (unsigned int)(v23 - 203) <= 0xB )
  {
    a2 = 2281LL;
    if ( _bittest((const int *)&a2, v23 - 203) )
    {
      inited = v12[19];
      updated = inited;
      goto LABEL_75;
    }
  }
  if ( (_DWORD)v23 == 113 )
    *((_BYTE *)v12 + 64) = 0;
LABEL_19:
  v24 = (int)*v12;
  if ( (_DWORD)v24 == 200 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v23) + 24) = v15;
    if ( *((_DWORD *)v15 + 26) || *((_DWORD *)v15 + 39) )
    {
      v148 = *((int *)v15 + 26);
      v149 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, a2, v11);
      v149[3] = 270LL;
      v149[4] = 42LL;
      v149[5] = v13;
      v149[6] = v15;
      v149[7] = v148;
      WdLogEvent5_WdCriticalError(v149);
      v16 = (__int64)v183;
    }
    v29 = *((_DWORD *)v15 + 7) & 3;
    if ( v29 == 2 )
    {
      VIDMM_GLOBAL::NotifyAllocationEviction(v13, (VIDMM_DEVICE **)v15, 0, 0LL, 0LL);
    }
    else if ( v29 == 1 )
    {
      a2 = (__int64)v15[7];
      v78 = v15 + 7;
      if ( *(struct _VIDMM_GLOBAL_ALLOC ****)(a2 + 8) != v15 + 7 || (v23 = (__int64)v15[8], *(_QWORD **)v23 != v78) )
        __fastfail(3u);
      *(_QWORD *)v23 = a2;
      *(_QWORD *)(a2 + 8) = v23;
      *((_DWORD *)v15 + 7) &= 0xFFFFFFFC;
      v15[8] = 0LL;
      *v78 = 0LL;
    }
    if ( (*((_BYTE *)v15 + 25) & 1) != 0 )
      VIDMM_GLOBAL::UnpinOneAllocation(v13, v15, 3LL);
    if ( (*((_DWORD *)v15 + 7) & 0x10) != 0 && g_IsInternalRelease )
    {
      v150 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, a2, v11);
      v150[5] = 0LL;
      v150[6] = 0LL;
      v150[7] = 0LL;
      v150[3] = 270LL;
      v150[4] = 9LL;
      WdLogEvent5_WdCriticalError(v150);
    }
    if ( v15 == *(struct _VIDMM_GLOBAL_ALLOC ****)(v16 + 240) )
      *(_QWORD *)(v16 + 240) = 0LL;
    v30 = *(_QWORD *)(v16 + 16) + 360LL;
    if ( *(_QWORD *)(v16 + 16) != -360LL && *(struct _KTHREAD **)(*(_QWORD *)(v16 + 16) + 368LL) == KeGetCurrentThread() )
    {
      v151 = WdLogNewEntry5_WdAssertion(v23, a2);
      *(_QWORD *)(v151 + 24) = 1306LL;
      WdLogEvent5_WdAssertion(v151);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v30, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v81 = *(_DWORD *)(v30 + 16);
        if ( v81 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v31, (__int64)&EventBlockThread, v32, v81);
      }
      ExAcquirePushLockExclusiveEx(v30, 0LL);
    }
    *(_QWORD *)(v30 + 8) = KeGetCurrentThread();
    if ( ((*((_BYTE *)v15 + 25) & 1) != 0) | *((_DWORD *)v15 + 38) )
    {
      VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v16 + 16));
      if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(v15) )
        VIDMM_DEVICE::DecrementCurrentUsage((VIDMM_DEVICE *)v16, (struct VIDMM_ALLOC *)v15);
      v33 = v15[14];
      v34 = (struct _VIDMM_GLOBAL_ALLOC *)(v15 + 14);
      if ( v33[1] != (struct _VIDMM_GLOBAL_ALLOC *)(v15 + 14) || (v35 = v15[15], *v35 != v34) )
        __fastfail(3u);
      *v35 = (struct _VIDMM_GLOBAL_ALLOC *)v33;
      v33[1] = (struct _VIDMM_GLOBAL_ALLOC *)v35;
      v36 = *(struct _VIDMM_GLOBAL_ALLOC ***)(v16 + 168);
      if ( *v36 != (struct _VIDMM_GLOBAL_ALLOC *)(v16 + 160) )
        __fastfail(3u);
      *(_QWORD *)v34 = v16 + 160;
      v15[15] = v36;
      *v36 = v34;
      *(_QWORD *)(v16 + 168) = v34;
      VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v16 + 16));
    }
    *((_DWORD *)v15 + 38) = 0;
    *(_QWORD *)(v30 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v30, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v14 + 320));
    if ( *((int *)v15[12] + 2) > 0 )
    {
      memset(v205, 0, sizeof(v205));
      v152 = *(_QWORD *)(v16 + 32);
      LODWORD(v205[5]) = 3;
      v205[6] = v15;
      VidSchCancelDeviceCommand(v152, (__int64)v205, 1, 0);
    }
    v40 = 0LL;
    v41 = 0;
    NewAllocOwner = 0LL;
    if ( (**(_DWORD **)(v14 + 504) & 0x20000000) != 0 )
    {
      v39 = (VIDMM_DEVICE *)*v15;
      v68 = (*v15)[5];
      v37 = (__int64)(*v15 + 5);
      if ( v68 == (struct _VIDMM_GLOBAL_ALLOC *)v37 )
      {
LABEL_126:
        v70 = 1;
      }
      else
      {
        while ( 1 )
        {
          v69 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)v68 - 40);
          v68 = *(struct _VIDMM_GLOBAL_ALLOC **)v68;
          if ( v69 != v15 && (*((_DWORD *)v69 + 7) & 4) == 0 )
            break;
          if ( v68 == (struct _VIDMM_GLOBAL_ALLOC *)v37 )
            goto LABEL_126;
        }
        v70 = 0;
      }
      if ( v39 != v187 )
      {
        if ( v70 )
          *((_BYTE *)v39 + 32) |= 2u;
        goto LABEL_51;
      }
      if ( !v70 )
      {
LABEL_51:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 320), v37, (__int64)v39);
        if ( v41 )
        {
          if ( v13 != (VIDMM_GLOBAL *)-40488LL && *((struct _KTHREAD **)v13 + 5062) == KeGetCurrentThread() )
          {
            v153 = WdLogNewEntry5_WdAssertion(v43, v42);
            *(_QWORD *)(v153 + 24) = 1306LL;
            WdLogEvent5_WdAssertion(v153);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v13 + 40488, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v83 = *((_DWORD *)v13 + 10126);
              if ( v83 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v44, (__int64)&EventBlockThread, v45, v83);
            }
            ExAcquirePushLockExclusiveEx((char *)v13 + 40488, 0LL);
          }
          v46 = (__int64 *)(v14 + 416);
          *((_QWORD *)v13 + 5062) = KeGetCurrentThread();
          if ( *(_QWORD *)(v14 + 416) )
          {
            v154 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)v13 + 3) + 200LL);
            VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
              v154,
              (struct _VIDMM_GLOBAL_ALLOC *)v14,
              *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)v187 + 1) + 16LL) + 8LL * (_QWORD)v154));
            if ( NewAllocOwner )
            {
              v155 = *(unsigned int *)(*((_QWORD *)v13 + 3) + 200LL);
              v156 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v155) + 416LL;
              v157 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v155) + 424LL);
              if ( *v157 != (__int64 *)v156 )
                __fastfail(3u);
              *v46 = v156;
              *(_QWORD *)(v14 + 424) = v157;
              *v157 = v46;
              *(_QWORD *)(v156 + 8) = v46;
            }
          }
          *((_QWORD *)v13 + 5062) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v13 + 40488, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v174 && !v9 )
        {
          v47 = *(VIDMM_GLOBAL **)(v14 + 136);
          if ( v47 )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(v47);
              v47 = *(VIDMM_GLOBAL **)(v14 + 136);
            }
            v48 = v187;
            LOBYTE(v172) = 1;
            (*(void (__fastcall **)(VIDMM_GLOBAL *, __int64, _QWORD, _QWORD, int, struct _VIDMM_LOCAL_ALLOC *))(*(_QWORD *)v47 + 48LL))(
              v47,
              v14,
              0LL,
              0LL,
              v172,
              v187);
            VIDMM_GLOBAL::FlushPagingBufferInternal(v13, *(_DWORD *)(v14 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          else
          {
            v48 = v187;
          }
          if ( *(_QWORD *)(v14 + 264) )
            VIDMM_GLOBAL::EvictTemporaryAllocation(v47, (struct _VIDMM_GLOBAL_ALLOC *)v14);
          if ( (*(_DWORD *)(v14 + 84) & 2) != 0 )
          {
            VIDMM_SEGMENT::UnlockAllocationBackingStore(v13, (struct _VIDMM_GLOBAL_ALLOC *)v14, v48);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(v13, *(_QWORD *)(v14 + 8));
            *(_DWORD *)(v14 + 84) &= ~2u;
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v13 + 40488, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v82 = *((_DWORD *)v13 + 10126);
              if ( v82 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v49, (__int64)&EventBlockThread, v50, v82);
            }
            ExAcquirePushLockExclusiveEx((char *)v13 + 40488, 0LL);
          }
          v51 = (__int64 *)(v14 + 400);
          *((_QWORD *)v13 + 5062) = KeGetCurrentThread();
          v52 = *v51;
          if ( *v51 )
          {
            if ( *(__int64 **)(v52 + 8) != v51 || (v80 = (__int64 **)v51[1], *v80 != v51) )
              __fastfail(3u);
            *v80 = (__int64 *)v52;
            *(_QWORD *)(v52 + 8) = v80;
            *v51 = 0LL;
          }
          *((_QWORD *)v13 + 5062) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v13 + 40488, 0LL);
          KeLeaveCriticalRegion();
        }
        *((_DWORD *)v15 + 7) |= 4u;
        v23 = (__int64)v15[24];
        if ( v23 && _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 32), 0xFFFFFFFF) == 1 )
          ADAPTER_RENDER::NotifyDeferredDestructionComplete(
            *((ADAPTER_RENDER **)v13 + 2),
            (struct DXGTERMINATIONTRACKER *)v15[24]);
        goto LABEL_74;
      }
      v71 = WdLogNewEntry5_WdEvent(v68, v37);
      *(_QWORD *)(v71 + 24) = v14;
      *(_QWORD *)(v71 + 32) = v15;
      WdLogEvent5_WdEvent(v71);
      *((_BYTE *)v187 + 32) |= 2u;
      NewAllocOwner = VIDMM_GLOBAL::FindNewAllocOwner(v13, (struct _VIDMM_GLOBAL_ALLOC *)v14);
      v40 = NewAllocOwner;
      VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(v13, (struct _VIDMM_GLOBAL_ALLOC *)v14, v187);
      v72 = VIDMM_GLOBAL::TransferAllocationOwnership(v13, (struct VIDMM_ALLOC *)v15, v187, NewAllocOwner);
      v74 = *(unsigned int *)(v14 + 84);
      v174 = !v72;
      if ( (v74 & 4) != 0 )
      {
        v40 = *(struct _VIDMM_LOCAL_ALLOC **)(v14 + 104);
        NewAllocOwner = v40;
      }
      v75 = WdLogNewEntry5_WdEvent(v74, v73);
      *(_QWORD *)(v75 + 24) = *(_QWORD *)(v14 + 104);
      WdLogEvent5_WdEvent(v75);
    }
    else
    {
      v174 = 1;
    }
    v41 = 1;
    if ( (*(_BYTE *)(v14 + 92) & 3) == 3 )
    {
      VIDMM_GLOBAL::TransferAllocationDecommit(v38, (struct _VIDMM_GLOBAL_ALLOC *)v14, v187, v40);
      v41 = 1;
    }
    goto LABEL_51;
  }
  if ( (_DWORD)v24 != 113 )
  {
    if ( (_DWORD)v24 != 206 )
    {
      switch ( (int)v24 )
      {
        case 119:
          updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
                      v13,
                      *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)v12 + 4),
                      v11);
          inited = updated;
          if ( updated != -1073741267 )
            goto LABEL_75;
          *a3 = 1;
          goto LABEL_220;
        case 203:
          if ( g_IsInternalReleaseOrDbg )
          {
            v95 = WdLogNewEntry5_WdTrace(v23);
            v11 = a8;
            v10 = a3;
            *(_QWORD *)(v95 + 24) = v15;
          }
          if ( *(_BYTE *)(v14 + 96) )
          {
            inited = -1071775482;
            updated = -1071775482;
          }
          else
          {
            v84 = *(unsigned int *)(*(_QWORD *)(v14 + 504) + 12LL);
            if ( !(_DWORD)v84 )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                WdLogNewEntry5_WdTrace(v84);
                v11 = a8;
                v10 = a3;
              }
              if ( *(_QWORD *)(v14 + 136) )
              {
                v85 = **(unsigned int **)(v14 + 504);
                if ( (v85 & 0x40000000) == 0
                  && ((v85 & 0x20000000) == 0 || (int)v85 >= 0)
                  && (v85 & 0x80000) == 0
                  && (v85 & 0x20000) == 0 )
                {
                  if ( g_IsInternalReleaseOrDbg )
                    WdLogNewEntry5_WdTrace(v85);
                  VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                    *(VIDMM_WORKER_THREAD **)v13,
                    (struct _VIDMM_GLOBAL_ALLOC *)v14);
                  VIDMM_GLOBAL::EvictAllocation(v13, (struct VIDMM_ALLOC *)v15);
                  VIDMM_GLOBAL::EvictAllReclaimedAllocation(v13);
                  v11 = a8;
                  v10 = a3;
                }
              }
            }
            v86 = 4;
            v87 = **(_DWORD **)(v14 + 504);
            if ( (v87 & 0x20000) != 0 )
            {
              v86 = v12[8];
            }
            else if ( (v87 & 0x40000000) != 0 || v87 < 0 )
            {
              v86 = 3;
            }
            updated = VIDMM_GLOBAL::PageInOneAllocation((__int64)v13, (__int64 **)v15, v86, a7, v10, v11);
            inited = updated;
            if ( updated >= 0 )
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 504) + 12LL));
            v88 = (_QWORD *)((char *)v13 + 3720);
            v89 = (_QWORD *)*((_QWORD *)v13 + 465);
            if ( v89 != (_QWORD *)((char *)v13 + 3720) )
            {
              do
              {
                v96 = (__int64 *)*(v89 - 7);
                v97 = (VIDMM_DEVICE **)(v89 - 7);
                v89 = (_QWORD *)*v89;
                v23 = *v96;
                v98 = *(_DWORD *)(*v96 + 128);
                if ( v98 )
                {
                  if ( v98 == 1 )
                    VIDMM_SEGMENT::ReclaimResource(*(VIDMM_SEGMENT **)(v23 + 136), (struct _VIDMM_GLOBAL_ALLOC *)v23);
                  VIDMM_DEVICE::AddCommitment(v97[1], (struct VIDMM_ALLOC *)v97);
                }
              }
              while ( v89 != v88 );
              inited = updated;
            }
            *((_QWORD *)v13 + 466) = (char *)v13 + 3720;
            *v88 = v88;
          }
          goto LABEL_75;
        case 207:
          if ( !*((_DWORD *)v15 + 38) && (*((_BYTE *)v15 + 25) & 1) == 0 )
          {
            LOBYTE(v11) = (v12[8] & 1) != 0;
            VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)v13, (struct VIDMM_ALLOC *)v15, (__int64)v11);
          }
          _InterlockedDecrement((volatile signed __int32 *)v15 + 41);
          goto LABEL_74;
        case 208:
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v23) + 24) = v14;
          KeEnterCriticalRegion();
          v102 = v14 + 480;
          ExAcquirePushLockExclusiveEx(v14 + 480, 0LL);
          if ( *(_QWORD *)(v14 + 264) )
          {
            VIDMM_GLOBAL::EvictTemporaryAllocation(v103, (struct _VIDMM_GLOBAL_ALLOC *)v14);
            VIDMM_GLOBAL::FlushPagingBufferInternal(v13, *(_DWORD *)(v14 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          VIDMM_GLOBAL::CalculateLockData(v13, &v192, v15);
          if ( v192 == 4 )
          {
            v104 = a8;
            v26 = a3;
          }
          else
          {
            KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)v190 + 8LL), &ApcState);
            v104 = a8;
            v26 = a3;
            updated = VIDMM_GLOBAL::LockInternal(
                        v13,
                        (struct VIDMM_LOCK2_DATA *)&v192,
                        (struct VIDMM_ALLOC *)v15,
                        *((void ***)v12 + 4),
                        v12[10],
                        a3,
                        a8);
            inited = updated;
            KeUnstackDetachProcess(&ApcState);
            if ( v192 != 4 )
              goto LABEL_235;
          }
          inited = VIDMM_GLOBAL::LockInternal(
                     v13,
                     (struct VIDMM_LOCK2_DATA *)&v192,
                     (struct VIDMM_ALLOC *)v15,
                     *((void ***)v12 + 4),
                     v12[10],
                     v26,
                     v104);
          updated = inited;
LABEL_235:
          ExReleasePushLockExclusiveEx(v102, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_76;
        case 209:
          inited = VIDMM_GLOBAL::InitContextAllocation((ADAPTER_RENDER **)v13, (__int64 **)v15, 1, v10, v11);
          updated = inited;
          goto LABEL_75;
        case 210:
          v23 = (*((_BYTE *)v15 + 25) & 1) != 0;
          if ( !((unsigned int)v23 | *((_DWORD *)v15 + 38)) || *(_WORD *)(*(_QWORD *)(v14 + 504) + 4LL) >= 2u )
            goto LABEL_74;
          v79 = VIDMM_GLOBAL::PageInOneAllocation((__int64)v13, (__int64 **)v15, 0, a7, v10, v11);
          *(_DWORD *)(v14 + 80) &= ~0x40u;
          inited = v79;
          updated = v79;
          goto LABEL_75;
        case 211:
          v99 = (_QWORD **)(*((_QWORD *)v12 + 4) + 296LL);
          for ( i = *v99; i != v99; i = (_QWORD *)*i )
          {
            for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
              VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)v13, (struct VIDMM_ALLOC *)(j - 5), 0LL);
          }
          goto LABEL_74;
        case 212:
          VIDMM_GLOBAL::UpdateAllocationPriority(v13, (struct VIDMM_ALLOC *)v15, v12[8]);
          goto LABEL_74;
        case 213:
          VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v16);
          VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)v16);
          v92 = 0;
          if ( !*(_QWORD *)(v16 + 176) )
          {
            v92 = 1;
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v201,
              (struct _KTHREAD **)(*(_QWORD *)v16 + 41816LL));
            VIDMM_GLOBAL::InsertToPenaltyBox(*(_QWORD *)v16, v16, 4LL);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v201);
          }
          if ( v15 )
            VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)v16, (VIDMM_DEVICE **)v15);
          else
            VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v16);
          VIDMM_GLOBAL::EvictFromFaultedList(v93, (struct VIDMM_DEVICE *)v16);
          updated = VIDMM_GLOBAL::PageInFromFaultedList(v13, (struct VIDMM_DEVICE *)v16);
          VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v16);
          VIDMM_DEVICE::ResumePagingQueues((VIDMM_DEVICE *)v16);
          if ( v92 )
          {
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v202,
              (struct _KTHREAD **)(*(_QWORD *)v16 + 41816LL));
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v94, (struct _LIST_ENTRY *)(v16 + 176));
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v202);
          }
          goto LABEL_74;
        case 214:
          v105 = *(_DWORD *)(v14 + 76);
          v106.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v14 + 72);
          v107 = 1560LL * (v105 & 0x3F);
          v108 = (v12[12] & 2) != 0;
          v109 = (v12[12] & 4) != 0;
          v110 = v107 + *((_QWORD *)v13 + 5090);
          v188 = v105 & 0x3F;
          v111 = (v105 & 0x80) != 0;
          v194 = (struct _VIDSCH_SYNC_OBJECT *)(v105 & 0x3F);
          v185 = (VIDMM_DEVICE *)v107;
          v190[0] = *(_DWORD *)(v14 + 68);
          v181 = v108;
          v179 = v109;
          if ( v108 )
          {
            v112 = *(_QWORD *)(v14 + 136);
            v113 = v105;
            v114 = v12[9];
            v190[0] = v114;
            if ( v112
              && *(_DWORD *)(v14 + 128)
              && !_bittest((const int *)&v114, (unsigned __int8)(*(_BYTE *)(v112 + 20) - *(_BYTE *)(v110 + 20))) )
            {
              VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                *(VIDMM_WORKER_THREAD **)v13,
                (struct _VIDMM_GLOBAL_ALLOC *)v14);
              VIDMM_GLOBAL::EvictAllocation(v13, (struct VIDMM_ALLOC *)v15);
              VIDMM_GLOBAL::EvictAllReclaimedAllocation(v13);
              v113 = *(_DWORD *)(v14 + 76);
              v11 = a8;
              v109 = v179;
              v108 = v181;
            }
            v107 = (__int64)v185;
            *(_DWORD *)(v14 + 68) = v114;
            v115 = v113 ^ ((unsigned __int8)v113 ^ (unsigned __int8)(*((_BYTE *)v12 + 53) << 6)) & 0x40;
            *(_DWORD *)(v14 + 76) = v115;
            v111 = *((_BYTE *)v12 + 52);
            v105 = v115 ^ ((unsigned __int8)v115 ^ (unsigned __int8)(v111 << 7)) & 0x80;
            *(_DWORD *)(v14 + 76) = v105;
          }
          v116 = v105;
          v175 = 0;
          if ( (v12[12] & 1) != 0 )
          {
            v117 = *(_DWORD *)v15[12];
            if ( (v117 & 0x8000) == 0 )
            {
              v118 = 1 << (*(_WORD *)(v110 + 28) - *(_BYTE *)(v110 + 20));
              if ( (v12[11] & 1) != 0 )
              {
                LOBYTE(v119) = v105;
                if ( *(_DWORD *)(v14 + 128) )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)(v14 + 136) + 80LL) & 0x1000) != 0 )
                  {
                    VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                      *(VIDMM_WORKER_THREAD **)v13,
                      (struct _VIDMM_GLOBAL_ALLOC *)v14);
                    VIDMM_GLOBAL::EvictAllocation(v13, (struct VIDMM_ALLOC *)v15);
                    VIDMM_GLOBAL::EvictAllReclaimedAllocation(v13);
                    v119 = *(_DWORD *)(v14 + 76);
                    v11 = a8;
                    v109 = v179;
                  }
                  else
                  {
                    LOBYTE(v119) = v105;
                    v175 = (v117 & 0x10000) != 0;
                  }
                }
                if ( (v119 & 0x40) != 0 )
                  *(_DWORD *)(v14 + 68) &= ~v118;
                *(_DWORD *)v15[12] |= 0x8000u;
                v116 = *(_DWORD *)(v14 + 76);
              }
              v107 = (__int64)v185;
            }
            v108 = v181;
          }
          v27 = 0LL;
          if ( !v109 )
            goto LABEL_274;
          v106.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)v12[10];
          v120 = 0LL;
          v121 = 0LL;
          if ( v106.0 )
          {
            if ( (*(_BYTE *)&v106.0 & 0x1F) != 0 )
            {
              v120 = *(_QWORD *)(*((_QWORD *)v13 + 464)
                               + 8LL * ((v12[10] & 0x1F) + *(_DWORD *)(*((_QWORD *)v13 + 5090) + v107 + 20) - 1));
              v107 = (__int64)v185;
              v111 = *(_BYTE *)(v120 + 80) & 1;
            }
            if ( ((v106.Value >> 6) & 0x1F) != 0 )
              v121 = *(_QWORD *)(*((_QWORD *)v13 + 464)
                               + 8LL
                               * (((v106.Value >> 6) & 0x1F) - 1 + *(_DWORD *)(*((_QWORD *)v13 + 5090) + v107 + 20)));
            v27 = 0LL;
          }
          v122 = 0;
          if ( !*(_DWORD *)(v14 + 128) )
            goto LABEL_271;
          v123 = *(_QWORD *)(v14 + 136);
          if ( v120 == v123 || v121 == v123 )
          {
            if ( *(_DWORD *)(v14 + 72) == v106.0 || (v124 = *(_QWORD *)(v14 + 104)) == 0 || !*(_QWORD *)(v124 + 8) )
            {
LABEL_271:
              v125 = (*(_DWORD *)(v14 + 76) ^ (v111 << 10)) & 0x400;
              *(struct _D3DDDI_SEGMENTPREFERENCE *)(v14 + 72) = v106;
              *(_DWORD *)(v14 + 76) ^= v125;
              v116 = *(_DWORD *)(v14 + 76);
              if ( v122 )
              {
                VidMmRecordAlloc(v13, v14, *(_QWORD *)(v14 + 104), *(_QWORD *)(v14 + 136), *(_QWORD *)(v14 + 16), 0);
                v116 = *(_DWORD *)(v14 + 76);
                v27 = 0LL;
                v11 = a8;
              }
              v108 = v181;
              v109 = v179;
LABEL_274:
              v126 = v116;
              v127 = (unsigned __int8)(v116 >> 12);
              v182 = v116 >> 12;
              if ( v109 && v108 )
              {
                v128 = v116 ^ (v116 ^ (v12[8] << 12)) & 0xF0000;
                *(_DWORD *)(v14 + 76) = v128;
                v126 = v128 ^ ((unsigned __int16)v128 ^ (unsigned __int16)((unsigned __int16)v12[8] << 12)) & 0xF000u;
                *(_DWORD *)(v14 + 76) = v126;
              }
              if ( v109 != v108 )
              {
                v129 = v190[0];
                if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
                        (VIDMM_GLOBAL *)v126,
                        *(struct _D3DDDI_SEGMENTPREFERENCE *)(v14 + 72),
                        v190[0]) )
                {
                  v132 = WdLogNewEntry5_WdAssertion(v131, v130);
                  *(_QWORD *)(v132 + 24) = 10838LL;
                  WdLogEvent5_WdAssertion(v132);
                  VidSchiMarkDeviceAsError((__int64)v15[1][4], 21);
                }
                MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(v13, v188, v106, &v189);
                v191 = 0;
                if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                        v13,
                        v188,
                        v129,
                        MostPreferredSegment,
                        (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v191) )
                {
                  v136 = WdLogNewEntry5_WdAssertion(v135, v134);
                  *(_QWORD *)(v136 + 24) = 10850LL;
                  WdLogEvent5_WdAssertion(v136);
                  VidSchiMarkDeviceAsError((__int64)v15[1][4], 21);
                }
                v11 = a8;
                LODWORD(v126) = *(_DWORD *)(v14 + 76) ^ (*(_DWORD *)(v14 + 76) ^ (v191 << 12)) & 0xF0000 ^ (*(_WORD *)(v14 + 76) ^ (unsigned __int16)((_WORD)v191 << 12)) & 0xF000;
                *(_DWORD *)(v14 + 76) = v126;
                v27 = 0LL;
              }
              v137 = v127 >> 4;
              if ( (v127 >> 4 != (WORD1(v126) & 0xF)
                 || (((unsigned __int8)v127 ^ (unsigned __int8)((unsigned int)v126 >> 12)) & 0xF) != 0)
                && *((_BYTE *)v15 + 25) & 1 | *((_DWORD *)v15 + 38) )
              {
                v138 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 104) + 8LL) + 16LL) + 8LL * (_QWORD)v194);
                v139 = *(_QWORD *)(v138 + 48) + 296LL * (*(_DWORD *)(v14 + 76) & 0x3F);
                DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
                  (DXGAUTOPUSHLOCKEXCLUSIVE *)v203,
                  (struct _KTHREAD **)(v138 + 360));
                VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v138);
                v140 = *(_DWORD *)(v14 + 76);
                if ( ((v182 ^ (unsigned __int8)(v140 >> 12)) & 0xF) != 0 )
                {
                  *(_QWORD *)(v139 + 8LL * (v182 & 0xF) + 136) -= *(_QWORD *)(v14 + 16);
                  v141 = (unsigned __int8)HIBYTE(*(_WORD *)(v14 + 76)) >> 4;
                  *(_QWORD *)(v139 + 8 * v141 + 136) += *(_QWORD *)(v14 + 16);
                  v140 = *(_DWORD *)(v14 + 76);
                }
                if ( v137 != (HIWORD(v140) & 0xF) )
                {
                  *(_QWORD *)(v139 + 8LL * (v182 >> 4) + 72) -= *(_QWORD *)(v14 + 16);
                  v142 = v139 + 8LL * (*(_WORD *)(v14 + 78) & 0xF);
                  *(_QWORD *)(v142 + 72) += *(_QWORD *)(v14 + 16);
                }
                VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v138);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v203);
                v11 = a8;
                v27 = 0LL;
              }
              v12[12] &= 0xFFFFFFF8;
              if ( v175 && *(_QWORD *)(v14 + 136) )
              {
                LOBYTE(v11) = 1;
                VIDMM_GLOBAL::NotifyResidency(
                  (ADAPTER_RENDER **)v13,
                  (struct _VIDMM_GLOBAL_ALLOC *)v14,
                  (struct _VIDMM_GLOBAL_ALLOC *)v11);
                v11 = a8;
                v27 = 0LL;
              }
              v23 = *((_BYTE *)v15 + 25) & 1;
              if ( !((unsigned int)v23 | *((_DWORD *)v15 + 38)) )
              {
                inited = 0;
                v26 = a3;
                goto LABEL_77;
              }
              v143 = *(_QWORD *)(v14 + 504);
              v26 = a3;
              if ( *(_WORD *)(v143 + 4) >= 2u )
              {
                inited = 0;
                goto LABEL_77;
              }
              inited = VIDMM_GLOBAL::PageInOneAllocation((__int64)v13, (__int64 **)v15, 0, a7, a3, v11);
              updated = inited;
LABEL_76:
              v27 = 0LL;
              goto LABEL_77;
            }
            v122 = 1;
            VidMmRecordAlloc(v13, v14, *(_QWORD *)(v14 + 104), v123, *(_QWORD *)(v14 + 16), 1);
          }
          else
          {
            VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
              *(VIDMM_WORKER_THREAD **)v13,
              (struct _VIDMM_GLOBAL_ALLOC *)v14);
            VIDMM_GLOBAL::EvictAllocation(v13, (struct VIDMM_ALLOC *)v15);
            VIDMM_GLOBAL::EvictAllReclaimedAllocation(v13);
          }
          v11 = a8;
          v27 = 0LL;
          goto LABEL_271;
        case 215:
          v144 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v12 + 4);
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v204,
            (struct _KTHREAD **)v13 + 5061);
          v145 = *((_QWORD *)v144 + 52);
          if ( v145 )
            VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v13, v144);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v204);
          if ( v145 )
            VIDMM_GLOBAL::DecommitGlobalAllocation(v13, v144);
          v26 = a3;
          v27 = 0LL;
          inited = 0;
          updated = 0;
          goto LABEL_77;
        default:
          v146 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, 0x1C0000000uLL, v11);
          v146[3] = 270LL;
          v146[4] = 5LL;
          v146[5] = v24;
          v146[6] = -1073741811LL;
          v146[7] = 0LL;
          WdLogEvent5_WdCriticalError(v146);
          goto LABEL_74;
      }
    }
    v67 = **v15;
    if ( *((_DWORD *)v67 + 86) )
    {
      if ( VIDMM_GLOBAL::NeedsApertureForLock(v13, **v15) && (*((_DWORD *)v67 + 19) & 0x40) == 0 )
      {
        v147 = WdLogNewEntry5_WdWarning(v77, v76);
        *(_QWORD *)(v147 + 24) = v67;
        WdLogEvent5_WdWarning(v147);
        inited = -1073741823;
        updated = -1073741823;
        goto LABEL_75;
      }
      v11 = a8;
    }
    if ( (*((_BYTE *)v15 + 25) & 1) != 0 )
      v23 = 1LL;
    else
      v23 = v8;
    if ( (unsigned int)v23 | *((_DWORD *)v15 + 38) && *(_WORD *)(*((_QWORD *)v67 + 63) + 4LL) < 2u )
    {
      inited = VIDMM_GLOBAL::PageInOneAllocation((__int64)v13, (__int64 **)v15, 0, a7, v10, v11);
      updated = inited;
      goto LABEL_75;
    }
LABEL_74:
    inited = updated;
LABEL_75:
    v26 = a3;
    goto LABEL_76;
  }
  v25 = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
          (VIDMM_GLOBAL *)v23,
          (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)(v12 + 8),
          v11);
  v26 = a3;
  v27 = 0LL;
  updated = v25;
  inited = v25;
  if ( v25 == -1073741267 )
  {
    *a3 = 1;
LABEL_220:
    VIDMM_GLOBAL::EndPreparation(v13, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    goto LABEL_104;
  }
LABEL_77:
  if ( *v26 )
    goto LABEL_220;
  v53 = (int *)*((_QWORD *)v12 + 3);
  if ( v53 )
    *v53 = inited;
  v54 = 0;
  v55 = a5;
  v56 = 0;
  v196 = v193;
  *((_QWORD *)v13 + 466) = (char *)v13 + 3720;
  *((_QWORD *)v13 + 465) = (char *)v13 + 3720;
  v20 = *((_DWORD *)v13 + 1748) == 0;
  v195 = a5;
  v178 = 0;
  if ( !v20 )
  {
    while ( 1 )
    {
      v57 = 0;
      v58 = v56;
      v59 = 1560LL * v56;
      if ( *(_DWORD *)(v59 + *((_QWORD *)v13 + 5090) + 24) )
      {
        do
        {
          v60 = *(_QWORD *)(*((_QWORD *)v13 + 464) + 8LL * (v57 + *(_DWORD *)(v59 + *((_QWORD *)v13 + 5090) + 20)));
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v60 + 160LL))(v60, v27);
          ++v57;
        }
        while ( v57 < *(_DWORD *)(v59 + *((_QWORD *)v13 + 5090) + 24) );
      }
      if ( !a4 )
        goto LABEL_86;
      v23 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 528LL);
      if ( *(_BYTE *)(v23 + 54)
        && !*((_BYTE *)v13 + 7072)
        && *((_QWORD *)v13 + v56 + 143)
        && (v23 = *(unsigned int *)(*((_QWORD *)v13 + v56 + 79) + 32LL), (v23 & 4) != 0) )
      {
        v158 = v193;
        v194 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v13 + v56 + 746);
        if ( v194 != v193 )
          goto LABEL_324;
        if ( !*((_BYTE *)v13 + v56 + 4617) )
        {
          *((_BYTE *)v13 + v56 + 4617) = 1;
LABEL_324:
          VIDMM_GLOBAL::SetupForBuildPagingBuffer(v13, v56, (struct _VIDMM_GLOBAL_ALLOC *)v11, &v206);
          v159 = (struct _VIDSCH_SYNC_OBJECT *)((char *)v158 + 48);
          do
          {
            VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(v13, v56, 0LL, &v206);
            v160 = (struct VIDMM_PROCESS *)*((_QWORD *)v13 + 5112);
            v161 = *(VIDMM_FENCE_STORAGE_PAGE **)v159;
            v206.Operation = DXGK_OPERATION_SIGNAL_MONITORED_FENCE;
            v206.Fill.FillSize = a5;
            ProcessGpuVa = VIDMM_FENCE_STORAGE_PAGE::GetProcessGpuVa(v161, v13, v159, v160);
            v163 = (ADAPTER_RENDER *)*((_QWORD *)v13 + 2);
            v206.UpdateContextAllocation.ContextAllocation = ProcessGpuVa;
            v164 = ADAPTER_RENDER::DdiBuildPagingBuffer(v163, &v206);
            VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(v13, v56, 0LL, &v206, v164, 0, 0LL);
          }
          while ( v164 == -1071775743 );
          v178 = v164 >= 0;
          v58 = v56;
          if ( v194 == v193 )
            *((_BYTE *)v13 + v56 + 4617) = 0;
          goto LABEL_86;
        }
        v178 = 1;
      }
      else
      {
        v178 = 0;
      }
LABEL_86:
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0p(v23, &EventPagingEndPreparation, (__int64)v11, *((_QWORD *)v13 + v58 + 143));
      if ( *((_DWORD *)v13 + v58 + 414) != *((_DWORD *)v13 + v58 + 478)
        || *((_DWORD *)v13 + v58 + 542) != *((_DWORD *)v13 + v58 + 606) )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal(v13, v56, 0, 0LL, 0LL, 0, 0);
      }
      v23 = *((_QWORD *)v13 + v58 + 143);
      if ( v23 )
        *(_DWORD *)(v23 + 172) = *(_DWORD *)(v23 + 168);
      ++v56;
      v27 = 0LL;
      if ( v56 >= *((_DWORD *)v13 + 1748) )
      {
        v15 = v199;
        v12 = (unsigned int *)v200;
        v54 = v178;
        v55 = a5;
        break;
      }
    }
  }
  v61 = (_QWORD **)((char *)v13 + 42000);
  if ( *v61 != v61 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v13, 0xFFFFFFFF);
    v166 = *v61;
    if ( *v61 != v61 )
    {
      do
      {
        v167 = (_QWORD *)*v166;
        v168 = (VIDMM_DEVICE *)(v166 - 36);
        v186 = (VIDMM_DEVICE *)(v166 - 36);
        if ( *(_QWORD **)(*v166 + 8LL) != v166 || (v169 = (_QWORD *)v166[1], (_QWORD *)*v169 != v166) )
          __fastfail(3u);
        *v169 = v167;
        v167[1] = v169;
        *v166 = 0LL;
        v166 = v167;
        if ( (*((_DWORD *)v168 + 13) & 7) != 0 )
        {
          v170 = *((_QWORD *)v168 + 4);
          v171 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v168, v169, v165);
          v171[5] = v186;
          v171[3] = 270LL;
          v171[4] = 63LL;
          v171[6] = v170;
          v171[7] = 0LL;
          WdLogEvent5_WdCriticalError(v171);
          v168 = v186;
        }
        VIDMM_DEVICE::ResumeSchedulerDevice(v168);
      }
      while ( v166 != v61 );
      v55 = a5;
    }
  }
  if ( *((_BYTE *)v13 + 42016) )
  {
    VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)v13 + 2) + 528LL), 0xFFFFFFFFLL);
    *((_BYTE *)v13 + 42016) = 0;
  }
  if ( a4 && !v54 )
  {
    v62 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 528LL);
    if ( *(_BYTE *)(v62 + 54) )
    {
      v197 = 0;
      VidSchSignalSyncObjectsFromCpu((_QWORD *)1, (__int64)&v196, 0, &v195, 0);
    }
    else
    {
      v63 = *(_DWORD *)(v62 + 60);
      v64 = *(_QWORD **)(v62 + 240);
      v198 = 0;
      VidSchSignalSyncObjectsFromGpu(0LL, 0LL, v63, v64, 1u, (void **)&v196, 0, &v195);
    }
    v23 = *((unsigned int *)v13 + 1748);
    if ( (unsigned int)v23 > 1 )
      VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)v13 + 2) + 528LL), v193, v55, (unsigned int)((1 << v23) - 1));
  }
  *((_QWORD *)v13 + 877) = 0LL;
  *((_QWORD *)v13 + 878) = 0LL;
  *((_DWORD *)v13 + 2) = 0;
LABEL_104:
  if ( *v12 == 200 )
  {
    v65 = (struct _KEVENT *)(*((_QWORD *)v12 + 2) + 72LL);
LABEL_111:
    KeSetEvent(v65, 0, 0);
    goto LABEL_112;
  }
  if ( !*a3 && v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 40, 0xFFFFFFFF) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v23) + 24) = v15;
    v65 = (struct _KEVENT *)(v15 + 21);
    goto LABEL_111;
  }
LABEL_112:
  result = (unsigned int)updated;
  v12[19] = updated;
  return result;
}
