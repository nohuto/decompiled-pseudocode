/*
 * XREFs of ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CB880
 * Callers:
 *     DxgkPresent @ 0x1C00C8F20 (DxgkPresent.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00CB390 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAVDXGHWQUEUE@@_K@Z @ 0x1C00FEAF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00FFEA0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkSubmitPresentBltToHwQueue @ 0x1C01A5B30 (DxgkSubmitPresentBltToHwQueue.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01B2E2C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@P.c)
 *     DxgkPresentRedirected @ 0x1C01B5100 (DxgkPresentRedirected.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0023A00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1KOBJECTREF@@QEAA@XZ @ 0x1C0024854 (--1KOBJECTREF@@QEAA@XZ.c)
 *     McTemplateK0ppqqx @ 0x1C002DFDC (McTemplateK0ppqqx.c)
 *     McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq @ 0x1C0033CC0 (McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C009D174 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CCDE0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C00CE588 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F9D50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@@Z @ 0x1C01854C8 (-VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONT.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C018ABFC (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z @ 0x1C01B467C (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z.c)
 */

__int64 __fastcall SubmitPresentHistoryToken(
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a3,
        struct CWin32kLocks *a4,
        char a5,
        union _LARGE_INTEGER *a6,
        struct DXGK_PRESENT_PARAMS *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct DXGCONTEXT *a9,
        struct _PRESENT_REDIRECTED_PARAMS *a10)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v11; // r12
  struct _PRESENT_REDIRECTED_PARAMS *v14; // rcx
  __int64 v15; // rax
  DXGADAPTER *v17; // rdi
  struct ADAPTER_RENDER *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  DXGPRESENTHISTORYTOKENQUEUE *v30; // rax
  __int64 v31; // rcx
  char *v32; // rdi
  _QWORD *v33; // rax
  struct _KTHREAD **v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  NTSTATUS v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned int v43; // edi
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rbx
  _QWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rsi
  union _SLIST_HEADER *v59; // r14
  PSLIST_ENTRY v60; // rax
  __int64 v61; // rcx
  PSLIST_ENTRY v62; // r13
  PSLIST_ENTRY v63; // rbx
  bool v64; // zf
  __int64 v65; // r8
  int v66; // eax
  int v67; // edx
  unsigned int v68; // eax
  __int64 v69; // rax
  int v70; // r8d
  int v71; // r9d
  unsigned int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v75; // rdx
  unsigned __int64 v76; // r8
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // ebx
  __int64 v78; // rax
  unsigned int v79; // ebx
  __int64 v80; // rax
  int v81; // ebx
  UINT NumRects; // ebx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // ebx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v87; // rbx
  __int64 *ThreadProperty; // rax
  __int64 *v89; // rdi
  volatile signed __int32 *v90; // rbx
  unsigned int v91; // eax
  DXGADAPTER *v92; // rdi
  __int64 v93; // rcx
  bool v94; // cc
  struct DXGCONTEXT *v95; // r14
  unsigned int v96; // edx
  void *v97; // r8
  struct DXGK_PRESENT_PARAMS *v98; // rax
  int v99; // eax
  __int64 v100; // rax
  struct CRefCountedBuffer *v101; // rax
  int Next; // edi
  struct _SLIST_ENTRY *v103; // rax
  int Next_high; // r9d
  char v105; // r14
  char v106; // r15
  __int64 v107; // rcx
  struct _SLIST_ENTRY *v108; // r10
  __int64 v109; // r8
  __int64 v110; // rdx
  struct _SLIST_ENTRY v111; // xmm0
  struct _SLIST_ENTRY v112; // xmm0
  unsigned int v113; // r11d
  __int64 v114; // r9
  int v115; // ecx
  unsigned int v116; // edx
  int v117; // edx
  unsigned int v118; // r15d
  __int64 v119; // rcx
  __int64 v120; // rax
  _BYTE *v121; // r9
  __int64 v122; // rsi
  _BYTE *PoolWithTag; // r9
  unsigned int v124; // edx
  __int64 v125; // r8
  __int64 v126; // r10
  __int64 v127; // rcx
  __int64 v128; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  int DriverVersion; // edi
  struct DXGPROCESS *Current; // r15
  unsigned int v136; // r14d
  __int64 v137; // rdi
  __int64 v138; // rax
  __int64 v139; // r8
  unsigned int v140; // r14d
  int v141; // edx
  __int64 v142; // r8
  __int64 v143; // rdi
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rdi
  __int64 v148; // rax
  __int64 v149; // r8
  unsigned int v150; // r14d
  int v151; // edx
  __int64 v152; // r8
  __int64 v153; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v155; // r9
  __int64 v156; // r10
  struct DXGPROCESS *v157; // rax
  CRefCountedBuffer *v158; // rcx
  unsigned int v159; // edi
  __int64 v160; // r14
  int v161; // r10d
  _QWORD *v162; // r8
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // rbx
  __int64 v167; // rcx
  __int64 v168; // rax
  __int64 v169; // rax
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-148h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-140h]
  unsigned int v172; // [rsp+F0h] [rbp-80h]
  int v173; // [rsp+F8h] [rbp-78h]
  unsigned int v174; // [rsp+108h] [rbp-68h]
  DXGADAPTER *v175; // [rsp+110h] [rbp-60h]
  struct ADAPTER_RENDER *v176; // [rsp+120h] [rbp-50h]
  char v177; // [rsp+128h] [rbp-48h]
  __int64 v178; // [rsp+130h] [rbp-40h]
  int v179; // [rsp+130h] [rbp-40h]
  PRKSEMAPHORE Semaphore; // [rsp+138h] [rbp-38h]
  char Srca; // [rsp+140h] [rbp-30h]
  struct DXGGLOBAL *v183; // [rsp+148h] [rbp-28h] BYREF
  char v184; // [rsp+150h] [rbp-20h]
  struct _SLIST_ENTRY *v185; // [rsp+158h] [rbp-18h]
  DXGPRESENTHISTORYTOKENQUEUE *v186; // [rsp+160h] [rbp-10h]
  struct CRefCountedBuffer *v187; // [rsp+168h] [rbp-8h]
  struct _SLIST_ENTRY v188; // [rsp+170h] [rbp+0h]
  __int128 v189; // [rsp+180h] [rbp+10h]
  __int128 v190; // [rsp+190h] [rbp+20h]
  struct CRefCountedBuffer *v191; // [rsp+1A0h] [rbp+30h] BYREF
  signed __int64 v192; // [rsp+1A8h] [rbp+38h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+1B0h] [rbp+40h]
  struct _PRESENT_REDIRECTED_PARAMS *v194; // [rsp+1B8h] [rbp+48h]
  struct _SLIST_ENTRY *v195[2]; // [rsp+1C0h] [rbp+50h] BYREF
  PRKSEMAPHORE v196; // [rsp+1D0h] [rbp+60h] BYREF
  _BYTE v197[16]; // [rsp+1D8h] [rbp+68h] BYREF
  PVOID Object[2]; // [rsp+1E8h] [rbp+78h] BYREF
  char v199[8]; // [rsp+1F8h] [rbp+88h] BYREF
  _QWORD *v200; // [rsp+200h] [rbp+90h]
  int v201; // [rsp+208h] [rbp+98h]
  _BYTE *v202; // [rsp+210h] [rbp+A0h] BYREF
  _BYTE v203[64]; // [rsp+218h] [rbp+A8h] BYREF
  int v204; // [rsp+258h] [rbp+E8h]
  _BYTE v206[64]; // [rsp+260h] [rbp+F0h] BYREF
  _BYTE v207[64]; // [rsp+2A0h] [rbp+130h] BYREF
  char v208[64]; // [rsp+2E0h] [rbp+170h] BYREF
  _DWORD v209[16]; // [rsp+320h] [rbp+1B0h] BYREF

  v11 = a8;
  v14 = a10;
  v194 = a10;
  if ( a9 )
  {
    if ( a10 )
    {
LABEL_3:
      v15 = WdLogNewEntry5_WdError(a10);
      *(_QWORD *)(v15 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v15);
      return 3221225485LL;
    }
  }
  else if ( !a10 || !*((_DWORD *)a10 + 2) || !*(_QWORD *)a10 )
  {
    goto LABEL_3;
  }
  v172 = 0;
  v178 = 0LL;
  if ( a9 )
  {
    v14 = *(struct _PRESENT_REDIRECTED_PARAMS **)(*((_QWORD *)a9 + 2) + 16LL);
  }
  else
  {
    v178 = *(_QWORD *)a10;
    v172 = *((_DWORD *)a10 + 2);
  }
  v17 = (DXGADAPTER *)*((_QWORD *)v14 + 2);
  v175 = v17;
  v18 = (struct ADAPTER_RENDER *)*((_QWORD *)v17 + 308);
  v176 = v18;
  v19 = *((_QWORD *)v18 + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v19 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 144)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v20 + 24) = 2335LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v64 = (struct ADAPTER_RENDER *)((char *)v18 + 736) == 0LL;
  v21 = (_QWORD *)((char *)v18 + 736);
  v200 = v21;
  if ( !v64 && (struct _KTHREAD *)v21[1] == KeGetCurrentThread() )
  {
    v22 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v22 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v22);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v21, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v25 = *((_DWORD *)v21 + 4);
      if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v23, &EventBlockThread, v24, v25);
    }
    ExAcquirePushLockSharedEx(v21, 0LL);
  }
  v201 = 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *((_DWORD *)v176 + 190)
    || (v29 = 8LL * ProcessSessionId, !*(_QWORD *)(v29 + *((_QWORD *)v176 + 96)))
    || (_mm_lfence(), v30 = *(DXGPRESENTHISTORYTOKENQUEUE **)(v29 + *((_QWORD *)v176 + 96)), (v186 = v30) == 0LL) )
  {
    v169 = WdLogNewEntry5_WdEvent(v29, v28);
    *(_QWORD *)(v169 + 24) = v17;
    WdLogEvent5_WdEvent(v169);
    v43 = -1073741811;
    goto LABEL_253;
  }
  Semaphore = (PRKSEMAPHORE)*((_QWORD *)v30 + 8);
  v196 = Semaphore;
  ObfReferenceObject(Semaphore);
  v201 = 0;
  ExReleasePushLockSharedEx(v21, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)a2 + 80) )
    COREACCESS::Release((struct _KTHREAD ***)a2 + 5);
  v32 = (char *)a2 + 8;
  if ( !*((_BYTE *)a2 + 32) )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31);
    v33[3] = 275LL;
    v33[4] = 4LL;
    v33[5] = v32;
    v33[6] = 0LL;
    v33[7] = 0LL;
    WdLogEvent5_WdCriticalError(v33);
  }
  v34 = (struct _KTHREAD **)*((_QWORD *)a2 + 3);
  *((_BYTE *)a2 + 32) = 0;
  if ( KeGetCurrentThread() != v34[20] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v34);
  if ( *((_BYTE *)a3 + 16) )
  {
    v35 = *((_QWORD *)a3 + 1) + 120LL;
    *((_BYTE *)a3 + 16) = 0;
    ExReleasePushLockSharedEx(v35, 0LL);
    KeLeaveCriticalRegion();
    v36 = *((_QWORD *)a3 + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v36 + 16), (struct DXGADAPTER *)v36);
  }
  if ( a4 )
  {
    if ( *((_QWORD *)a4 + 2) )
    {
      (*(void (**)(void))(*((_QWORD *)a4 + 3) + 24LL))();
      *((_QWORD *)a4 + 2) = 0LL;
    }
    if ( *(_QWORD *)a4 )
    {
      v37 = *((_QWORD *)a4 + 5);
      if ( v37 )
      {
        if ( *((_DWORD *)a4 + 13) )
          (*(void (__fastcall **)(__int64, bool))(*((_QWORD *)a4 + 4) + 288LL))(v37, *((_DWORD *)a4 + 12) == 0);
        (*(void (**)(void))(*((_QWORD *)a4 + 4) + 272LL))();
        *((_QWORD *)a4 + 5) = 0LL;
        *((_QWORD *)a4 + 6) = 0LL;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 296LL))(*(_QWORD *)a4, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 64LL))(*(_QWORD *)a4, *((_QWORD *)a4 + 1));
      *(_QWORD *)a4 = 0LL;
    }
  }
  Object[0] = (char *)v175 + 2432;
  Object[1] = Semaphore;
  v38 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, a6, 0LL);
  if ( v38 )
  {
    if ( v38 == 258 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v40, &EventPerformanceWarning, v41, 19);
      v44 = WdLogNewEntry5_WdEvent(v40, v39);
      *(_QWORD *)(v44 + 24) = 258LL;
      WdLogEvent5_WdEvent(v44);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
      v45 = COREDEVICEACCESS::AcquireShared(a2);
      v48 = v45;
      if ( v45 >= 0 )
      {
        v43 = 258;
      }
      else
      {
        v49 = WdLogNewEntry5_WdEvent(v47, v46);
        *(_QWORD *)(v49 + 24) = v48;
        WdLogEvent5_WdEvent(v49);
        COREDEVICEACCESS::AcquireSharedUncheck(a2);
        v43 = -1073741130;
      }
      KOBJECTREF::~KOBJECTREF((PVOID *)&v196);
      goto LABEL_253;
    }
    if ( !*((_BYTE *)a3 + 16) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a3 + 1) + 24LL));
      v50 = *((_QWORD *)a3 + 1);
      *(_QWORD *)a3 = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v50 + 120, 0LL);
      *((_BYTE *)a3 + 16) = 1;
    }
    if ( *((_BYTE *)a2 + 32) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40);
      v51[3] = 275LL;
      v51[4] = 4LL;
      v51[5] = v32;
      v51[6] = 0LL;
      v51[7] = 0LL;
      WdLogEvent5_WdCriticalError(v51);
    }
    v52 = *((_QWORD *)a2 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v52 + 160) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v52 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v53, &EventBlockThread, v54, 72);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 3));
    }
    *((_BYTE *)a2 + 32) = 1;
    if ( *(_DWORD *)(*((_QWORD *)a2 + 9) + 424LL) != 1 )
      goto LABEL_68;
    if ( *((_BYTE *)a2 + 80) )
    {
      COREACCESS::AcquireShared((DXGADAPTER **)a2 + 5);
      if ( *(_DWORD *)(*((_QWORD *)a2 + 7) + 176LL) != 1 )
      {
        COREACCESS::Release((struct _KTHREAD ***)a2 + 5);
LABEL_68:
        COREACCESS::Release((struct _KTHREAD ***)a2 + 1);
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v57 = WdLogNewEntry5_WdEvent(v56, v55);
        v43 = -1073741130;
        *(_QWORD *)(v57 + 24) = -1073741130LL;
        WdLogEvent5_WdEvent(v57);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v196);
        goto LABEL_253;
      }
    }
    LODWORD(v58) = 0;
    v173 = 0;
    v59 = (union _SLIST_HEADER *)((char *)v186 + 48);
    v60 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v186 + 3);
    if ( !v60
      && (!DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer((union _SLIST_HEADER *)v186)
       || (v60 = ExpInterlockedPopEntrySList(v59)) == 0LL)
      || (v62 = v60 + 1, v60 == (PSLIST_ENTRY)-16LL) )
    {
      v43 = -1073741801;
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v168 = WdLogNewEntry5_WdLowResource(v167);
      *(_QWORD *)(v168 + 24) = v186;
      *(_QWORD *)(v168 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v168);
      KOBJECTREF::~KOBJECTREF((PVOID *)&v196);
      goto LABEL_253;
    }
    v63 = 0LL;
    v195[0] = 0LL;
    v195[1] = (struct _SLIST_ENTRY *)v176;
    v64 = a8 == 0LL;
    if ( !a8 )
    {
      ++*((_DWORD *)v176 + 285);
      v63 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v176 + 70);
      if ( !v63 )
      {
        ++*((_DWORD *)v176 + 286);
        v63 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))v176 + 146))(
                              *((unsigned int *)v176 + 289),
                              *((unsigned int *)v176 + 291),
                              *((unsigned int *)v176 + 290),
                              (__int64)v176 + 1120);
      }
      v195[0] = v63;
      if ( v63 )
      {
        v65 = *((_QWORD *)v176 + 2);
        v66 = *(_DWORD *)(v65 + 2104);
        v67 = v66 < 0x2000 ? 1 : *(_DWORD *)(v65 + 248);
        v68 = v66 >= 0x2000 || *(_BYTE *)(v65 + 2396)
            ? *(_DWORD *)(v65 + 2312) * (48 * v67 + ((8 * v67 + 175) & 0xFFFFFFF8)) + 8 * (v67 + 64)
            : 1280;
        memset(v63, 0, v68);
        v69 = *((_QWORD *)v176 + 2);
        v61 = *(unsigned int *)(v69 + 2104);
        v70 = (int)v61 < 0x2000 ? 1 : *(_DWORD *)(v69 + 248);
        LOBYTE(v61) = (int)v61 >= 0x2000 || *(_BYTE *)(v69 + 2396);
        v71 = *(_DWORD *)(v69 + 2312);
        *((_BYTE *)&v63[21].Next + 12) = v61;
        if ( (_BYTE)v61 )
        {
          HIDWORD(v63[31].Next) = v71;
          *((_DWORD *)&v63[31].Next + 2) = v70;
          v61 = v71 * (48 * v70 + ((8 * v70 + 175) & 0xFFFFFFF8)) + 16;
          *((_DWORD *)&v63[31].Next + 3) = v61;
          v72 = v71 * (48 * v70 + ((8 * v70 + 175) & 0xFFFFFFF8)) + 512;
          LODWORD(v63[30].Next) = v72;
          HIDWORD(v63[30].Next) = 8 * v70 + v72;
        }
      }
      if ( !v63 )
      {
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v74 = WdLogNewEntry5_WdLowResource(v73);
        *(_QWORD *)(v74 + 24) = 2422LL;
        WdLogEvent5_WdLowResource(v74);
        v43 = -1073741801;
        CVidSchSubmitData::~CVidSchSubmitData(v195);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v196);
        goto LABEL_253;
      }
      v64 = 1;
    }
    v75 = a1;
    v76 = 0x1C0000000uLL;
    if ( v64 )
      v11 = (struct VIDSCH_SUBMIT_DATA_BASE *)v63;
    v174 = 1;
    switch ( a1->Model )
    {
      case D3DKMT_PM_REDIRECTED_GDI:
        FlipInterval = a1->Token.Flip.FlipInterval;
        if ( (unsigned int)FlipInterval > 0x10 )
        {
          v78 = WdLogNewEntry5_WdAssertion(v61);
          *(_QWORD *)(v78 + 24) = 53LL;
          goto LABEL_101;
        }
        v81 = 16 * FlipInterval + 67;
        goto LABEL_113;
      case D3DKMT_PM_REDIRECTED_FLIP:
        NumRects = a1->Token.Flip.DirtyRegions.NumRects;
        if ( NumRects > 0x10 )
        {
          v78 = WdLogNewEntry5_WdAssertion(v61);
          *(_QWORD *)(v78 + 24) = 63LL;
          goto LABEL_101;
        }
        v81 = 16 * NumRects + 831;
        goto LABEL_113;
      case D3DKMT_PM_REDIRECTED_BLT:
        VidPnSourceId = a1->Token.Flip.VidPnSourceId;
        if ( VidPnSourceId > 0x10 )
        {
          v78 = WdLogNewEntry5_WdAssertion(v61);
          *(_QWORD *)(v78 + 24) = 73LL;
LABEL_101:
          WdLogEvent5_WdAssertion(v78);
          v79 = 0;
LABEL_102:
          v80 = WdLogNewEntry5_WdWarning(v61, v75, v76);
          *(_QWORD *)(v80 + 24) = v79;
          WdLogEvent5_WdWarning(v80);
          v43 = -1073741811;
          CVidSchSubmitData::~CVidSchSubmitData(v195);
          KOBJECTREF::~KOBJECTREF((PVOID *)&v196);
          goto LABEL_253;
        }
        v81 = 16 * VidPnSourceId + 51;
LABEL_113:
        v79 = v81 & 0xFFFFFFF8;
        if ( v79 - 1 > 0x437 )
          goto LABEL_102;
        memmove(v62, v75, v79);
        v85 = PsGetCurrentProcess();
        ProcessDxgProcess = PsGetProcessDxgProcess(v85);
        v87 = ProcessDxgProcess;
        if ( ProcessDxgProcess )
        {
          if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
          {
            ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
            v89 = ThreadProperty;
            if ( ThreadProperty )
            {
              ObfDereferenceObject(ThreadProperty);
              v87 = *v89;
            }
          }
        }
        if ( !(*(unsigned int (__fastcall **)(PSLIST_ENTRY))(*(_QWORD *)(v87 + 104) + 256LL))(v62) )
        {
          LODWORD(v58) = -1071775733;
          ExpInterlockedPushEntrySList(v59, v62 - 1);
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          v166 = WdLogNewEntry5_WdWarning(v164, v163, v165);
          *(_QWORD *)(v166 + 24) = DXGPROCESS::GetCurrent();
          WdLogEvent5_WdWarning(v166);
          goto LABEL_250;
        }
        v90 = 0LL;
        v91 = *(_DWORD *)v11 & 0xFFFFFFDF;
        v92 = v175;
        *((_QWORD *)v11 + 13) = v62;
        v93 = v91 | (32 * (a5 & 1 | 0x2000));
        *((_DWORD *)v11 + 29) = -1;
        *((_QWORD *)v11 + 12) = v186;
        *(_DWORD *)v11 = v93;
        v94 = *((_DWORD *)v175 + 526) < 0x2000;
        v191 = 0LL;
        v187 = 0LL;
        if ( v94 && !*((_BYTE *)v175 + 2396) )
        {
          v95 = a9;
        }
        else
        {
          v95 = a9;
          if ( a9 )
          {
            v98 = a7;
            if ( !a7 )
              goto LABEL_131;
            v96 = *((_DWORD *)a7 + 368);
            v97 = (void *)*((_QWORD *)a7 + 185);
          }
          else
          {
            v96 = *(_DWORD *)(v178 + 1104);
            v97 = *(void **)(v178 + 1112);
          }
          v99 = ReadPresentPrivateDriverData(v175, v96, v97, &v191);
          v58 = v99;
          v173 = v99;
          if ( v99 < 0 )
          {
            v100 = WdLogNewEntry5_WdError(v93);
            *(_QWORD *)(v100 + 24) = v58;
            WdLogEvent5_WdError(v100);
            v173 = v58;
            goto LABEL_234;
          }
          v101 = v191;
          if ( v191 )
          {
            *((_DWORD *)v11 + 1) |= 2u;
            v90 = (volatile signed __int32 *)v101;
            v187 = v101;
            *((_QWORD *)v11 + 3) = v101;
            v173 = v58;
          }
        }
        v98 = a7;
LABEL_131:
        if ( !*((_BYTE *)v175 + 185) )
        {
          LODWORD(v58) = 0;
          v173 = 0;
          if ( !v95 && !*((_BYTE *)v175 + 2418) )
            goto LABEL_136;
          LODWORD(v58) = PrepareIndependentFlipToken((struct _D3DKMT_PRESENTHISTORYTOKEN *)v62, v98, v11, v95, v194);
          v173 = v58;
        }
        if ( (int)v58 < 0 )
          goto LABEL_235;
LABEL_136:
        if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_164;
        Next = (int)v62->Next;
        LOBYTE(v103) = 0;
        Next_high = HIDWORD(v62->Next);
        v105 = 0;
        v106 = 0;
        v188 = (struct _SLIST_ENTRY)0LL;
        v185 = 0LL;
        v190 = 0uLL;
        LOBYTE(v179) = 0;
        v177 = 0;
        v189 = 0uLL;
        Srca = Next_high;
        v107 = Next - 1;
        switch ( Next )
        {
          case 1:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
            v108 = v62[1].Next;
            break;
          case 2:
            v108 = (struct _SLIST_ENTRY *)*((_QWORD *)&v62[1].Next + 1);
            break;
          default:
            v108 = 0LL;
            break;
        }
        switch ( Next )
        {
          case 1:
            v109 = (__int64)(&v62[3].Next + 1);
            break;
          case 2:
            v109 = (__int64)&v62[51].Next + 4;
            break;
          case 3:
            v109 = (__int64)(&v62[2].Next + 1);
            break;
          default:
            v109 = 0LL;
            break;
        }
        v110 = (unsigned int)(Next - 1);
        if ( Next == 1 )
        {
          v112 = v62[2];
          v103 = v62[3].Next;
          v185 = v103;
          v188 = v112;
        }
        else if ( Next == 2 )
        {
          v111 = *(struct _SLIST_ENTRY *)((char *)&v62[6] + 4);
          v103 = *(struct _SLIST_ENTRY **)((char *)&v62[7].Next + 4);
          v185 = v103;
          v188 = v111;
          v179 = HIDWORD(v62[47].Next);
          v107 = *((unsigned int *)&v62[47].Next + 2);
          v190 = *(__int128 *)((char *)&v62[46] + 4);
          v105 = v190;
          v177 = v107;
          v189 = *(__int128 *)((char *)&v62[47] + 12);
          v106 = v189;
        }
        if ( !v109 )
        {
          LODWORD(Timeout) = Next_high;
          *(_DWORD *)Alertable = Next;
          McTemplateK0ppqqx(v107, &EventSubmitPresentHistory, 0LL, v176, v62, *(_QWORD *)Alertable, Timeout, v108);
          goto LABEL_163;
        }
        v113 = *(_DWORD *)v109;
        if ( *(_DWORD *)v109 >= 0x10u )
        {
          v113 = 16;
        }
        else if ( !v113 )
        {
LABEL_161:
          McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq(
            HIDWORD(v185),
            v110,
            v109,
            (__int64)v176,
            (char)v62,
            Next,
            Next_high,
            (char)v108,
            (char)v188.Next,
            *((char *)&v188.Next + 8),
            SBYTE4(v188.Next),
            *((char *)&v188.Next + 12),
            (char)v103,
            SBYTE4(v185),
            v113,
            (__int64)v209,
            (__int64)v208,
            (__int64)v207,
            (__int64)v206,
            v105,
            SBYTE8(v190),
            SBYTE4(v190),
            SBYTE12(v190),
            v179,
            v177,
            v106,
            SBYTE8(v189),
            SBYTE4(v189),
            SBYTE12(v189));
LABEL_163:
          v92 = v175;
          v95 = a9;
LABEL_164:
          if ( !v95 )
            goto LABEL_188;
          v93 = (__int64)a7;
          if ( !a7 )
            goto LABEL_188;
          v116 = *((_DWORD *)a7 + 23);
          *((_BYTE *)a7 + 1504) = (*((_BYTE *)v11 + 3) & 1) == 0;
          if ( (*((_DWORD *)v95 + 91) & 0x10) != 0 )
          {
            v174 = v116 + 1;
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v95, *((struct DXGCONTEXT ***)a7 + 187), v116);
            goto LABEL_188;
          }
          if ( !v116 || !DXGADAPTER::IsDxgmms2(v92) )
            goto LABEL_188;
          v118 = v117 + 1;
          v174 = v117 + 1;
          v192 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v95 + 2) + 1736LL));
          BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)v95 + 2));
          if ( !BroadcastPresentSyncObject )
          {
            v120 = WdLogNewEntry5_WdError(v119);
            *(_QWORD *)(v120 + 24) = -1073741801LL;
            *(_QWORD *)(v120 + 32) = 2541LL;
            WdLogEvent5_WdError(v120);
            LODWORD(v58) = -1073741801;
            v173 = -1073741801;
            goto LABEL_235;
          }
          v121 = 0LL;
          v202 = 0LL;
          v204 = 0;
          v122 = *((unsigned int *)a7 + 23);
          if ( (unsigned int)v122 <= 8 )
          {
            PoolWithTag = v203;
            v202 = v203;
          }
          else
          {
            if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v122 < 8 )
            {
LABEL_178:
              if ( !v121 )
                goto LABEL_179;
              v124 = 1;
              if ( v118 > 1 )
              {
                v125 = 8LL;
                while ( 1 )
                {
                  v126 = *(_QWORD *)(v125 + *((_QWORD *)a7 + 187));
                  if ( (*(_DWORD *)(v126 + 364) & 0x10) != 0 )
                    break;
                  v127 = v124++ - 1;
                  *(_QWORD *)&v121[8 * v127] = *(_QWORD *)(v126 + 232);
                  v125 += 8LL;
                  if ( v124 >= v118 )
                    goto LABEL_184;
                }
                LODWORD(v58) = -1073741811;
                v173 = -1073741811;
                PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v202);
                goto LABEL_235;
              }
