/*
 * XREFs of ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420
 * Callers:
 *     ?VidMmWorkerThreadProc@@YAXPEAX@Z @ 0x1C0071410 (-VidMmWorkerThreadProc@@YAXPEAX@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001774 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002144 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0002A20 (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     VidSchiMarkDeviceAsError @ 0x1C00127A4 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C001E470 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     Template_iq @ 0x1C001FD4C (Template_iq.c)
 *     Template_ppp @ 0x1C001FDD0 (Template_ppp.c)
 *     Template_ppx @ 0x1C001FE54 (Template_ppx.c)
 *     Template_ppxx @ 0x1C001FEE0 (Template_ppxx.c)
 *     Template_qqtqttp @ 0x1C001FF7C (Template_qqtqttp.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004AA94 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004D22C (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C004E974 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C00555A0 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00561E0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0056640 (-ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C005666C (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0056740 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0056BDC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00586F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C0058870 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C005B4D0 (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C00638F0 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0063A64 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006F830 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00912D4 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0092E38 (-EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C0098484 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C0098680 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C0099150 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 *     ?RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C009AD98 (-RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A1684 (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00A4C90 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A5650 (-SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00A56F0 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00A59D0 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00A5F10 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00A608C (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00A65E4 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00A6A04 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::Run(VIDMM_WORKER_THREAD *this)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v3; // rcx
  char *v4; // rdi
  char v5; // r12
  unsigned __int8 v6; // r14
  unsigned __int8 v7; // si
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 **v12; // rbx
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  struct VIDMM_PAGING_QUEUE_PACKET *v17; // r12
  char *v18; // r13
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  char *v21; // rsi
  VIDMM_WORKER_THREAD *v22; // r14
  VIDMM_PAGING_QUEUE *v23; // rdi
  __int64 *v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  bool v33; // bl
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 *v38; // rbx
  VIDMM_WORKER_THREAD *v39; // r14
  char *v40; // rsi
  __int64 v41; // rax
  VIDMM_DEVICE *v42; // rsi
  VIDMM_WORKER_THREAD *v43; // r14
  char *v44; // rsi
  char *v45; // r13
  char v46; // bl
  __int64 v47; // rax
  char v48; // r9
  char v49; // r10
  __int64 v50; // rdx
  char *v51; // r14
  __int64 v52; // r11
  char v53; // si
  unsigned int j; // edi
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // r10
  _BYTE *v58; // r9
  __int64 v59; // rax
  unsigned __int64 v60; // r8
  char v61; // al
  bool v62; // zf
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // r8
  _QWORD *v69; // rdi
  _QWORD *v70; // rbx
  __int64 v71; // rbx
  __int64 v72; // rdi
  char v73; // bl
  __int64 v74; // rdi
  _QWORD *v75; // rsi
  __int64 v76; // rcx
  __int64 v77; // r8
  _QWORD *v78; // rbx
  __int64 v79; // rcx
  _QWORD *v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rcx
  VIDMM_GLOBAL *v84; // rcx
  struct VIDMM_ALLOC *NextPendingTermination; // rbx
  __int64 v86; // rbx
  int v87; // eax
  __int64 v88; // rdi
  unsigned int v89; // ebx
  VIDMM_SEGMENT *v90; // rcx
  bool v91; // bl
  union _LARGE_INTEGER *v92; // rbx
  NTSTATUS v93; // esi
  __int64 v94; // rdi
  __int64 v95; // rbx
  __int64 v96; // r8
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rbx
  __int64 v100; // rdx
  unsigned int v101; // r9d
  __int64 v102; // rcx
  unsigned __int8 v103; // bl
  __int64 v104; // rdx
  __int64 v105; // rcx
  _QWORD *v106; // rax
  int v107; // eax
  int v108; // ebx
  __int64 v109; // rax
  __int64 *v110; // rdi
  unsigned int v111; // r13d
  VIDMM_PROCESS_BUDGET_STATE *v112; // r14
  __int64 v113; // rcx
  __int64 v114; // r8
  _QWORD *v115; // r9
  int v116; // r10d
  unsigned int *v117; // r12
  unsigned __int64 v118; // r8
  __int64 v119; // rbx
  char v120; // r12
  __int64 v121; // rax
  unsigned int v122; // r9d
  __int64 v123; // r10
  __int64 i; // rax
  __int64 v125; // rbx
  __int64 v126; // rdx
  __int64 v127; // r8
  struct VIDMM_PAGING_QUEUE_PACKET **v128; // rcx
  __int64 v129; // rbx
  VIDMM_PAGING_QUEUE *v130; // rcx
  VIDMM_PAGING_QUEUE **v131; // rax
  struct _KEVENT *v132; // rcx
  __int64 v133; // rcx
  unsigned int v134; // r8d
  unsigned int v135; // ecx
  __int64 v136; // rdx
  __int64 v137; // rbx
  __int64 v138; // rbx
  __int64 v139; // rdi
  VIDMM_PAGING_QUEUE *v140; // r12
  char v141; // r13
  int v142; // ebx
  char v143; // dl
  VIDMM_PAGING_QUEUE *v144; // rax
  _QWORD *v145; // rax
  __int64 v146; // rdx
  VIDMM_GLOBAL *v147; // rcx
  __int64 v148; // rdi
  VIDMM_PAGING_QUEUE *v149; // r12
  char v150; // r13
  int v151; // ebx
  VIDMM_PAGING_QUEUE *v152; // rax
  _QWORD *v153; // rax
  VIDMM_GLOBAL *v154; // rcx
  struct _RTL_BALANCED_NODE *v155; // r9
  __int64 v156; // r8
  __int64 v157; // rbx
  __int64 v158; // rax
  __int64 v159; // rdi
  VIDMM_PAGING_QUEUE *v160; // r12
  char v161; // r13
  int v162; // ebx
  char v163; // dl
  VIDMM_PAGING_QUEUE *v164; // rax
  unsigned __int64 v165; // rax
  __int64 v166; // r8
  __int64 v167; // rdx
  _QWORD *v168; // r12
  __int64 v169; // r8
  _QWORD *v170; // r13
  _QWORD *v171; // rbx
  __int64 v172; // rcx
  _QWORD *v173; // rax
  __int64 v174; // rax
  __int64 v175; // rcx
  __int64 v176; // rcx
  __int64 v177; // rdx
  _QWORD *v178; // rcx
  char v179; // bl
  __int64 v180; // rdx
  struct _KEVENT *v181; // rcx
  VIDMM_PAGING_QUEUE **v182; // rcx
  char **v183; // rcx
  __int64 v184; // rbx
  DXGPUSHLOCK *v185; // rsi
  __int64 **v186; // rdi
  __int64 *v187; // rbx
  __int64 v188; // rax
  int v189; // edi
  __int64 v190; // rbx
  __int64 v191; // rdx
  __int64 v192; // rax
  __int64 v193; // rcx
  VIDMM_PAGING_QUEUE **v194; // rcx
  char **v195; // rcx
  _QWORD **v196; // rdi
  _QWORD *jj; // rbx
  __int64 **v198; // rcx
  VIDMM_PAGING_QUEUE **v199; // rcx
  _QWORD *v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rax
  int v204; // r9d
  __int64 v205; // rax
  __int64 v206; // rax
  int v207; // r9d
  __int64 v208; // rax
  int v209; // r9d
  __int64 v210; // rax
  int v211; // r9d
  _QWORD *v212; // rax
  __int64 v213; // rcx
  __int64 v214; // rax
  __int64 v215; // rax
  __int64 v216; // rax
  int v217; // r9d
  VIDMM_COMMIT_TELEMETRY *v218; // rcx
  _QWORD *v219; // rax
  _QWORD *v220; // rax
  _QWORD *v221; // rax
  _QWORD *v222; // rax
  __int64 v223; // rcx
  _BOOL8 v224; // rbx
  int v225; // ebx
  VIDMM_COMMIT_TELEMETRY *v226; // rcx
  int v227; // esi
  int v228; // eax
  _QWORD *v229; // rdi
  char IsProcessCommitRelinquished; // bl
  const CHAR *v231; // r8
  VIDMM_DEVICE *v232; // rax
  __int64 v233; // r9
  int v234; // ebx
  ULONG v235; // edi
  int v236; // ebx
  ULONG TimeIncrement; // eax
  VIDMM_DEVICE *v238; // r14
  struct VIDMM_DEVICE *v239; // rdi
  VIDMM_DEVICE *v240; // rsi
  struct VIDMM_DEVICE *v241; // rbx
  __int64 v242; // rdx
  __int64 v243; // rax
  int v244; // r9d
  unsigned int k; // esi
  __int64 v246; // r11
  _QWORD **v247; // rdx
  _QWORD **v248; // r10
  _QWORD *v249; // rcx
  _QWORD **v250; // r9
  _QWORD *v251; // r8
  __int64 v252; // rax
  int v253; // r8d
  __int64 **v254; // rdx
  __int64 *v255; // rcx
  __int64 v256; // rax
  __int64 *m; // r9
  __int64 *v258; // rax
  __int64 v259; // rcx
  __int64 v260; // r8
  int v261; // r9d
  unsigned int n; // r14d
  __int64 v263; // rdi
  unsigned int ii; // esi
  __int64 v265; // rax
  __int64 v266; // rcx
  __int64 v267; // r13
  int v268; // eax
  struct _VIDSCH_SYNC_OBJECT *Timeout; // [rsp+20h] [rbp-E0h]
  char v270; // [rsp+50h] [rbp-B0h]
  char v271; // [rsp+51h] [rbp-AFh]
  unsigned __int8 v272; // [rsp+52h] [rbp-AEh]
  bool v273; // [rsp+53h] [rbp-ADh] BYREF
  char v274; // [rsp+54h] [rbp-ACh]
  char v275; // [rsp+55h] [rbp-ABh]
  char v276; // [rsp+56h] [rbp-AAh]
  char v277; // [rsp+57h] [rbp-A9h]
  bool v278; // [rsp+58h] [rbp-A8h] BYREF
  VIDMM_DEVICE *v279; // [rsp+60h] [rbp-A0h]
  bool v280; // [rsp+68h] [rbp-98h] BYREF
  int v281; // [rsp+6Ch] [rbp-94h]
  VIDMM_PAGING_QUEUE *v282; // [rsp+70h] [rbp-90h]
  int v283; // [rsp+78h] [rbp-88h]
  int v284; // [rsp+7Ch] [rbp-84h]
  struct VIDMM_PAGING_QUEUE_PACKET *v285; // [rsp+80h] [rbp-80h]
  struct VIDMM_ALLOC *v286; // [rsp+88h] [rbp-78h] BYREF
  bool v287; // [rsp+90h] [rbp-70h] BYREF
  char *v288; // [rsp+98h] [rbp-68h]
  struct VIDMM_DEVICE *v289; // [rsp+A0h] [rbp-60h]
  union _LARGE_INTEGER v290; // [rsp+A8h] [rbp-58h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v292; // [rsp+B8h] [rbp-48h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+C0h] [rbp-40h] BYREF
  struct VIDMM_ALLOC *v294; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v295[24]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v296[24]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v297[10]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v298[18]; // [rsp+150h] [rbp+50h] BYREF

  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)this + 1) = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 19) + 24LL), Executive, 0, 0, 0LL);
  v3 = (struct _KEVENT *)(*((_QWORD *)this + 19) + 48LL);
  *((_DWORD *)this + 6) = 1;
  KeSetEvent(v3, 0, 0);
  v4 = (char *)this + 48;
  v5 = 0;
  v292 = *((_QWORD *)this + 19);
  v6 = 0;
  v274 = 0;
  v270 = 0;
  v7 = 0;
  v280 = 0;
  Object = (PVOID)(v292 + 24);
  *((_QWORD *)this + 21) = 0x8000000000000000uLL;
  v278 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 48, 0LL);
  *((_QWORD *)this + 7) = KeGetCurrentThread();
  do
  {
LABEL_106:
    v91 = v278;
    *((_QWORD *)this + 2) = 0LL;
    if ( v6 || v91 || v7 )
      *((_QWORD *)this + 21) = 0LL;
    v290 = *(union _LARGE_INTEGER *)((char *)this + 168);
    if ( v290.QuadPart == 0x8000000000000000uLL )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v200 = (_QWORD *)WdLogNewEntry5_WdTrace(0x8000000000000000uLL);
        v200[3] = v6;
        v200[4] = v91;
        v200[5] = v7;
      }
      v92 = 0LL;
    }
    else
    {
      v92 = &v290;
    }
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    v93 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v92, 0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    *((_QWORD *)v4 + 1) = KeGetCurrentThread();
    v94 = *(_QWORD *)this;
    v95 = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(v94 + 4608) = v95 * KeQueryTimeIncrement();
    v97 = *(_QWORD *)this;
    v98 = *(_QWORD *)(*(_QWORD *)this + 4608LL);
    if ( v98 - *(_QWORD *)(*(_QWORD *)this + 7120LL) > qword_1C003C2F8 )
    {
      *(_QWORD *)(v97 + 7104) = 0LL;
      *(_DWORD *)(v97 + 7112) = 0;
      *(_QWORD *)(v97 + 7120) = v98;
    }
    v278 = 0;
    v275 = 0;
    *((_BYTE *)this + 160) = 0;
    v283 = 0;
    v271 = 0;
    v276 = 0;
    if ( !v93 )
    {
      if ( *((_DWORD *)this + 7) == *((_DWORD *)this + 6) )
      {
LABEL_116:
        if ( g_IsInternalReleaseOrDbg )
        {
          v203 = WdLogNewEntry5_WdTrace(v97);
          v97 = *((int *)this + 6);
          *(_QWORD *)(v203 + 24) = v97;
        }
        *((_DWORD *)this + 44) = 0;
      }
      else
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v201 = WdLogNewEntry5_WdTrace(v97);
          *(_QWORD *)(v201 + 24) = *((int *)this + 6);
          *(_QWORD *)(v201 + 32) = *((int *)this + 7);
        }
        v97 = *((unsigned int *)this + 7);
        *((_DWORD *)this + 44) = 1;
        if ( (unsigned int)(v97 - 2) <= 3 )
        {
          KeWaitForSingleObject((PVOID)(*(_QWORD *)this + 41064LL), Executive, 0, 0, 0LL);
          v184 = *(_QWORD *)this;
          v185 = (DXGPUSHLOCK *)(*(_QWORD *)this + 39984LL);
          DXGPUSHLOCK::AcquireExclusive(v185);
          v186 = (__int64 **)(v184 + 39968);
          while ( 1 )
          {
            v187 = *v186;
            v188 = **v186;
            if ( (__int64 **)(*v186)[1] != v186 || *(__int64 **)(v188 + 8) != v187 )
              __fastfail(3u);
            *v186 = (__int64 *)v188;
            *(_QWORD *)(v188 + 8) = v186;
            if ( v187 == (__int64 *)v186 )
              break;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v187[2] + 24LL))(
              v187[2],
              0LL,
              v187[3],
              v187[4]);
            operator delete(v187);
          }
          *((_QWORD *)v185 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v185, 0LL);
          KeLeaveCriticalRegion();
        }
        else if ( (_DWORD)v97 == 1 )
        {
          *((_DWORD *)this + 6) = 1;
          KeSetEvent((PRKEVENT)(*((_QWORD *)this + 19) + 48LL), 0, 0);
        }
      }
      v6 = 1;
      v270 = 1;
      goto LABEL_120;
    }
    if ( v93 != 258 )
      goto LABEL_116;
    if ( g_IsInternalReleaseOrDbg )
    {
      v202 = WdLogNewEntry5_WdTrace(v97);
      v97 = *((_QWORD *)this + 21);
      *(_QWORD *)(v202 + 24) = v97;
    }
LABEL_120:
    if ( *((_QWORD *)this + 21) && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      Template_iq(v97, v98, v96);
    v8 = *(_QWORD *)this;
    *((_QWORD *)this + 21) = 0x8000000000000000uLL;
    v9 = v8 + 39984;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8 + 39984, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v204 = *(_DWORD *)(v8 + 40000);
        if ( v204 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v10, &EventBlockThread, v11, v204);
      }
      ExAcquirePushLockExclusiveEx(v8 + 39984, 0LL);
    }
    v12 = (__int64 **)(v8 + 39968);
    *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
    while ( 1 )
    {
      v13 = *v12;
      v14 = **v12;
      if ( (__int64 **)(*v12)[1] != v12 || *(__int64 **)(v14 + 8) != v13 )
        __fastfail(3u);
      *v12 = (__int64 *)v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( v13 == (__int64 *)v12 )
        break;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v13[2] + 24LL))(
        v13[2],
        0LL,
        v13[3],
        v13[4]);
      operator delete(v13);
    }
    *(_QWORD *)(v9 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
    if ( !v6 && !v5 && !v280 )
      goto LABEL_68;
    v17 = 0LL;
    v285 = 0LL;
    v279 = 0LL;
    v18 = (char *)this + 128;
    v274 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 128, 0LL);
    v21 = (char *)this + 96;
    *((_QWORD *)this + 17) = KeGetCurrentThread();
    v22 = (VIDMM_WORKER_THREAD *)*((_QWORD *)this + 12);
    if ( v22 == (VIDMM_WORKER_THREAD *)((char *)this + 96) )
      goto LABEL_9;
    v148 = *(_QWORD *)this;
    v149 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)this + 12);
    v150 = 1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v148 + 41024, 0LL);
    *(_QWORD *)(v148 + 41032) = KeGetCurrentThread();
    v151 = *(_DWORD *)(v148 + 41056);
    *(_QWORD *)(v148 + 41032) = 0LL;
    ExReleasePushLockExclusiveEx(v148 + 41024, 0LL);
    KeLeaveCriticalRegion();
    LOBYTE(v19) = 0;
    do
    {
      v282 = v149;
      v23 = v149;
      if ( !v151
        || (v205 = *((_QWORD *)v149 + 4), !*(_BYTE *)(v205 + 24))
        || *(_DWORD *)(v205 + 48) != 203
        || (v20 = *(_DWORD **)(*(_QWORD *)(v205 + 64) + 96LL), (*v20 & 0x20000) == 0) )
      {
        LOBYTE(v19) = 1;
        v150 = 0;
      }
      v152 = *(VIDMM_PAGING_QUEUE **)v149;
      if ( *(char **)v149 == v21 )
        break;
      v199 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v149 + 1);
      if ( *((VIDMM_PAGING_QUEUE **)v152 + 1) != v149 || *v199 != v149 )
        __fastfail(3u);
      *v199 = v152;
      *((_QWORD *)v152 + 1) = v199;
      v20 = (_DWORD *)*((_QWORD *)this + 13);
      if ( *(char **)v20 != v21 )
        __fastfail(3u);
      *(_QWORD *)v149 = v21;
      *((_QWORD *)v149 + 1) = v20;
      *(_QWORD *)v20 = v149;
      *((_QWORD *)this + 13) = v149;
      if ( v152 == v22 )
        break;
      v149 = v152;
    }
    while ( v150 );
    v18 = (char *)this + 128;
    if ( !(_BYTE)v19 )
    {
      v17 = v285;
LABEL_9:
      v282 = 0LL;
      v23 = 0LL;
      goto LABEL_10;
    }
    if ( v23 )
      goto LABEL_208;
    v17 = v285;
LABEL_10:
    if ( ((*((_DWORD *)this + 7) - 1) & 0xFFFFFFFD) != 0 )
    {
      v42 = v279;
      goto LABEL_38;
    }
    v24 = *(__int64 **)this;
    v25 = *(_QWORD *)this + 41536LL;
    if ( *(_QWORD *)this != -41536LL && *(struct _KTHREAD **)(*(_QWORD *)this + 41544LL) == KeGetCurrentThread() )
    {
      v206 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v206 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v206);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v25, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v207 = *(_DWORD *)(v25 + 16);
        if ( v207 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v26, &EventBlockThread, v27, v207);
      }
      ExAcquirePushLockSharedEx(v25, 0LL);
    }
    v28 = (__int64 *)v24[5195];
    ExReleasePushLockSharedEx(v25, 0LL);
    KeLeaveCriticalRegion();
    if ( v28 != v24 + 5195 )
    {
      v189 = 1;
      goto LABEL_295;
    }
    if ( v25 && *(struct _KTHREAD **)(v25 + 8) == KeGetCurrentThread() )
    {
      v208 = WdLogNewEntry5_WdAssertion(v30, v29);
      *(_QWORD *)(v208 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v208);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v25, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v209 = *(_DWORD *)(v25 + 16);
        if ( v209 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v31, &EventBlockThread, v32, v209);
      }
      ExAcquirePushLockSharedEx(v25, 0LL);
    }
    v33 = v24[5197] == (_QWORD)(v24 + 5197);
    ExReleasePushLockSharedEx(v25, 0LL);
    KeLeaveCriticalRegion();
    if ( !v33 )
    {
      v189 = 2;
      goto LABEL_295;
    }
    if ( v25 && *(struct _KTHREAD **)(v25 + 8) == KeGetCurrentThread() )
    {
      v210 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v210 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v210);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v25, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v211 = *(_DWORD *)(v25 + 16);
        if ( v211 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v36, &EventBlockThread, v37, v211);
      }
      ExAcquirePushLockSharedEx(v25, 0LL);
    }
    v38 = (__int64 *)v24[5199];
    ExReleasePushLockSharedEx(v25, 0LL);
    KeLeaveCriticalRegion();
    if ( v38 != v24 + 5199 )
    {
      v189 = 3;
      goto LABEL_295;
    }
    if ( (*(_BYTE *)(v24[3] + 2244) || *(_BYTE *)(v24[2] + 665)) && !VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)v24, 4) )
    {
      v189 = 4;
LABEL_295:
      v274 = 1;
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v295, (struct _KTHREAD **)v25);
      v190 = v24[2 * (unsigned int)(v189 - 1) + 5195] - 176;
      if ( !VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)v24) )
      {
        if ( v189 == 2 )
        {
          v212 = *(_QWORD **)(v190 + 232);
          if ( v212 )
          {
            v213 = v212[27];
            if ( v213 > *(_QWORD *)(*v212 + 4608LL) )
            {
              VIDMM_WORKER_THREAD::SetTimeout(*v24, v24[576] - v213, 8);
              v190 = 0LL;
            }
          }
        }
        else if ( v189 == 3 )
        {
          v191 = v24[576];
          v192 = *(_QWORD *)(v190 + 208);
          v193 = *v24;
          if ( v191 < v192 )
          {
            VIDMM_WORKER_THREAD::SetTimeout(v193, v191 - v192, 6);
            v190 = 0LL;
          }
          else
          {
            VIDMM_WORKER_THREAD::SetTimeout(v193, 0LL, 6);
          }
        }
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v295);
      v279 = (VIDMM_DEVICE *)v190;
      v42 = (VIDMM_DEVICE *)v190;
      if ( v190 && (*(_DWORD *)(v190 + 52) & 7) == 1 )
      {
        v23 = v282;
        goto LABEL_38;
      }
      goto LABEL_29;
    }
    v274 = 0;
    v279 = 0LL;
LABEL_29:
    v39 = (VIDMM_WORKER_THREAD *)*((_QWORD *)this + 10);
    v40 = (char *)this + 80;
    if ( v39 == (VIDMM_WORKER_THREAD *)((char *)this + 80) )
      goto LABEL_30;
    v159 = *(_QWORD *)this;
    v160 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)this + 10);
    v161 = 1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v159 + 41024, 0LL);
    *(_QWORD *)(v159 + 41032) = KeGetCurrentThread();
    v162 = *(_DWORD *)(v159 + 41056);
    *(_QWORD *)(v159 + 41032) = 0LL;
    ExReleasePushLockExclusiveEx(v159 + 41024, 0LL);
    KeLeaveCriticalRegion();
    v163 = 0;
    do
    {
      v282 = v160;
      v23 = v160;
      if ( !v162
        || (v214 = *((_QWORD *)v160 + 4), !*(_BYTE *)(v214 + 24))
        || *(_DWORD *)(v214 + 48) != 203
        || (**(_DWORD **)(*(_QWORD *)(v214 + 64) + 96LL) & 0x20000) == 0 )
      {
        v163 = 1;
        v161 = 0;
      }
      v164 = *(VIDMM_PAGING_QUEUE **)v160;
      if ( *(char **)v160 == v40 )
        break;
      v194 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v160 + 1);
      if ( *((VIDMM_PAGING_QUEUE **)v164 + 1) != v160 || *v194 != v160 )
        __fastfail(3u);
      *v194 = v164;
      *((_QWORD *)v164 + 1) = v194;
      v195 = (char **)*((_QWORD *)this + 11);
      if ( *v195 != v40 )
        __fastfail(3u);
      *(_QWORD *)v160 = v40;
      *((_QWORD *)v160 + 1) = v195;
      *v195 = (char *)v160;
      *((_QWORD *)this + 11) = v160;
      if ( v164 == v39 )
        break;
      v160 = v164;
    }
    while ( v161 );
    v18 = (char *)this + 128;
    if ( !v163 )
    {
      v17 = v285;
LABEL_30:
      v282 = 0LL;
      v23 = 0LL;
LABEL_31:
      if ( *((_BYTE *)this + 216) )
      {
        v41 = *(_QWORD *)this;
        *((_BYTE *)this + 216) = 0;
        *((_QWORD *)this + 28) = *(_QWORD *)(v41 + 4608);
      }
      v42 = v279;
      if ( v279 && *(_QWORD *)(*(_QWORD *)this + 4608LL) - *((_QWORD *)this + 28) >= qword_1C003C3A0 )
        goto LABEL_37;
      v43 = (VIDMM_WORKER_THREAD *)*((_QWORD *)this + 8);
      v44 = (char *)this + 64;
      if ( v43 == (VIDMM_WORKER_THREAD *)((char *)this + 64) )
        goto LABEL_35;
      v139 = *(_QWORD *)this;
      v140 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)this + 8);
      v141 = 1;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v139 + 41024, 0LL);
      *(_QWORD *)(v139 + 41032) = KeGetCurrentThread();
      v142 = *(_DWORD *)(v139 + 41056);
      *(_QWORD *)(v139 + 41032) = 0LL;
      ExReleasePushLockExclusiveEx(v139 + 41024, 0LL);
      KeLeaveCriticalRegion();
      v143 = 0;
      do
      {
        v282 = v140;
        v23 = v140;
        if ( !v142
          || (v215 = *((_QWORD *)v140 + 4), !*(_BYTE *)(v215 + 24))
          || *(_DWORD *)(v215 + 48) != 203
          || (**(_DWORD **)(*(_QWORD *)(v215 + 64) + 96LL) & 0x20000) == 0 )
        {
          v143 = 1;
          v141 = 0;
        }
        v144 = *(VIDMM_PAGING_QUEUE **)v140;
        if ( *(char **)v140 == v44 )
          break;
        v182 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v140 + 1);
        if ( *((VIDMM_PAGING_QUEUE **)v144 + 1) != v140 || *v182 != v140 )
          __fastfail(3u);
        *v182 = v144;
        *((_QWORD *)v144 + 1) = v182;
        v183 = (char **)*((_QWORD *)this + 9);
        if ( *v183 != v44 )
          __fastfail(3u);
        *(_QWORD *)v140 = v44;
        *((_QWORD *)v140 + 1) = v183;
        *v183 = (char *)v140;
        *((_QWORD *)this + 9) = v140;
        if ( v144 == v43 )
          break;
        v140 = v144;
      }
      while ( v141 );
      v18 = (char *)this + 128;
      if ( !v143 )
      {
        v17 = v285;
LABEL_35:
        v282 = 0LL;
        v23 = 0LL;
        goto LABEL_36;
      }
      if ( !v23 )
      {
        v17 = v285;
LABEL_36:
        v42 = v279;
LABEL_37:
        *((_BYTE *)this + 216) = 1;
        goto LABEL_38;
      }
      goto LABEL_208;
    }
    if ( !v23 )
    {
      v17 = v285;
      goto LABEL_31;
    }
LABEL_208:
    v17 = (struct VIDMM_PAGING_QUEUE_PACKET *)*((_QWORD *)v23 + 4);
    v145 = (_QWORD *)((char *)v23 + 32);
    v42 = (VIDMM_DEVICE *)*((_QWORD *)v23 + 17);
    v279 = v42;
    v285 = v17;
    v146 = *(_QWORD *)v17;
    if ( *((VIDMM_PAGING_QUEUE **)v17 + 1) != (VIDMM_PAGING_QUEUE *)((char *)v23 + 32)
      || *(struct VIDMM_PAGING_QUEUE_PACKET **)(v146 + 8) != v17 )
    {
      __fastfail(3u);
    }
    *v145 = v146;
    *(_QWORD *)(v146 + 8) = v145;
    *(_QWORD *)v17 = 0LL;
    *((_QWORD *)v17 + 1) = 0LL;
LABEL_38:
    *((_QWORD *)this + 2) = v42;
    *((_QWORD *)v18 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v18, 0LL);
    KeLeaveCriticalRegion();
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        Template_ppp(v15, &EventVidMmSelectOperation, v16, *((_QWORD *)v42 + 3), v23, v17);
      if ( v23 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v15) + 24) = v23;
        if ( *((_BYTE *)v17 + 24) && *((_DWORD *)v17 + 12) == 206 )
        {
          v99 = MEMORY[0xFFFFF78000000320];
          *((_QWORD *)v17 + 18) = v99 * KeQueryTimeIncrement();
        }
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v15) + 24) = v42;
      }
    }
    v45 = (char *)this + 184;
LABEL_40:
    v46 = v271;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_41:
        v286 = 0LL;
        *((_QWORD *)v45 + 1) = 0LL;
        *((_QWORD *)v45 + 2) = 0LL;
        *(_QWORD *)v45 = 0LL;
        v45[24] = 0;
        v273 = 0;
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v15);
        v272 = 0;
        v281 = 2;
        if ( v42 )
        {
          v100 = *((_QWORD *)v42 + 2);
          v272 = 0;
          if ( v100 )
          {
            v101 = 0;
            if ( *(_DWORD *)(*(_QWORD *)v42 + 6416LL) )
            {
              while ( 1 )
              {
                v16 = *(_QWORD *)(v100 + 48) + 264LL * v101;
                if ( *(_QWORD *)(v16 + 200) > *(_QWORD *)(v16 + 24) || *(_QWORD *)(v16 + 208) > *(_QWORD *)(v16 + 32) )
                  break;
                if ( ++v101 >= *(_DWORD *)(*(_QWORD *)v42 + 6416LL) )
                  goto LABEL_136;
              }
              v272 = 1;
            }
LABEL_136:
            v102 = *(_QWORD *)(*(_QWORD *)(v100 + 40) + 32LL);
            if ( *(_BYTE *)(v102 + 274) )
              v281 = 0;
            else
              v281 = 2 - ((*(_DWORD *)(v102 + 276) & 1) != 0);
          }
          else
          {
            v281 = 2;
          }
        }
        v47 = 0LL;
        v48 = v272;
        v49 = v281;
        v50 = 3 * (v272 + 2LL * v283);
        v15 = 12LL;
        if ( v281 != 2 )
          v47 = 12LL;
        v51 = (char *)&unk_1C0030920 + 48 * v283 + 24 * v272 + v47;
        v288 = v51;
        if ( !v23 )
          break;
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(12LL);
        v103 = v51[8];
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_ppx(v15, v50, v16, v23, v17, *((_QWORD *)v17 + 5));
        if ( *((_BYTE *)v17 + 24) )
        {
          KeQueryPerformanceCounter(&PerformanceFrequency);
          v106 = (_QWORD *)WdLogNewEntry5_WdEvent(v105, v104);
          v106[3] = *((int *)v17 + 12);
          v106[4] = v17;
          v106[5] = *((_QWORD *)v17 + 8);
          v106[6] = *((_QWORD *)v17 + 7);
          v106[7] = *((_QWORD *)v17 + 4);
          WdLogEvent5_WdEvent(v106);
          v107 = VIDMM_GLOBAL::ProcessDeferredCommand(
                   *(VIDMM_GLOBAL **)this,
                   (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v17 + 48),
                   &v273,
                   *((_BYTE *)v17 + 25),
                   *((_QWORD *)v17 + 4),
                   *((struct _VIDSCH_SYNC_OBJECT **)v282 + 11),
                   v103,
                   &v286);
          v62 = *((_BYTE *)v17 + 24) == 0;
          v108 = v107;
          v284 = v107;
          if ( v62 )
          {
            v109 = *((_QWORD *)v17 + 9);
            if ( !v109 )
            {
              v109 = *((_QWORD *)v17 + 8);
              if ( v109 )
                v109 = *(_QWORD *)(v109 + 8);
            }
          }
          else
          {
            v109 = *((_QWORD *)v17 + 7);
          }
          v110 = *(__int64 **)(v109 + 16);
          v111 = 0;
          v277 = 0;
          if ( *(_DWORD *)(*v110 + 6416) )
          {
            do
            {
              v112 = (VIDMM_PROCESS_BUDGET_STATE *)(v110[6] + 264LL * v111);
              if ( v110 != (__int64 *)-328LL && (struct _KTHREAD *)v110[42] == KeGetCurrentThread() )
              {
                v216 = WdLogNewEntry5_WdAssertion(v15, v50);
                *(_QWORD *)(v216 + 24) = 1167LL;
                WdLogEvent5_WdAssertion(v216);
              }
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v110 + 41, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v217 = *((_DWORD *)v110 + 86);
                  if ( v217 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    Template_q(v113, &EventBlockThread, v114, v217);
                }
                ExAcquirePushLockSharedEx(v110 + 41, 0LL);
              }
              v115 = (_QWORD *)((char *)v112 + 184);
              v116 = 0;
              v117 = (unsigned int *)(280LL * v111 + *(_QWORD *)(*v110 + 41200) + 240LL);
              do
              {
                v118 = *(v115 - 6);
                if ( v116 == 1 )
                {
                  v165 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v112);
                  v118 = v165 + v166;
                }
                v119 = *v117;
                if ( v118 > *v115 * (v119 + 100) / 0x64uLL || v118 < *v115 * (100 - v119) / 0x64uLL )
                {
                  v120 = 1;
                  v277 = 1;
                  goto LABEL_155;
                }
                ++v116;
                ++v117;
                ++v115;
              }
              while ( v116 < 2 );
              v120 = v277;
LABEL_155:
              ExReleasePushLockSharedEx(v110 + 41, 0LL);
              KeLeaveCriticalRegion();
              v121 = *v110;
              ++v111;
            }
            while ( v111 < *(_DWORD *)(*v110 + 6416) );
            if ( v120 )
            {
              v122 = *(_DWORD *)(v121 + 6416);
              v50 = 0LL;
              v16 = *v110;
              if ( v122 )
              {
                v123 = *(_QWORD *)(v121 + 41200);
                while ( 2 )
                {
                  v15 = v123 + 280LL * (unsigned int)v50;
                  for ( i = 0LL; i < 2; ++i )
                  {
                    if ( *(_BYTE *)(i + v15 + 272) )
                    {
                      _InterlockedIncrement64((volatile signed __int64 *)(v16 + 41640));
                      v15 = *(_QWORD *)v16;
                      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v16 + 8LL) )
                        KeSetEvent(*(PRKEVENT *)(v15 + 152), 0, 0);
                      goto LABEL_163;
                    }
                  }
                  v50 = (unsigned int)(v50 + 1);
                  if ( (unsigned int)v50 < v122 )
                    continue;
                  break;
                }
              }
            }
LABEL_163:
            v108 = v284;
            v45 = (char *)this + 184;
            v23 = v282;
            v51 = v288;
            v17 = v285;
            v42 = v279;
          }
          else
          {
            v23 = v282;
            v45 = (char *)this + 184;
            v17 = v285;
          }
        }
        else
        {
          v153 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v50);
          v153[3] = *((int *)v17 + 12);
          v153[4] = v17;
          v153[5] = *((unsigned __int8 *)v17 + 25);
          v153[6] = *((_QWORD *)v17 + 4);
          WdLogEvent5_WdEvent(v153);
          v154 = *(VIDMM_GLOBAL **)this;
          v286 = 0LL;
          v155 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v17 + 4);
          v156 = *((unsigned __int8 *)v17 + 25);
          Timeout = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v23 + 11);
          v273 = 0;
          v108 = VIDMM_GLOBAL::ProcessSystemCommand(
                   v154,
                   (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v17 + 48),
                   v156,
                   v155,
                   Timeout);
          v284 = v108;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_ppxx(v15, &EventPagingQueueComplete, v16, v23, v17, *((_QWORD *)v17 + 5), 0LL);
        if ( v108 == -1071775232 )
        {
          v284 = 0;
        }
        else if ( *((_BYTE *)v17 + 24) && (!v273 || *((_BYTE *)v17 + 120)) && *((_QWORD *)v17 + 9) )
        {
          v284 = 0;
        }
        else if ( v108 < 0 )
        {
          goto LABEL_185;
        }
        if ( *((_BYTE *)v17 + 24) )
        {
          if ( *((_DWORD *)v17 + 12) == 206 )
          {
            v157 = MEMORY[0xFFFFF78000000320];
            v158 = v157 * KeQueryTimeIncrement();
            *((_QWORD *)v17 + 19) = v158;
            if ( v158 - *((_QWORD *)v17 + 17) > 1000000 )
            {
              VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v45, *(struct VIDMM_GLOBAL **)this, v42, 0LL);
              VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(v218, v17);
              *((_QWORD *)v45 + 1) = 0LL;
              *((_QWORD *)v45 + 2) = 0LL;
              *(_QWORD *)v45 = 0LL;
              v45[24] = 0;
            }
          }
        }
        v125 = *((_QWORD *)v23 + 10) + 128LL;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v125, 0LL);
        *(_QWORD *)(v125 + 8) = KeGetCurrentThread();
        v128 = (struct VIDMM_PAGING_QUEUE_PACKET **)*((_QWORD *)v23 + 3);
        if ( *v128 != (VIDMM_PAGING_QUEUE *)((char *)v23 + 16) )
          __fastfail(3u);
        *(_QWORD *)v17 = (char *)v23 + 16;
        *((_QWORD *)v17 + 1) = v128;
        *v128 = v17;
        *((_QWORD *)v23 + 3) = v17;
        if ( *((VIDMM_PAGING_QUEUE **)v23 + 4) == (VIDMM_PAGING_QUEUE *)((char *)v23 + 32) )
        {
          v129 = *((int *)v23 + 28);
          if ( (_DWORD)v129 )
          {
            if ( (_DWORD)v129 != 1 )
            {
              v219 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v128, v126, v127);
              v219[3] = 270LL;
              v219[4] = 58LL;
              v219[5] = v23;
              v219[6] = v129;
              v219[7] = 0LL;
              WdLogEvent5_WdCriticalError(v219);
            }
            if ( g_IsInternalReleaseOrDbg )
            {
              v220 = (_QWORD *)WdLogNewEntry5_WdTrace(v128);
              v220[3] = v23;
              v220[4] = *((int *)v23 + 28);
              v220[5] = 0LL;
            }
            v130 = *(VIDMM_PAGING_QUEUE **)v23;
            v131 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v23 + 1);
            if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v23 + 8LL) != v23 || *v131 != v23 )
              __fastfail(3u);
            *v131 = v130;
            *((_QWORD *)v130 + 1) = v131;
            v132 = (struct _KEVENT *)*((_QWORD *)v23 + 15);
            *(_QWORD *)v23 = 0LL;
            *((_QWORD *)v23 + 1) = 0LL;
            *((_DWORD *)v23 + 28) = 0;
            KeSetEvent(v132, 0, 0);
          }
        }
        --*(_DWORD *)(*((_QWORD *)v23 + 17) + 64LL);
        --*(_DWORD *)(*((_QWORD *)v23 + 10) + 144LL);
        v133 = *((_QWORD *)v23 + 10) + 128LL;
        *(_QWORD *)(v133 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v133, 0LL);
        KeLeaveCriticalRegion();
        v46 = v271;
        if ( v271 != 1 )
        {
          v108 = v284;
LABEL_185:
          v49 = v281;
          v48 = v272;
          goto LABEL_186;
        }
        v23 = 0LL;
        v282 = 0LL;
        v17 = 0LL;
        v285 = 0LL;
      }
      if ( !v42 )
        break;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(12LL);
        v49 = v281;
        v48 = v272;
      }
      if ( v46 != 1 || (*(_DWORD *)(*(_QWORD *)this + 6464LL) & 0x4000) == 0 )
      {
        v108 = VIDMM_DEVICE::Resume(v42, v51[8], &v273, &v286);
        v270 = v274;
        goto LABEL_185;
      }
      v108 = -1073741823;
      v273 = 0;
LABEL_186:
      if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        Template_qqtqttp((__int64)v286, v273, (unsigned __int8)v51[8], v108, v283, v48, v49, v51[8], v273, (char)v286);
      if ( v108 >= 0 )
        goto LABEL_190;
      if ( v276 )
      {
        v221 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v50, v16);
        v221[3] = 270LL;
        v221[4] = 54LL;
        v221[5] = v42;
        v221[6] = v23;
        v221[7] = v17;
        WdLogEvent5_WdCriticalError(v221);
      }
      v222 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v50);
      v223 = v108;
      v224 = v273;
      v222[5] = v223;
      v222[3] = v17;
      v222[4] = v42;
      v222[6] = v224;
      WdLogEvent5_WdWarning(v222);
      *((_BYTE *)this + 160) = 1;
      if ( v224 )
      {
        v225 = v281;
        while ( 1 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v15);
          VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v45, *(struct VIDMM_GLOBAL **)this, v42, v286);
          if ( !v272 )
            VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(v226, v51[8]);
          v227 = v283;
          v289 = 0LL;
          v228 = VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(this, v279, v286);
          if ( !v228 )
          {
            v42 = v279;
            v46 = v271;
            if ( !g_IsInternalReleaseOrDbg )
              goto LABEL_41;
            WdLogNewEntry5_WdTrace(v15);
            goto LABEL_40;
          }
          if ( v228 == -1071775484 )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v15);
            v238 = v279;
            v239 = v289;
            v240 = v279;
            v241 = v289;
            if ( (*((_DWORD *)v279 + 13) & 7) == 0 && VIDMM_DEVICE::IsBetterYieldCandidate(v279, v289) )
            {
              v241 = v238;
              v240 = v239;
            }
            VIDMM_DEVICE::Yield(v240, v241);
            v42 = v238;
            if ( v241 == v238 )
            {
              v23 = v282;
              goto LABEL_40;
            }
            if ( v282 )
              VIDMM_PAGING_QUEUE::RewindPacket(v282, v17);
            v4 = (char *)this + 48;
            v6 = v270;
            v5 = v274;
            v7 = v275;
            v242 = *(_QWORD *)(*(_QWORD *)this + 4608LL) - *((_QWORD *)v241 + 27);
            if ( v242 > *((_QWORD *)this + 21) )
            {
              *((_QWORD *)this + 21) = v242;
              v7 = 0;
              *((_DWORD *)this + 44) = 8;
              goto LABEL_105;
            }
            goto LABEL_106;
          }
          if ( (**((_DWORD **)v286 + 12) & 0x20000) != 0 )
          {
            if ( *((_BYTE *)v17 + 24) )
            {
              if ( *((_DWORD *)v17 + 12) == 203 && *((_DWORD *)v17 + 20) == 5 )
              {
                v15 = *(_QWORD *)(*(_QWORD *)this + 40168LL);
                if ( (*(_BYTE *)(472LL * (*(_DWORD *)(**(_QWORD **)v286 + 76LL) & 0x3F) + v15 + 437) & 4) == 0 )
                {
                  if ( g_IsInternalReleaseOrDbg )
                    WdLogNewEntry5_WdTrace(v15);
                  *((_DWORD *)v17 + 20) = 6;
                  v283 = v227;
                  v42 = v279;
                  goto LABEL_40;
                }
              }
            }
          }
          VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound((VIDMM_COMMIT_TELEMETRY *)v45, v51[8]);
          if ( v225 <= 0 )
            break;
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v15);
          v281 = --v225;
          v283 = v227;
          v42 = v279;
          if ( !v273 )
            goto LABEL_419;
        }
        if ( v271 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v15);
          v229 = *(_QWORD **)(*(_QWORD *)v286 + 8LL);
          IsProcessCommitRelinquished = PsIsProcessCommitRelinquished(*v229);
          if ( !g_UnrecoverablePagingFailureDebugMode && !KdRefreshDebuggerNotPresent() && !IsProcessCommitRelinquished )
          {
            v231 = "\n"
                   "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                   "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                   "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*)0x%"
                   "p)\"\n"
                   "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
            if ( !v17 )
              v231 = "\n"
                     "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                     "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                     "Paging operation type: Failure to resume device\n";
            DbgPrintEx(0x65u, 0, v231, v279, v17, v282);
            DbgPrintEx(
              0x65u,
              0,
              "\n"
              "We broke into the debugger to allow a chance for debugging this issue.\n"
              "\n"
              "To disable debug breaks on unrecoverable paging packet failures, run \"?? dxgmms2!g_UnrecoverablePagingFai"
              "lureDebugMode=1\"\n"
              "or \"ed 0x%p 1\"\n"
              "To re-attempt the failed paging packet execution for debugging purposes, run \"?? dxgmms2!g_UnrecoverableP"
              "agingFailureDebugMode=2\"\n"
              "or \"ed 0x%p 2\"\n"
              "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagingFailureDeb"
              "ugMode=3\"\n"
              "or \"ed 0x%p 3\"\n"
              "!!! Note that option 2 will result in an unrecoverable machine state that should be rebooted after steppin"
              "g through the code is done.!!!\n"
              "\n",
              (const void *)&g_UnrecoverablePagingFailureDebugMode,
              (const void *)&g_UnrecoverablePagingFailureDebugMode,
              (const void *)&g_UnrecoverablePagingFailureDebugMode);
            JUMPOUT(0x1C008E4DELL);
          }
          if ( !KdRefreshDebuggerNotPresent() )
          {
            if ( IsProcessCommitRelinquished )
            {
              v233 = v229[4];
              if ( v233 )
              {
                if ( !*(_BYTE *)(v233 + 492) )
                {
                  DbgPrintEx(
                    0x65u,
                    0,
                    "\n"
                    "We broke in to the debugger as a unrecoverable paging failure occurred after a process had its\n"
                    "virtual address space torn down, yet we do not detect ourselves in the frozen state for that process"
                    ".\n"
                    "DXGPROCESS 0x%I64p and Mm should be inspected for how we reached this state.\n");
                  JUMPOUT(0x1C008E5B2LL);
                }
              }
            }
          }
          v23 = v282;
          v42 = v279;
          goto LABEL_419;
        }
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v15);
        v234 = MEMORY[0xFFFFF78000000320];
        v235 = v234 * KeQueryTimeIncrement();
        VIDMM_GLOBAL::EvictForDefragPass(*(VIDMM_GLOBAL **)this);
        v236 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        VIDMM_COMMIT_TELEMETRY::LogFullDefragPass((VIDMM_COMMIT_TELEMETRY *)v45, v236 * TimeIncrement - v235);
        v23 = v282;
        v46 = 1;
        v283 = v227;
        v42 = v279;
        v271 = 1;
      }
      else
      {
LABEL_419:
        v232 = v42;
        if ( !v23 || !*((_BYTE *)v17 + 24) )
          goto LABEL_424;
        v62 = *((_QWORD *)v17 + 9) == 0LL;
        *((_BYTE *)v17 + 120) = 1;
        if ( !v62 )
          goto LABEL_427;
        v232 = (VIDMM_DEVICE *)*((_QWORD *)v17 + 7);
        if ( !v232 )
        {
          v232 = *(VIDMM_DEVICE **)(*((_QWORD *)v17 + 8) + 8LL);
LABEL_424:
          if ( !v232 )
            goto LABEL_427;
        }
        v15 = *((_QWORD *)v232 + 4);
        if ( v15 )
          VidSchiMarkDeviceAsError(v15, 12);
LABEL_427:
        if ( !v273 )
        {
          if ( v23 )
            VIDMM_PAGING_QUEUE::ReclaimPacket(v23, v17);
LABEL_190:
          v6 = v270;
          goto LABEL_51;
        }
        v46 = v271;
        v283 = 0;
        v276 = 1;
      }
    }
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(12LL);
    v6 = 0;
    v270 = 0;
LABEL_51:
    if ( *((_DWORD *)this + 7) == 1 )
    {
      v52 = *(_QWORD *)this;
      v53 = 0;
      for ( j = 0; j < *(_DWORD *)(v52 + 6416); ++j )
      {
        v55 = 248LL;
        v56 = 280LL * j;
        v57 = 2LL;
        v58 = (_BYTE *)(v56 + *(_QWORD *)(v52 + 41200) + 272LL);
        do
        {
          v59 = *(_QWORD *)(v52 + 41200);
          v60 = *(_QWORD *)(v55 + v56 + v59 - 216);
          v61 = v60 && (__int64)(100 - 100LL * *(_QWORD *)(v55 + v56 + v59) / v60) < (unsigned int)dword_1C003C378;
          if ( v61 != *v58 )
          {
            v53 = 1;
            *v58 = v61;
          }
          v55 += 8LL;
          ++v58;
          --v57;
        }
        while ( v57 );
      }
      v62 = ((unsigned __int8)v53 | *((_BYTE *)this + 160)) == 0;
      *((_BYTE *)this + 160) |= v53;
      if ( !v62 )
        VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)this, 0);
      VIDMM_GLOBAL::HandlePromotionCandidates(*(VIDMM_GLOBAL **)this, &v280);
      v65 = *(_QWORD *)this;
      v66 = *(_QWORD *)this + 41536LL;
      if ( *(_QWORD *)this != -41536LL && *(struct _KTHREAD **)(*(_QWORD *)this + 41544LL) == KeGetCurrentThread() )
      {
        v243 = WdLogNewEntry5_WdAssertion(v64, v63);
        *(_QWORD *)(v243 + 24) = 1167LL;
        WdLogEvent5_WdAssertion(v243);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v66, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v244 = *(_DWORD *)(v66 + 16);
          if ( v244 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v67, &EventBlockThread, v68, v244);
        }
        ExAcquirePushLockSharedEx(v66, 0LL);
      }
      v69 = (_QWORD *)(v65 + 41560);
      v70 = (_QWORD *)*v69;
      ExReleasePushLockSharedEx(v66, 0LL);
      KeLeaveCriticalRegion();
      if ( v70 != v69 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v15);
        v6 = 1;
        v270 = 1;
      }
    }
LABEL_68:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v15);
    if ( (unsigned int)(*((_DWORD *)this + 6) - 3) > 2 )
    {
      if ( dword_1C003C350 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v15);
        v71 = *(_QWORD *)this;
        v72 = *(_QWORD *)(*(_QWORD *)this + 41640LL);
        if ( v72 == *(_QWORD *)(*(_QWORD *)this + 41648LL) )
        {
          v73 = 0;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
            Template_q(v15, &EventVidMmProfilerEnter, v16, 14001);
          for ( k = 0; k < *(_DWORD *)(v71 + 6416); ++k )
          {
            memset(v298, 0, 0x118uLL);
            DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
              (DXGAUTOPUSHLOCKSHARED *)v296,
              (struct _KTHREAD **)(v71 + 40968));
            VIDMM_GLOBAL::SetupBudgetState((VIDMM_GLOBAL *)v71, (struct VIDMM_BUDGET_STATE *)v298, k);
            VIDMM_GLOBAL::AssignBudgets(
              (VIDMM_GLOBAL *)v71,
              (struct VIDMM_BUDGET_STATE *)v298,
              D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL);
            if ( *(_QWORD *)(280LL * k + *(_QWORD *)(v71 + 41200) + 40) )
            {
              v246 = 0LL;
              v247 = (_QWORD **)&v298[3] + 1;
              do
              {
                v248 = (_QWORD **)*(v247 - 1);
                v249 = v247 - 1;
                if ( v248 != v247 - 1 )
                {
                  v250 = v247 - 7;
                  v251 = *(v247 - 6);
                  if ( (_QWORD **)(*(v247 - 7))[1] != v247 - 7 || (_QWORD **)*v251 != v250 )
                    __fastfail(3u);
                  if ( v248[1] != v249 || (_QWORD *)**v247 != v249 )
                    __fastfail(3u);
                  *v251 = v249;
                  *(v247 - 6) = *v247;
                  **v247 = v250;
                  *v247 = v251;
                  v252 = *v249;
                  if ( *(_QWORD **)(*v249 + 8LL) != v249 || (_QWORD *)*v251 != v249 )
                    __fastfail(3u);
                  *v251 = v252;
                  *(_QWORD *)(v252 + 8) = v251;
                  *v247 = v249;
                  *v249 = v249;
                }
                ++v246;
                v247 += 2;
              }
              while ( v246 < 3 );
              VIDMM_GLOBAL::AssignBudgets(
                (VIDMM_GLOBAL *)v71,
                (struct VIDMM_BUDGET_STATE *)v298,
                D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL);
            }
            v253 = 0;
            v254 = (__int64 **)&v298[3];
            do
            {
              v255 = *v254;
              v256 = **v254;
              if ( (__int64 **)(*v254)[1] != v254 || *(__int64 **)(v256 + 8) != v255 )
                __fastfail(3u);
              *v254 = (__int64 *)v256;
              *(_QWORD *)(v256 + 8) = v254;
              for ( m = (__int64 *)&v298[v253 + 3]; v255 != m; v258[1] = (__int64)v254 )
              {
                *v255 = 0LL;
                v255[1] = 0LL;
                v255 = *v254;
                v258 = (__int64 *)**v254;
                if ( (__int64 **)(*v254)[1] != v254 || (__int64 *)v258[1] != v255 )
                  __fastfail(3u);
                *v254 = v258;
              }
              ++v253;
              v254 += 2;
            }
            while ( v253 < 3 );
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v296);
          }
          *(_QWORD *)(v71 + 41648) = v72;
          VIDMM_GLOBAL::SendBudgetChangeNotifications((VIDMM_GLOBAL *)v71);
          v73 = 1;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
            Template_q(v259, &EventVidMmProfilerExit, v260, 14001);
        }
        VIDMM_GLOBAL::HandleTrimWnf(*(VIDMM_GLOBAL **)this, v73);
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v15);
      v74 = *(_QWORD *)this;
      if ( qword_1C003C2A8 )
      {
        v75 = (_QWORD *)(v74 + 39896);
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v74 + 39912, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v261 = *(_DWORD *)(v74 + 39928);
            if ( v261 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v76, &EventBlockThread, v77, v261);
          }
          ExAcquirePushLockSharedEx(v74 + 39912, 0LL);
        }
        v78 = (_QWORD *)*v75;
        ExReleasePushLockSharedEx(v74 + 39912, 0LL);
        KeLeaveCriticalRegion();
        if ( v78 != v75 )
        {
          v137 = *(_QWORD *)(v74 + 4608) - *(_QWORD *)(v74 + 7064);
          if ( (*(_DWORD *)(v74 + 6464) & 0x8000) != 0 || v137 >= qword_1C003C2A8 )
          {
            v276 = 0;
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v74 + 39912));
            v168 = (_QWORD *)*v75;
            if ( (_QWORD *)*v75 != v75 )
            {
              v276 = 1;
              VIDMM_GLOBAL::StartPreparation(v74, v167, 0LL, 0LL, 1001);
              do
              {
                v170 = v168 - 54;
                v168 = (_QWORD *)*v168;
                v171 = v170 + 54;
                v172 = v170[54];
                v173 = (_QWORD *)v170[55];
                if ( *(_QWORD **)(v172 + 8) != v170 + 54 || (_QWORD *)*v173 != v171 )
                  __fastfail(3u);
                *v173 = v172;
                *(_QWORD *)(v172 + 8) = v173;
                v174 = v170[65];
                *v171 = 0LL;
                v175 = *(unsigned __int16 *)(v174 + 4);
                if ( (_WORD)v175 && (_WORD)v175 != 3 )
                {
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    Template_p(v175, &EventProcessOfferAllocation, v169, v170);
                  v176 = v170[17];
                  if ( !v176 || (*(_DWORD *)(v176 + 80) & 0x1001) != 0 )
                  {
                    v178 = *(_QWORD **)(v74 + 39960);
                    if ( *v178 != v74 + 39952 )
                      __fastfail(3u);
                    *v171 = v74 + 39952;
                    v170[55] = v178;
                    *v178 = v171;
                    *(_QWORD *)(v74 + 39960) = v171;
                  }
                  else if ( *((_DWORD *)v170 + 32) == 2 )
                  {
                    VIDMM_SEGMENT::OfferAllocation((VIDMM_GLOBAL **)v176, (struct _VIDMM_GLOBAL_ALLOC *)v170);
                  }
                }
              }
              while ( v168 != v75 );
            }
            *(_QWORD *)(v74 + 39920) = 0LL;
            ExReleasePushLockExclusiveEx(v74 + 39912, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(v74 + 7064) = *(_QWORD *)(v74 + 4608);
            v138 = -qword_1C003C2A8;
            if ( v276 )
              VIDMM_GLOBAL::EndPreparation((VIDMM_GLOBAL *)v74, v177, 0LL, 0, 0LL, 0LL);
          }
          else
          {
            v138 = v137 - qword_1C003C2A8;
          }
          VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v74, v138, 3);
        }
      }
      v79 = *(_QWORD *)this;
      if ( *(_DWORD *)(*(_QWORD *)this + 6464LL)
        || *(_QWORD *)(v79 + 7104) < (unsigned __int64)qword_1C003C2E8
        && *(_DWORD *)(v79 + 7112) < (unsigned int)dword_1C003C2F0 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v79);
        VIDMM_GLOBAL::ProcessSystemMemoryOfferList(*(VIDMM_GLOBAL **)this);
        v80 = (_QWORD *)(*(_QWORD *)this + 3720LL);
        v80[1] = v80;
        *v80 = v80;
        v81 = *(_QWORD *)this;
        if ( qword_1C003C2A0 )
        {
          v82 = 0x8000000000000000uLL;
          if ( *(_BYTE *)(v81 + 40098) )
          {
            v134 = *(_DWORD *)(v81 + 3704);
            v135 = 0;
            if ( v134 )
            {
              while ( 1 )
              {
                v136 = *(_QWORD *)(*(_QWORD *)(v81 + 3712) + 8LL * v135);
                if ( (*(_DWORD *)(v136 + 80) & 0x1001) != 0 && *(_QWORD *)(v136 + 200) != v136 + 200 )
                  break;
                if ( ++v135 >= v134 )
                  goto LABEL_91;
              }
              *(_QWORD *)(v81 + 7056) = *(_QWORD *)(v81 + 4608);
              *(_BYTE *)(v81 + 40098) = 0;
              v82 = -qword_1C003C2A0;
            }
          }
          else
          {
            v83 = *(_QWORD *)(v81 + 4608) - *(_QWORD *)(v81 + 7056);
            if ( v83 >= qword_1C003C2A0 )
            {
              VIDMM_GLOBAL::StartPreparation(v81, qword_1C003C2A0, 0LL, 0LL, 207);
              v179 = VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker((VIDMM_GLOBAL *)v81);
              VIDMM_GLOBAL::EndPreparation((VIDMM_GLOBAL *)v81, v180, 0LL, 0, 0LL, 0LL);
              if ( !v179 )
                *(_BYTE *)(v81 + 40098) = 1;
            }
            else
            {
              v82 = v83 - qword_1C003C2A0;
            }
          }
LABEL_91:
          VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v81, v82, 2);
        }
      }
      v6 = v270;
      if ( !v270 && !VIDMM_GLOBAL::UnderCleanupLimit(*(VIDMM_GLOBAL **)this) )
      {
        VIDMM_GLOBAL::ResetCleanupCounters(v84, 1);
        v275 = 1;
      }
      NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(*(KSPIN_LOCK **)this, &v278);
      if ( NextPendingTermination )
      {
        memset(v297, 0, sizeof(v297));
        v147 = *(VIDMM_GLOBAL **)this;
        v297[2] = NextPendingTermination;
        LODWORD(v297[0]) = 200;
        VIDMM_GLOBAL::ProcessDeferredCommand(v147, (struct _VIDMM_DEFERRED_COMMAND *)v297, &v287, 0, 0LL, 0LL, 0, &v294);
      }
      v86 = *(_QWORD *)this;
      if ( *(_BYTE *)(*(_QWORD *)this + 40874LL) )
      {
        for ( n = 0; n < *(_DWORD *)(v86 + 6416); ++n )
        {
          v263 = *(_QWORD *)(v86 + 40168) + 472LL * n;
          if ( !*(_DWORD *)(v263 + 432) && (*(_BYTE *)(v263 + 436) & 0x40) == 0 )
          {
            for ( ii = 0; ii < *(_DWORD *)(v263 + 24); ++ii )
            {
              v265 = *(_QWORD *)(v86 + 3712);
              v266 = ii + *(_DWORD *)(v263 + 20);
              v267 = *(_QWORD *)(v265 + 8 * v266);
              if ( *(_DWORD *)(v267 + 392) != -1 )
              {
                if ( (*(_BYTE *)(v263 + 436) & 0x40) == 0 )
                {
                  v268 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v265 + 8 * v266));
                  if ( v268 == *(_DWORD *)(v263 + 60) || v268 == *(_DWORD *)(v263 + 44) )
                  {
                    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v86, n);
                    *(_BYTE *)(v263 + 436) |= 0x40u;
                  }
                }
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v86 + 40064))(
                  *(_QWORD *)(v86 + 40072),
                  *(unsigned int *)(v267 + 392),
                  0LL);
              }
            }
          }
        }
        v6 = v270;
        *(_BYTE *)(v86 + 40874) = 0;
      }
    }
    v5 = v274;
    v4 = (char *)this + 48;
    v7 = v275;
  }
  while ( v6 );
  v87 = *((_DWORD *)this + 7);
  if ( v87 == *((_DWORD *)this + 6) )
    goto LABEL_100;
  if ( v87 == 5 )
  {
    v196 = (_QWORD **)(*(_QWORD *)this + 41624LL);
    for ( jj = *v196; jj != v196; jj = (_QWORD *)*jj )
    {
      v198 = (__int64 **)(jj - 24);
      if ( !*(jj - 2) && v198[3] )
        VIDMM_DEVICE::FullySuspend(v198);
    }
  }
  v181 = (struct _KEVENT *)(*((_QWORD *)this + 19) + 48LL);
  *((_DWORD *)this + 6) = *((_DWORD *)this + 7);
  KeSetEvent(v181, 0, 0);
  if ( *((_DWORD *)this + 7) != 2 )
  {
LABEL_100:
    v88 = *(_QWORD *)this;
    v89 = 0;
    v5 = v274;
    v7 = v275;
    if ( *(_DWORD *)(*(_QWORD *)this + 3704LL) )
    {
      do
      {
        v90 = *(VIDMM_SEGMENT **)(*(_QWORD *)(v88 + 3712) + 8LL * v89);
        if ( (*((_BYTE *)v90 + 82) & 1) != 0 )
          VIDMM_SEGMENT::CurateVPR(v90);
        ++v89;
      }
      while ( v89 < *(_DWORD *)(v88 + 3704) );
      v5 = v274;
      v7 = v275;
    }
LABEL_105:
    v4 = (char *)this + 48;
    goto LABEL_106;
  }
  *((_QWORD *)this + 7) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 48, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(*((PVOID *)this + 1));
  PsTerminateSystemThread(0);
}
