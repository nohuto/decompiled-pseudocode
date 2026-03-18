/*
 * XREFs of ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920
 * Callers:
 *     ?VidMmWorkerThreadProc@@YAXPEAX@Z @ 0x1C007F860 (-VidMmWorkerThreadProc@@YAXPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0003850 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C000530C (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0005470 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0005880 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0016180 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00161A4 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsPenaltyBoxEmptyWithoutLock@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C001623C (-IsPenaltyBoxEmptyWithoutLock@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 *     McTemplateK0iq @ 0x1C0024764 (McTemplateK0iq.c)
 *     McTemplateK0ppp @ 0x1C00247E4 (McTemplateK0ppp.c)
 *     McTemplateK0ppx @ 0x1C0024868 (McTemplateK0ppx.c)
 *     McTemplateK0ppxx @ 0x1C00248F4 (McTemplateK0ppxx.c)
 *     McTemplateK0qqtqttp @ 0x1C002498C (McTemplateK0qqtqttp.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C005DBA8 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005DDF0 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C005E3CC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00600E8 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C00602A4 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C0062EDC (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C006B830 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C006B9C4 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006C900 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C006CD64 (-ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C006CD90 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C006CF0C (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0073238 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0076290 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0079BF4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C009D998 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C009F778 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00A6F3C (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C00A70DC (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00A7404 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00A7ED8 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 *     ?RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00AA1CC (-RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00B1F04 (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00B5C0C (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B6574 (-SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00B6614 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00B69E8 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00B6EA0 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00B701C (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00B75BC (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00B79F0 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::Run(VIDMM_GLOBAL **this)
{
  VIDMM_GLOBAL **v1; // r14
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v3; // rcx
  VIDMM_GLOBAL *v4; // rcx
  char *v5; // r13
  unsigned __int8 v6; // r12
  char v7; // r15
  unsigned __int8 v8; // di
  __int64 v9; // rcx
  bool v10; // bl
  union _LARGE_INTEGER v11; // rax
  union _LARGE_INTEGER *v12; // rbx
  _QWORD *v13; // rax
  NTSTATUS v14; // esi
  VIDMM_GLOBAL *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  VIDMM_GLOBAL *v21; // rbx
  DXGPUSHLOCK *v22; // rdi
  char *v23; // rbx
  char *v24; // rax
  __int64 v25; // rcx
  char *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  VIDMM_GLOBAL *v29; // rbx
  char *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r9d
  char *v34; // rbx
  char *v35; // rax
  __int64 v36; // rcx
  char *v37; // rsi
  __int64 v38; // r8
  VIDMM_DEVICE *v39; // r12
  VIDMM_GLOBAL **v40; // r13
  _DWORD *v41; // rcx
  VIDMM_GLOBAL **v42; // rsi
  VIDMM_GLOBAL **v43; // r15
  VIDMM_PAGING_QUEUE *v44; // rdi
  unsigned __int8 v45; // r14
  VIDMM_GLOBAL *v46; // rbx
  int v47; // r12d
  char v48; // r8
  VIDMM_PAGING_QUEUE *v49; // r9
  __int64 v50; // rax
  VIDMM_PAGING_QUEUE **v51; // rdx
  VIDMM_PAGING_QUEUE **v52; // rax
  VIDMM_PAGING_QUEUE **v53; // rax
  struct VIDMM_PAGING_QUEUE_PACKET *v54; // r15
  VIDMM_PAGING_QUEUE *v55; // rbx
  __int64 v56; // rbx
  VIDMM_COMMIT_TELEMETRY *v57; // r13
  unsigned __int8 v58; // r14
  int v59; // edi
  __int64 v60; // r9
  _QWORD *v61; // rdx
  __int64 *v62; // rbx
  int v63; // edx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  int v67; // r8d
  _QWORD *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rcx
  VIDMM_GLOBAL **v73; // r15
  VIDMM_GLOBAL **v74; // rsi
  VIDMM_PAGING_QUEUE *v75; // rdi
  char v76; // r14
  VIDMM_GLOBAL *v77; // rbx
  int v78; // r12d
  char v79; // r8
  __int64 v80; // rax
  VIDMM_PAGING_QUEUE **v81; // rdx
  VIDMM_PAGING_QUEUE **v82; // rax
  VIDMM_PAGING_QUEUE **v83; // rax
  char v84; // cl
  VIDMM_GLOBAL *v85; // rax
  VIDMM_GLOBAL **v86; // r15
  VIDMM_GLOBAL **v87; // rsi
  VIDMM_PAGING_QUEUE *v88; // rdi
  char v89; // r14
  VIDMM_GLOBAL *v90; // rbx
  int v91; // r12d
  char v92; // r8
  __int64 v93; // rax
  VIDMM_PAGING_QUEUE **v94; // rdx
  VIDMM_PAGING_QUEUE **v95; // rax
  VIDMM_PAGING_QUEUE **v96; // rax
  char v97; // cl
  _QWORD *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rdx
  char *v103; // rsi
  unsigned __int8 v104; // bl
  bool v105; // zf
  int *v106; // rdi
  __int64 v107; // rdx
  __int64 v108; // rcx
  _QWORD *v109; // rax
  int v110; // eax
  __int64 v111; // rdx
  __int64 v112; // rcx
  int v113; // ebx
  __int64 v114; // rax
  __int64 *v115; // r15
  char v116; // r13
  unsigned int v117; // r12d
  VIDMM_PROCESS_BUDGET_STATE *v118; // rsi
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  int v122; // r9d
  _QWORD *v123; // r9
  int v124; // r10d
  unsigned int *v125; // rdi
  unsigned __int64 v126; // r8
  unsigned __int64 v127; // rax
  __int64 v128; // r8
  __int64 v129; // r11
  __int64 v130; // rsi
  unsigned int v131; // r12d
  unsigned int v132; // r15d
  __int64 v133; // r14
  __int64 v134; // r10
  __int64 v135; // rbx
  _BYTE *v136; // r11
  _QWORD *v137; // rax
  _QWORD *i; // rdx
  _QWORD **v139; // rax
  _QWORD *v140; // rcx
  _QWORD *v141; // rcx
  _QWORD *v142; // rax
  struct _RTL_BALANCED_NODE *v143; // r9
  __int64 v144; // r8
  unsigned __int8 v145; // al
  __int64 v146; // rbx
  __int64 v147; // rax
  VIDMM_COMMIT_TELEMETRY *v148; // rcx
  VIDMM_PAGING_QUEUE *v149; // rdi
  __int64 v150; // rbx
  __int64 v151; // rdx
  __int64 v152; // r8
  struct VIDMM_PAGING_QUEUE_PACKET **v153; // rcx
  __int64 v154; // rbx
  _QWORD *v155; // rax
  _QWORD *v156; // rax
  VIDMM_PAGING_QUEUE *v157; // rcx
  VIDMM_PAGING_QUEUE **v158; // rax
  struct _KEVENT *v159; // rcx
  __int64 v160; // rcx
  _QWORD *v161; // rax
  _QWORD *v162; // rax
  __int64 v163; // rcx
  _BOOL8 v164; // rbx
  VIDMM_COMMIT_TELEMETRY *v165; // rcx
  int v166; // r14d
  int v167; // eax
  struct VIDMM_ALLOC *v168; // r11
  VIDMM_GLOBAL *v169; // r8
  __int64 v170; // rcx
  __int64 v171; // rdx
  __int64 v172; // r10
  int v173; // r9d
  __int64 v174; // rsi
  _QWORD *v175; // rdi
  char IsProcessCommitRelinquished; // bl
  const CHAR *v177; // r8
  __int64 v178; // rax
  int v179; // ebx
  ULONG v180; // edi
  int v181; // ebx
  unsigned int v182; // esi
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // rax
  __int64 v186; // r9
  VIDMM_DEVICE *v187; // rax
  struct VIDMM_DEVICE *v188; // rbx
  VIDMM_DEVICE *v189; // rdi
  struct VIDMM_DEVICE *v190; // rsi
  VIDMM_GLOBAL *v191; // rdx
  VIDMM_GLOBAL *v192; // rdi
  char v193; // bl
  unsigned int v194; // r12d
  __int64 v195; // r11
  __int64 v196; // rsi
  __int64 v197; // rcx
  _QWORD *v198; // rax
  _QWORD *k; // rcx
  __int64 v200; // r8
  unsigned __int64 v201; // r9
  char v202; // al
  _QWORD **v203; // rdx
  _QWORD *v204; // rax
  _QWORD *j; // rdx
  __int64 v206; // r8
  unsigned __int64 v207; // rcx
  char v208; // al
  __int64 v209; // rdx
  __int64 v210; // rcx
  VIDMM_GLOBAL *v211; // rbx
  __int64 v212; // rdi
  __int64 v213; // rax
  __int64 v214; // rcx
  __int64 v215; // r8
  int v216; // r9d
  bool IsPenaltyBoxEmptyWithoutLock; // bl
  VIDMM_GLOBAL *v218; // rbx
  __int64 v219; // r14
  char v220; // bl
  unsigned int m; // edi
  __int64 v222; // rcx
  __int64 v223; // r8
  VIDMM_GLOBAL *v224; // r14
  VIDMM_GLOBAL *v225; // r15
  __int64 v226; // rcx
  __int64 v227; // r8
  int v228; // r9d
  VIDMM_GLOBAL *v229; // rbx
  __int64 v230; // rbx
  __int64 v231; // rbx
  char v232; // r12
  VIDMM_GLOBAL *v233; // rsi
  __int64 v234; // r8
  VIDMM_GLOBAL **v235; // rax
  struct _VIDMM_GLOBAL_ALLOC *v236; // rdi
  VIDMM_GLOBAL *v237; // rbx
  VIDMM_GLOBAL **v238; // rcx
  __int64 v239; // rax
  __int64 v240; // rcx
  __int64 v241; // rcx
  VIDMM_GLOBAL **v242; // rdx
  VIDMM_GLOBAL *v243; // rdi
  _QWORD *v244; // rax
  VIDMM_GLOBAL *v245; // r8
  __int64 v246; // rsi
  unsigned int v247; // r8d
  __int64 v248; // rcx
  __int64 v249; // rdx
  __int64 v250; // rcx
  char v251; // bl
  VIDMM_GLOBAL *v252; // rcx
  struct VIDMM_ALLOC *NextPendingTermination; // rbx
  VIDMM_GLOBAL *v254; // rcx
  VIDMM_GLOBAL *v255; // rdi
  unsigned int n; // r14d
  __int64 v257; // rbx
  unsigned int ii; // r15d
  __int64 v259; // rax
  __int64 v260; // rsi
  int v261; // eax
  int v262; // eax
  _QWORD **v263; // rdi
  _QWORD *v264; // rbx
  VIDMM_DEVICE *v265; // rcx
  struct _KEVENT *v266; // rcx
  VIDMM_GLOBAL *v267; // rdi
  __int64 v268; // rbx
  struct _VIDSCH_SYNC_OBJECT *Timeout; // [rsp+20h] [rbp-E0h]
  bool v270; // [rsp+50h] [rbp-B0h] BYREF
  char v271; // [rsp+51h] [rbp-AFh]
  VIDMM_PAGING_QUEUE *v272; // [rsp+58h] [rbp-A8h]
  char v273; // [rsp+60h] [rbp-A0h]
  bool v274; // [rsp+61h] [rbp-9Fh] BYREF
  bool v275; // [rsp+62h] [rbp-9Eh] BYREF
  int v276; // [rsp+64h] [rbp-9Ch]
  int v277; // [rsp+68h] [rbp-98h]
  int v278; // [rsp+6Ch] [rbp-94h]
  VIDMM_DEVICE *v279; // [rsp+70h] [rbp-90h]
  struct VIDMM_PAGING_QUEUE_PACKET *v280; // [rsp+78h] [rbp-88h]
  struct VIDMM_ALLOC *v281; // [rsp+80h] [rbp-80h] BYREF
  bool v282; // [rsp+88h] [rbp-78h] BYREF
  int v283; // [rsp+8Ch] [rbp-74h] BYREF
  VIDMM_COMMIT_TELEMETRY *v284; // [rsp+90h] [rbp-70h]
  char *v285; // [rsp+98h] [rbp-68h]
  int *v286; // [rsp+A0h] [rbp-60h]
  struct VIDMM_DEVICE *v287; // [rsp+A8h] [rbp-58h]
  int v288; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v289; // [rsp+B8h] [rbp-48h]
  int v290; // [rsp+C0h] [rbp-40h]
  union _LARGE_INTEGER v291; // [rsp+C8h] [rbp-38h] BYREF
  char *v292; // [rsp+D0h] [rbp-30h]
  PVOID Object; // [rsp+E0h] [rbp-20h] BYREF
  VIDMM_GLOBAL *v294; // [rsp+E8h] [rbp-18h]
  char v295[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v296; // [rsp+F8h] [rbp-8h]
  int v297; // [rsp+100h] [rbp+0h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+108h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v299; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v300[24]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v301[32]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v302[18]; // [rsp+150h] [rbp+50h] BYREF
  bool v304; // [rsp+1F8h] [rbp+F8h]
  char v305; // [rsp+200h] [rbp+100h]
  char v306; // [rsp+208h] [rbp+108h]

  v1 = this;
  CurrentThread = KeGetCurrentThread();
  v1[1] = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  KeWaitForSingleObject((char *)v1[19] + 24, Executive, 0, 0, 0LL);
  v3 = (struct _KEVENT *)((char *)v1[19] + 48);
  *((_DWORD *)v1 + 6) = 1;
  KeSetEvent(v3, 0, 0);
  v5 = (char *)(v1 + 6);
  v6 = 0;
  v294 = v1[19];
  v4 = v294;
  v304 = 0;
  v7 = 0;
  v1[21] = (VIDMM_GLOBAL *)0x8000000000000000LL;
  v305 = 0;
  Object = (char *)v4 + 24;
  v8 = 0;
  v275 = 0;
  v274 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 6, 0LL);
  v1[7] = KeGetCurrentThread();
  do
  {
LABEL_4:
    v10 = v274;
    v1[2] = 0LL;
    if ( v6 || v10 || v8 )
    {
      v1[21] = 0LL;
      v11.QuadPart = 0LL;
    }
    else
    {
      v11.QuadPart = (LONGLONG)v1[21];
    }
    v291 = v11;
    if ( v11.QuadPart == 0x8000000000000000uLL )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
        v13[3] = v6;
        v13[4] = v10;
        v13[5] = v8;
      }
      v12 = 0LL;
    }
    else
    {
      v12 = &v291;
    }
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    v1[29] = (VIDMM_GLOBAL *)((char *)v1[29] + 1);
    v14 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v12, 0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *((_QWORD *)v5 + 1) = KeGetCurrentThread();
    v15 = *v1;
    v16 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)v15 + 576) = v16 * KeQueryTimeIncrement();
    v18 = (__int64)*v1;
    v19 = *((_QWORD *)*v1 + 576);
    if ( v19 - *((_QWORD *)*v1 + 962) > qword_1C0047330 )
    {
      *(_QWORD *)(v18 + 7680) = 0LL;
      *(_DWORD *)(v18 + 7688) = 0;
      *(_QWORD *)(v18 + 7696) = v19;
    }
    v274 = 0;
    v271 = 0;
    *((_BYTE *)v1 + 160) = 0;
    v276 = 0;
    v273 = 0;
    if ( !v14 )
    {
      v18 = *((unsigned int *)v1 + 7);
      if ( (_DWORD)v18 == *((_DWORD *)v1 + 6) )
      {
LABEL_33:
        if ( g_IsInternalReleaseOrDbg )
        {
          v28 = WdLogNewEntry5_WdTrace(v18);
          v18 = *((int *)v1 + 6);
          *(_QWORD *)(v28 + 24) = v18;
        }
        *((_DWORD *)v1 + 44) = 0;
      }
      else
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v20 = WdLogNewEntry5_WdTrace(v18);
          *(_QWORD *)(v20 + 24) = *((int *)v1 + 6);
          *(_QWORD *)(v20 + 32) = *((int *)v1 + 7);
          v18 = *((unsigned int *)v1 + 7);
        }
        *((_DWORD *)v1 + 44) = 1;
        if ( (unsigned int)(v18 - 2) <= 3 )
        {
          KeWaitForSingleObject((char *)*v1 + 41640, Executive, 0, 0, 0LL);
          v21 = *v1;
          v22 = (VIDMM_GLOBAL *)((char *)*v1 + 40560);
          DXGPUSHLOCK::AcquireExclusive(v22);
          v23 = (char *)v21 + 40544;
          while ( 1 )
          {
            v24 = *(char **)v23;
            if ( *(char **)(*(_QWORD *)v23 + 8LL) != v23
              || (v25 = *(_QWORD *)v24, *(char **)(*(_QWORD *)v24 + 8LL) != v24) )
            {
              __fastfail(3u);
            }
            *(_QWORD *)v23 = v25;
            v26 = v24;
            *(_QWORD *)(v25 + 8) = v23;
            if ( v24 == v23 )
              break;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(**((_QWORD **)v24 + 2) + 24LL))(
              *((_QWORD *)v24 + 2),
              0LL,
              *((_QWORD *)v24 + 3),
              *((_QWORD *)v24 + 4));
            operator delete(v26);
          }
          v292 = v24;
          *((_QWORD *)v22 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v22, 0LL);
          KeLeaveCriticalRegion();
        }
        else if ( (_DWORD)v18 == 1 )
        {
          *((_DWORD *)v1 + 6) = 1;
          KeSetEvent((PRKEVENT)v1[19] + 2, 0, 0);
        }
      }
      v6 = 1;
      v304 = 1;
      goto LABEL_37;
    }
    if ( v14 != 258 )
      goto LABEL_33;
    if ( g_IsInternalReleaseOrDbg )
    {
      v27 = WdLogNewEntry5_WdTrace(v18);
      v18 = (__int64)v1[21];
      *(_QWORD *)(v27 + 24) = v18;
    }
LABEL_37:
    if ( v1[21] && ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0iq(v18, v19, v17);
    v29 = *v1;
    v1[21] = (VIDMM_GLOBAL *)0x8000000000000000LL;
    v30 = (char *)v29 + 40560;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v29 + 40560, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v33 = *((_DWORD *)v29 + 10144);
        if ( v33 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v31, (__int64)&EventBlockThread, v32, v33);
      }
      ExAcquirePushLockExclusiveEx((char *)v29 + 40560, 0LL);
    }
    v34 = (char *)v29 + 40544;
    *((_QWORD *)v30 + 1) = KeGetCurrentThread();
    while ( 1 )
    {
      v35 = *(char **)v34;
      if ( *(char **)(*(_QWORD *)v34 + 8LL) != v34 || (v36 = *(_QWORD *)v35, *(char **)(*(_QWORD *)v35 + 8LL) != v35) )
        __fastfail(3u);
      *(_QWORD *)v34 = v36;
      v37 = v35;
      *(_QWORD *)(v36 + 8) = v34;
      if ( v35 == v34 )
        break;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(**((_QWORD **)v35 + 2) + 24LL))(
        *((_QWORD *)v35 + 2),
        0LL,
        *((_QWORD *)v35 + 3),
        *((_QWORD *)v35 + 4));
      operator delete(v37);
    }
    *((_QWORD *)v30 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v30, 0LL);
    KeLeaveCriticalRegion();
    if ( !v6 && !v7 && !v275 )
      goto LABEL_392;
    v280 = 0LL;
    v39 = 0LL;
    v279 = 0LL;
    v40 = v1 + 16;
    v305 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v1 + 16, 0LL);
    v42 = v1 + 12;
    v1[17] = KeGetCurrentThread();
    v43 = (VIDMM_GLOBAL **)v1[12];
    if ( v43 == v1 + 12 )
      goto LABEL_75;
    v44 = v1[12];
    v45 = 1;
    v46 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v46 + 41600, 0LL);
    *((_QWORD *)v46 + 5201) = KeGetCurrentThread();
    v47 = *((_DWORD *)v46 + 10408);
    *((_QWORD *)v46 + 5201) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v46 + 41600, 0LL);
    KeLeaveCriticalRegion();
    v48 = 0;
    do
    {
      v272 = v44;
      v49 = v44;
      if ( !v47
        || (v50 = *((_QWORD *)v44 + 4), !*(_BYTE *)(v50 + 24))
        || *(_DWORD *)(v50 + 48) != 203
        || (v41 = *(_DWORD **)(*(_QWORD *)(v50 + 64) + 96LL), (*v41 & 0x20000) == 0) )
      {
        v48 = 1;
        v45 = 0;
      }
      v51 = *(VIDMM_PAGING_QUEUE ***)v44;
      if ( *(VIDMM_GLOBAL ***)v44 == v42 )
        break;
      if ( v51[1] == v44 )
      {
        v52 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v44 + 1);
        if ( *v52 == v44 )
          continue;
      }
      __fastfail(3u);
      *v52 = (VIDMM_PAGING_QUEUE *)v51;
      v51[1] = (VIDMM_PAGING_QUEUE *)v52;
      v53 = (VIDMM_PAGING_QUEUE **)v42[1];
      if ( *v53 != (VIDMM_PAGING_QUEUE *)v42 )
        __fastfail(3u);
      *((_QWORD *)v44 + 1) = v53;
      *(_QWORD *)v44 = v42;
      *v53 = v44;
      v42[1] = v44;
      if ( v51 != v43 )
        v44 = (VIDMM_PAGING_QUEUE *)v51;
      v41 = 0LL;
      if ( v51 != v43 )
        v41 = (_DWORD *)v45;
      v45 = (unsigned __int8)v41;
    }
    while ( (_BYTE)v41 );
    v1 = this;
    if ( !v48 )
    {
      v39 = v279;
LABEL_75:
      v272 = 0LL;
      goto LABEL_76;
    }
    if ( v49 )
      goto LABEL_167;
    v39 = v279;
LABEL_76:
    if ( ((*((_DWORD *)v1 + 7) - 1) & 0xFFFFFFFD) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v41) + 24) = *((int *)v1 + 7);
      goto LABEL_79;
    }
    v62 = (__int64 *)*v1;
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v300, (VIDMM_GLOBAL *)((char *)*v1 + 41816));
    if ( VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock((__int64)v62, 1)
      && VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(v64, 2)
      && VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(v65, 3)
      && (!*(_BYTE *)(v62[3] + 2414) && !*(_BYTE *)(v62[2] + 777) || VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(v66, 4)) )
    {
      v305 = 0;
      goto LABEL_116;
    }
    v305 = 1;
    v39 = (VIDMM_DEVICE *)(v62[2 * (unsigned int)(v63 - 1) + 5230] - 176);
    v279 = v39;
    if ( !VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)v62) )
    {
      if ( v67 == 2 )
      {
        v68 = (_QWORD *)*((_QWORD *)v39 + 29);
        if ( !v68 )
          goto LABEL_117;
        v69 = v68[27];
        if ( v69 <= *(_QWORD *)(*v68 + 4608LL) )
          goto LABEL_117;
        VIDMM_WORKER_THREAD::SetTimeout(*v62, v62[576] - v69, 8);
        goto LABEL_116;
      }
      if ( v67 == 3 )
      {
        v70 = v62[576];
        v71 = *((_QWORD *)v39 + 26);
        v72 = *v62;
        if ( v70 < v71 )
        {
          VIDMM_WORKER_THREAD::SetTimeout(v72, v70 - v71, 6);
LABEL_116:
          v39 = 0LL;
          goto LABEL_117;
        }
        VIDMM_WORKER_THREAD::SetTimeout(v72, 0LL, 6);
      }
LABEL_117:
      v279 = v39;
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v300);
    if ( v39 && (*((_DWORD *)v39 + 13) & 7) == 1 )
      goto LABEL_79;
    v73 = (VIDMM_GLOBAL **)v1[10];
    v74 = v1 + 10;
    if ( v73 == v1 + 10 )
      goto LABEL_140;
    v75 = v1[10];
    v76 = 1;
    v77 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v77 + 41600, 0LL);
    *((_QWORD *)v77 + 5201) = KeGetCurrentThread();
    v78 = *((_DWORD *)v77 + 10408);
    *((_QWORD *)v77 + 5201) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v77 + 41600, 0LL);
    KeLeaveCriticalRegion();
    v79 = 0;
    do
    {
      v272 = v75;
      v49 = v75;
      if ( !v78
        || (v80 = *((_QWORD *)v75 + 4), !*(_BYTE *)(v80 + 24))
        || *(_DWORD *)(v80 + 48) != 203
        || (**(_DWORD **)(*(_QWORD *)(v80 + 64) + 96LL) & 0x20000) == 0 )
      {
        v79 = 1;
        v76 = 0;
      }
      v81 = *(VIDMM_PAGING_QUEUE ***)v75;
      if ( *(VIDMM_GLOBAL ***)v75 == v74 )
        break;
      if ( v81[1] == v75 )
      {
        v82 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v75 + 1);
        if ( *v82 == v75 )
          continue;
      }
      __fastfail(3u);
      *v82 = (VIDMM_PAGING_QUEUE *)v81;
      v81[1] = (VIDMM_PAGING_QUEUE *)v82;
      v83 = (VIDMM_PAGING_QUEUE **)v74[1];
      if ( *v83 != (VIDMM_PAGING_QUEUE *)v74 )
        __fastfail(3u);
      *((_QWORD *)v75 + 1) = v83;
      *(_QWORD *)v75 = v74;
      *v83 = v75;
      v74[1] = v75;
      if ( v81 != v73 )
        v75 = (VIDMM_PAGING_QUEUE *)v81;
      v84 = 0;
      if ( v81 != v73 )
        v84 = v76;
      v76 = v84;
    }
    while ( v84 );
    v1 = this;
    if ( !v79 )
    {
      v39 = v279;
LABEL_140:
      v272 = 0LL;
      goto LABEL_141;
    }
    if ( v49 )
      goto LABEL_167;
    v39 = v279;
LABEL_141:
    if ( *((_BYTE *)v1 + 216) )
    {
      v85 = *v1;
      *((_BYTE *)v1 + 216) = 0;
      v1[28] = (VIDMM_GLOBAL *)*((_QWORD *)v85 + 576);
    }
    if ( v39 && *((_QWORD *)*v1 + 576) - (_QWORD)v1[28] >= qword_1C00473D8 )
      goto LABEL_166;
    v86 = (VIDMM_GLOBAL **)v1[8];
    v87 = v1 + 8;
    if ( v86 == v1 + 8 )
      goto LABEL_165;
    v88 = v1[8];
    v89 = 1;
    v90 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v90 + 41600, 0LL);
    *((_QWORD *)v90 + 5201) = KeGetCurrentThread();
    v91 = *((_DWORD *)v90 + 10408);
    *((_QWORD *)v90 + 5201) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v90 + 41600, 0LL);
    KeLeaveCriticalRegion();
    v92 = 0;
    do
    {
      v272 = v88;
      v49 = v88;
      if ( !v91
        || (v93 = *((_QWORD *)v88 + 4), !*(_BYTE *)(v93 + 24))
        || *(_DWORD *)(v93 + 48) != 203
        || (**(_DWORD **)(*(_QWORD *)(v93 + 64) + 96LL) & 0x20000) == 0 )
      {
        v92 = 1;
        v89 = 0;
      }
      v94 = *(VIDMM_PAGING_QUEUE ***)v88;
      if ( *(VIDMM_GLOBAL ***)v88 == v87 )
        break;
      if ( v94[1] == v88 )
      {
        v95 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v88 + 1);
        if ( *v95 == v88 )
          continue;
      }
      __fastfail(3u);
      *v95 = (VIDMM_PAGING_QUEUE *)v94;
      v94[1] = (VIDMM_PAGING_QUEUE *)v95;
      v96 = (VIDMM_PAGING_QUEUE **)v87[1];
      if ( *v96 != (VIDMM_PAGING_QUEUE *)v87 )
        __fastfail(3u);
      *((_QWORD *)v88 + 1) = v96;
      *(_QWORD *)v88 = v87;
      *v96 = v88;
      v87[1] = v88;
      if ( v94 != v86 )
        v88 = (VIDMM_PAGING_QUEUE *)v94;
      v97 = 0;
      if ( v94 != v86 )
        v97 = v89;
      v89 = v97;
    }
    while ( v97 );
    v1 = this;
    if ( !v92 )
    {
      v39 = v279;
LABEL_165:
      v272 = 0LL;
LABEL_166:
      *((_BYTE *)v1 + 216) = 1;
LABEL_79:
      v54 = v280;
      goto LABEL_80;
    }
    if ( !v49 )
    {
      v39 = v279;
      goto LABEL_166;
    }
LABEL_167:
    v54 = (struct VIDMM_PAGING_QUEUE_PACKET *)*((_QWORD *)v49 + 4);
    v98 = (_QWORD *)((char *)v49 + 32);
    v39 = (VIDMM_DEVICE *)*((_QWORD *)v49 + 17);
    v279 = v39;
    v280 = v54;
    if ( *((VIDMM_PAGING_QUEUE **)v54 + 1) != (VIDMM_PAGING_QUEUE *)((char *)v49 + 32)
      || (v99 = *(_QWORD *)v54, *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)v54 + 8LL) != v54) )
    {
      __fastfail(3u);
    }
    *v98 = v99;
    *(_QWORD *)(v99 + 8) = v98;
    *(_QWORD *)v54 = 0LL;
    *((_QWORD *)v54 + 1) = 0LL;
LABEL_80:
    v1[2] = v39;
    v40[1] = 0LL;
    ExReleasePushLockExclusiveEx(v40, 0LL);
    KeLeaveCriticalRegion();
    if ( !v39 )
      goto LABEL_89;
    v55 = v272;
    if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0ppp(v9, &EventVidMmSelectOperation, v38, *((_QWORD *)v39 + 3), v272, v54);
    if ( !v55 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v39;
      goto LABEL_90;
    }
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v55;
    if ( *((_BYTE *)v54 + 24) && *((_DWORD *)v54 + 12) == 206 )
    {
      v56 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v54 + 18) = v56 * KeQueryTimeIncrement();
LABEL_89:
      v55 = v272;
    }
LABEL_90:
    v57 = (VIDMM_COMMIT_TELEMETRY *)(v1 + 23);
    v284 = (VIDMM_COMMIT_TELEMETRY *)(v1 + 23);
    while ( 1 )
    {
LABEL_91:
      v281 = 0LL;
      *((_QWORD *)v57 + 1) = 0LL;
      *((_QWORD *)v57 + 2) = 0LL;
      *(_QWORD *)v57 = 0LL;
      *((_BYTE *)v57 + 24) = 0;
      v270 = 0;
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v9);
      v58 = 0;
      v59 = 2;
      v306 = 0;
      v278 = 2;
      if ( v39 )
      {
        v60 = *((_QWORD *)v39 + 2);
        v306 = 0;
        if ( v60 )
        {
          v38 = 0LL;
          if ( *(_DWORD *)(*(_QWORD *)v39 + 6992LL) )
          {
            while ( 1 )
            {
              v61 = (_QWORD *)(*(_QWORD *)(v60 + 48) + 296LL * (unsigned int)v38);
              if ( v61[25] > v61[3] || v61[26] > v61[4] )
                break;
              v38 = (unsigned int)(v38 + 1);
              if ( (unsigned int)v38 >= *(_DWORD *)(*(_QWORD *)v39 + 6992LL) )
                goto LABEL_173;
            }
            v58 = 1;
            v306 = 1;
          }
LABEL_173:
          v100 = *(_QWORD *)(*(_QWORD *)(v60 + 40) + 32LL);
          if ( *(_BYTE *)(v100 + 322) )
            v59 = 0;
          else
            v59 = 2 - ((*(_DWORD *)(v100 + 328) & 1) != 0);
        }
        v278 = v59;
      }
      v101 = 0LL;
      v102 = 3 * (v58 + 2LL * v276);
      v9 = 12LL;
      if ( v59 != 2 )
        v101 = 12LL;
      v103 = (char *)&unk_1C003BE90 + 48 * v276 + 24 * v58 + v101;
      v285 = v103;
      if ( !v55 )
        break;
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(12LL);
      v104 = v103[8];
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppx(v9, v102, v38, v272, v54, *((_QWORD *)v54 + 5));
      v105 = *((_BYTE *)v54 + 24) == 0;
      v106 = (int *)((char *)v54 + 48);
      v286 = (int *)((char *)v54 + 48);
      if ( v105 )
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, v102);
        v142[3] = *v106;
        v142[4] = v54;
        v142[5] = *((unsigned __int8 *)v54 + 25);
        v142[6] = *((_QWORD *)v54 + 4);
        WdLogEvent5_WdEvent(v142);
        v281 = 0LL;
        v143 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v54 + 4);
        v144 = *((unsigned __int8 *)v54 + 25);
        Timeout = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v272 + 11);
        v270 = 0;
        v113 = VIDMM_GLOBAL::ProcessSystemCommand(
                 *this,
                 (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v54 + 48),
                 v144,
                 v143,
                 Timeout);
        v277 = v113;
      }
      else
      {
        KeQueryPerformanceCounter(&PerformanceFrequency);
        v109 = (_QWORD *)WdLogNewEntry5_WdEvent(v108, v107);
        v109[3] = *v106;
        v109[4] = v54;
        v109[5] = *((_QWORD *)v54 + 8);
        v109[6] = *((_QWORD *)v54 + 7);
        v109[7] = *((_QWORD *)v54 + 4);
        WdLogEvent5_WdEvent(v109);
        v110 = VIDMM_GLOBAL::ProcessDeferredCommand(
                 *this,
                 (__int64)v54 + 48,
                 &v270,
                 *((_BYTE *)v54 + 25),
                 *((_QWORD *)v54 + 4),
                 *((struct _VIDSCH_SYNC_OBJECT **)v272 + 11),
                 v104,
                 &v281);
        v105 = *((_BYTE *)v54 + 24) == 0;
        v113 = v110;
        v277 = v110;
        if ( v105 )
        {
          v114 = *((_QWORD *)v54 + 9);
          if ( !v114 )
          {
            v114 = *((_QWORD *)v54 + 8);
            if ( v114 )
              v114 = *(_QWORD *)(v114 + 8);
          }
        }
        else
        {
          v114 = *((_QWORD *)v54 + 7);
        }
        v115 = *(__int64 **)(v114 + 16);
        v116 = 0;
        v117 = 0;
        if ( *(_DWORD *)(*v115 + 6992) )
        {
          do
          {
            v118 = (VIDMM_PROCESS_BUDGET_STATE *)(v115[6] + 296LL * v117);
            if ( v115 != (__int64 *)-360LL && (struct _KTHREAD *)v115[46] == KeGetCurrentThread() )
            {
              v119 = WdLogNewEntry5_WdAssertion(v112, v111);
              *(_QWORD *)(v119 + 24) = 1306LL;
              WdLogEvent5_WdAssertion(v119);
            }
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v115 + 45, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v122 = *((_DWORD *)v115 + 94);
                if ( v122 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v120, (__int64)&EventBlockThread, v121, v122);
              }
              ExAcquirePushLockSharedEx(v115 + 45, 0LL);
            }
            v123 = (_QWORD *)((char *)v118 + 184);
            v124 = 0;
            v125 = (unsigned int *)(1560LL * v117 + *(_QWORD *)(*v115 + 40720) + 496LL);
            while ( 1 )
            {
              v126 = *(v123 - 6);
              if ( v124 == 1 )
              {
                v127 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v118);
                v126 = v127 + v128;
              }
              v129 = *v125;
              if ( v126 > *v123 * (v129 + 100) / 0x64uLL || v126 < *v123 * (100 - v129) / 0x64uLL )
                break;
              ++v124;
              v125 += 6;
              ++v123;
              if ( v124 >= 2 )
                goto LABEL_208;
            }
            v116 = 1;
LABEL_208:
            ExReleasePushLockSharedEx(v115 + 45, 0LL);
            KeLeaveCriticalRegion();
            v130 = *v115;
            ++v117;
          }
          while ( v117 < *(_DWORD *)(*v115 + 6992) );
          if ( v116 )
          {
            ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
            v131 = *(_DWORD *)(v130 + 6992);
            v132 = 0;
            if ( v131 )
            {
              v133 = *(_QWORD *)(v130 + 40720);
              while ( 2 )
              {
                v134 = 0LL;
                v135 = 1560LL * v132;
                v136 = (_BYTE *)(v133 + v135 + 512);
                do
                {
                  if ( (*v136 & 1) != 0 )
                  {
                    v137 = VIDMM_PARTITION::_PartitionTree;
                    i = 0LL;
                    if ( VIDMM_PARTITION::_PartitionTree )
                    {
                      do
                      {
                        i = v137;
                        v137 = (_QWORD *)*v137;
                      }
                      while ( v137 );
                    }
                    if ( i )
                    {
                      while ( !*(_BYTE *)(*(_QWORD *)(i[4]
                                                    + 368LL * *(unsigned int *)(*(_QWORD *)(v130 + 24) + 200LL)
                                                    + 24)
                                        + 328LL * v132
                                        + 120) )
                      {
                        v139 = (_QWORD **)i[1];
                        v140 = i;
                        if ( v139 )
                        {
                          v141 = *v139;
                          for ( i = (_QWORD *)i[1]; v141; v141 = (_QWORD *)*v141 )
                            i = v141;
                        }
                        else
                        {
                          for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                                i;
                                i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                          {
                            if ( (_QWORD *)*i == v140 )
                              break;
                            v140 = i;
                          }
                        }
                        if ( !i )
                          goto LABEL_228;
                      }
LABEL_231:
                      ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                      _InterlockedIncrement64((volatile signed __int64 *)(v130 + 41920));
                      v112 = *(_QWORD *)v130;
                      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v130 + 8LL) )
                        KeSetEvent(*(PRKEVENT *)(v112 + 152), 0, 0);
                      goto LABEL_233;
                    }
                  }
                  else if ( *(_BYTE *)(v133 + v135 + v134 + 664) )
                  {
                    goto LABEL_231;
                  }
LABEL_228:
                  v136 += 24;
                  v134 += 328LL;
                }
                while ( v134 < 656 );
                if ( ++v132 < v131 )
                  continue;
                break;
              }
            }
            ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
          }
LABEL_233:
          v106 = v286;
          v113 = v277;
          v54 = v280;
          v103 = v285;
          v39 = v279;
          v57 = v284;
          v58 = v306;
        }
        else
        {
          v54 = v280;
          v39 = v279;
          v57 = v284;
        }
      }
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppxx(v112, &EventPagingQueueComplete, v38, v272, v54, *((_QWORD *)v54 + 5), 0LL);
      v145 = *((_BYTE *)v54 + 24);
      if ( v113 == -1071775232 )
      {
        v277 = 0;
LABEL_246:
        if ( v145 )
        {
          if ( *v106 == 206 )
          {
            v146 = MEMORY[0xFFFFF78000000320];
            v147 = v146 * KeQueryTimeIncrement();
            *((_QWORD *)v54 + 19) = v147;
            if ( v147 - *((_QWORD *)v54 + 17) > 1000000 )
            {
              VIDMM_COMMIT_TELEMETRY::Init(v57, *this, v39, 0LL);
              VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(v148, v54);
              *((_QWORD *)v57 + 1) = 0LL;
              *((_QWORD *)v57 + 2) = 0LL;
              *(_QWORD *)v57 = 0LL;
              *((_BYTE *)v57 + 24) = 0;
            }
          }
        }
        v149 = v272;
        v150 = *((_QWORD *)v272 + 10);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v150 + 128, 0LL);
        *(_QWORD *)(v150 + 136) = KeGetCurrentThread();
        v153 = (struct VIDMM_PAGING_QUEUE_PACKET **)*((_QWORD *)v149 + 3);
        if ( *v153 != (VIDMM_PAGING_QUEUE *)((char *)v149 + 16) )
          __fastfail(3u);
        *(_QWORD *)v54 = (char *)v149 + 16;
        *((_QWORD *)v54 + 1) = v153;
        *v153 = v54;
        *((_QWORD *)v149 + 3) = v54;
        if ( *((VIDMM_PAGING_QUEUE **)v149 + 4) == (VIDMM_PAGING_QUEUE *)((char *)v149 + 32) )
        {
          v154 = *((int *)v149 + 28);
          if ( (_DWORD)v154 )
          {
            if ( (_DWORD)v154 != 1 )
            {
              v155 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v153, v151, v152);
              v155[3] = 270LL;
              v155[4] = 58LL;
              v155[5] = v149;
              v155[6] = v154;
              v155[7] = 0LL;
              WdLogEvent5_WdCriticalError(v155);
            }
            if ( g_IsInternalReleaseOrDbg )
            {
              v156 = (_QWORD *)WdLogNewEntry5_WdTrace(v153);
              v156[3] = v149;
              v156[4] = *((int *)v149 + 28);
              v156[5] = 0LL;
            }
            v157 = *(VIDMM_PAGING_QUEUE **)v149;
            if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v149 + 8LL) != v149
              || (v158 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v149 + 1), *v158 != v149) )
            {
              __fastfail(3u);
            }
            *v158 = v157;
            *((_QWORD *)v157 + 1) = v158;
            v159 = (struct _KEVENT *)*((_QWORD *)v149 + 15);
            *(_QWORD *)v149 = 0LL;
            *((_QWORD *)v149 + 1) = 0LL;
            *((_DWORD *)v149 + 28) = 0;
            KeSetEvent(v159, 0, 0);
          }
        }
        --*(_DWORD *)(*((_QWORD *)v149 + 17) + 64LL);
        --*(_DWORD *)(*((_QWORD *)v149 + 10) + 144LL);
        v160 = *((_QWORD *)v149 + 10) + 128LL;
        *(_QWORD *)(v160 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v160, 0LL);
        KeLeaveCriticalRegion();
        if ( (*((_DWORD *)v39 + 13) & 7) != 1 )
        {
          v113 = v277;
          goto LABEL_263;
        }
        v55 = 0LL;
        v54 = 0LL;
        v272 = 0LL;
        v280 = 0LL;
        v273 = 0;
      }
      else
      {
        v9 = v145;
        if ( v145 && (!v270 || *((_BYTE *)v54 + 120)) && *((_QWORD *)v54 + 9) )
        {
          v277 = 0;
          goto LABEL_246;
        }
        if ( v113 >= 0 )
          goto LABEL_246;
LABEL_263:
        v59 = v278;
LABEL_264:
        if ( v39 && ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
          McTemplateK0qqtqttp(v270, (unsigned __int8)v103[8], v58, v113, v276, v58, v59, v103[8], v270, (char)v281);
        if ( v113 >= 0 )
          goto LABEL_343;
        if ( v273 )
        {
          v161 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v111, v38);
          v161[6] = v272;
          v161[3] = 270LL;
          v161[4] = 54LL;
          v161[5] = v39;
          v161[7] = v54;
          WdLogEvent5_WdCriticalError(v161);
        }
        v162 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v111);
        v163 = v113;
        v164 = v270;
        v162[5] = v163;
        v162[3] = v54;
        v162[4] = v39;
        v162[6] = v164;
        WdLogEvent5_WdWarning(v162);
        *((_BYTE *)this + 160) = 1;
        if ( v164 )
        {
          while ( 1 )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v9);
            VIDMM_COMMIT_TELEMETRY::Init(v57, *this, v39, v281);
            if ( !v58 )
              VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(v165, v103[8]);
            v166 = v276;
            v287 = 0LL;
            v167 = VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(this, v39, v281);
            if ( !v167 )
            {
              v55 = v272;
              if ( g_IsInternalReleaseOrDbg )
                WdLogNewEntry5_WdTrace(v9);
              goto LABEL_91;
            }
            if ( v167 == -1071775484 )
            {
              if ( g_IsInternalReleaseOrDbg )
                WdLogNewEntry5_WdTrace(v9);
              v188 = v287;
              v189 = v39;
              v190 = v287;
              if ( (*((_DWORD *)v39 + 13) & 7) == 0 && VIDMM_DEVICE::IsBetterYieldCandidate(v39, v287) )
              {
                v188 = v39;
                v189 = v190;
              }
              VIDMM_DEVICE::Yield(v189, v188);
              if ( v188 == v39 )
              {
                v55 = v272;
                goto LABEL_91;
              }
              if ( v272 )
                VIDMM_PAGING_QUEUE::RewindPacket(v272, v54);
              v1 = this;
              v6 = v304;
              v7 = v305;
              v8 = v271;
              v5 = (char *)(this + 6);
              v191 = (VIDMM_GLOBAL *)(*((_QWORD *)*this + 576) - *((_QWORD *)v188 + 27));
              if ( (__int64)v191 > (__int64)this[21] )
              {
                this[21] = v191;
                *((_DWORD *)this + 44) = 8;
                goto LABEL_2;
              }
              goto LABEL_4;
            }
            if ( (**((_DWORD **)v281 + 12) & 0x20000) != 0 )
            {
              if ( *((_BYTE *)v54 + 24) )
              {
                if ( *((_DWORD *)v54 + 12) == 203 && *((_DWORD *)v54 + 20) == 5 )
                {
                  v9 = *((_QWORD *)*this + 5090);
                  if ( (*(_BYTE *)(1560LL * (*(_DWORD *)(**(_QWORD **)v281 + 76LL) & 0x3F) + v9 + 437) & 4) == 0 )
                  {
                    if ( g_IsInternalReleaseOrDbg )
                      WdLogNewEntry5_WdTrace(v9);
                    v55 = v272;
                    *((_DWORD *)v54 + 20) = 6;
                    v276 = v166;
                    goto LABEL_91;
                  }
                }
              }
            }
            VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound(v57, v103[8]);
            if ( v59 <= 0 )
              break;
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v9);
            v55 = v272;
            v278 = --v59;
            v276 = v166;
            if ( !v270 )
              goto LABEL_318;
            v58 = v306;
          }
          v168 = v281;
          v169 = *this;
          v170 = **(_QWORD **)v281;
          LODWORD(v171) = *(_DWORD *)(v170 + 68);
          if ( !(_DWORD)v171 )
          {
LABEL_298:
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(v170);
              v168 = v281;
            }
            v175 = *(_QWORD **)(*(_QWORD *)v168 + 8LL);
            IsProcessCommitRelinquished = PsIsProcessCommitRelinquished(*v175);
            if ( !g_UnrecoverablePagingFailureDebugMode
              && !KdRefreshDebuggerNotPresent()
              && !IsProcessCommitRelinquished )
            {
              v177 = "\n"
                     "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                     "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                     "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*)0"
                     "x%p)\"\n"
                     "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
              if ( !v54 )
                v177 = "\n"
                       "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                       "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                       "Paging operation type: Failure to resume device\n";
              DbgPrintEx(0x65u, 0, v177, v39, v54, v272);
              DbgPrintEx(
                0x65u,
                0,
                "\n"
                "We broke into the debugger to allow a chance for debugging this issue.\n"
                "\n"
                "To disable debug breaks on unrecoverable paging packet failures, run \"?? dxgmms2!g_UnrecoverablePagingF"
                "ailureDebugMode=1\"\n"
                "or \"ed 0x%p 1\"\n"
                "To re-attempt the failed paging packet execution for debugging purposes, run \"?? dxgmms2!g_Unrecoverabl"
                "ePagingFailureDebugMode=2\"\n"
                "or \"ed 0x%p 2\"\n"
                "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagingFailureD"
                "ebugMode=3\"\n"
                "or \"ed 0x%p 3\"\n"
                "!!! Note that option 2 will result in an unrecoverable machine state that should be rebooted after stepp"
                "ing through the code is done.!!!\n"
                "\n",
                (const void *)&g_UnrecoverablePagingFailureDebugMode,
                (const void *)&g_UnrecoverablePagingFailureDebugMode,
                (const void *)&g_UnrecoverablePagingFailureDebugMode);
              __debugbreak();
            }
            if ( !KdRefreshDebuggerNotPresent() )
            {
              if ( IsProcessCommitRelinquished )
              {
                v186 = v175[4];
                if ( v186 )
                {
                  if ( !*(_BYTE *)(v186 + 432) )
                  {
                    DbgPrintEx(
                      0x65u,
                      0,
                      "\n"
                      "We broke in to the debugger as a unrecoverable paging failure occurred after a process had its\n"
                      "virtual address space torn down, yet we do not detect ourselves in the frozen state for that proce"
                      "ss.\n"
                      "DXGPROCESS 0x%I64p and Mm should be inspected for how we reached this state.\n");
                    __debugbreak();
                  }
                }
              }
            }
            goto LABEL_317;
          }
          v172 = *((_QWORD *)v169 + 464);
          v173 = *(_DWORD *)(1560LL * (*(_WORD *)(v170 + 76) & 0x3F) + *((_QWORD *)v169 + 5090) + 20);
          while ( 1 )
          {
            _BitScanReverse((unsigned int *)&v170, v171);
            v290 = v170;
            v171 = ((1 << v170) - 1) & (unsigned int)v171;
            v174 = *(_QWORD *)(v172 + 8LL * (unsigned int)(v173 + v170));
            if ( *(_BYTE *)(v174 + 473) )
            {
              v170 = *(_QWORD *)(*(_QWORD *)v169 + 232LL);
              if ( *(_QWORD *)(v174 + 480) != v170 )
                break;
            }
            if ( !(_DWORD)v171 )
              goto LABEL_298;
          }
          v178 = WdLogNewEntry5_WdEvent(v170, v171);
          *(_QWORD *)(v178 + 24) = v174;
          WdLogEvent5_WdEvent(v178);
          v179 = MEMORY[0xFFFFF78000000320];
          v180 = v179 * KeQueryTimeIncrement();
          VIDMM_GLOBAL::Defragment(*this, (struct VIDMM_SEGMENT *)v174);
          v181 = MEMORY[0xFFFFF78000000320];
          v182 = v181 * KeQueryTimeIncrement() - v180;
          VIDMM_COMMIT_TELEMETRY::LogFullDefragPass(v57, v182);
          v185 = WdLogNewEntry5_WdEvent(v184, v183);
          *(_QWORD *)(v185 + 24) = v182 / 0xA / 0x3E8;
          WdLogEvent5_WdEvent(v185);
          v55 = v272;
          v276 = v166;
        }
        else
        {
LABEL_317:
          v55 = v272;
LABEL_318:
          v187 = v39;
          if ( !v55 || !*((_BYTE *)v54 + 24) )
            goto LABEL_323;
          v105 = *((_QWORD *)v54 + 9) == 0LL;
          *((_BYTE *)v54 + 120) = 1;
          if ( !v105 )
            goto LABEL_326;
          v187 = (VIDMM_DEVICE *)*((_QWORD *)v54 + 7);
          if ( !v187 )
          {
            v187 = *(VIDMM_DEVICE **)(*((_QWORD *)v54 + 8) + 8LL);
LABEL_323:
            if ( !v187 )
              goto LABEL_326;
          }
          v9 = *((_QWORD *)v187 + 4);
          if ( v9 )
            VidSchiMarkDeviceAsError(v9, 12);
LABEL_326:
          if ( !v270 )
          {
            if ( v55 )
              VIDMM_PAGING_QUEUE::ReclaimPacket(v55, v54);
LABEL_343:
            v6 = v304;
            goto LABEL_344;
          }
          v276 = 0;
          v273 = 1;
        }
      }
    }
    if ( v39 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(12LL);
      v113 = VIDMM_DEVICE::Resume(v39, v103[8], &v270, &v281);
      v304 = v305 || *((_DWORD *)this + 36);
      goto LABEL_264;
    }
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(12LL);
    v6 = 0;
    v304 = 0;
LABEL_344:
    v1 = this;
    if ( *((_DWORD *)this + 7) == 1 )
    {
      v192 = *this;
      v193 = 0;
      ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
      v194 = 0;
      if ( *((_DWORD *)v192 + 1748) )
      {
        do
        {
          v195 = 0LL;
          v196 = 1560LL * v194;
          do
          {
            v197 = *((_QWORD *)v192 + 5090);
            if ( (*(_BYTE *)(v196 + v197 + 512) & 1) != 0 )
            {
              v198 = VIDMM_PARTITION::_PartitionTree;
              k = 0LL;
              if ( VIDMM_PARTITION::_PartitionTree )
              {
                do
                {
                  k = v198;
                  v198 = (_QWORD *)*v198;
                }
                while ( v198 );
              }
              while ( k )
              {
                v200 = 328LL * v194 + *(_QWORD *)(368LL * *(unsigned int *)(*((_QWORD *)v192 + 3) + 200LL) + k[4] + 24);
                v201 = *(_QWORD *)(v200 + 8);
                if ( v201 )
                  v202 = (__int64)(100 - 100LL * *(_QWORD *)(v200 + 112) / v201) < (unsigned int)dword_1C00473B0;
                else
                  v202 = 0;
                if ( v202 != *(_BYTE *)(v200 + 120) )
                {
                  v193 = 1;
                  *(_BYTE *)(v200 + 120) = v202;
                }
                v203 = (_QWORD **)k[1];
                v204 = k;
                if ( v203 )
                {
                  k = (_QWORD *)k[1];
                  for ( j = *v203; j; j = (_QWORD *)*j )
                    k = j;
                }
                else
                {
                  for ( k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                  {
                    if ( (_QWORD *)*k == v204 )
                      break;
                    v204 = k;
                  }
                }
              }
            }
            else
            {
              v206 = 1560LL * v194 + v197 + v195;
              v207 = *(_QWORD *)(v206 + 552);
              if ( v207 )
                v208 = (__int64)(100 - 100LL * *(_QWORD *)(v206 + 656) / v207) < (unsigned int)dword_1C00473B0;
              else
                v208 = 0;
              if ( v208 != *(_BYTE *)(v206 + 664) )
              {
                v193 = 1;
                *(_BYTE *)(v206 + 664) = v208;
              }
            }
            v196 += 24LL;
            v195 += 328LL;
          }
          while ( v195 < 656 );
          ++v194;
        }
        while ( v194 < *((_DWORD *)v192 + 1748) );
        v1 = this;
      }
      ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
      v105 = ((unsigned __int8)v193 | *((_BYTE *)v1 + 160)) == 0;
      *((_BYTE *)v1 + 160) |= v193;
      if ( !v105 )
        VIDMM_GLOBAL::RequestNewBudget(*v1, 0);
      VIDMM_GLOBAL::HandlePromotionCandidates(*v1, &v275);
      v211 = *v1;
      v212 = (__int64)*v1 + 41816;
      if ( *v1 != (VIDMM_GLOBAL *)-41816LL && *((struct _KTHREAD **)*v1 + 5228) == KeGetCurrentThread() )
      {
        v213 = WdLogNewEntry5_WdAssertion(v210, v209);
        *(_QWORD *)(v213 + 24) = 1306LL;
        WdLogEvent5_WdAssertion(v213);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v212, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v216 = *(_DWORD *)(v212 + 16);
          if ( v216 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v214, (__int64)&EventBlockThread, v215, v216);
        }
        ExAcquirePushLockSharedEx(v212, 0LL);
      }
      IsPenaltyBoxEmptyWithoutLock = VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock((__int64)v211, 1);
      ExReleasePushLockSharedEx(v212, 0LL);
      KeLeaveCriticalRegion();
      if ( IsPenaltyBoxEmptyWithoutLock )
      {
        v6 = v304;
      }
      else
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v9);
        v6 = 1;
        v304 = 1;
      }
    }
LABEL_392:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v9);
    if ( (unsigned int)(*((_DWORD *)v1 + 6) - 3) > 2 )
    {
      if ( dword_1C0047388 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v9);
        v218 = *v1;
        v219 = *((_QWORD *)*v1 + 5240);
        if ( v219 == *((_QWORD *)v218 + 5241) )
        {
          v220 = 0;
        }
        else
        {
          v289 = 0LL;
          v288 = 14001;
          if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
            McTemplateK0q(v9, (__int64)&EventVidMmProfilerEnter, v38, 14001);
          DXGETWPROFILER_BASE::PushProfilerEntry();
          for ( m = 0; m < *((_DWORD *)v218 + 1748); ++m )
          {
            v283 = 0;
            DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
              (DXGAUTOPUSHLOCKSHARED *)v301,
              (VIDMM_GLOBAL *)((char *)v218 + 41544));
            DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
              (DXGAUTOEXPUSHLOCKSHARED *)v295,
              (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
            VIDMM_GLOBAL::SetupBudgetState(v218, (struct VIDMM_BUDGET_STATE *)&v283, m);
            VIDMM_GLOBAL::AssignBudgets(v218, (struct VIDMM_BUDGET_STATE *)&v283, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL);
            if ( (*(_BYTE *)(1560LL * m + *((_QWORD *)v218 + 5090) + 536) & 2) != 0 )
              VIDMM_GLOBAL::AssignBudgets(
                v218,
                (struct VIDMM_BUDGET_STATE *)&v283,
                D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL);
            if ( v297 == 1 )
            {
              ExReleasePushLockSharedEx(v296, 0LL);
            }
            else if ( v297 == 2 )
            {
              ExReleasePushLockExclusiveEx(v296, 0LL);
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v301);
          }
          *((_QWORD *)v218 + 5241) = v219;
          VIDMM_GLOBAL::SendBudgetChangeNotifications(v218);
          v220 = 1;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v288);
          if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
            McTemplateK0q(v222, (__int64)&EventVidMmProfilerExit, v223, v288);
        }
        v1 = this;
        VIDMM_GLOBAL::HandleTrimWnf(*this, v220);
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v9);
      v224 = *v1;
      if ( qword_1C00472E0 )
      {
        v225 = (VIDMM_GLOBAL *)((char *)v224 + 40472);
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v224 + 40488, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v228 = *((_DWORD *)v224 + 10126);
            if ( v228 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v226, (__int64)&EventBlockThread, v227, v228);
          }
          ExAcquirePushLockSharedEx((char *)v224 + 40488, 0LL);
        }
        v229 = *(VIDMM_GLOBAL **)v225;
        ExReleasePushLockSharedEx((char *)v224 + 40488, 0LL);
        KeLeaveCriticalRegion();
        if ( v229 != v225 )
        {
          if ( (*((_DWORD *)v224 + 1760) & 0x8000) != 0
            || (v230 = *((_QWORD *)v224 + 576) - *((_QWORD *)v224 + 955), v230 >= qword_1C00472E0) )
          {
            v232 = 0;
            DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)v224 + 40488));
            v233 = *(VIDMM_GLOBAL **)v225;
            if ( *(VIDMM_GLOBAL **)v225 != v225 )
            {
              v232 = 1;
              VIDMM_GLOBAL::StartPreparation((__int64)v224, 0xFFFFFFFFLL, 0LL, 0LL, 1001);
              do
              {
                v235 = *(VIDMM_GLOBAL ***)v233;
                v236 = (VIDMM_GLOBAL *)((char *)v233 - 400);
                v237 = v233;
                v233 = (VIDMM_GLOBAL *)v235;
                if ( v235[1] != v237 || (v238 = (VIDMM_GLOBAL **)*((_QWORD *)v237 + 1), *v238 != v237) )
                  __fastfail(3u);
                *v238 = (VIDMM_GLOBAL *)v235;
                v235[1] = (VIDMM_GLOBAL *)v238;
                v239 = *((_QWORD *)v236 + 63);
                *(_QWORD *)v237 = 0LL;
                v240 = *(unsigned __int16 *)(v239 + 4);
                if ( (_WORD)v240 && (_WORD)v240 != 3 )
                {
                  if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0p(v240, &EventProcessOfferAllocation, v234, v236);
                  v241 = *((_QWORD *)v236 + 17);
                  if ( !v241 || (*(_DWORD *)(v241 + 80) & 0x1001) != 0 )
                  {
                    v242 = (VIDMM_GLOBAL **)*((_QWORD *)v224 + 5067);
                    if ( *v242 != (VIDMM_GLOBAL *)((char *)v224 + 40528) )
                      __fastfail(3u);
                    *(_QWORD *)v237 = (char *)v224 + 40528;
                    *((_QWORD *)v237 + 1) = v242;
                    *v242 = v237;
                    *((_QWORD *)v224 + 5067) = v237;
                  }
                  else if ( *((_DWORD *)v236 + 32) == 2 )
                  {
                    VIDMM_SEGMENT::OfferAllocation((VIDMM_GLOBAL **)v241, v236);
                  }
                }
              }
              while ( v233 != v225 );
            }
            *((_QWORD *)v224 + 5062) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v224 + 40488, 0LL);
            KeLeaveCriticalRegion();
            *((_QWORD *)v224 + 955) = *((_QWORD *)v224 + 576);
            v231 = -qword_1C00472E0;
            if ( v232 )
              VIDMM_GLOBAL::EndPreparation(v224, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
          }
          else
          {
            v231 = v230 - qword_1C00472E0;
          }
          VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v224, v231, 3);
        }
      }
      v1 = this;
      v243 = *this;
      if ( !*((_DWORD *)*this + 1760)
        && (*((_QWORD *)v243 + 960) >= (unsigned __int64)qword_1C0047320
         || *((_DWORD *)v243 + 1922) >= (unsigned int)dword_1C0047328) )
      {
        goto LABEL_463;
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v9);
        v243 = *this;
      }
      VIDMM_GLOBAL::ProcessSystemMemoryOfferList(v243);
      v244 = (_QWORD *)((char *)*this + 3720);
      v244[1] = v244;
      *v244 = v244;
      v243 = *this;
      v245 = *this;
      if ( qword_1C00472D8 )
      {
        v246 = 0x8000000000000000uLL;
        if ( *((_BYTE *)v243 + 40674) )
        {
          v247 = *((_DWORD *)v243 + 926);
          v248 = 0LL;
          if ( v247 )
          {
            while ( 1 )
            {
              v249 = *(_QWORD *)(*((_QWORD *)v243 + 464) + 8 * v248);
              if ( (*(_DWORD *)(v249 + 80) & 0x1001) != 0 && *(_QWORD *)(v249 + 176) != v249 + 176 )
                break;
              v248 = (unsigned int)(v248 + 1);
              if ( (unsigned int)v248 >= v247 )
                goto LABEL_462;
            }
            *((_QWORD *)v243 + 954) = *((_QWORD *)v243 + 576);
            *((_BYTE *)v243 + 40674) = 0;
            v246 = -qword_1C00472D8;
          }
        }
        else
        {
          v250 = *((_QWORD *)v243 + 576) - *((_QWORD *)v243 + 954);
          if ( v250 < qword_1C00472D8 )
          {
            v246 = v250 - qword_1C00472D8;
          }
          else
          {
            VIDMM_GLOBAL::StartPreparation((__int64)v243, 0xFFFFFFFFLL, 0LL, 0LL, 207);
            v251 = VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(v243);
            VIDMM_GLOBAL::EndPreparation(v243, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
            if ( !v251 )
              *((_BYTE *)v243 + 40674) = 1;
          }
        }
LABEL_462:
        VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v243, v246, 2);
        v243 = *this;
LABEL_463:
        v245 = v243;
      }
      v6 = v304;
      if ( !v304 && !VIDMM_GLOBAL::UnderCleanupLimit(v243) )
      {
        VIDMM_GLOBAL::ResetCleanupCounters(v252, 1);
        v245 = *this;
        v271 = 1;
      }
      NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination((KSPIN_LOCK *)v245, &v274);
      if ( NextPendingTermination )
      {
        memset(v302, 0, 0x50uLL);
        v254 = *this;
        v302[2] = NextPendingTermination;
        LODWORD(v302[0]) = 200;
        VIDMM_GLOBAL::ProcessDeferredCommand(v254, (__int64)v302, &v282, 0, 0LL, 0LL, 0, &v299);
      }
      v255 = *this;
      if ( *((_BYTE *)*this + 41450) )
      {
        for ( n = 0; n < *((_DWORD *)v255 + 1748); ++n )
        {
          v257 = *((_QWORD *)v255 + 5090) + 1560LL * n;
          if ( !*(_DWORD *)(v257 + 432) && (*(_BYTE *)(v257 + 436) & 0x40) == 0 )
          {
            for ( ii = 0; ii < *(_DWORD *)(v257 + 24); ++ii )
            {
              v259 = *((_QWORD *)v255 + 464);
              v9 = ii + *(_DWORD *)(v257 + 20);
              v260 = *(_QWORD *)(v259 + 8 * v9);
              if ( *(_DWORD *)(v260 + 368) != -1 )
              {
                if ( (*(_BYTE *)(v257 + 436) & 0x40) == 0 )
                {
                  v261 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v259 + 8 * v9));
                  if ( v261 == *(_DWORD *)(v257 + 60) || v261 == *(_DWORD *)(v257 + 44) )
                  {
                    if ( *(_QWORD *)(v257 + 464) != v257 + 464 )
                    {
                      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v255, n);
                      VIDMM_GLOBAL::StartPreparation((__int64)v255, n, 0LL, 0LL, 121);
                      VIDMM_GLOBAL::FlushScratchGpuVaRanges(v255, n);
                      VIDMM_GLOBAL::EndPreparation(v255, n, 0LL, 0, 0LL, 0LL);
                    }
                    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v255, n);
                    *(_BYTE *)(v257 + 436) |= 0x40u;
                  }
                }
                (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))v255 + 5080))(
                  *((_QWORD *)v255 + 5081),
                  *(unsigned int *)(v260 + 368),
                  0LL);
              }
            }
          }
        }
        v1 = this;
        *((_BYTE *)v255 + 41450) = 0;
      }
    }
    v7 = v305;
    v5 = (char *)(v1 + 6);
    v8 = v271;
  }
  while ( v6 );
  v262 = *((_DWORD *)v1 + 7);
  if ( v262 == *((_DWORD *)v1 + 6) )
    goto LABEL_495;
  if ( v262 == 5 )
  {
    v263 = (_QWORD **)((char *)*v1 + 41904);
    v264 = *v263;
    if ( *v263 != v263 )
    {
      do
      {
        v265 = (VIDMM_DEVICE *)(v264 - 24);
        if ( !*(v264 - 2) && *((_QWORD *)v265 + 3) )
          VIDMM_DEVICE::FullySuspend(v265);
        v264 = (_QWORD *)*v264;
      }
      while ( v264 != v263 );
      v262 = *((_DWORD *)v1 + 7);
    }
  }
  v266 = (struct _KEVENT *)((char *)v1[19] + 48);
  *((_DWORD *)v1 + 6) = v262;
  KeSetEvent(v266, 0, 0);
  if ( *((_DWORD *)v1 + 7) != 2 )
  {
LABEL_495:
    v267 = *v1;
    v5 = (char *)(v1 + 6);
    v7 = v305;
    v268 = 0LL;
    if ( *((_DWORD *)*v1 + 926) )
    {
      do
      {
        v9 = *(_QWORD *)(*((_QWORD *)v267 + 464) + 8 * v268);
        if ( (*(_BYTE *)(v9 + 82) & 1) != 0 )
          VIDMM_SEGMENT::CurateVPR((VIDMM_SEGMENT *)v9);
        v268 = (unsigned int)(v268 + 1);
      }
      while ( (unsigned int)v268 < *((_DWORD *)v267 + 926) );
LABEL_2:
      v7 = v305;
      v5 = (char *)(v1 + 6);
    }
    v8 = v271;
    goto LABEL_4;
  }
  v1[7] = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 6, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(v1[1]);
  PsTerminateSystemThread(0);
}