LABEL_184:
              LODWORD(v58) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v176 + 65) + 8LL)
                                                                               + 648LL))(
                               0LL,
                               0LL,
                               *((unsigned int *)a7 + 23));
              v173 = v58;
              if ( (int)v58 < 0 )
              {
                PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v202);
                goto LABEL_234;
              }
              LODWORD(v58) = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*((_QWORD *)v176 + 65) + 8LL) + 632LL))(
                               *((_QWORD *)v95 + 29),
                               BroadcastPresentSyncObject,
                               v192);
              v173 = v58;
              PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v202);
              if ( (int)v58 < 0 )
                goto LABEL_235;
LABEL_188:
              v128 = 0LL;
              Global = DXGGLOBAL::GetGlobal(v93);
              v183 = Global;
              v184 = 0;
              if ( !Global )
              {
                v131 = WdLogNewEntry5_WdAssertion(v130);
                *(_QWORD *)(v131 + 24) = 2138LL;
                WdLogEvent5_WdAssertion(v131);
                Global = v183;
              }
              if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
              {
                v133 = WdLogNewEntry5_WdAssertion(v132);
                *(_QWORD *)(v133 + 24) = 2143LL;
                WdLogEvent5_WdAssertion(v133);
              }
              if ( !v172 )
                goto LABEL_207;
              DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v183);
              DriverVersion = DXGADAPTER::GetDriverVersion(v175);
              Current = DXGPROCESS::GetCurrent();
              v136 = (v172 >> 6) & 0xFFFFFF;
              DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
              if ( DriverVersion >= 2000 )
              {
                if ( v136 >= *((_DWORD *)Current + 62) )
                {
                  v140 = v172;
                }
                else
                {
                  v137 = *((_QWORD *)Current + 29);
                  v138 = 2LL * v136;
                  v139 = v136;
                  v140 = v172;
                  v141 = *(_DWORD *)(v137 + 8 * v138 + 8);
                  if ( ((v172 >> 25) & 0x60) == (*(_BYTE *)(v137 + 8 * v138 + 8) & 0x60)
                    && (v141 & 0x2000) == 0
                    && (v141 & 0x1F) != 0 )
                  {
                    v142 = 2 * v139;
                    if ( (v141 & 0x1F) == 0xB )
                    {
                      v143 = *(_QWORD *)(v137 + 8 * v142);
LABEL_202:
                      ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
                      KeLeaveCriticalRegion();
                      if ( !v143 )
                      {
                        v144 = WdLogNewEntry5_WdError(v132);
                        LODWORD(v58) = -1073741811;
                        *(_QWORD *)(v144 + 24) = v140;
                        *(_QWORD *)(v144 + 32) = -1073741811LL;
                        WdLogEvent5_WdError(v144);
                        v173 = -1073741811;
                        if ( v184 )
LABEL_204:
                          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v183);
LABEL_235:
                        KeReleaseSemaphore(Semaphore, 0, 1, 0);
                        if ( (*(_DWORD *)v11 & 0x1000000) != 0 )
                        {
                          v159 = 0;
                          if ( v174 )
                          {
                            v160 = 0LL;
                            do
                            {
                              if ( a9 )
                                v161 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a7 + 187) + v160) + 360LL);
                              else
                                LOBYTE(v161) = 0;
                              if ( *((_BYTE *)v11 + 348) )
                                v162 = (_QWORD *)((char *)v11
                                                + 48 * v159 * *((_DWORD *)v11 + 125)
                                                + *((_DWORD *)v11 + 125)
                                                * ((8 * *((_DWORD *)v11 + 126) + 175) & 0xFFFFFFF8)
                                                + 544);
                              else
                                v162 = (_QWORD *)((char *)v11 + 480);
                              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v176 + 68)
                                                                                                 + 8LL)
                                                                                     + 424LL))(
                                *((_QWORD *)v176 + 69),
                                (unsigned int)(1 << v161),
                                *v162,
                                0LL);
                              ++v159;
                              v160 += 8LL;
                            }
                            while ( v159 < v174 );
                            v90 = (volatile signed __int32 *)v187;
                            LODWORD(v58) = v173;
                          }
                        }
