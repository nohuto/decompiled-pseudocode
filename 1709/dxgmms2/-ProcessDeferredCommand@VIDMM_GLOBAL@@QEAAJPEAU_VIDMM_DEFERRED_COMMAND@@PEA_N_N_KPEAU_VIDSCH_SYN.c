/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C00990B8 (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0099174 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001B34 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0001D88 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0001E10 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C000200C (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007290 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013400 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 *     VidSchCancelDeviceCommand @ 0x1C002B0A8 (VidSchCancelDeviceCommand.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004D0D8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004F6AC (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0050BE4 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0050C48 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0050E80 (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051BF4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051C7C (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051CA4 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051D88 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051DB0 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C0052364 (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C0058430 (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00584EC (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0058588 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00585D4 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059A9C (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0059AE0 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0059D30 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005A240 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005B3AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005B7DC (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C005BE50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C005C50C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C005D448 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C005EA98 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C005F1B0 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00742A0 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0079148 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0079900 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00799E4 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0098D3C (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0098E28 (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0098F2C (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C0098FB4 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009A168 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C009A9B0 (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C009C324 (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009CBB0 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C009CBE0 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C009D5F4 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C009DC6C (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009E118 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     VidSchiResumeFlipQueues @ 0x1C00B3930 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00B5850 (VidSchWaitForPagingFence.c)
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
  __int64 v17; // r12
  int v18; // eax
  unsigned int v19; // r12d
  bool v20; // zf
  __int64 v21; // rbx
  __int64 *v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v25; // eax
  bool *v26; // r13
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  struct VIDMM_ALLOC **v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r8
  struct _VIDMM_GLOBAL_ALLOC **v34; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v35; // rax
  struct _VIDMM_GLOBAL_ALLOC **v36; // rcx
  struct _VIDMM_GLOBAL_ALLOC **v37; // rdx
  VIDMM_GLOBAL *v38; // rcx
  VIDMM_DEVICE *v39; // r8
  struct _VIDMM_LOCAL_ALLOC *v40; // rdx
  char v41; // bl
  __int64 v42; // rdx
  VIDMM_GLOBAL *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  struct _VIDMM_LOCAL_ALLOC *v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // r8
  _QWORD *v49; // r13
  volatile signed __int32 *v50; // rcx
  __int64 v51; // rdx
  _DWORD *v52; // rax
  struct _VIDSCH_SYNC_OBJECT *v53; // r13
  unsigned __int64 v54; // rbx
  unsigned int v55; // r12d
  unsigned int v56; // ebx
  __int64 v57; // r14
  __int64 v58; // rcx
  _QWORD **v59; // r14
  __int64 v60; // rax
  struct _KEVENT *v61; // rcx
  __int64 result; // rax
  struct _VIDMM_GLOBAL_ALLOC *v63; // rbx
  int v64; // ecx
  unsigned int v65; // eax
  _QWORD *v66; // rax
  __int64 v67; // rcx
  struct _VIDMM_LOCAL_ALLOC *v68; // rcx
  struct _VIDMM_GLOBAL_ALLOC ***v69; // rax
  char v70; // al
  __int64 v71; // rax
  bool v72; // al
  __int64 v73; // rdx
  struct _VIDMM_LOCAL_ALLOC *v74; // rcx
  __int64 v75; // rax
  int v76; // r10d
  unsigned int inited; // eax
  __int64 v78; // rcx
  _QWORD *v79; // rax
  unsigned int v80; // eax
  int v81; // r9d
  int v82; // r9d
  int v83; // r9d
  int v84; // ecx
  int v85; // edx
  VIDMM_GLOBAL *v86; // rbx
  VIDMM_GLOBAL *v87; // r14
  int v88; // eax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  char v91; // r13
  VIDMM_GLOBAL *v92; // rcx
  VIDMM_GLOBAL *v93; // rcx
  __int64 v94; // rax
  VIDMM_LINEAR_POOL ****v95; // rax
  VIDMM_DEVICE **v96; // r13
  VIDMM_LINEAR_POOL ***v97; // rcx
  int v98; // eax
  _QWORD **v99; // rax
  _QWORD *i; // rbx
  _QWORD *v101; // r14
  __int64 v102; // r14
  VIDMM_GLOBAL *v103; // rcx
  struct VIDMM_ALLOC **v104; // rbx
  unsigned int v105; // r11d
  struct _D3DDDI_SEGMENTPREFERENCE v106; // ebx
  __int64 v107; // rcx
  char v108; // r10
  char v109; // r9
  __int64 v110; // r14
  __int64 v111; // rcx
  int v112; // ecx
  int v113; // eax
  int v114; // r14d
  __int64 v115; // r10
  __int64 v116; // r11
  char v117; // r14
  __int64 v118; // r9
  int v119; // eax
  unsigned __int8 v120; // r14
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rax
  int v128; // ebx
  __int64 v129; // rax
  __int64 v130; // r14
  __int64 v131; // rdx
  __int64 v132; // r8
  VIDMM_PROCESS_ADAPTER_INFO *v133; // r10
  __int64 v134; // rcx
  __int64 v135; // rax
  unsigned int v136; // eax
  struct _VIDMM_GLOBAL_ALLOC *v137; // rbx
  char v138; // r14
  _QWORD *v139; // rax
  __int64 v140; // rax
  __int64 v141; // rbx
  _QWORD *v142; // rax
  _QWORD *v143; // rax
  __int64 v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rax
  VIDMM_GLOBAL *v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rax
  __int64 v150; // r8
  _QWORD *v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // r8
  _QWORD *v154; // r12
  _QWORD *v155; // rax
  _QWORD *v156; // r13
  _QWORD *v157; // rcx
  __int64 v158; // rbx
  _QWORD *v159; // rax
  int v160; // [rsp+20h] [rbp-E0h]
  unsigned int updated; // [rsp+40h] [rbp-C0h]
  bool v163; // [rsp+50h] [rbp-B0h]
  struct VIDMM_ALLOC **v164; // [rsp+58h] [rbp-A8h]
  char v165; // [rsp+60h] [rbp-A0h]
  int v166; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 v167; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 v168; // [rsp+64h] [rbp-9Ch]
  __int64 v170; // [rsp+70h] [rbp-90h]
  struct _VIDMM_LOCAL_ALLOC *NewAllocOwner; // [rsp+70h] [rbp-90h]
  _QWORD **v172; // [rsp+70h] [rbp-90h]
  __int64 v173; // [rsp+70h] [rbp-90h]
  struct _VIDMM_LOCAL_ALLOC *v174; // [rsp+78h] [rbp-88h]
  char v175; // [rsp+78h] [rbp-88h]
  __int64 *v176; // [rsp+80h] [rbp-80h]
  unsigned int v177; // [rsp+80h] [rbp-80h]
  signed int v178; // [rsp+88h] [rbp-78h]
  unsigned int v179; // [rsp+88h] [rbp-78h]
  bool v180; // [rsp+8Ch] [rbp-74h] BYREF
  int v181; // [rsp+90h] [rbp-70h] BYREF
  int v182; // [rsp+98h] [rbp-68h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v183; // [rsp+A0h] [rbp-60h]
  VIDMM_PROCESS_ADAPTER_INFO *v184; // [rsp+A8h] [rbp-58h]
  int v185; // [rsp+B0h] [rbp-50h]
  struct _VIDMM_GLOBAL_ALLOC ***v186; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v187; // [rsp+C0h] [rbp-40h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v188; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v189[24]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v190[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v191[24]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v192[24]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v193[16]; // [rsp+130h] [rbp+30h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1B0h] [rbp+B0h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = a3;
  v11 = (__int64)a8;
  v183 = a6;
  v14 = 0LL;
  v176 = 0LL;
  *a8 = 0LL;
  v15 = (struct _VIDMM_GLOBAL_ALLOC ***)*((_QWORD *)a2 + 2);
  v186 = v15;
  v174 = 0LL;
  if ( v15 )
  {
    v176 = (__int64 *)*v15;
    v14 = (__int64)**v15;
    v9 = (*(_DWORD *)(v14 + 76) & 0x20000000) != 0;
    v174 = *(struct _VIDMM_LOCAL_ALLOC **)(v14 + 104);
  }
  v16 = *((_QWORD *)a2 + 1);
  v163 = 0;
  updated = 0;
  v170 = v16;
  if ( !v16 )
  {
    v16 = (__int64)v15[1];
    v170 = v16;
  }
  *v10 = 0;
  v17 = *((int *)this + 2);
  v18 = *(_DWORD *)a2;
  v166 = *(_DWORD *)a2;
  if ( (_DWORD)v17 )
  {
    v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a8);
    v89[3] = 270LL;
    v89[4] = 64LL;
    v89[5] = this;
    v89[6] = v17;
    v89[7] = v166;
    WdLogEvent5_WdCriticalError(v89);
    v18 = v166;
    v8 = 0;
    v11 = (__int64)a8;
    v10 = a3;
  }
  ++*((_QWORD *)this + 575);
  v19 = 0;
  v20 = *((_DWORD *)this + 1604) == 0;
  *((_DWORD *)this + 2) = v18;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 805) = v16;
  *((_QWORD *)this + 806) = v15;
  if ( !v20 )
  {
    do
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0p((__int64)this, &EventPagingStartPreparation, v11, *((_QWORD *)this + v19 + 143));
        v8 = 0;
      }
      v21 = v19;
      if ( *((_DWORD *)this + v19 + 414) != *((_DWORD *)this + v19 + 478)
        || *((_DWORD *)this + v19 + 542) != *((_DWORD *)this + v19 + 606) )
      {
        v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v11);
        v90[3] = 270LL;
        v90[4] = 33LL;
        v90[5] = this;
        v90[6] = 0LL;
        v90[7] = 0LL;
        WdLogEvent5_WdCriticalError(v90);
        v8 = 0;
      }
      ++v19;
      *((_DWORD *)this + v21 + 1022) = *((_DWORD *)this + v21 + 414);
      *((_DWORD *)this + v21 + 1086) = *((_DWORD *)this + v21 + 542);
      *((_DWORD *)this + v21 + 958) = 0;
    }
    while ( v19 < *((_DWORD *)this + 1604) );
    v16 = v170;
    v11 = (__int64)a8;
    v10 = a3;
  }
  v22 = *(__int64 **)(v16 + 32);
  if ( *((_BYTE *)v22 + 164)
    || _InterlockedCompareExchange((volatile signed __int32 *)v22 + 40, 0, 0)
    || *(_BYTE *)(*((_QWORD *)this + 3) + 2269LL)
    || *(_BYTE *)(*((_QWORD *)this + 2) + 761LL) )
  {
    *((_DWORD *)a2 + 19) = -1071775232;
    *((_BYTE *)a2 + 72) = 1;
  }
  v23 = 1LL;
  if ( *((_BYTE *)a2 + 72) )
  {
    v22 = (__int64 *)(unsigned int)(*(_DWORD *)a2 - 203);
    if ( (unsigned int)v22 <= 0xB )
    {
      v76 = 2281;
      if ( _bittest(&v76, (unsigned int)v22) )
      {
        v27 = *((unsigned int *)a2 + 19);
        updated = *((_DWORD *)a2 + 19);
        goto LABEL_75;
      }
    }
    if ( *(_DWORD *)a2 == 113 )
      *((_BYTE *)a2 + 64) = 0;
  }
  v24 = *(_DWORD *)a2;
  v178 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 200 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v22) + 24) = v15;
    if ( *((_DWORD *)v15 + 26) || *((_DWORD *)v15 + 39) )
    {
      v141 = *((int *)v15 + 26);
      v142 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v23, v11);
      v142[3] = 270LL;
      v142[4] = 42LL;
      v142[5] = this;
      v142[6] = v15;
      v142[7] = v141;
      WdLogEvent5_WdCriticalError(v142);
      v16 = v170;
    }
    v28 = *((_DWORD *)v15 + 7) & 3;
    if ( v28 == 2 )
    {
      VIDMM_GLOBAL::NotifyAllocationEviction(this, (VIDMM_DEVICE **)v15, 0, 0LL, 0LL);
    }
    else if ( v28 == 1 )
    {
      v23 = (__int64)v15[7];
      v66 = v15 + 7;
      if ( *(struct _VIDMM_GLOBAL_ALLOC ****)(v23 + 8) != v15 + 7 || (v22 = (__int64 *)v15[8], (_QWORD *)*v22 != v66) )
        __fastfail(3u);
      *v22 = v23;
      *(_QWORD *)(v23 + 8) = v22;
      *((_DWORD *)v15 + 7) &= 0xFFFFFFFC;
      v15[8] = 0LL;
      *v66 = 0LL;
    }
    if ( (*((_BYTE *)v15 + 25) & 1) != 0 )
      VIDMM_GLOBAL::UnpinOneAllocation(this, v15, 3LL);
    if ( (*((_DWORD *)v15 + 7) & 0x10) != 0 && g_IsInternalRelease )
    {
      v143 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v23, v11);
      v143[5] = 0LL;
      v143[6] = 0LL;
      v143[7] = 0LL;
      v143[3] = 270LL;
      v143[4] = 9LL;
      WdLogEvent5_WdCriticalError(v143);
    }
    if ( v15 == *(struct _VIDMM_GLOBAL_ALLOC ****)(v16 + 240) )
      *(_QWORD *)(v16 + 240) = 0LL;
    v29 = *(_QWORD *)(v16 + 16);
    v20 = v29 == -360;
    v30 = (struct VIDMM_ALLOC **)(v29 + 360);
    v164 = v30;
    if ( !v20 && v30[1] == KeGetCurrentThread() )
    {
      v144 = WdLogNewEntry5_WdAssertion(v30, v23);
      *(_QWORD *)(v144 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v144);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v164, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v81 = *((_DWORD *)v164 + 4);
        if ( v81 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v31, (__int64)&EventBlockThread, v32, v81);
      }
      ExAcquirePushLockExclusiveEx(v164, 0LL);
    }
    v164[1] = KeGetCurrentThread();
    if ( ((*((_BYTE *)v15 + 25) & 1) != 0) | *((_DWORD *)v15 + 38) )
    {
      VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v16 + 16));
      if ( VidMmiShouldChargeAllocationAgainstBudget((__int64 **)v15) )
        VIDMM_DEVICE::DecrementCurrentUsage((VIDMM_DEVICE *)v16, (__int64 **)v15);
      v34 = v15[14];
      v35 = (struct _VIDMM_GLOBAL_ALLOC *)(v15 + 14);
      if ( v34[1] != (struct _VIDMM_GLOBAL_ALLOC *)(v15 + 14) || (v36 = v15[15], *v36 != v35) )
        __fastfail(3u);
      *v36 = (struct _VIDMM_GLOBAL_ALLOC *)v34;
      v34[1] = (struct _VIDMM_GLOBAL_ALLOC *)v36;
      v37 = *(struct _VIDMM_GLOBAL_ALLOC ***)(v16 + 168);
      if ( *v37 != (struct _VIDMM_GLOBAL_ALLOC *)(v16 + 160) )
        __fastfail(3u);
      *(_QWORD *)v35 = v16 + 160;
      v15[15] = v37;
      *v37 = v35;
      *(_QWORD *)(v16 + 168) = v35;
      VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v16 + 16), (__int64)v37, v33);
    }
    *((_DWORD *)v15 + 38) = 0;
    v164[1] = 0LL;
    ExReleasePushLockExclusiveEx(v164, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v14 + 320));
    if ( *((int *)v15[12] + 2) > 0 )
    {
      memset(v193, 0, sizeof(v193));
      v145 = *(_QWORD *)(v16 + 32);
      LODWORD(v193[5]) = 3;
      v193[6] = v15;
      VidSchCancelDeviceCommand(v145, (__int64)v193, 1, 0);
    }
    v40 = 0LL;
    v41 = 0;
    NewAllocOwner = 0LL;
    if ( (**(_DWORD **)(v14 + 504) & 0x20000000) != 0 )
    {
      v39 = (VIDMM_DEVICE *)*v15;
      v68 = (*v15)[5];
      v40 = (struct _VIDMM_LOCAL_ALLOC *)(*v15 + 5);
      if ( v68 == v40 )
      {
LABEL_126:
        v70 = 1;
      }
      else
      {
        while ( 1 )
        {
          v69 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)v68 - 40);
          v68 = *(struct _VIDMM_LOCAL_ALLOC **)v68;
          if ( v69 != v15 && (*((_DWORD *)v69 + 7) & 4) == 0 )
            break;
          if ( v68 == v40 )
            goto LABEL_126;
        }
        v70 = 0;
      }
      if ( v39 != v174 )
      {
        if ( v70 )
          *((_BYTE *)v39 + 32) |= 2u;
        goto LABEL_51;
      }
      if ( !v70 )
      {
LABEL_51:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 320), (__int64)v40, (__int64)v39);
        if ( v41 )
        {
          if ( this != (VIDMM_GLOBAL *)-39912LL && *((struct _KTHREAD **)this + 4990) == KeGetCurrentThread() )
          {
            v146 = WdLogNewEntry5_WdAssertion(v43, v42);
            *(_QWORD *)(v146 + 24) = 1214LL;
            WdLogEvent5_WdAssertion(v146);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39912, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v83 = *((_DWORD *)this + 9982);
              if ( v83 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v44, (__int64)&EventBlockThread, v45, v83);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 39912, 0LL);
          }
          *((_QWORD *)this + 4990) = KeGetCurrentThread();
          if ( *(_QWORD *)(v14 + 416) )
          {
            v147 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 3) + 200LL);
            VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
              v147,
              (struct _VIDMM_GLOBAL_ALLOC *)v14,
              *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)v174 + 1) + 16LL) + 8LL * (_QWORD)v147));
            if ( NewAllocOwner )
            {
              v148 = *(unsigned int *)(*((_QWORD *)this + 3) + 200LL);
              v149 = *((_QWORD *)NewAllocOwner + 1);
              v150 = *(_QWORD *)(*(_QWORD *)(v149 + 16) + 8 * v148) + 416LL;
              v151 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v149 + 16) + 8 * v148) + 424LL);
              if ( *v151 != v150 )
                __fastfail(3u);
              *(_QWORD *)(v14 + 416) = v150;
              *(_QWORD *)(v14 + 424) = v151;
              *v151 = v14 + 416;
              *(_QWORD *)(v150 + 8) = v14 + 416;
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
              WdLogNewEntry5_WdTrace(v43);
            v46 = v174;
            LOBYTE(v160) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v14 + 136) + 48LL))(
              *(_QWORD *)(v14 + 136),
              v14,
              0LL,
              0LL,
              v160,
              v174);
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v14 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          else
          {
            v46 = v174;
          }
          if ( *(_QWORD *)(v14 + 264) )
            VIDMM_GLOBAL::EvictTemporaryAllocation(v43, (struct _VIDMM_GLOBAL_ALLOC *)v14);
          if ( (*(_DWORD *)(v14 + 84) & 2) != 0 )
          {
            VIDMM_SEGMENT::UnlockAllocationBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v14, v46);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v14 + 8));
            *(_DWORD *)(v14 + 84) &= ~2u;
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39912, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v82 = *((_DWORD *)this + 9982);
              if ( v82 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v47, (__int64)&EventBlockThread, v48, v82);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 39912, 0LL);
          }
          v49 = (_QWORD *)(v14 + 400);
          *((_QWORD *)this + 4990) = KeGetCurrentThread();
          if ( *v49 )
          {
            v78 = *v49;
            if ( *(_QWORD **)(*v49 + 8LL) != v49 || (v79 = (_QWORD *)v49[1], (_QWORD *)*v79 != v49) )
              __fastfail(3u);
            *v79 = v78;
            *(_QWORD *)(v78 + 8) = v79;
            *v49 = 0LL;
          }
          *((_QWORD *)this + 4990) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 39912, 0LL);
          KeLeaveCriticalRegion();
        }
        *((_DWORD *)v15 + 7) |= 4u;
        v50 = (volatile signed __int32 *)v15[24];
        if ( v50 && _InterlockedExchangeAdd(v50 + 8, 0xFFFFFFFF) == 1 )
          ADAPTER_RENDER::NotifyDeferredDestructionComplete(
            *((ADAPTER_RENDER **)this + 2),
            (struct DXGTERMINATIONTRACKER *)v15[24]);
        goto LABEL_74;
      }
      v71 = WdLogNewEntry5_WdEvent(v68, v40);
      *(_QWORD *)(v71 + 24) = v14;
      *(_QWORD *)(v71 + 32) = v15;
      WdLogEvent5_WdEvent(v71);
      *((_BYTE *)v174 + 32) |= 2u;
      NewAllocOwner = VIDMM_GLOBAL::FindNewAllocOwner(this, (struct _VIDMM_GLOBAL_ALLOC *)v14);
      VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(this, (struct _VIDMM_GLOBAL_ALLOC *)v14, v174);
      v72 = VIDMM_GLOBAL::TransferAllocationOwnership(this, v15, v174, (PRKPROCESS **)NewAllocOwner);
      v74 = (struct _VIDMM_LOCAL_ALLOC *)*(unsigned int *)(v14 + 84);
      v163 = !v72;
      if ( ((unsigned __int8)v74 & 4) != 0 )
      {
        v74 = *(struct _VIDMM_LOCAL_ALLOC **)(v14 + 104);
        NewAllocOwner = v74;
      }
      v75 = WdLogNewEntry5_WdEvent(v74, v73);
      *(_QWORD *)(v75 + 24) = *(_QWORD *)(v14 + 104);
      WdLogEvent5_WdEvent(v75);
      v40 = NewAllocOwner;
    }
    else
    {
      v163 = 1;
    }
    v41 = 1;
    if ( (*(_BYTE *)(v14 + 92) & 3) == 3 )
    {
      VIDMM_GLOBAL::TransferAllocationDecommit(v38, (struct _VIDMM_GLOBAL_ALLOC *)v14, v174, v40);
      v41 = 1;
    }
    goto LABEL_51;
  }
  if ( v24 != 113 )
  {
    if ( v24 != 206 )
    {
      switch ( v24 )
      {
        case 119:
          updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
                      this,
                      *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)a2 + 4),
                      (struct VIDMM_ALLOC **)v11);
          v27 = updated;
          if ( updated != -1073741267 )
            goto LABEL_75;
          v26 = a3;
          goto LABEL_217;
        case 203:
          if ( g_IsInternalReleaseOrDbg )
          {
            v94 = WdLogNewEntry5_WdTrace(v22);
            v11 = (__int64)a8;
            v10 = a3;
            *(_QWORD *)(v94 + 24) = v15;
          }
          if ( *(_BYTE *)(v14 + 96) )
          {
            v27 = 3223191814LL;
            updated = -1071775482;
          }
          else
          {
            if ( !*(_DWORD *)(v14 + 164) )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                WdLogNewEntry5_WdTrace(v22);
                v11 = (__int64)a8;
                v10 = a3;
              }
              if ( *(_QWORD *)(v14 + 136) )
              {
                v88 = **(_DWORD **)(v14 + 504);
                if ( (v88 & 0x40000000) == 0
                  && ((v88 & 0x20000000) == 0 || v88 >= 0)
                  && (v88 & 0x80000) == 0
                  && (v88 & 0x20000) == 0 )
                {
                  if ( g_IsInternalReleaseOrDbg )
                    WdLogNewEntry5_WdTrace(v22);
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
            v85 = **(_DWORD **)(v14 + 504);
            if ( (v85 & 0x20000) != 0 )
            {
              v84 = *((_DWORD *)a2 + 8);
            }
            else if ( (v85 & 0x40000000) != 0 || v85 < 0 )
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
            v27 = updated;
            if ( (updated & 0x80000000) == 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v14 + 164));
            v86 = (VIDMM_GLOBAL *)((char *)this + 3720);
            v87 = (VIDMM_GLOBAL *)*((_QWORD *)this + 465);
            if ( v87 != (VIDMM_GLOBAL *)((char *)this + 3720) )
            {
              do
              {
                v95 = (VIDMM_LINEAR_POOL ****)*((_QWORD *)v87 - 7);
                v96 = (VIDMM_DEVICE **)((char *)v87 - 56);
                v87 = *(VIDMM_GLOBAL **)v87;
                v97 = *v95;
                v98 = *((_DWORD *)*v95 + 32);
                if ( v98 )
                {
                  if ( v98 == 1 )
                    VIDMM_SEGMENT::ReclaimResource(v97[17], (struct _VIDMM_GLOBAL_ALLOC *)v97);
                  VIDMM_DEVICE::AddCommitment(v96[1], (struct VIDMM_ALLOC *)v96);
                }
              }
              while ( v87 != v86 );
              v27 = updated;
            }
            *((_QWORD *)this + 466) = (char *)this + 3720;
            *(_QWORD *)v86 = v86;
          }
          goto LABEL_75;
        case 207:
          if ( !*((_DWORD *)v15 + 38) && (*((_BYTE *)v15 + 25) & 1) == 0 )
          {
            if ( (*((_DWORD *)a2 + 8) & 1) != 0 )
              v11 = 1LL;
            else
              LOBYTE(v11) = 0;
            VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)this, (struct VIDMM_ALLOC *)v15, v11);
          }
          _InterlockedDecrement((volatile signed __int32 *)v15 + 41);
          goto LABEL_74;
        case 208:
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v22) + 24) = v14;
          KeEnterCriticalRegion();
          v102 = v14 + 480;
          ExAcquirePushLockExclusiveEx(v14 + 480, 0LL);
          if ( *(_QWORD *)(v14 + 264) )
          {
            VIDMM_GLOBAL::EvictTemporaryAllocation(v103, (struct _VIDMM_GLOBAL_ALLOC *)v14);
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v14 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          VIDMM_GLOBAL::CalculateLockData(this, &v182, v15);
          if ( v182 == 4 )
          {
            v104 = a8;
            v26 = a3;
          }
          else
          {
            KeStackAttachProcess(*(PRKPROCESS *)v176[1], &ApcState);
            v104 = a8;
            v26 = a3;
            updated = VIDMM_GLOBAL::LockInternal(
                        this,
                        (struct VIDMM_LOCK2_DATA *)&v182,
                        (struct VIDMM_ALLOC *)v15,
                        *((void ***)a2 + 4),
                        *((_DWORD *)a2 + 10),
                        a3,
                        a8);
            KeUnstackDetachProcess(&ApcState);
            if ( v182 != 4 )
              goto LABEL_234;
          }
          updated = VIDMM_GLOBAL::LockInternal(
                      this,
                      (struct VIDMM_LOCK2_DATA *)&v182,
                      (struct VIDMM_ALLOC *)v15,
                      *((void ***)a2 + 4),
                      *((_DWORD *)a2 + 10),
                      v26,
                      v104);
LABEL_234:
          ExReleasePushLockExclusiveEx(v102, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_235;
        case 209:
          inited = VIDMM_GLOBAL::InitContextAllocation(
                     (ADAPTER_RENDER **)this,
                     (__int64 **)v15,
                     1,
                     v10,
                     (struct VIDMM_ALLOC **)v11);
          v27 = inited;
          updated = inited;
          goto LABEL_75;
        case 210:
          if ( !(((*((_BYTE *)v15 + 25) & 1) != 0) | *((_DWORD *)v15 + 38))
            || *(_WORD *)(*(_QWORD *)(v14 + 504) + 4LL) >= 2u )
          {
            goto LABEL_74;
          }
          v80 = VIDMM_GLOBAL::PageInOneAllocation(
                  (__int64)this,
                  (__int64 **)v15,
                  0,
                  a7,
                  v10,
                  (struct VIDMM_ALLOC **)v11);
          *(_DWORD *)(v14 + 80) &= ~0x40u;
          v27 = v80;
          updated = v80;
          goto LABEL_75;
        case 211:
          v99 = (_QWORD **)(*((_QWORD *)a2 + 4) + 296LL);
          v172 = v99;
          for ( i = *v99; i != v99; i = (_QWORD *)*i )
          {
            v101 = (_QWORD *)*(i - 2);
            if ( v101 != i - 2 )
            {
              do
              {
                VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)this, (struct VIDMM_ALLOC *)(v101 - 5), 0LL);
                v101 = (_QWORD *)*v101;
              }
              while ( v101 != i - 2 );
              v99 = v172;
            }
          }
          goto LABEL_74;
        case 212:
          VIDMM_GLOBAL::UpdateAllocationPriority(this, (struct VIDMM_ALLOC *)v15, *((_DWORD *)a2 + 8));
          goto LABEL_74;
        case 213:
          VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v16);
          VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)v16);
          v91 = 0;
          if ( !*(_QWORD *)(v16 + 176) )
          {
            v91 = 1;
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v189,
              (struct _KTHREAD **)(*(_QWORD *)v16 + 41240LL));
            VIDMM_GLOBAL::InsertToPenaltyBox(*(_QWORD *)v16, v16, 4LL);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v189);
          }
          if ( v15 )
            VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)v16, (VIDMM_DEVICE **)v15);
          else
            VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v16);
          VIDMM_GLOBAL::EvictFromFaultedList(v92, (struct VIDMM_DEVICE *)v16);
          updated = VIDMM_GLOBAL::PageInFromFaultedList(this, (struct VIDMM_DEVICE *)v16);
          VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v16);
          VIDMM_DEVICE::ResumePagingQueues((VIDMM_DEVICE *)v16);
          if ( v91 )
          {
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v190,
              (struct _KTHREAD **)(*(_QWORD *)v16 + 41240LL));
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v93, (struct _LIST_ENTRY *)(v16 + 176));
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v190);
          }
          goto LABEL_74;
        case 214:
          v105 = *(_DWORD *)(v14 + 68);
          v106.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v14 + 72);
          v179 = *(_DWORD *)(v14 + 76) & 0x3F;
          v107 = 1552LL * v179;
          v167 = (*(_DWORD *)(v14 + 76) & 0x80) != 0;
          v108 = (*((_DWORD *)a2 + 12) & 2) != 0;
          v109 = (*((_DWORD *)a2 + 12) & 4) != 0;
          v184 = (VIDMM_PROCESS_ADAPTER_INFO *)v179;
          v173 = v107;
          v177 = v105;
          v175 = v108;
          v165 = v109;
          v110 = *((_QWORD *)this + 5021) + v107;
          if ( v108 )
          {
            v111 = *(_QWORD *)(v14 + 136);
            v105 = *((_DWORD *)a2 + 9);
            v177 = v105;
            if ( v111
              && *(_DWORD *)(v14 + 128)
              && !_bittest((const int *)&v105, (unsigned __int8)(*(_BYTE *)(v111 + 20) - *(_BYTE *)(v110 + 20))) )
            {
              VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                *(VIDMM_WORKER_THREAD **)this,
                (struct _VIDMM_GLOBAL_ALLOC *)v14);
              VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v15);
              VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
              v11 = (__int64)a8;
              v109 = v165;
              v108 = v175;
              v105 = v177;
            }
            *(_DWORD *)(v14 + 68) = v105;
            v112 = *(_DWORD *)(v14 + 76) ^ (*(_DWORD *)(v14 + 76) ^ (*((unsigned __int8 *)a2 + 53) << 6)) & 0x40;
            *(_DWORD *)(v14 + 76) = v112;
            v167 = *((_BYTE *)a2 + 52);
            v113 = v112 ^ ((unsigned __int8)v112 ^ (unsigned __int8)(v167 << 7)) & 0x80;
            v107 = v173;
            *(_DWORD *)(v14 + 76) = v113;
          }
          if ( (*((_DWORD *)a2 + 12) & 1) != 0 )
          {
            v114 = 1 << (*(_WORD *)(v110 + 28) - *(_BYTE *)(v110 + 20));
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
                v109 = v165;
                v108 = v175;
                v105 = v177;
              }
              if ( (*(_DWORD *)(v14 + 76) & 0x40) != 0 )
                *(_DWORD *)(v14 + 68) &= ~v114;
              *(_DWORD *)v15[12] |= 0x8000u;
            }
            v107 = v173;
          }
          if ( !v109 )
            goto LABEL_271;
          v106.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)*((_DWORD *)a2 + 10);
          v115 = 0LL;
          v116 = 0LL;
          if ( v106.0 )
          {
            if ( (*(_BYTE *)&v106.0 & 0x1F) != 0 )
            {
              v115 = *(_QWORD *)(*((_QWORD *)this + 464)
                               + 8LL
                               * ((*((_DWORD *)a2 + 10) & 0x1Fu) + *(_DWORD *)(*((_QWORD *)this + 5021) + v107 + 20) - 1));
              v107 = v173;
              v167 = *(_BYTE *)(v115 + 80) & 1;
            }
            if ( ((v106.Value >> 6) & 0x1F) != 0 )
            {
              v107 = ((v106.Value >> 6) & 0x1F) - 1 + *(_DWORD *)(*((_QWORD *)this + 5021) + v107 + 20);
              v116 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v107);
            }
          }
          v117 = 0;
          if ( !*(_DWORD *)(v14 + 128) )
            goto LABEL_268;
          v118 = *(_QWORD *)(v14 + 136);
          if ( v115 == v118 || v116 == v118 )
          {
            if ( *(_DWORD *)(v14 + 72) == v106.0 || (v107 = *(_QWORD *)(v14 + 104)) == 0 || !*(_QWORD *)(v107 + 8) )
            {
LABEL_267:
              v109 = v165;
LABEL_268:
              v119 = (*(_DWORD *)(v14 + 76) ^ (v167 << 10)) & 0x400;
              *(struct _D3DDDI_SEGMENTPREFERENCE *)(v14 + 72) = v106;
              *(_DWORD *)(v14 + 76) ^= v119;
              if ( v117 )
              {
                VidMmRecordAlloc(this, v14, *(_QWORD *)(v14 + 104), *(_QWORD *)(v14 + 136), *(_QWORD *)(v14 + 16), 0);
                v11 = (__int64)a8;
                v109 = v165;
              }
              v105 = v177;
              v108 = v175;
LABEL_271:
              v120 = *(_DWORD *)(v14 + 76) >> 12;
              v168 = v120;
              if ( v109 && v108 )
              {
                v107 = *(_DWORD *)(v14 + 76) ^ (*(_DWORD *)(v14 + 76) ^ (*((_DWORD *)a2 + 8) << 12)) & 0xF0000u;
                *(_DWORD *)(v14 + 76) = v107;
                *(_DWORD *)(v14 + 76) = v107 ^ ((unsigned __int16)v107 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)a2 + 8) << 12)) & 0xF000;
              }
              if ( v109 != v108 )
              {
                if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
                        (VIDMM_GLOBAL *)v107,
                        *(struct _D3DDDI_SEGMENTPREFERENCE *)(v14 + 72),
                        v105) )
                {
                  v123 = WdLogNewEntry5_WdAssertion(v122, v121);
                  *(_QWORD *)(v123 + 24) = 10742LL;
                  WdLogEvent5_WdAssertion(v123);
                  VidSchiMarkDeviceAsError((__int64)v15[1][4], 21);
                }
                MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v179, v106, &v180);
                v181 = 0;
                if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                        this,
                        v179,
                        v177,
                        MostPreferredSegment,
                        (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v181) )
                {
                  v127 = WdLogNewEntry5_WdAssertion(v126, v125);
                  *(_QWORD *)(v127 + 24) = 10754LL;
                  WdLogEvent5_WdAssertion(v127);
                  VidSchiMarkDeviceAsError((__int64)v15[1][4], 21);
                }
                v11 = (__int64)a8;
                *(_DWORD *)(v14 + 76) ^= (*(_DWORD *)(v14 + 76) ^ (v181 << 12)) & 0xF0000 ^ (*(_WORD *)(v14 + 76) ^ (unsigned __int16)((_WORD)v181 << 12)) & 0xF000;
              }
              v128 = v120 >> 4;
              if ( (v128 != (HIWORD(*(_DWORD *)(v14 + 76)) & 0xF)
                 || ((v120 ^ (unsigned __int8)(*(_DWORD *)(v14 + 76) >> 12)) & 0xF) != 0)
                && *((_BYTE *)v15 + 25) & 1 | *((_DWORD *)v15 + 38) )
              {
                v129 = *(_DWORD *)(v14 + 76) & 0x3F;
                v184 = *(VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 104) + 8LL) + 16LL)
                                                      + 8LL * (_QWORD)v184);
                v130 = *((_QWORD *)v184 + 6) + 296 * v129;
                DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
                  (DXGAUTOPUSHLOCKEXCLUSIVE *)v191,
                  (struct _KTHREAD **)v184 + 45);
                VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(v184);
                if ( ((v168 ^ (unsigned __int8)(*(_DWORD *)(v14 + 76) >> 12)) & 0xF) != 0 )
                {
                  *(_QWORD *)(v130 + 8LL * (v168 & 0xF) + 136) -= *(_QWORD *)(v14 + 16);
                  v131 = (unsigned __int8)HIBYTE(*(_WORD *)(v14 + 76)) >> 4;
                  *(_QWORD *)(v130 + 8 * v131 + 136) += *(_QWORD *)(v14 + 16);
                }
                if ( v128 != (*(_WORD *)(v14 + 78) & 0xF) )
                {
                  *(_QWORD *)(v130 + 8LL * (v168 >> 4) + 72) -= *(_QWORD *)(v14 + 16);
                  v134 = v130 + 8LL * (*(_WORD *)(v14 + 78) & 0xF);
                  *(_QWORD *)(v134 + 72) += *(_QWORD *)(v14 + 16);
                }
                VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(v133, v131, v132);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v191);
                v11 = (__int64)a8;
              }
              *((_DWORD *)a2 + 12) &= 0xFFFFFFF8;
              if ( *((_BYTE *)v15 + 25) & 1 | *((_DWORD *)v15 + 38) )
              {
                v135 = *(_QWORD *)(v14 + 504);
                v26 = a3;
                if ( *(_WORD *)(v135 + 4) >= 2u )
                {
LABEL_235:
                  v27 = updated;
                }
                else
                {
                  v136 = VIDMM_GLOBAL::PageInOneAllocation(
                           (__int64)this,
                           (__int64 **)v15,
                           0,
                           a7,
                           a3,
                           (struct VIDMM_ALLOC **)v11);
                  v27 = v136;
                  updated = v136;
                }
                goto LABEL_76;
              }
              goto LABEL_74;
            }
            v117 = 1;
            VidMmRecordAlloc(this, v14, *(_QWORD *)(v14 + 104), v118, *(_QWORD *)(v14 + 16), 1);
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
          goto LABEL_267;
        case 215:
          v137 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 4);
          v138 = 0;
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v192,
            (struct _KTHREAD **)this + 4989);
          if ( *((_QWORD *)v137 + 52) )
          {
            VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, v137);
            v138 = 1;
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v192);
          if ( v138 )
            VIDMM_GLOBAL::DecommitGlobalAllocation(this, v137);
          v26 = a3;
          v51 = 0LL;
          v27 = 0LL;
          updated = 0;
          goto LABEL_77;
        default:
          v139 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, 1LL, v11);
          v139[5] = v178;
          v139[3] = 270LL;
          v139[4] = 5LL;
          v139[6] = -1073741811LL;
          v139[7] = 0LL;
          WdLogEvent5_WdCriticalError(v139);
          goto LABEL_74;
      }
    }
    v63 = **v15;
    if ( *((_DWORD *)v63 + 86) )
    {
      if ( VIDMM_GLOBAL::NeedsApertureForLock(this, **v15) && (*((_DWORD *)v63 + 19) & 0x40) == 0 )
      {
        v140 = WdLogNewEntry5_WdWarning(v67);
        *(_QWORD *)(v140 + 24) = v63;
        WdLogEvent5_WdWarning(v140);
        v27 = 3221225473LL;
        updated = -1073741823;
        goto LABEL_75;
      }
      v11 = (__int64)a8;
    }
    if ( (*((_BYTE *)v15 + 25) & 1) != 0 )
      v64 = 1;
    else
      v64 = v8;
    if ( v64 | *((_DWORD *)v15 + 38) && *(_WORD *)(*((_QWORD *)v63 + 63) + 4LL) < 2u )
    {
      v65 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (__int64 **)v15, 0, a7, v10, (struct VIDMM_ALLOC **)v11);
      v27 = v65;
      updated = v65;
      goto LABEL_75;
    }
