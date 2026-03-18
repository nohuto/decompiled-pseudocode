/*
 * XREFs of ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550
 * Callers:
 *     ?VidMmWorkerThreadProc@@YAXPEAX@Z @ 0x1C0077490 (-VidMmWorkerThreadProc@@YAXPEAX@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001798 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0001F7C (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0013804 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013B00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0020290 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 *     McTemplateK0iq @ 0x1C0021E0C (McTemplateK0iq.c)
 *     McTemplateK0ppp @ 0x1C0021E8C (McTemplateK0ppp.c)
 *     McTemplateK0ppx @ 0x1C0021F10 (McTemplateK0ppx.c)
 *     McTemplateK0ppxx @ 0x1C0021F9C (McTemplateK0ppxx.c)
 *     McTemplateK0qqtqttp @ 0x1C0022034 (McTemplateK0qqtqttp.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004ED2C (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C0050E60 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005174C (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0058020 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0058E30 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00592A0 (-ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C00592CC (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00593A0 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C00599B8 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005B7DC (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C005B984 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D1C4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C005E84C (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0066F30 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00670C0 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00757CC (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0098A5C (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C009A32C (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?GetDefragSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@GI@Z @ 0x1C009AFF4 (-GetDefragSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@GI@Z.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C00A0878 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00A0A68 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00A1544 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 *     ?RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00A31AC (-RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A9DE4 (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00AD34C (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ADCB8 (-SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00ADD58 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00AE120 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00AE5D8 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00AE754 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00AECFC (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00AF124 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::Run(VIDMM_WORKER_THREAD *this)
{
  VIDMM_WORKER_THREAD *v1; // r13
  struct _KTHREAD *CurrentThread; // rcx
  VIDMM_DEVICE *v3; // r12
  struct _KEVENT *v4; // rcx
  char *v5; // rdi
  char v6; // r15
  unsigned __int8 v7; // r14
  unsigned __int8 v8; // si
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rax
  char v13; // al
  __int64 v14; // r9
  __int64 v15; // r11
  __int64 v16; // rbx
  unsigned int v17; // r14d
  bool v18; // zf
  __int64 v19; // rdx
  __int64 v20; // rcx
  VIDMM_GLOBAL *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  bool v25; // di
  __int64 v26; // rcx
  _QWORD *v27; // r8
  VIDMM_GLOBAL *v28; // rbx
  __int64 v29; // rdi
  char v30; // bl
  VIDMM_GLOBAL *v31; // rdi
  _QWORD *v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rbx
  VIDMM_GLOBAL *v36; // rcx
  _QWORD *v37; // rax
  VIDMM_GLOBAL *v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rcx
  VIDMM_GLOBAL *v41; // rcx
  struct VIDMM_ALLOC *NextPendingTermination; // rbx
  VIDMM_GLOBAL *v43; // rbx
  int v44; // eax
  VIDMM_GLOBAL *v45; // rdi
  unsigned int v46; // ebx
  VIDMM_SEGMENT *v47; // rcx
  bool v48; // bl
  union _LARGE_INTEGER *v49; // rbx
  NTSTATUS v50; // esi
  __int64 v51; // rdi
  __int64 v52; // rbx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // r8
  _QWORD **v60; // rbx
  _QWORD **v61; // rdi
  _QWORD *v62; // rax
  VIDMM_DEVICE *v63; // rbx
  char *v64; // r15
  __int64 v65; // rdx
  _DWORD *v66; // rcx
  char *v67; // rsi
  VIDMM_WORKER_THREAD *v68; // r14
  VIDMM_PAGING_QUEUE *v69; // rdi
  __int64 *v70; // r14
  __int64 v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // r8
  bool v74; // di
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // r8
  bool v79; // di
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 *v84; // rdi
  VIDMM_WORKER_THREAD *v85; // r14
  char *v86; // rsi
  __int64 v87; // rax
  VIDMM_WORKER_THREAD *v88; // r14
  char *v89; // rsi
  struct VIDMM_PAGING_QUEUE_PACKET *v90; // r10
  VIDMM_COMMIT_TELEMETRY *v91; // r15
  char v92; // r14
  __int64 v93; // rax
  __int64 v94; // rdx
  char *v95; // rsi
  VIDMM_GLOBAL *v96; // rsi
  __int64 v97; // rcx
  _QWORD *v98; // rax
  _QWORD *n; // r8
  __int64 v100; // r10
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // rax
  char v103; // al
  _QWORD **v104; // rax
  _QWORD *v105; // rcx
  __int64 v106; // rdx
  unsigned int v107; // r9d
  __int64 v108; // rcx
  __int64 v109; // rbx
  ULONG TimeIncrement; // eax
  unsigned __int8 v111; // bl
  __int64 v112; // rdx
  __int64 v113; // rcx
  _QWORD *v114; // rax
  int v115; // eax
  __int64 v116; // rdx
  int v117; // ebx
  __int64 v118; // rax
  __int64 *v119; // rdi
  char v120; // r13
  unsigned int v121; // r12d
  VIDMM_PROCESS_BUDGET_STATE *v122; // r15
  __int64 v123; // rcx
  __int64 v124; // r8
  _QWORD *v125; // r9
  int v126; // esi
  unsigned int *v127; // rbx
  unsigned __int64 v128; // r8
  __int64 v129; // r10
  __int64 v130; // r15
  unsigned int v131; // r14d
  unsigned int v132; // edi
  __int64 v133; // r12
  __int64 v134; // rax
  __int64 v135; // r9
  _BYTE *v136; // rbx
  _BYTE *v137; // r8
  _QWORD *v138; // rax
  _QWORD *j; // rdx
  _QWORD **v140; // rax
  _QWORD *v141; // rcx
  __int64 v142; // rbx
  __int64 v143; // r8
  struct VIDMM_PAGING_QUEUE_PACKET **v144; // rcx
  __int64 v145; // rbx
  VIDMM_PAGING_QUEUE *v146; // rcx
  VIDMM_PAGING_QUEUE **v147; // rax
  struct _KEVENT *v148; // rcx
  __int64 v149; // rcx
  unsigned int v150; // r8d
  unsigned int v151; // ecx
  __int64 v152; // rdx
  __int64 v153; // rbx
  __int64 v154; // rbx
  __int64 v155; // rdi
  VIDMM_PAGING_QUEUE *v156; // r15
  char v157; // r12
  int v158; // ebx
  char v159; // dl
  VIDMM_PAGING_QUEUE **v160; // rax
  _QWORD *v161; // rax
  __int64 v162; // rdx
  VIDMM_GLOBAL *v163; // rcx
  __int64 v164; // rdi
  VIDMM_PAGING_QUEUE *v165; // r15
  char v166; // r12
  int v167; // ebx
  VIDMM_PAGING_QUEUE **v168; // rax
  _QWORD *v169; // rax
  VIDMM_CPU_HOST_APERTURE **v170; // rcx
  __int64 v171; // rbx
  __int64 v172; // rax
  __int64 v173; // rdi
  VIDMM_PAGING_QUEUE *v174; // r15
  char v175; // r12
  int v176; // ebx
  char v177; // dl
  VIDMM_PAGING_QUEUE **v178; // rax
  unsigned __int64 v179; // rax
  __int64 v180; // r8
  char v181; // r13
  _QWORD *v182; // r12
  __int64 v183; // r8
  _QWORD *v184; // r15
  VIDMM_GLOBAL *v185; // rbx
  VIDMM_GLOBAL *v186; // rcx
  VIDMM_GLOBAL **v187; // rax
  __int64 v188; // rax
  __int64 v189; // rcx
  __int64 v190; // rcx
  VIDMM_GLOBAL **v191; // rcx
  int v192; // r9d
  int v193; // r9d
  int v194; // r9d
  char v195; // bl
  int v196; // r9d
  int v197; // r9d
  int v198; // r9d
  VIDMM_PAGING_QUEUE **v199; // rcx
  VIDMM_PAGING_QUEUE **v200; // rcx
  struct _KEVENT *v201; // rcx
  __int64 v202; // rbx
  DXGPUSHLOCK *v203; // rsi
  _QWORD **v204; // rdi
  _QWORD **v205; // rbx
  _QWORD *v206; // rax
  int v207; // edi
  __int64 v208; // rbx
  __int64 v209; // rdx
  __int64 v210; // rax
  __int64 v211; // rcx
  VIDMM_PAGING_QUEUE **v212; // rcx
  VIDMM_PAGING_QUEUE **v213; // rcx
  _QWORD **v214; // rdi
  _QWORD *kk; // rbx
  __int64 **v216; // rcx
  VIDMM_PAGING_QUEUE **v217; // rcx
  _QWORD *v218; // rax
  __int64 v219; // rax
  __int64 v220; // rax
  __int64 v221; // rax
  int v222; // r9d
  __int64 v223; // rax
  __int64 v224; // rax
  __int64 v225; // rax
  __int64 v226; // rax
  _QWORD *v227; // rax
  __int64 v228; // rcx
  __int64 v229; // rax
  __int64 v230; // rax
  __int64 v231; // rax
  _QWORD *i; // rax
  VIDMM_COMMIT_TELEMETRY *v233; // rcx
  struct VIDMM_PAGING_QUEUE_PACKET *v234; // r10
  _QWORD *v235; // rax
  _QWORD *v236; // rax
  _QWORD *v237; // rax
  struct VIDMM_PAGING_QUEUE_PACKET *v238; // r14
  _QWORD *v239; // rax
  __int64 v240; // rcx
  __int64 v241; // rbx
  int v242; // ebx
  VIDMM_COMMIT_TELEMETRY *v243; // rcx
  int v244; // r14d
  int v245; // eax
  __int64 v246; // rdx
  __int64 v247; // rcx
  struct VIDMM_SEGMENT *DefragSegment; // rsi
  _QWORD *v249; // rdi
  char IsProcessCommitRelinquished; // bl
  const CHAR *v251; // r8
  VIDMM_DEVICE *v252; // rax
  __int64 v253; // r9
  __int64 v254; // rax
  int v255; // ebx
  ULONG v256; // edi
  int v257; // ebx
  unsigned int v258; // esi
  __int64 v259; // rdx
  __int64 v260; // rcx
  __int64 v261; // rax
  struct VIDMM_DEVICE *v262; // rdi
  VIDMM_DEVICE *v263; // rsi
  struct VIDMM_DEVICE *v264; // rbx
  __int64 v265; // rdx
  _QWORD *m; // rax
  char v267; // r12
  __int64 v268; // rax
  unsigned int ii; // esi
  __int64 v270; // rcx
  __int64 v271; // r8
  unsigned int v272; // esi
  __int64 v273; // rdi
  unsigned int jj; // r14d
  __int64 v275; // rax
  __int64 v276; // rcx
  __int64 v277; // r15
  int v278; // eax
  struct _VIDSCH_SYNC_OBJECT *Timeout; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v280; // [rsp+50h] [rbp-B0h]
  char v281; // [rsp+51h] [rbp-AFh]
  struct VIDMM_PAGING_QUEUE_PACKET *v282; // [rsp+58h] [rbp-A8h]
  char v283; // [rsp+60h] [rbp-A0h]
  bool v284; // [rsp+61h] [rbp-9Fh] BYREF
  VIDMM_PAGING_QUEUE *v285; // [rsp+68h] [rbp-98h]
  bool v286; // [rsp+70h] [rbp-90h] BYREF
  int v287; // [rsp+74h] [rbp-8Ch]
  int v288; // [rsp+78h] [rbp-88h]
  int v289; // [rsp+7Ch] [rbp-84h]
  VIDMM_DEVICE *v290; // [rsp+80h] [rbp-80h]
  struct VIDMM_ALLOC *v291; // [rsp+88h] [rbp-78h] BYREF
  bool v292; // [rsp+90h] [rbp-70h] BYREF
  int v293; // [rsp+94h] [rbp-6Ch] BYREF
  char *v294; // [rsp+98h] [rbp-68h]
  VIDMM_COMMIT_TELEMETRY *v295; // [rsp+A0h] [rbp-60h]
  struct VIDMM_DEVICE *v296; // [rsp+A8h] [rbp-58h]
  union _LARGE_INTEGER v297; // [rsp+B0h] [rbp-50h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v299; // [rsp+C0h] [rbp-40h]
  char v300[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v301; // [rsp+D0h] [rbp-30h]
  int v302; // [rsp+D8h] [rbp-28h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+E0h] [rbp-20h] BYREF
  struct VIDMM_ALLOC *v304; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v305[24]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v306[24]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v307[18]; // [rsp+120h] [rbp+20h] BYREF
  bool v309; // [rsp+1C8h] [rbp+C8h]
  char v310; // [rsp+1D0h] [rbp+D0h]
  unsigned int k; // [rsp+1D8h] [rbp+D8h] BYREF

  v1 = this;
  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)v1 + 1) = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  v3 = 0LL;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)v1 + 19) + 24LL), Executive, 0, 0, 0LL);
  v4 = (struct _KEVENT *)(*((_QWORD *)v1 + 19) + 48LL);
  *((_DWORD *)v1 + 6) = 1;
  KeSetEvent(v4, 0, 0);
  v5 = (char *)v1 + 48;
  v6 = 0;
  v299 = *((_QWORD *)v1 + 19);
  v7 = 0;
  v310 = 0;
  v309 = 0;
  v8 = 0;
  v286 = 0;
  Object = (PVOID)(v299 + 24);
  *((_QWORD *)v1 + 21) = 0x8000000000000000uLL;
  v284 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v1 + 48, 0LL);
  *((_QWORD *)v1 + 7) = KeGetCurrentThread();
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v48 = v284;
        *((_QWORD *)v1 + 2) = 0LL;
        if ( v7 || v48 || v8 )
          *((_QWORD *)v1 + 21) = 0LL;
        v297 = *(union _LARGE_INTEGER *)((char *)v1 + 168);
        if ( v297.QuadPart == 0x8000000000000000uLL )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            v218 = (_QWORD *)WdLogNewEntry5_WdTrace(0x8000000000000000uLL);
            v218[3] = v7;
            v218[4] = v48;
            v218[5] = v8;
          }
          v49 = 0LL;
        }
        else
        {
          v49 = &v297;
        }
        *((_QWORD *)v5 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v5, 0LL);
        KeLeaveCriticalRegion();
        ++*((_QWORD *)v1 + 29);
        v50 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v49, 0LL);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v5, 0LL);
        *((_QWORD *)v5 + 1) = KeGetCurrentThread();
        v51 = *(_QWORD *)v1;
        v52 = MEMORY[0xFFFFF78000000320];
        *(_QWORD *)(v51 + 4608) = v52 * KeQueryTimeIncrement();
        v54 = *(_QWORD *)v1;
        v55 = *(_QWORD *)(*(_QWORD *)v1 + 4608LL);
        if ( v55 - *(_QWORD *)(*(_QWORD *)v1 + 7120LL) > qword_1C0040330 )
        {
          *(_QWORD *)(v54 + 7104) = 0LL;
          *(_DWORD *)(v54 + 7112) = 0;
          *(_QWORD *)(v54 + 7120) = v55;
        }
        v284 = 0;
        v281 = 0;
        *((_BYTE *)v1 + 160) = 0;
        v288 = 0;
        v283 = 0;
        if ( !v50 )
        {
          if ( *((_DWORD *)v1 + 7) == *((_DWORD *)v1 + 6) )
          {
LABEL_68:
            if ( g_IsInternalReleaseOrDbg )
            {
              v221 = WdLogNewEntry5_WdTrace(v54);
              v54 = *((int *)v1 + 6);
              *(_QWORD *)(v221 + 24) = v54;
            }
            *((_DWORD *)v1 + 44) = 0;
          }
          else
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              v219 = WdLogNewEntry5_WdTrace(v54);
              *(_QWORD *)(v219 + 24) = *((int *)v1 + 6);
              *(_QWORD *)(v219 + 32) = *((int *)v1 + 7);
            }
            v54 = *((unsigned int *)v1 + 7);
            *((_DWORD *)v1 + 44) = 1;
            if ( (unsigned int)(v54 - 2) <= 3 )
            {
              KeWaitForSingleObject((PVOID)(*(_QWORD *)v1 + 41064LL), Executive, 0, 0, 0LL);
              v202 = *(_QWORD *)v1;
              v203 = (DXGPUSHLOCK *)(*(_QWORD *)v1 + 39984LL);
              DXGPUSHLOCK::AcquireExclusive(v203);
              v204 = (_QWORD **)(v202 + 39968);
              while ( 1 )
              {
                v205 = (_QWORD **)*v204;
                if ( (_QWORD **)(*v204)[1] != v204 || (v206 = *v205, (_QWORD **)(*v205)[1] != v205) )
                  __fastfail(3u);
                *v204 = v206;
                v206[1] = v204;
                if ( v205 == v204 )
                  break;
                (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD *))(*v205[2] + 24LL))(
                  v205[2],
                  0LL,
                  v205[3],
                  v205[4]);
                operator delete(v205);
              }
              *((_QWORD *)v203 + 1) = 0LL;
              ExReleasePushLockExclusiveEx(v203, 0LL);
              KeLeaveCriticalRegion();
            }
            else if ( (_DWORD)v54 == 1 )
            {
              *((_DWORD *)v1 + 6) = 1;
              KeSetEvent((PRKEVENT)(*((_QWORD *)v1 + 19) + 48LL), 0, 0);
            }
          }
          v7 = 1;
          v309 = 1;
          goto LABEL_72;
        }
        if ( v50 != 258 )
          goto LABEL_68;
        if ( g_IsInternalReleaseOrDbg )
        {
          v220 = WdLogNewEntry5_WdTrace(v54);
          v54 = *((_QWORD *)v1 + 21);
          *(_QWORD *)(v220 + 24) = v54;
        }
LABEL_72:
        if ( *((_QWORD *)v1 + 21) && ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
          McTemplateK0iq(v54, v55, v53);
        v56 = *(_QWORD *)v1;
        *((_QWORD *)v1 + 21) = 0x8000000000000000uLL;
        v57 = v56 + 39984;
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v56 + 39984, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v222 = *(_DWORD *)(v56 + 40000);
            if ( v222 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v58, (__int64)&EventBlockThread, v59, v222);
          }
          ExAcquirePushLockExclusiveEx(v56 + 39984, 0LL);
        }
        v60 = (_QWORD **)(v56 + 39968);
        *(_QWORD *)(v57 + 8) = KeGetCurrentThread();
        while ( 1 )
        {
          v61 = (_QWORD **)*v60;
          if ( (_QWORD **)(*v60)[1] != v60 || (v62 = *v61, (_QWORD **)(*v61)[1] != v61) )
            __fastfail(3u);
          *v60 = v62;
          v62[1] = v60;
          if ( v61 == v60 )
            break;
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD *))(*v61[2] + 24LL))(v61[2], 0LL, v61[3], v61[4]);
          operator delete(v61);
        }
        *(_QWORD *)(v57 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v57, 0LL);
        KeLeaveCriticalRegion();
        if ( !v7 && !v6 && !v286 )
          break;
        v63 = 0LL;
        v290 = 0LL;
        v282 = 0LL;
        v64 = (char *)v1 + 128;
        v310 = 0;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v1 + 128, 0LL);
        v67 = (char *)v1 + 96;
        *((_QWORD *)v1 + 17) = KeGetCurrentThread();
        v68 = (VIDMM_WORKER_THREAD *)*((_QWORD *)v1 + 12);
        if ( v68 == (VIDMM_WORKER_THREAD *)((char *)v1 + 96) )
          goto LABEL_80;
        v164 = *(_QWORD *)v1;
        v165 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v1 + 12);
        v166 = 1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v164 + 41024, 0LL);
        *(_QWORD *)(v164 + 41032) = KeGetCurrentThread();
        v167 = *(_DWORD *)(v164 + 41056);
        *(_QWORD *)(v164 + 41032) = 0LL;
        ExReleasePushLockExclusiveEx(v164 + 41024, 0LL);
        KeLeaveCriticalRegion();
        LOBYTE(v65) = 0;
        do
        {
          v285 = v165;
          v69 = v165;
          if ( !v167
            || (v223 = *((_QWORD *)v165 + 4), !*(_BYTE *)(v223 + 24))
            || *(_DWORD *)(v223 + 48) != 203
            || (v66 = *(_DWORD **)(*(_QWORD *)(v223 + 64) + 96LL), (*v66 & 0x20000) == 0) )
          {
            LOBYTE(v65) = 1;
            v166 = 0;
          }
          v168 = *(VIDMM_PAGING_QUEUE ***)v165;
          if ( *(char **)v165 == v67 )
            break;
          if ( v168[1] == v165 )
          {
            v217 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v165 + 1);
            if ( *v217 == v165 )
              goto LABEL_551;
          }
          __fastfail(3u);
          *v217 = (VIDMM_PAGING_QUEUE *)v168;
          v168[1] = (VIDMM_PAGING_QUEUE *)v217;
          v66 = (_DWORD *)*((_QWORD *)v1 + 13);
          if ( *(char **)v66 != v67 )
            __fastfail(3u);
LABEL_551:
          *(_QWORD *)v165 = v67;
          *((_QWORD *)v165 + 1) = v66;
          *(_QWORD *)v66 = v165;
          *((_QWORD *)v1 + 13) = v165;
          if ( v168 == (VIDMM_PAGING_QUEUE **)v68 )
            break;
          v165 = (VIDMM_PAGING_QUEUE *)v168;
        }
        while ( v166 );
        v64 = (char *)v1 + 128;
        if ( !(_BYTE)v65 )
        {
          v3 = v290;
          v63 = v290;
LABEL_80:
          v285 = 0LL;
          v69 = 0LL;
          goto LABEL_81;
        }
        if ( v69 )
          goto LABEL_237;
        v3 = v290;
        v63 = v290;
LABEL_81:
        if ( ((*((_DWORD *)v1 + 7) - 1) & 0xFFFFFFFD) == 0 )
        {
          v70 = *(__int64 **)v1;
          v71 = *(_QWORD *)v1 + 41240LL;
          if ( *(_QWORD *)v1 != -41240LL && *(struct _KTHREAD **)(*(_QWORD *)v1 + 41248LL) == KeGetCurrentThread() )
          {
            v224 = WdLogNewEntry5_WdAssertion(v66, v65);
            *(_QWORD *)(v224 + 24) = 1214LL;
            WdLogEvent5_WdAssertion(v224);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v71, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v193 = *(_DWORD *)(v71 + 16);
              if ( v193 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v72, (__int64)&EventBlockThread, v73, v193);
            }
            ExAcquirePushLockSharedEx(v71, 0LL);
          }
          v74 = v70[5158] == (_QWORD)(v70 + 5158);
          ExReleasePushLockSharedEx(v71, 0LL);
          KeLeaveCriticalRegion();
          if ( v74 )
          {
            if ( v71 && *(struct _KTHREAD **)(v71 + 8) == KeGetCurrentThread() )
            {
              v225 = WdLogNewEntry5_WdAssertion(v76, v75);
              *(_QWORD *)(v225 + 24) = 1214LL;
              WdLogEvent5_WdAssertion(v225);
            }
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v71, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v196 = *(_DWORD *)(v71 + 16);
                if ( v196 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v77, (__int64)&EventBlockThread, v78, v196);
              }
              ExAcquirePushLockSharedEx(v71, 0LL);
            }
            v79 = v70[5160] == (_QWORD)(v70 + 5160);
            ExReleasePushLockSharedEx(v71, 0LL);
            KeLeaveCriticalRegion();
            if ( v79 )
            {
              if ( v71 && *(struct _KTHREAD **)(v71 + 8) == KeGetCurrentThread() )
              {
                v226 = WdLogNewEntry5_WdAssertion(v81, v80);
                *(_QWORD *)(v226 + 24) = 1214LL;
                WdLogEvent5_WdAssertion(v226);
              }
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v71, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v194 = *(_DWORD *)(v71 + 16);
                  if ( v194 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q(v82, (__int64)&EventBlockThread, v83, v194);
                }
                ExAcquirePushLockSharedEx(v71, 0LL);
              }
              v84 = (__int64 *)v70[5162];
              ExReleasePushLockSharedEx(v71, 0LL);
              KeLeaveCriticalRegion();
              if ( v84 == v70 + 5162 )
              {
                if ( !*(_BYTE *)(v70[3] + 2269) && !*(_BYTE *)(v70[2] + 761)
                  || VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)v70, 4) )
                {
                  v3 = 0LL;
                  v310 = 0;
                  v290 = 0LL;
                  goto LABEL_100;
                }
                v207 = 4;
              }
              else
              {
                v207 = 3;
              }
            }
            else
            {
              v207 = 2;
            }
          }
          else
          {
            v207 = 1;
          }
          v310 = 1;
          DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v305, (struct _KTHREAD **)v71);
          v208 = v70[2 * (unsigned int)(v207 - 1) + 5158] - 176;
          if ( !VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)v70) )
          {
            if ( v207 == 2 )
            {
              v227 = *(_QWORD **)(v208 + 232);
              if ( v227 )
              {
                v228 = v227[27];
                if ( v228 > *(_QWORD *)(*v227 + 4608LL) )
                {
                  VIDMM_WORKER_THREAD::SetTimeout(*v70, v70[576] - v228, 8);
                  v208 = 0LL;
                }
              }
            }
            else if ( v207 == 3 )
            {
              v209 = v70[576];
              v210 = *(_QWORD *)(v208 + 208);
              v211 = *v70;
              if ( v209 < v210 )
              {
                VIDMM_WORKER_THREAD::SetTimeout(v211, v209 - v210, 6);
                v208 = 0LL;
              }
              else
              {
                VIDMM_WORKER_THREAD::SetTimeout(v211, 0LL, 6);
              }
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v305);
          v290 = (VIDMM_DEVICE *)v208;
          v3 = (VIDMM_DEVICE *)v208;
          if ( v208 && (*(_DWORD *)(v208 + 52) & 7) == 1 )
          {
            v69 = v285;
            goto LABEL_108;
          }
LABEL_100:
          v85 = (VIDMM_WORKER_THREAD *)*((_QWORD *)v1 + 10);
          v86 = (char *)v1 + 80;
          if ( v85 != (VIDMM_WORKER_THREAD *)((char *)v1 + 80) )
          {
            v173 = *(_QWORD *)v1;
            v174 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v1 + 10);
            v175 = 1;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v173 + 41024, 0LL);
            *(_QWORD *)(v173 + 41032) = KeGetCurrentThread();
            v176 = *(_DWORD *)(v173 + 41056);
            *(_QWORD *)(v173 + 41032) = 0LL;
            ExReleasePushLockExclusiveEx(v173 + 41024, 0LL);
            KeLeaveCriticalRegion();
            v177 = 0;
            do
            {
              v285 = v174;
              v69 = v174;
              if ( !v176
                || (v229 = *((_QWORD *)v174 + 4), !*(_BYTE *)(v229 + 24))
                || *(_DWORD *)(v229 + 48) != 203
                || (**(_DWORD **)(*(_QWORD *)(v229 + 64) + 96LL) & 0x20000) == 0 )
              {
                v177 = 1;
                v175 = 0;
              }
              v178 = *(VIDMM_PAGING_QUEUE ***)v174;
              if ( *(char **)v174 == v86 )
                break;
              if ( v178[1] == v174 )
              {
                v212 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v174 + 1);
                if ( *v212 == v174 )
                  goto LABEL_552;
              }
              __fastfail(3u);
              *v212 = (VIDMM_PAGING_QUEUE *)v178;
              v178[1] = (VIDMM_PAGING_QUEUE *)v212;
              v213 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v1 + 11);
              if ( *v213 != (VIDMM_PAGING_QUEUE *)v86 )
                __fastfail(3u);
LABEL_552:
              *(_QWORD *)v174 = v86;
              *((_QWORD *)v174 + 1) = v213;
              *v213 = v174;
              *((_QWORD *)v1 + 11) = v174;
              if ( v178 == (VIDMM_PAGING_QUEUE **)v85 )
                break;
              v174 = (VIDMM_PAGING_QUEUE *)v178;
            }
            while ( v175 );
            v64 = (char *)v1 + 128;
            if ( v177 )
            {
              if ( v69 )
              {
LABEL_237:
                v63 = (VIDMM_DEVICE *)*((_QWORD *)v69 + 4);
                v161 = (_QWORD *)((char *)v69 + 32);
                v3 = (VIDMM_DEVICE *)*((_QWORD *)v69 + 17);
                v290 = v3;
                v282 = v63;
                if ( *((VIDMM_PAGING_QUEUE **)v63 + 1) != (VIDMM_PAGING_QUEUE *)((char *)v69 + 32)
                  || (v162 = *(_QWORD *)v63, *(VIDMM_DEVICE **)(*(_QWORD *)v63 + 8LL) != v63) )
                {
                  __fastfail(3u);
                }
                *v161 = v162;
                *(_QWORD *)(v162 + 8) = v161;
                *(_QWORD *)v63 = 0LL;
                *((_QWORD *)v63 + 1) = 0LL;
                goto LABEL_109;
              }
              v3 = v290;
LABEL_102:
              if ( *((_BYTE *)v1 + 216) )
              {
                v87 = *(_QWORD *)v1;
                *((_BYTE *)v1 + 216) = 0;
                *((_QWORD *)v1 + 28) = *(_QWORD *)(v87 + 4608);
              }
              if ( v3 && *(_QWORD *)(*(_QWORD *)v1 + 4608LL) - *((_QWORD *)v1 + 28) >= qword_1C00403D8 )
                goto LABEL_107;
              v88 = (VIDMM_WORKER_THREAD *)*((_QWORD *)v1 + 8);
              v89 = (char *)v1 + 64;
              if ( v88 == (VIDMM_WORKER_THREAD *)((char *)v1 + 64) )
                goto LABEL_106;
              v155 = *(_QWORD *)v1;
              v156 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v1 + 8);
              v157 = 1;
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx(v155 + 41024, 0LL);
              *(_QWORD *)(v155 + 41032) = KeGetCurrentThread();
              v158 = *(_DWORD *)(v155 + 41056);
              *(_QWORD *)(v155 + 41032) = 0LL;
              ExReleasePushLockExclusiveEx(v155 + 41024, 0LL);
              KeLeaveCriticalRegion();
              v159 = 0;
              do
              {
                v285 = v156;
                v69 = v156;
                if ( !v158
                  || (v230 = *((_QWORD *)v156 + 4), !*(_BYTE *)(v230 + 24))
                  || *(_DWORD *)(v230 + 48) != 203
                  || (**(_DWORD **)(*(_QWORD *)(v230 + 64) + 96LL) & 0x20000) == 0 )
                {
                  v159 = 1;
                  v157 = 0;
                }
                v160 = *(VIDMM_PAGING_QUEUE ***)v156;
                if ( *(char **)v156 == v89 )
                  break;
                if ( v160[1] == v156 )
                {
                  v199 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v156 + 1);
                  if ( *v199 == v156 )
                    goto LABEL_553;
                }
                __fastfail(3u);
                *v199 = (VIDMM_PAGING_QUEUE *)v160;
                v160[1] = (VIDMM_PAGING_QUEUE *)v199;
                v200 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v1 + 9);
                if ( *v200 != (VIDMM_PAGING_QUEUE *)v89 )
                  __fastfail(3u);
LABEL_553:
                *(_QWORD *)v156 = v89;
                *((_QWORD *)v156 + 1) = v200;
                *v200 = v156;
                *((_QWORD *)v1 + 9) = v156;
                if ( v160 == (VIDMM_PAGING_QUEUE **)v88 )
                  break;
                v156 = (VIDMM_PAGING_QUEUE *)v160;
              }
              while ( v157 );
              v64 = (char *)v1 + 128;
              if ( !v159 )
              {
                v3 = v290;
LABEL_106:
                v285 = 0LL;
                v69 = 0LL;
LABEL_107:
                *((_BYTE *)v1 + 216) = 1;
LABEL_108:
                v63 = 0LL;
                goto LABEL_109;
              }
              if ( !v69 )
              {
                v3 = v290;
                goto LABEL_107;
              }
              goto LABEL_237;
            }
            v3 = v290;
          }
          v285 = 0LL;
          v69 = 0LL;
          goto LABEL_102;
        }
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v66) + 24) = *((int *)v1 + 7);
LABEL_109:
        *((_QWORD *)v1 + 2) = v3;
        *((_QWORD *)v64 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v64, 0LL);
        KeLeaveCriticalRegion();
        if ( v3 )
        {
          if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
            McTemplateK0ppp(v26, &EventVidMmSelectOperation, (__int64)v27, *((_QWORD *)v3 + 3), v69, v63);
          if ( v69 )
          {
            if ( g_IsInternalReleaseOrDbg )
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v26) + 24) = v69;
            if ( *((_BYTE *)v63 + 24) && *((_DWORD *)v63 + 12) == 206 )
            {
              v109 = MEMORY[0xFFFFF78000000320];
              TimeIncrement = KeQueryTimeIncrement();
              v90 = v282;
              *((_QWORD *)v282 + 18) = v109 * TimeIncrement;
              goto LABEL_111;
            }
          }
          else if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v26) + 24) = v3;
          }
        }
        v90 = v282;
LABEL_111:
        v91 = (VIDMM_WORKER_THREAD *)((char *)v1 + 184);
        v295 = (VIDMM_WORKER_THREAD *)((char *)v1 + 184);
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_112:
            v291 = 0LL;
            *((_QWORD *)v91 + 1) = 0LL;
            *((_QWORD *)v91 + 2) = 0LL;
            *(_QWORD *)v91 = 0LL;
            *((_BYTE *)v91 + 24) = 0;
            LOBYTE(k) = 0;
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(v26);
              v90 = v282;
            }
            v280 = 0;
            v287 = 2;
            if ( v3 )
            {
              v106 = *((_QWORD *)v3 + 2);
              v280 = 0;
              if ( v106 )
              {
                v107 = 0;
                if ( *(_DWORD *)(*(_QWORD *)v3 + 6416LL) )
                {
                  while ( 1 )
                  {
                    v27 = (_QWORD *)(*(_QWORD *)(v106 + 48) + 296LL * v107);
                    if ( v27[25] > v27[3] || v27[26] > v27[4] )
                      break;
                    if ( ++v107 >= *(_DWORD *)(*(_QWORD *)v3 + 6416LL) )
                      goto LABEL_147;
                  }
                  v280 = 1;
                }
LABEL_147:
                v108 = *(_QWORD *)(*(_QWORD *)(v106 + 40) + 32LL);
                if ( *(_BYTE *)(v108 + 306) )
                  v287 = 0;
                else
                  v287 = 2 - ((*(_DWORD *)(v108 + 312) & 1) != 0);
              }
              else
              {
                v287 = 2;
              }
            }
            v92 = v287;
            v93 = 0LL;
            v94 = 3 * (v280 + 2LL * v288);
            v26 = 12LL;
            if ( v287 != 2 )
              v93 = 12LL;
            v95 = (char *)&unk_1C0034050 + 48 * v288 + 24 * v280 + v93;
            v294 = v95;
            if ( !v69 )
              break;
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(12LL);
              v90 = v282;
            }
            v111 = v95[8];
            if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              McTemplateK0ppx(v26, v94, (__int64)v27, v69, v90, *((_QWORD *)v90 + 5));
              v90 = v282;
            }
            if ( !*((_BYTE *)v90 + 24) )
            {
              v169 = (_QWORD *)WdLogNewEntry5_WdEvent(v26, v94);
              v169[3] = *((int *)v282 + 12);
              v169[4] = v282;
              v169[5] = *((unsigned __int8 *)v282 + 25);
              v169[6] = *((_QWORD *)v282 + 4);
              WdLogEvent5_WdEvent(v169);
              v170 = *(VIDMM_CPU_HOST_APERTURE ***)v1;
              v291 = 0LL;
              Timeout = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v69 + 11);
              LOBYTE(k) = 0;
              v117 = VIDMM_GLOBAL::ProcessSystemCommand(
                       v170,
                       (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v282 + 48),
                       *((unsigned __int8 *)v282 + 25),
                       *((_QWORD *)v282 + 4),
                       Timeout);
              v289 = v117;
LABEL_191:
              v26 = (__int64)v282;
              goto LABEL_192;
            }
            KeQueryPerformanceCounter(&PerformanceFrequency);
            v114 = (_QWORD *)WdLogNewEntry5_WdEvent(v113, v112);
            v114[3] = *((int *)v282 + 12);
            v114[4] = v282;
            v114[5] = *((_QWORD *)v282 + 8);
            v114[6] = *((_QWORD *)v282 + 7);
            v114[7] = *((_QWORD *)v282 + 4);
            WdLogEvent5_WdEvent(v114);
            v115 = VIDMM_GLOBAL::ProcessDeferredCommand(
                     *(VIDMM_GLOBAL **)v1,
                     (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v282 + 48),
                     (bool *)&k,
                     *((_BYTE *)v282 + 25),
                     *((_QWORD *)v282 + 4),
                     *((struct _VIDSCH_SYNC_OBJECT **)v285 + 11),
                     v111,
                     &v291);
            v26 = (__int64)v282;
            v289 = v115;
            v117 = v115;
            if ( *((_BYTE *)v282 + 24) )
            {
              v118 = *((_QWORD *)v282 + 7);
            }
            else
            {
              v118 = *((_QWORD *)v282 + 9);
              if ( !v118 )
              {
                v118 = *((_QWORD *)v282 + 8);
                if ( v118 )
                  v118 = *(_QWORD *)(v118 + 8);
              }
            }
            v119 = *(__int64 **)(v118 + 16);
            v120 = 0;
            v121 = 0;
            if ( *(_DWORD *)(*v119 + 6416) )
            {
              do
              {
                v122 = (VIDMM_PROCESS_BUDGET_STATE *)(v119[6] + 296LL * v121);
                if ( v119 != (__int64 *)-360LL && (struct _KTHREAD *)v119[46] == KeGetCurrentThread() )
                {
                  v231 = WdLogNewEntry5_WdAssertion(v26, v116);
                  *(_QWORD *)(v231 + 24) = 1214LL;
                  WdLogEvent5_WdAssertion(v231);
                }
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v119 + 45, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v198 = *((_DWORD *)v119 + 94);
                    if ( v198 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0q(v123, (__int64)&EventBlockThread, v124, v198);
                  }
                  ExAcquirePushLockSharedEx(v119 + 45, 0LL);
                }
                v125 = (_QWORD *)((char *)v122 + 184);
                v126 = 0;
                v127 = (unsigned int *)(1552LL * v121 + *(_QWORD *)(*v119 + 40168) + 488LL);
                while ( 1 )
                {
                  v128 = *(v125 - 6);
                  if ( v126 == 1 )
                  {
                    v179 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v122);
                    v128 = v179 + v180;
                  }
                  v129 = *v127;
                  if ( v128 > *v125 * (v129 + 100) / 0x64uLL || v128 < *v125 * (100 - v129) / 0x64uLL )
                    break;
                  ++v126;
                  ++v125;
                  v127 += 6;
                  if ( v126 >= 2 )
                    goto LABEL_174;
                }
                v120 = 1;
LABEL_174:
                ExReleasePushLockSharedEx(v119 + 45, 0LL);
                KeLeaveCriticalRegion();
                v130 = *v119;
                ++v121;
              }
              while ( v121 < *(_DWORD *)(*v119 + 6416) );
              if ( v120 )
              {
                ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                v131 = *(_DWORD *)(v130 + 6416);
                v132 = 0;
                if ( v131 )
                {
                  v133 = *(_QWORD *)(v130 + 40168);
                  while ( 2 )
                  {
                    v134 = 1552LL * v132;
                    v135 = 0LL;
                    v136 = (_BYTE *)(v134 + v133 + 656);
                    v137 = (_BYTE *)(v134 + v133 + 504);
                    do
                    {
                      if ( (*v137 & 1) != 0 )
                      {
                        v138 = VIDMM_PARTITION::_PartitionTree;
                        j = 0LL;
                        if ( VIDMM_PARTITION::_PartitionTree )
                        {
                          do
                          {
                            j = v138;
                            v138 = (_QWORD *)*v138;
                          }
                          while ( v138 );
                        }
                        if ( j )
                        {
                          while ( !*(_BYTE *)(*(_QWORD *)(j[4]
                                                        + 368LL * *(unsigned int *)(*(_QWORD *)(v130 + 24) + 200LL)
                                                        + 24)
                                            + 328LL * v132
                                            + 120) )
                          {
                            v140 = (_QWORD **)j[1];
                            v141 = j;
                            if ( v140 )
                            {
                              j = (_QWORD *)j[1];
                              for ( i = *v140; i; i = (_QWORD *)*i )
                                j = i;
                            }
                            else
                            {
                              for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
                                    j;
                                    j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                              {
                                if ( (_QWORD *)*j == v141 )
                                  break;
                                v141 = j;
                              }
                            }
                            if ( !j )
                              goto LABEL_187;
                          }
LABEL_425:
                          ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                          _InterlockedIncrement64((volatile signed __int64 *)(v130 + 41344));
                          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v130 + 8LL) )
                            KeSetEvent(*(PRKEVENT *)(*(_QWORD *)v130 + 152LL), 0, 0);
                          goto LABEL_190;
                        }
                      }
                      else if ( *v136 )
                      {
                        goto LABEL_425;
                      }
LABEL_187:
                      ++v135;
                      v137 += 24;
                      v136 += 328;
                    }
                    while ( v135 < 2 );
                    if ( ++v132 < v131 )
                      continue;
                    break;
                  }
                }
                ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              }
LABEL_190:
              v117 = v289;
              v1 = this;
              v69 = v285;
              v95 = v294;
              v3 = v290;
              v91 = v295;
              v92 = v287;
              goto LABEL_191;
            }
            v1 = this;
            v69 = v285;
            v3 = v290;
LABEL_192:
            if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              McTemplateK0ppxx(v26, &EventPagingQueueComplete, (__int64)v27, v69, v26, *(_QWORD *)(v26 + 40), 0LL);
              v26 = (__int64)v282;
            }
            if ( v117 == -1071775232 )
            {
              v289 = 0;
            }
            else if ( *(_BYTE *)(v26 + 24) && (!(_BYTE)k || *(_BYTE *)(v26 + 120)) && *(_QWORD *)(v26 + 72) )
            {
              v289 = 0;
            }
            else if ( v117 < 0 )
            {
              goto LABEL_213;
            }
            if ( *(_BYTE *)(v26 + 24) )
            {
              if ( *(_DWORD *)(v26 + 48) == 206 )
              {
                v171 = MEMORY[0xFFFFF78000000320];
                v172 = v171 * KeQueryTimeIncrement();
                *((_QWORD *)v282 + 19) = v172;
                if ( v172 - *((_QWORD *)v282 + 17) > 1000000 )
                {
                  VIDMM_COMMIT_TELEMETRY::Init(v91, *(struct VIDMM_GLOBAL **)v1, v3, 0LL);
                  VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(v233, v234);
                  *((_QWORD *)v91 + 1) = 0LL;
                  *((_QWORD *)v91 + 2) = 0LL;
                  *(_QWORD *)v91 = 0LL;
                  *((_BYTE *)v91 + 24) = 0;
                }
              }
            }
            v142 = *((_QWORD *)v69 + 10) + 128LL;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v142, 0LL);
            *(_QWORD *)(v142 + 8) = KeGetCurrentThread();
            v144 = (struct VIDMM_PAGING_QUEUE_PACKET **)*((_QWORD *)v69 + 3);
            if ( *v144 != (VIDMM_PAGING_QUEUE *)((char *)v69 + 16) )
              __fastfail(3u);
            *(_QWORD *)v282 = (char *)v69 + 16;
            *((_QWORD *)v282 + 1) = v144;
            *v144 = v282;
            *((_QWORD *)v69 + 3) = v282;
            if ( *((VIDMM_PAGING_QUEUE **)v69 + 4) == (VIDMM_PAGING_QUEUE *)((char *)v69 + 32) )
            {
              v145 = *((int *)v69 + 28);
              if ( (_DWORD)v145 )
              {
                if ( (_DWORD)v145 != 1 )
                {
                  v235 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v144, v282, v143);
                  v235[3] = 270LL;
                  v235[4] = 58LL;
                  v235[5] = v69;
                  v235[6] = v145;
                  v235[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v235);
                }
                if ( g_IsInternalReleaseOrDbg )
                {
                  v236 = (_QWORD *)WdLogNewEntry5_WdTrace(v144);
                  v236[3] = v69;
                  v236[4] = *((int *)v69 + 28);
                  v236[5] = 0LL;
                }
                v146 = *(VIDMM_PAGING_QUEUE **)v69;
                if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v69 + 8LL) != v69
                  || (v147 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v69 + 1), *v147 != v69) )
                {
                  __fastfail(3u);
                }
                *v147 = v146;
                *((_QWORD *)v146 + 1) = v147;
                v148 = (struct _KEVENT *)*((_QWORD *)v69 + 15);
                *(_QWORD *)v69 = 0LL;
                *((_QWORD *)v69 + 1) = 0LL;
                *((_DWORD *)v69 + 28) = 0;
                KeSetEvent(v148, 0, 0);
              }
            }
            --*(_DWORD *)(*((_QWORD *)v69 + 17) + 64LL);
            --*(_DWORD *)(*((_QWORD *)v69 + 10) + 144LL);
            v149 = *((_QWORD *)v69 + 10) + 128LL;
            *(_QWORD *)(v149 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v149, 0LL);
            KeLeaveCriticalRegion();
            if ( (*((_DWORD *)v3 + 13) & 7) != 1 )
            {
              v117 = v289;
              goto LABEL_213;
            }
            v69 = 0LL;
            v285 = 0LL;
            v90 = 0LL;
            v282 = 0LL;
            v283 = 0;
          }
          if ( !v3 )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(12LL);
            v7 = 0;
            v309 = 0;
            goto LABEL_122;
          }
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(12LL);
          v117 = VIDMM_DEVICE::Resume(v3, v95[8], (bool *)&k, &v291);
          v309 = v310 || *((_DWORD *)v1 + 36);
LABEL_213:
          if ( v3 && ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
            McTemplateK0qqtqttp(
              (unsigned __int8)k,
              (unsigned __int8)v95[8],
              v280,
              v117,
              v288,
              v280,
              v92,
              v95[8],
              k,
              (char)v291);
          if ( v117 >= 0 )
            goto LABEL_217;
          if ( v283 )
          {
            v237 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v116, v27);
            v238 = v282;
            v237[3] = 270LL;
            v237[4] = 54LL;
            v237[5] = v3;
            v237[6] = v69;
            v237[7] = v282;
            WdLogEvent5_WdCriticalError(v237);
          }
          else
          {
            v238 = v282;
          }
          v239 = (_QWORD *)WdLogNewEntry5_WdWarning(v26);
          v240 = v117;
          v241 = (unsigned __int8)k;
          v239[5] = v240;
          v239[3] = v238;
          v239[4] = v3;
          v239[6] = v241;
          WdLogEvent5_WdWarning(v239);
          *((_BYTE *)v1 + 160) = 1;
          if ( (_BYTE)v241 )
            break;
LABEL_464:
          v252 = v3;
          if ( !v69 || !*((_BYTE *)v282 + 24) )
            goto LABEL_469;
          v18 = *((_QWORD *)v282 + 9) == 0LL;
          *((_BYTE *)v282 + 120) = 1;
          if ( !v18 )
            goto LABEL_472;
          v252 = (VIDMM_DEVICE *)*((_QWORD *)v282 + 7);
          if ( !v252 )
          {
            v252 = *(VIDMM_DEVICE **)(*((_QWORD *)v282 + 8) + 8LL);
LABEL_469:
            if ( !v252 )
              goto LABEL_472;
          }
          v26 = *((_QWORD *)v252 + 4);
          if ( v26 )
            VidSchiMarkDeviceAsError(v26, 12);
LABEL_472:
          if ( !(_BYTE)k )
          {
            if ( v69 )
              VIDMM_PAGING_QUEUE::ReclaimPacket(v69, v282);
LABEL_217:
            v7 = v309;
LABEL_122:
            if ( *((_DWORD *)v1 + 7) == 1 )
            {
              v96 = *(VIDMM_GLOBAL **)v1;
              v267 = 0;
              ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              v17 = 0;
              for ( k = 0; v17 < *((_DWORD *)v96 + 1604); k = v17 )
              {
                v16 = 2LL;
                v15 = 1552LL * v17;
                v14 = v15 + 504;
                do
                {
                  v97 = *((_QWORD *)v96 + 5021);
                  if ( (*(_BYTE *)(v97 + v14) & 1) != 0 )
                  {
                    v98 = VIDMM_PARTITION::_PartitionTree;
                    n = 0LL;
                    if ( VIDMM_PARTITION::_PartitionTree )
                    {
                      do
                      {
                        n = v98;
                        v98 = (_QWORD *)*v98;
                      }
                      while ( v98 );
                    }
                    if ( n )
                    {
                      do
                      {
                        v100 = 328LL * v17
                             + *(_QWORD *)(368LL * *(unsigned int *)(*((_QWORD *)v96 + 3) + 200LL) + n[4] + 24);
                        v101 = *(_QWORD *)(v100 + 8);
                        v103 = 0;
                        if ( v101 )
                        {
                          v102 = v101 == 0x1E4AE7D99LL
                               ? 100LL * *(_QWORD *)(v100 + 112) / 0x1E4AE7D99uLL
                               : 100LL * *(_QWORD *)(v100 + 112) / v101;
                          if ( (__int64)(100 - v102) < (unsigned int)dword_1C00403B0 )
                            v103 = 1;
                        }
                        if ( v103 != *(_BYTE *)(v100 + 120) )
                        {
                          v267 = 1;
                          *(_BYTE *)(v100 + 120) = v103;
                        }
                        v104 = (_QWORD **)n[1];
                        v105 = n;
                        if ( v104 )
                        {
                          n = (_QWORD *)n[1];
                          for ( m = *v104; m; m = (_QWORD *)*m )
                            n = m;
                        }
                        else
                        {
                          for ( n = (_QWORD *)(n[2] & 0xFFFFFFFFFFFFFFFCuLL);
                                n;
                                n = (_QWORD *)(n[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                          {
                            if ( (_QWORD *)*n == v105 )
                              break;
                            v105 = n;
                          }
                        }
                      }
                      while ( n );
                      v1 = this;
                    }
                  }
                  else
                  {
                    v9 = v97 + v15;
                    v10 = *(_QWORD *)(v97 + v15 + 544);
                    v13 = 0;
                    if ( v10 )
                    {
                      v11 = 100LL * *(_QWORD *)(v9 + 648);
                      v12 = v10 == 917943091 ? v11 / 0x36B6B333 : v11 / v10;
                      if ( (__int64)(100 - v12) < (unsigned int)dword_1C00403B0 )
                        v13 = 1;
                    }
                    if ( v13 != *(_BYTE *)(v9 + 656) )
                    {
                      v267 = 1;
                      *(_BYTE *)(v9 + 656) = v13;
                    }
                  }
                  v14 += 24LL;
                  v15 += 328LL;
                  --v16;
                }
                while ( v16 );
                v17 = k + 1;
              }
              ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              v18 = ((unsigned __int8)v267 | *((_BYTE *)v1 + 160)) == 0;
              *((_BYTE *)v1 + 160) |= v267;
              if ( !v18 )
                VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)v1, 0);
              VIDMM_GLOBAL::HandlePromotionCandidates(*(VIDMM_GLOBAL **)v1, &v286);
              v21 = *(VIDMM_GLOBAL **)v1;
              v22 = *(_QWORD *)v1 + 41240LL;
              if ( *(_QWORD *)v1 != -41240LL && *(struct _KTHREAD **)(*(_QWORD *)v1 + 41248LL) == KeGetCurrentThread() )
              {
                v268 = WdLogNewEntry5_WdAssertion(v20, v19);
                *(_QWORD *)(v268 + 24) = 1214LL;
                WdLogEvent5_WdAssertion(v268);
              }
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v22, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v192 = *(_DWORD *)(v22 + 16);
                  if ( v192 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q(v23, (__int64)&EventBlockThread, v24, v192);
                }
                ExAcquirePushLockSharedEx(v22, 0LL);
              }
              v25 = *((_QWORD *)v21 + 5158) == (_QWORD)v21 + 41264;
              ExReleasePushLockSharedEx(v22, 0LL);
              KeLeaveCriticalRegion();
              if ( v25 )
              {
                v7 = v309;
              }
              else
              {
                if ( g_IsInternalReleaseOrDbg )
                  WdLogNewEntry5_WdTrace(v26);
                v7 = 1;
                v309 = 1;
              }
            }
            v3 = 0LL;
            goto LABEL_20;
          }
          v90 = v282;
          v288 = 0;
          v283 = 1;
        }
        v242 = v287;
        while ( 1 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v26);
          VIDMM_COMMIT_TELEMETRY::Init(v91, *(struct VIDMM_GLOBAL **)v1, v3, v291);
          if ( !v280 )
            VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(v243, v95[8]);
          v244 = v288;
          v296 = 0LL;
          v245 = VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(v1, v3, v291);
          if ( !v245 )
          {
            v90 = v282;
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(v26);
              v90 = v282;
            }
            goto LABEL_112;
          }
          if ( v245 == -1071775484 )
            break;
          if ( (**((_DWORD **)v291 + 12) & 0x20000) != 0 )
          {
            v90 = v282;
            if ( *((_BYTE *)v282 + 24) )
            {
              if ( *((_DWORD *)v282 + 12) == 203 && *((_DWORD *)v282 + 20) == 5 )
              {
                v26 = *(_QWORD *)(*(_QWORD *)v1 + 40168LL);
                if ( (*(_BYTE *)(1552LL * (*(_DWORD *)(**(_QWORD **)v291 + 76LL) & 0x3F) + v26 + 437) & 4) == 0 )
                {
                  if ( g_IsInternalReleaseOrDbg )
                  {
                    WdLogNewEntry5_WdTrace(v26);
                    v90 = v282;
                  }
                  *((_DWORD *)v90 + 20) = 6;
                  v288 = v244;
                  goto LABEL_112;
                }
              }
            }
          }
          VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound(v91, v95[8]);
          if ( v242 <= 0 )
          {
            DefragSegment = VIDMM_GLOBAL::GetDefragSegment(
                              *(VIDMM_GLOBAL **)v1,
                              *(_WORD *)(**(_QWORD **)v291 + 76LL) & 0x3F,
                              *(_DWORD *)(**(_QWORD **)v291 + 68LL));
            if ( DefragSegment )
            {
              v254 = WdLogNewEntry5_WdEvent(v247, v246);
              *(_QWORD *)(v254 + 24) = DefragSegment;
              WdLogEvent5_WdEvent(v254);
              v255 = MEMORY[0xFFFFF78000000320];
              v256 = v255 * KeQueryTimeIncrement();
              VIDMM_GLOBAL::Defragment(*(VIDMM_GLOBAL **)v1, DefragSegment);
              v257 = MEMORY[0xFFFFF78000000320];
              v258 = v257 * KeQueryTimeIncrement() - v256;
              VIDMM_COMMIT_TELEMETRY::LogFullDefragPass(v91, v258);
              v261 = WdLogNewEntry5_WdEvent(v260, v259);
              *(_QWORD *)(v261 + 24) = v258 / 0xA / 0x3E8;
              WdLogEvent5_WdEvent(v261);
              v90 = v282;
              v69 = v285;
              v288 = v244;
              goto LABEL_112;
            }
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v247);
            v249 = *(_QWORD **)(*(_QWORD *)v291 + 8LL);
            IsProcessCommitRelinquished = PsIsProcessCommitRelinquished(*v249);
            if ( !g_UnrecoverablePagingFailureDebugMode
              && !KdRefreshDebuggerNotPresent()
              && !IsProcessCommitRelinquished )
            {
              v251 = "\n"
                     "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                     "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                     "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*)0"
                     "x%p)\"\n"
                     "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
              if ( !v282 )
                v251 = "\n"
                       "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                       "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                       "Paging operation type: Failure to resume device\n";
              DbgPrintEx(0x65u, 0, v251, v3, v282, v285);
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
              JUMPOUT(0x1C009557CLL);
            }
            if ( !KdRefreshDebuggerNotPresent() )
            {
              if ( IsProcessCommitRelinquished )
              {
                v253 = v249[4];
                if ( v253 )
                {
                  if ( !*(_BYTE *)(v253 + 540) )
                  {
                    DbgPrintEx(
                      0x65u,
                      0,
                      "\n"
                      "We broke in to the debugger as a unrecoverable paging failure occurred after a process had its\n"
                      "virtual address space torn down, yet we do not detect ourselves in the frozen state for that proce"
                      "ss.\n"
                      "DXGPROCESS 0x%I64p and Mm should be inspected for how we reached this state.\n");
                    JUMPOUT(0x1C009565DLL);
                  }
                }
              }
            }
            v69 = v285;
            goto LABEL_464;
          }
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v26);
          v287 = --v242;
          v288 = v244;
          if ( !(_BYTE)k )
            goto LABEL_464;
        }
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v26);
        v262 = v296;
        v263 = v3;
        v264 = v296;
        if ( (*((_DWORD *)v3 + 13) & 7) == 0 && VIDMM_DEVICE::IsBetterYieldCandidate(v3, v296) )
        {
          v264 = v3;
          v263 = v262;
        }
        VIDMM_DEVICE::Yield(v263, v264);
        if ( v264 == v3 )
        {
          v69 = v285;
          v90 = v282;
          goto LABEL_112;
        }
        if ( v285 )
          VIDMM_PAGING_QUEUE::RewindPacket(v285, v282);
        v5 = (char *)v1 + 48;
        v7 = v309;
        v3 = 0LL;
        v6 = v310;
        v8 = 0;
        v265 = *(_QWORD *)(*(_QWORD *)v1 + 4608LL) - *((_QWORD *)v264 + 27);
        if ( v265 > *((_QWORD *)v1 + 21) )
        {
          *((_QWORD *)v1 + 21) = v265;
          v8 = 0;
          *((_DWORD *)v1 + 44) = 8;
          goto LABEL_57;
        }
      }
LABEL_20:
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v26);
      if ( (unsigned int)(*((_DWORD *)v1 + 6) - 3) > 2 )
      {
        if ( dword_1C0040388 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v26);
          v28 = *(VIDMM_GLOBAL **)v1;
          v29 = *(_QWORD *)(*(_QWORD *)v1 + 41344LL);
          if ( v29 == *(_QWORD *)(*(_QWORD *)v1 + 41352LL) )
          {
            v30 = 0;
          }
          else
          {
            if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
              McTemplateK0q(v26, (__int64)&EventVidMmProfilerEnter, (__int64)v27, 14001);
            for ( ii = 0; ii < *((_DWORD *)v28 + 1604); ++ii )
            {
              v293 = 0;
              DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
                (DXGAUTOPUSHLOCKSHARED *)v306,
                (struct _KTHREAD **)v28 + 5121);
              DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
                (DXGAUTOEXPUSHLOCKSHARED *)v300,
                (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
              VIDMM_GLOBAL::SetupBudgetState(v28, (struct VIDMM_BUDGET_STATE *)&v293, ii);
              VIDMM_GLOBAL::AssignBudgets(v28, (struct VIDMM_BUDGET_STATE *)&v293, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL);
              if ( (*(_BYTE *)(1552LL * ii + *((_QWORD *)v28 + 5021) + 528) & 2) != 0 )
                VIDMM_GLOBAL::AssignBudgets(
                  v28,
                  (struct VIDMM_BUDGET_STATE *)&v293,
                  D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL);
              if ( v302 == 1 )
              {
                ExReleasePushLockSharedEx(v301, 0LL);
              }
              else if ( v302 == 2 )
              {
                ExReleasePushLockExclusiveEx(v301, 0LL);
              }
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v306);
            }
            *((_QWORD *)v28 + 5169) = v29;
            VIDMM_GLOBAL::SendBudgetChangeNotifications(v28);
            v30 = 1;
            if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
              McTemplateK0q(v270, (__int64)&EventVidMmProfilerExit, v271, 14001);
          }
          VIDMM_GLOBAL::HandleTrimWnf(*(VIDMM_GLOBAL **)v1, v30);
        }
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v26);
        v31 = *(VIDMM_GLOBAL **)v1;
        if ( qword_1C00402E0 )
        {
          v32 = (_QWORD *)((char *)v31 + 39896);
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v31 + 39912, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v197 = *((_DWORD *)v31 + 9982);
              if ( v197 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v33, (__int64)&EventBlockThread, v34, v197);
            }
            ExAcquirePushLockSharedEx((char *)v31 + 39912, 0LL);
          }
          v35 = (_QWORD *)*v32;
          ExReleasePushLockSharedEx((char *)v31 + 39912, 0LL);
          KeLeaveCriticalRegion();
          if ( v35 != v32 )
          {
            if ( (*((_DWORD *)v31 + 1616) & 0x8000) != 0
              || (v153 = *((_QWORD *)v31 + 576) - *((_QWORD *)v31 + 883), v153 >= qword_1C00402E0) )
            {
              v181 = 0;
              DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)v31 + 39912));
              v182 = (_QWORD *)*v32;
              if ( (_QWORD *)*v32 != v32 )
              {
                v181 = 1;
                VIDMM_GLOBAL::StartPreparation((__int64)v31, 0xFFFFFFFFLL, 0LL, 0LL, 1001);
                do
                {
                  v184 = v182 - 50;
                  v182 = (_QWORD *)*v182;
                  v185 = (VIDMM_GLOBAL *)(v184 + 50);
                  v186 = (VIDMM_GLOBAL *)v184[50];
                  if ( *((_QWORD **)v186 + 1) != v184 + 50 || (v187 = (VIDMM_GLOBAL **)v184[51], *v187 != v185) )
                    __fastfail(3u);
                  *v187 = v186;
                  *((_QWORD *)v186 + 1) = v187;
                  v188 = v184[63];
                  *(_QWORD *)v185 = 0LL;
                  v189 = *(unsigned __int16 *)(v188 + 4);
                  if ( (_WORD)v189 && (_WORD)v189 != 3 )
                  {
                    if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0p(v189, &EventProcessOfferAllocation, v183, v184);
                    v190 = v184[17];
                    if ( !v190 || (*(_DWORD *)(v190 + 80) & 0x1001) != 0 )
                    {
                      v191 = (VIDMM_GLOBAL **)*((_QWORD *)v31 + 4995);
                      if ( *v191 != (VIDMM_GLOBAL *)((char *)v31 + 39952) )
                        __fastfail(3u);
                      *(_QWORD *)v185 = (char *)v31 + 39952;
                      v184[51] = v191;
                      *v191 = v185;
                      *((_QWORD *)v31 + 4995) = v185;
                    }
                    else if ( *((_DWORD *)v184 + 32) == 2 )
                    {
                      VIDMM_SEGMENT::OfferAllocation((VIDMM_GLOBAL **)v190, (struct _VIDMM_GLOBAL_ALLOC *)v184);
                    }
                  }
                }
                while ( v182 != v32 );
              }
              v3 = 0LL;
              *((_QWORD *)v31 + 4990) = 0LL;
              ExReleasePushLockExclusiveEx((char *)v31 + 39912, 0LL);
              KeLeaveCriticalRegion();
              *((_QWORD *)v31 + 883) = *((_QWORD *)v31 + 576);
              v154 = -qword_1C00402E0;
              if ( v181 )
                VIDMM_GLOBAL::EndPreparation(v31, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
              v1 = this;
            }
            else
            {
              v154 = v153 - qword_1C00402E0;
            }
            VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v31, v154, 3);
          }
        }
        v36 = *(VIDMM_GLOBAL **)v1;
        if ( *(_DWORD *)(*(_QWORD *)v1 + 6464LL)
          || *((_QWORD *)v36 + 888) < (unsigned __int64)qword_1C0040320
          && *((_DWORD *)v36 + 1778) < (unsigned int)dword_1C0040328 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v36);
          VIDMM_GLOBAL::ProcessSystemMemoryOfferList(*(VIDMM_GLOBAL **)v1);
          v37 = (_QWORD *)(*(_QWORD *)v1 + 3720LL);
          v37[1] = v37;
          *v37 = v37;
          v38 = *(VIDMM_GLOBAL **)v1;
          if ( qword_1C00402D8 )
          {
            v39 = 0x8000000000000000uLL;
            if ( *((_BYTE *)v38 + 40098) )
            {
              v150 = *((_DWORD *)v38 + 926);
              v151 = 0;
              if ( v150 )
              {
                while ( 1 )
                {
                  v152 = *(_QWORD *)(*((_QWORD *)v38 + 464) + 8LL * v151);
                  if ( (*(_DWORD *)(v152 + 80) & 0x1001) != 0 && *(_QWORD *)(v152 + 176) != v152 + 176 )
                    break;
                  if ( ++v151 >= v150 )
                    goto LABEL_43;
                }
                *((_QWORD *)v38 + 882) = *((_QWORD *)v38 + 576);
                *((_BYTE *)v38 + 40098) = 0;
                v39 = -qword_1C00402D8;
              }
            }
            else
            {
              v40 = *((_QWORD *)v38 + 576) - *((_QWORD *)v38 + 882);
              if ( v40 >= qword_1C00402D8 )
              {
                VIDMM_GLOBAL::StartPreparation((__int64)v38, 0xFFFFFFFFLL, 0LL, 0LL, 207);
                v195 = VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(v38);
                VIDMM_GLOBAL::EndPreparation(v38, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
                if ( !v195 )
                  *((_BYTE *)v38 + 40098) = 1;
              }
              else
              {
                v39 = v40 - qword_1C00402D8;
              }
            }
LABEL_43:
            VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v38, v39, 2);
          }
        }
        v7 = v309;
        if ( !v309 && !VIDMM_GLOBAL::UnderCleanupLimit(*(VIDMM_GLOBAL **)v1) )
        {
          VIDMM_GLOBAL::ResetCleanupCounters(v41, 1);
          v281 = 1;
        }
        NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(*(KSPIN_LOCK **)v1, &v284);
        if ( NextPendingTermination )
        {
          memset(v307, 0, 0x50uLL);
          v163 = *(VIDMM_GLOBAL **)v1;
          v307[2] = NextPendingTermination;
          LODWORD(v307[0]) = 200;
          VIDMM_GLOBAL::ProcessDeferredCommand(
            v163,
            (struct _VIDMM_DEFERRED_COMMAND *)v307,
            &v292,
            0,
            0LL,
            0LL,
            0,
            &v304);
        }
        v43 = *(VIDMM_GLOBAL **)v1;
        if ( *(_BYTE *)(*(_QWORD *)v1 + 40874LL) )
        {
          v272 = 0;
          if ( *((_DWORD *)v43 + 1604) )
          {
            do
            {
              v273 = *((_QWORD *)v43 + 5021) + 1552LL * v272;
              if ( !*(_DWORD *)(v273 + 432) && (*(_BYTE *)(v273 + 436) & 0x40) == 0 )
              {
                for ( jj = 0; jj < *(_DWORD *)(v273 + 24); ++jj )
                {
                  v275 = *((_QWORD *)v43 + 464);
                  v276 = jj + *(_DWORD *)(v273 + 20);
                  v277 = *(_QWORD *)(v275 + 8 * v276);
                  if ( *(_DWORD *)(v277 + 368) != -1 )
                  {
                    if ( (*(_BYTE *)(v273 + 436) & 0x40) == 0 )
                    {
                      v278 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v275 + 8 * v276));
                      if ( v278 == *(_DWORD *)(v273 + 60) || v278 == *(_DWORD *)(v273 + 44) )
                      {
                        if ( *(_QWORD *)(v273 + 456) != v273 + 456 )
                        {
                          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v43, v272);
                          VIDMM_GLOBAL::StartPreparation((__int64)v43, v272, 0LL, 0LL, 121);
                          VIDMM_GLOBAL::FlushScratchGpuVaRanges(v43, v272);
                          VIDMM_GLOBAL::EndPreparation(v43, v272, 0LL, 0, 0LL, 0LL);
                        }
                        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v43, v272);
                        *(_BYTE *)(v273 + 436) |= 0x40u;
                      }
                    }
                    (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))v43 + 5008))(
                      *((_QWORD *)v43 + 5009),
                      *(unsigned int *)(v277 + 368),
                      0LL);
                  }
                }
              }
              ++v272;
            }
            while ( v272 < *((_DWORD *)v43 + 1604) );
            v7 = v309;
          }
          *((_BYTE *)v43 + 40874) = 0;
        }
      }
      v6 = v310;
      v5 = (char *)v1 + 48;
      v8 = v281;
    }
    while ( v7 );
    v44 = *((_DWORD *)v1 + 7);
    if ( v44 != *((_DWORD *)v1 + 6) )
    {
      if ( v44 == 5 )
      {
        v214 = (_QWORD **)(*(_QWORD *)v1 + 41328LL);
        for ( kk = *v214; kk != v214; kk = (_QWORD *)*kk )
        {
          v216 = (__int64 **)(kk - 24);
          if ( !*(kk - 2) && v216[3] )
            VIDMM_DEVICE::FullySuspend(v216);
        }
      }
      v201 = (struct _KEVENT *)(*((_QWORD *)v1 + 19) + 48LL);
      *((_DWORD *)v1 + 6) = *((_DWORD *)v1 + 7);
      KeSetEvent(v201, 0, 0);
      if ( *((_DWORD *)v1 + 7) == 2 )
        break;
    }
    v45 = *(VIDMM_GLOBAL **)v1;
    v46 = 0;
    v6 = v310;
    v8 = v281;
    if ( *(_DWORD *)(*(_QWORD *)v1 + 3704LL) )
    {
      do
      {
        v47 = *(VIDMM_SEGMENT **)(*((_QWORD *)v45 + 464) + 8LL * v46);
        if ( (*((_BYTE *)v47 + 82) & 1) != 0 )
          VIDMM_SEGMENT::CurateVPR(v47);
        ++v46;
      }
      while ( v46 < *((_DWORD *)v45 + 926) );
      v6 = v310;
      v8 = v281;
    }
LABEL_57:
    v5 = (char *)v1 + 48;
  }
  *((_QWORD *)v1 + 7) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 48, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(*((PVOID *)v1 + 1));
  PsTerminateSystemThread(0);
}