LABEL_246:
                        if ( v90 && _InterlockedExchangeAdd(v90 + 1, 0xFFFFFFFF) == 1 )
                        {
                          ExFreePoolWithTag((PVOID)v90, 0);
                          CVidSchSubmitData::~CVidSchSubmitData(v195);
                          v43 = v58;
                          KOBJECTREF::~KOBJECTREF((PVOID *)&v196);
                          goto LABEL_253;
                        }
LABEL_250:
                        CVidSchSubmitData::~CVidSchSubmitData(v195);
                        v43 = v58;
                        KOBJECTREF::~KOBJECTREF((PVOID *)&v196);
                        goto LABEL_253;
                      }
                      v128 = *(_QWORD *)(v143 + 32);
                      goto LABEL_206;
                    }
                  }
                }
                v143 = 0LL;
                goto LABEL_202;
              }
              if ( v136 >= *((_DWORD *)Current + 62) )
              {
                v150 = v172;
              }
              else
              {
                v147 = *((_QWORD *)Current + 29);
                v148 = 2LL * v136;
                v149 = v136;
                v150 = v172;
                v151 = *(_DWORD *)(v147 + 8 * v148 + 8);
                if ( ((v172 >> 25) & 0x60) == (*(_BYTE *)(v147 + 8 * v148 + 8) & 0x60)
                  && (v151 & 0x2000) == 0
                  && (v151 & 0x1F) != 0 )
                {
                  v152 = 2 * v149;
                  if ( (v151 & 0x1F) == 8 )
                  {
                    v128 = *(_QWORD *)(v147 + 8 * v152);
                    goto LABEL_221;
                  }
                }
              }
              v128 = 0LL;