LABEL_74:
    v27 = updated;
LABEL_75:
    v26 = a3;
    goto LABEL_76;
  }
  v25 = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
          (VIDMM_GLOBAL *)v22,
          (struct _VIDMM_DEFERRED_COMMAND *)((char *)a2 + 32),
          (struct VIDMM_ALLOC **)v11);
  v26 = a3;
  v27 = v25;
  updated = v25;
  if ( v25 == -1073741267 )
  {
LABEL_217:
    *v26 = 1;
LABEL_218:
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    goto LABEL_98;
  }
LABEL_76:
  v51 = 0LL;
LABEL_77:
  if ( *v26 )
    goto LABEL_218;
  v52 = (_DWORD *)*((_QWORD *)a2 + 3);
  if ( v52 )
    *v52 = v27;
  v53 = v183;
  v54 = a5;
  v55 = 0;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  v20 = *((_DWORD *)this + 1604) == 0;
  v188 = v53;
  v187 = a5;
  if ( !v20 )
  {
    do
    {
      v56 = 0;
      v57 = 1552LL * v55;
      if ( *(_DWORD *)(v57 + *((_QWORD *)this + 5021) + 24) )
      {
        do
        {
          v58 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v56 + *(_DWORD *)(v57 + *((_QWORD *)this + 5021) + 20)));
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v58 + 160LL))(v58, v51);
          ++v56;
        }
        while ( v56 < *(_DWORD *)(v57 + *((_QWORD *)this + 5021) + 24) );
      }
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0p(v27, &EventPagingEndPreparation, v11, *((_QWORD *)this + v55 + 143));
      if ( *((_DWORD *)this + v55 + 414) != *((_DWORD *)this + v55 + 478)
        || *((_DWORD *)this + v55 + 542) != *((_DWORD *)this + v55 + 606) )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v55, 0, 0LL, 0LL, 0, 0);
      }
      v27 = *((_QWORD *)this + v55 + 143);
      if ( v27 )
        *(_DWORD *)(v27 + 172) = *(_DWORD *)(v27 + 168);
      ++v55;
    }
    while ( v55 < *((_DWORD *)this + 1604) );
    v15 = v186;
    v54 = a5;
    v53 = v183;
  }
  v59 = (_QWORD **)((char *)this + 41424);
  if ( *v59 != v59 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
    v154 = *v59;
    if ( *v59 != v59 )
    {
      do
      {
        v155 = (_QWORD *)*v154;
        v156 = v154 - 36;
        if ( *(_QWORD **)(*v154 + 8LL) != v154 || (v157 = (_QWORD *)v154[1], (_QWORD *)*v157 != v154) )
          __fastfail(3u);
        *v157 = v155;
        v155[1] = v157;
        *v154 = 0LL;
        v154 = v155;
        if ( (*((_DWORD *)v156 + 13) & 7) != 0 )
        {
          v158 = v156[4];
          v159 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v157, v152, v153);
          v159[3] = 270LL;
          v159[4] = 63LL;
          v159[5] = v156;
          v159[6] = v158;
          v159[7] = 0LL;
          WdLogEvent5_WdCriticalError(v159);
        }
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v156);
      }
      while ( v154 != v59 );
      v54 = a5;
      v53 = v183;
    }
  }
  if ( *((_BYTE *)this + 41440) )
  {
    VidSchiResumeFlipQueues(*(struct _VIDSCH_GLOBAL **)(*((_QWORD *)this + 2) + 512LL));
    *((_BYTE *)this + 41440) = 0;
  }
  if ( a4 )
  {
    v60 = *((_QWORD *)this + 2);
    v185 = 0;
    VidSchSignalSyncObjectsFromGpu(
      *(unsigned int *)(*(_QWORD *)(v60 + 512) + 56LL),
      *(__int64 **)(*(_QWORD *)(v60 + 512) + 240LL),
      1u,
      (void **)&v188,
      0,
      &v187);
    v27 = *((unsigned int *)this + 1604);
    if ( (unsigned int)v27 > 1 )
      VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)this + 2) + 512LL), v53, v54, (unsigned int)((1 << v27) - 1));
  }
  *((_QWORD *)this + 805) = 0LL;
  *((_QWORD *)this + 806) = 0LL;
  *((_DWORD *)this + 2) = 0;
LABEL_98:
  if ( *(_DWORD *)a2 == 200 )
  {
    v61 = (struct _KEVENT *)(*((_QWORD *)a2 + 2) + 72LL);
LABEL_105:
    KeSetEvent(v61, 0, 0);
    goto LABEL_106;
  }
  if ( !*a3 && v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 40, 0xFFFFFFFF) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v27) + 24) = v15;
    v61 = (struct _KEVENT *)(v15 + 21);
    goto LABEL_105;
  }
LABEL_106:
  result = updated;
  *((_DWORD *)a2 + 19) = updated;
  return result;
}