LABEL_221:
              ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
              KeLeaveCriticalRegion();
              if ( !v128 )
              {
                v153 = WdLogNewEntry5_WdError(v132);
                LODWORD(v58) = -1073741811;
                *(_QWORD *)(v153 + 24) = v150;
                *(_QWORD *)(v153 + 32) = -1073741811LL;
                WdLogEvent5_WdError(v153);
                v173 = -1073741811;
                if ( !v184 )
                  goto LABEL_235;
                goto LABEL_204;
              }
LABEL_206:
              v95 = a9;
LABEL_207:
              if ( *((_BYTE *)v175 + 185) )
              {
                v58 = *((_QWORD *)v11 + 3);
                if ( v58 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v58 + 4));
                  v58 = *((_QWORD *)v11 + 3);
                }
                v157 = DXGPROCESS::GetCurrent();
                LODWORD(v58) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
                                 (char *)v175 + 4080,
                                 v157,
                                 v95,
                                 *(_QWORD *)v11,
                                 v186,
                                 v62,
                                 v58,
                                 v128);
                v173 = v58;
                if ( (int)v58 < 0 )
                {
                  v158 = (CRefCountedBuffer *)*((_QWORD *)v11 + 3);
                  if ( v158 )
                    CRefCountedBuffer::RefCountedBufferRelease(v158);
                }
              }
              else if ( v95 )
              {
                if ( *((struct _KTHREAD **)v95 + 52) != KeGetCurrentThread() )
                {
                  v145 = WdLogNewEntry5_WdAssertion(v132);
                  *(_QWORD *)(v145 + 24) = 2638LL;
                  WdLogEvent5_WdAssertion(v145);
                }
                v146 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v95 + 2) + 16LL) + 520LL) + 8LL);
                if ( (*((_DWORD *)v95 + 91) & 0x10) != 0 )
                  (*(void (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v146 + 440))(
                    *((_QWORD *)v95 + 33),
                    v11);
                else
                  (*(void (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v146 + 432))(
                    *((_QWORD *)v95 + 29),
                    v11);
              }
              else
              {
                DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v197, (struct DXGFASTMUTEX *const)(v128 + 32), 0);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v197);
                VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v128, v176);
                LODWORD(v58) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, __int64, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v155 + 8) + 1024LL))(
                                 v11,
                                 v156,
                                 VidSchSyncObject);
                v173 = v58;
                if ( v197[8] )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v197);
              }
              if ( v184 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v183);
LABEL_234:
              if ( (int)v58 >= 0 )
                goto LABEL_246;
              goto LABEL_235;
            }
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v122, 0x4B677844u);
            v202 = PoolWithTag;
          }
          v204 = v122;
          if ( !PoolWithTag )
          {
LABEL_179:
            LODWORD(v58) = -1073741801;
            v173 = -1073741801;
            PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v202);
            goto LABEL_235;
          }
          memset(PoolWithTag, 0, 8 * v122);
          v121 = v202;
          goto LABEL_178;
        }
        v110 = v109 + 12;
        v114 = v113;
        v109 = 0LL;
        do
        {
          v115 = *(_DWORD *)(v110 - 8);
          v110 += 16LL;
          *(_DWORD *)((char *)v209 + v109) = v115;
          v109 += 4LL;
          *(_DWORD *)&v207[v109 + 60] = *(_DWORD *)(v110 - 16);
          *(_DWORD *)&v206[v109 + 60] = *(_DWORD *)(v110 - 20);
          *(_DWORD *)&v206[v109 - 4] = *(_DWORD *)(v110 - 12);
          --v114;
        }
        while ( v114 );
        LOBYTE(Next_high) = Srca;
        goto LABEL_161;
      case D3DKMT_PM_REDIRECTED_VISTABLT:
      case D3DKMT_PM_SCREENCAPTUREFENCE:
      case D3DKMT_PM_REDIRECTED_COMPOSITION:
      case D3DKMT_PM_SURFACECOMPLETE:
        v81 = 31;
        goto LABEL_113;
      case D3DKMT_PM_FLIPMANAGER:
        v81 = 39;
        goto LABEL_113;
      default:
        v84 = WdLogNewEntry5_WdAssertion(v61);
        *(_QWORD *)(v84 + 24) = 96LL;
        WdLogEvent5_WdAssertion(v84);
        v75 = a1;
        v81 = 7;
        goto LABEL_113;
    }
  }
  v42 = WdLogNewEntry5_WdEvent(v40, v39);
  *(_QWORD *)(v42 + 24) = v175;
  WdLogEvent5_WdEvent(v42);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
  COREDEVICEACCESS::AcquireSharedUncheck(a2);
  v43 = -1073741130;
  KOBJECTREF::~KOBJECTREF((PVOID *)&v196);
LABEL_253:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v199);
  return v43;
}
