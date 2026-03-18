/*
 * XREFs of ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300
 * Callers:
 *     DxgkPresent @ 0x1C00BD0B0 (DxgkPresent.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00C1650 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00C1D40 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00C30B0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00CE6D0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DxgkPresentRedirected @ 0x1C01B8440 (DxgkPresentRedirected.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008E24 (-GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008EC0 (-GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0008EE0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     McTemplateK0ppqqx @ 0x1C001573C (McTemplateK0ppqqx.c)
 *     McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq @ 0x1C0015AAC (McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D458 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1KOBJECTREF@@QEAA@XZ @ 0x1C001DF84 (--1KOBJECTREF@@QEAA@XZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C00290D0 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C008AAE4 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00CBE30 (-PrepareIndependentFlipToken@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C00CEBE0 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C00EB864 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@@Z @ 0x1C019886C (-VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONT.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C019D4AC (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z @ 0x1C01B7D00 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z.c)
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
        struct DXGADAPTER *a10,
        unsigned int a11)
{
  __int64 v14; // rax
  int v15; // edi
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  DXGPRESENTHISTORYTOKENQUEUE *v30; // rax
  unsigned int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  char *v35; // rdi
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  NTSTATUS v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rbx
  _QWORD *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  union _SLIST_HEADER *v65; // r13
  PSLIST_ENTRY v66; // rax
  __int64 v67; // rcx
  PSLIST_ENTRY v68; // r15
  PSLIST_ENTRY v69; // rsi
  __int64 v70; // r8
  int v71; // eax
  int v72; // edx
  unsigned int v73; // eax
  __int64 v74; // rax
  int v75; // r8d
  int v76; // r9d
  unsigned int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v80; // rdx
  unsigned __int64 v81; // r8
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // ebx
  __int64 v83; // rax
  unsigned int v84; // ebx
  __int64 v85; // rax
  int v86; // ebx
  UINT NumRects; // ebx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // ebx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v95; // rbx
  __int64 *ThreadProperty; // rax
  __int64 *v97; // r12
  volatile signed __int32 *v98; // rbx
  unsigned int v99; // eax
  __int64 v100; // rcx
  bool v101; // cc
  struct DXGCONTEXT *v102; // r12
  void *v103; // r8
  unsigned int v104; // edx
  struct DXGK_PRESENT_PARAMS *v105; // rax
  __int64 v106; // rax
  struct CRefCountedBuffer *v107; // rax
  int Next; // edi
  struct _SLIST_ENTRY *v109; // rax
  int Next_high; // r10d
  char v111; // r12
  char v112; // r13
  __int64 v113; // rcx
  struct _SLIST_ENTRY *v114; // r9
  unsigned int *v115; // rdx
  __int64 v116; // r8
  struct _SLIST_ENTRY v117; // xmm0
  unsigned int v118; // r11d
  __int64 v119; // r10
  int v120; // ecx
  unsigned int v121; // r8d
  struct ADAPTER_RENDER *v122; // r13
  __int64 v123; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  struct DXGPROCESS *Current; // rdi
  char *v133; // r12
  unsigned int v134; // ecx
  __int64 v135; // rdi
  int v136; // r8d
  int v137; // r13d
  unsigned __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rax
  unsigned __int64 v141; // rdi
  _BYTE *v142; // r10
  _BYTE *PoolWithTag; // r10
  struct DXGK_PRESENT_PARAMS *v144; // r11
  __int64 v145; // rdx
  struct _VIDSCH_CONTEXT *RenderHwQueue; // rax
  struct _VIDSCH_CONTEXT **v147; // r8
  __int64 v148; // rdx
  __int64 v149; // r9
  __int64 v150; // rcx
  __int64 v151; // rdx
  struct _VIDSCH_CONTEXT *ImplicitHwQueue; // rax
  __int64 v153; // rdx
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v158; // r9
  __int64 v159; // r10
  __int64 v160; // rax
  __int64 v161; // rdi
  struct DXGPROCESS *v162; // rax
  CRefCountedBuffer *v163; // rcx
  __int64 v164; // r15
  struct VIDMM_ALLOC **v165; // r9
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // rbx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rcx
  __int64 v173; // rax
  __int64 v174; // rax
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-148h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-140h]
  int v178; // [rsp+F0h] [rbp-80h]
  char v179; // [rsp+F0h] [rbp-80h]
  unsigned int v180; // [rsp+F8h] [rbp-78h]
  struct ADAPTER_RENDER *v181; // [rsp+100h] [rbp-70h]
  PRKSEMAPHORE Semaphore; // [rsp+120h] [rbp-50h]
  char Srca; // [rsp+128h] [rbp-48h]
  int v185; // [rsp+130h] [rbp-40h]
  struct CRefCountedBuffer *v186; // [rsp+140h] [rbp-30h] BYREF
  struct _SLIST_ENTRY *v187; // [rsp+148h] [rbp-28h]
  DXGPRESENTHISTORYTOKENQUEUE *v188; // [rsp+150h] [rbp-20h]
  struct CRefCountedBuffer *v189; // [rsp+158h] [rbp-18h]
  struct _SLIST_ENTRY v190; // [rsp+160h] [rbp-10h]
  struct DXGGLOBAL *v191; // [rsp+170h] [rbp+0h] BYREF
  char v192; // [rsp+178h] [rbp+8h]
  __int128 v193; // [rsp+180h] [rbp+10h]
  __int128 v194; // [rsp+190h] [rbp+20h]
  signed __int64 v195; // [rsp+1A0h] [rbp+30h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+1A8h] [rbp+38h] BYREF
  struct _SLIST_ENTRY *v197[2]; // [rsp+1B0h] [rbp+40h] BYREF
  int v198; // [rsp+1C0h] [rbp+50h]
  PRKSEMAPHORE v199; // [rsp+1C8h] [rbp+58h] BYREF
  _BYTE v200[16]; // [rsp+1D0h] [rbp+60h] BYREF
  PVOID Object[2]; // [rsp+1E0h] [rbp+70h] BYREF
  char v202[8]; // [rsp+1F0h] [rbp+80h] BYREF
  __int64 v203; // [rsp+1F8h] [rbp+88h]
  int v204; // [rsp+200h] [rbp+90h]
  _BYTE *v205; // [rsp+210h] [rbp+A0h] BYREF
  _BYTE v206[64]; // [rsp+218h] [rbp+A8h] BYREF
  int v207; // [rsp+258h] [rbp+E8h]
  _BYTE v209[64]; // [rsp+260h] [rbp+F0h] BYREF
  _BYTE v210[64]; // [rsp+2A0h] [rbp+130h] BYREF
  char v211[64]; // [rsp+2E0h] [rbp+170h] BYREF
  _DWORD v212[16]; // [rsp+320h] [rbp+1B0h] BYREF

  if ( !a9 )
  {
    if ( !a11 )
      goto LABEL_3;
    goto LABEL_5;
  }
  if ( !a11 )
  {
LABEL_5:
    v16 = *((_QWORD *)a10 + 289);
    v181 = (struct ADAPTER_RENDER *)v16;
    v17 = *(_QWORD *)(v16 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 144)) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v18 + 24) = 2356LL;
      WdLogEvent5_WdAssertion(v18);
    }
    v203 = v16 + 720;
    if ( v16 != -720 && *(struct _KTHREAD **)(v16 + 728) == KeGetCurrentThread() )
    {
      v19 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v19 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v19);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v16 + 720, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v23 = *(_DWORD *)(v16 + 736);
        if ( v23 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v21, &EventBlockThread, v22, v23);
      }
      ExAcquirePushLockSharedEx(v16 + 720, 0LL);
    }
    v204 = 1;
    CurrentProcess = PsGetCurrentProcess(v21, v20);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    if ( ProcessSessionId >= *(_DWORD *)(v16 + 744)
      || (v27 = 8LL * ProcessSessionId, !*(_QWORD *)(v27 + *(_QWORD *)(v16 + 752)))
      || (_mm_lfence(), v30 = *(DXGPRESENTHISTORYTOKENQUEUE **)(v27 + *(_QWORD *)(v16 + 752)), (v188 = v30) == 0LL) )
    {
      v174 = WdLogNewEntry5_WdEvent(v27, v26, v28, v29);
      *(_QWORD *)(v174 + 24) = a10;
      WdLogEvent5_WdEvent(v174);
      v15 = -1073741811;
      goto LABEL_235;
    }
    Semaphore = (PRKSEMAPHORE)*((_QWORD *)v30 + 8);
    v199 = Semaphore;
    ObfReferenceObject(Semaphore);
    v31 = 0;
    v204 = 0;
    ExReleasePushLockSharedEx(v16 + 720, 0LL);
    KeLeaveCriticalRegion();
    if ( *((_BYTE *)a2 + 80) )
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 40));
    v35 = (char *)a2 + 8;
    if ( !*((_BYTE *)a2 + 32) )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v34);
      v36[3] = 275LL;
      v36[4] = 4LL;
      v36[5] = v35;
      v36[6] = 0LL;
      v36[7] = 0LL;
      WdLogEvent5_WdCriticalError(v36);
    }
    v37 = *((_QWORD *)a2 + 3);
    *((_BYTE *)a2 + 32) = 0;
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v37 + 160) )
      DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v37);
    if ( *((_BYTE *)a3 + 16) )
    {
      v38 = *((_QWORD *)a3 + 1) + 120LL;
      *((_BYTE *)a3 + 16) = 0;
      ExReleasePushLockSharedEx(v38, 0LL);
      KeLeaveCriticalRegion();
      v39 = *((_QWORD *)a3 + 1);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v39 + 16), (struct DXGADAPTER *)v39);
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
        v40 = *((_QWORD *)a4 + 5);
        if ( v40 )
        {
          if ( *((_DWORD *)a4 + 13) )
            (*(void (__fastcall **)(__int64, bool))(*((_QWORD *)a4 + 4) + 288LL))(v40, *((_DWORD *)a4 + 12) == 0);
          (*(void (**)(void))(*((_QWORD *)a4 + 4) + 272LL))();
          *((_QWORD *)a4 + 5) = 0LL;
          *((_QWORD *)a4 + 6) = 0LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 296LL))(*(_QWORD *)a4, 0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 64LL))(*(_QWORD *)a4, *((_QWORD *)a4 + 1));
        *(_QWORD *)a4 = 0LL;
      }
    }
    Object[0] = (char *)a10 + 2280;
    Object[1] = Semaphore;
    v41 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, a6, 0LL);
    if ( !v41 )
    {
      v46 = WdLogNewEntry5_WdEvent(v43, v42, v44, v45);
      *(_QWORD *)(v46 + 24) = a10;
      WdLogEvent5_WdEvent(v46);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
      COREDEVICEACCESS::AcquireSharedUncheck(a2);
      v15 = -1073741130;
      KOBJECTREF::~KOBJECTREF((PVOID *)&v199);
LABEL_235:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v202);
      return (unsigned int)v15;
    }
    if ( v41 == 258 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v43, &EventPerformanceWarning, v44, 19);
      v47 = WdLogNewEntry5_WdEvent(v43, v42, v44, v45);
      *(_QWORD *)(v47 + 24) = 258LL;
      WdLogEvent5_WdEvent(v47);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
      v48 = COREDEVICEACCESS::AcquireShared(a2);
      v53 = v48;
      if ( v48 >= 0 )
      {
        v15 = 258;
      }
      else
      {
        v54 = WdLogNewEntry5_WdEvent(v50, v49, v51, v52);
        *(_QWORD *)(v54 + 24) = v53;
        WdLogEvent5_WdEvent(v54);
        COREDEVICEACCESS::AcquireSharedUncheck(a2);
        v15 = -1073741130;
      }
      KOBJECTREF::~KOBJECTREF((PVOID *)&v199);
      goto LABEL_235;
    }
    if ( !*((_BYTE *)a3 + 16) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a3 + 1) + 24LL));
      v55 = *((_QWORD *)a3 + 1);
      *(_QWORD *)a3 = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v55 + 120, 0LL);
      *((_BYTE *)a3 + 16) = 1;
    }
    if ( *((_BYTE *)a2 + 32) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v42, v44);
      v56[3] = 275LL;
      v56[4] = 4LL;
      v56[5] = v35;
      v56[6] = 0LL;
      v56[7] = 0LL;
      WdLogEvent5_WdCriticalError(v56);
    }
    v57 = *((_QWORD *)a2 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v57 + 160) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v57 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v58, &EventBlockThread, v59, 72);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 3));
    }
    *((_BYTE *)a2 + 32) = 1;
    if ( *(_DWORD *)(*((_QWORD *)a2 + 9) + 408LL) != 1 )
    {
LABEL_63:
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 8));
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v64 = WdLogNewEntry5_WdEvent(v61, v60, v62, v63);
      v15 = -1073741130;
      *(_QWORD *)(v64 + 24) = -1073741130LL;
      WdLogEvent5_WdEvent(v64);
      KOBJECTREF::~KOBJECTREF((PVOID *)&v199);
      goto LABEL_235;
    }
    if ( *((_BYTE *)a2 + 80) )
    {
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a2 + 40));
      if ( *(_DWORD *)(*((_QWORD *)a2 + 7) + 176LL) != 1 )
      {
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 40));
        goto LABEL_63;
      }
    }
    v15 = 0;
    v178 = 0;
    v65 = (union _SLIST_HEADER *)((char *)v188 + 48);
    v66 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v188 + 3);
    if ( !v66
      && (!DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(v188) || (v66 = ExpInterlockedPopEntrySList(v65)) == 0LL)
      || (v68 = v66 + 1, v66 == (PSLIST_ENTRY)-16LL) )
    {
      v15 = -1073741801;
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v173 = WdLogNewEntry5_WdLowResource(v172);
      *(_QWORD *)(v173 + 24) = v188;
      *(_QWORD *)(v173 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v173);
      KOBJECTREF::~KOBJECTREF((PVOID *)&v199);
      goto LABEL_235;
    }
    v69 = 0LL;
    v197[0] = 0LL;
    v197[1] = (struct _SLIST_ENTRY *)v16;
    if ( !a8 )
    {
      ++*(_DWORD *)(v16 + 1124);
      v69 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v16 + 1104));
      if ( !v69 )
      {
        ++*(_DWORD *)(v16 + 1128);
        v69 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v16 + 1152))(
                              *(unsigned int *)(v16 + 1140),
                              *(unsigned int *)(v16 + 1148),
                              *(unsigned int *)(v16 + 1144),
                              v16 + 1104);
      }
      v197[0] = v69;
      if ( v69 )
      {
        v70 = *(_QWORD *)(v16 + 16);
        v71 = *(_DWORD *)(v70 + 1968);
        v72 = v71 < 0x2000 ? 1 : *(_DWORD *)(v70 + 248);
        v73 = v71 >= 0x2000 || *(_BYTE *)(v70 + 2252)
            ? *(_DWORD *)(v70 + 2176) * (48 * v72 + ((8 * v72 + 175) & 0xFFFFFFF8)) + 8 * (v72 + 57)
            : 1152;
        memset(v69, 0, v73);
        v74 = *(_QWORD *)(v16 + 16);
        v67 = *(unsigned int *)(v74 + 1968);
        v75 = (int)v67 < 0x2000 ? 1 : *(_DWORD *)(v74 + 248);
        LOBYTE(v67) = (int)v67 >= 0x2000 || *(_BYTE *)(v74 + 2252);
        v76 = *(_DWORD *)(v74 + 2176);
        *((_BYTE *)&v69[21].Next + 12) = v67;
        if ( (_BYTE)v67 )
        {
          *((_DWORD *)&v69[27].Next + 3) = v76;
          LODWORD(v69[28].Next) = v75;
          v67 = v76 * (48 * v75 + ((8 * v75 + 175) & 0xFFFFFFF8)) + 16;
          HIDWORD(v69[28].Next) = v67;
          v77 = v76 * (48 * v75 + ((8 * v75 + 175) & 0xFFFFFFF8)) + 456;
          *((_DWORD *)&v69[26].Next + 2) = v77;
          *((_DWORD *)&v69[26].Next + 3) = 8 * v75 + v77;
        }
      }
    }
    if ( a8 )
    {
      v69 = (PSLIST_ENTRY)a8;
    }
    else if ( !v69 )
    {
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v79 = WdLogNewEntry5_WdLowResource(v78);
      *(_QWORD *)(v79 + 24) = 2443LL;
      WdLogEvent5_WdLowResource(v79);
      CVidSchSubmitData::~CVidSchSubmitData(v197);
      v15 = -1073741801;
      KOBJECTREF::~KOBJECTREF((PVOID *)&v199);
      goto LABEL_235;
    }
    v80 = a1;
    v81 = 0x1C0000000uLL;
    v180 = 1;
    switch ( a1->Model )
    {
      case D3DKMT_PM_REDIRECTED_GDI:
        FlipInterval = a1->Token.Flip.FlipInterval;
        if ( (unsigned int)FlipInterval > 0x10 )
        {
          v83 = WdLogNewEntry5_WdAssertion(v67);
          *(_QWORD *)(v83 + 24) = 53LL;
          goto LABEL_95;
        }
        v86 = 16 * FlipInterval + 67;
        goto LABEL_106;
      case D3DKMT_PM_REDIRECTED_FLIP:
        NumRects = a1->Token.Flip.DirtyRegions.NumRects;
        if ( NumRects > 0x10 )
        {
          v83 = WdLogNewEntry5_WdAssertion(v67);
          *(_QWORD *)(v83 + 24) = 63LL;
          goto LABEL_95;
        }
        v86 = 16 * NumRects + 831;
        goto LABEL_106;
      case D3DKMT_PM_REDIRECTED_BLT:
        VidPnSourceId = a1->Token.Flip.VidPnSourceId;
        if ( VidPnSourceId > 0x10 )
        {
          v83 = WdLogNewEntry5_WdAssertion(v67);
          *(_QWORD *)(v83 + 24) = 73LL;
LABEL_95:
          WdLogEvent5_WdAssertion(v83);
          v84 = 0;
LABEL_96:
          v85 = WdLogNewEntry5_WdWarning(v67, v80, v81);
          *(_QWORD *)(v85 + 24) = v84;
          WdLogEvent5_WdWarning(v85);
          CVidSchSubmitData::~CVidSchSubmitData(v197);
          v15 = -1073741811;
          KOBJECTREF::~KOBJECTREF((PVOID *)&v199);
          goto LABEL_235;
        }
        v86 = 16 * VidPnSourceId + 51;
LABEL_106:
        v84 = v86 & 0xFFFFFFF8;
        if ( v84 - 1 > 0x437 )
          goto LABEL_96;
        memmove(v68, v80, v84);
        v92 = PsGetCurrentProcess(v91, v90);
        ProcessDxgProcess = PsGetProcessDxgProcess(v92, v93);
        v95 = ProcessDxgProcess;
        if ( ProcessDxgProcess )
        {
          if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
          {
            ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
            v97 = ThreadProperty;
            if ( ThreadProperty )
            {
              ObfDereferenceObject(ThreadProperty);
              v95 = *v97;
            }
          }
        }
        if ( !(*(unsigned int (__fastcall **)(PSLIST_ENTRY))(*(_QWORD *)(v95 + 96) + 256LL))(v68) )
        {
          v15 = -1071775733;
          ExpInterlockedPushEntrySList(v65, v68 - 1);
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          v169 = WdLogNewEntry5_WdWarning(v167, v166, v168);
          *(_QWORD *)(v169 + 24) = DXGPROCESS::GetCurrent(v171, v170);
          WdLogEvent5_WdWarning(v169);
          goto LABEL_232;
        }
        v98 = 0LL;
        v99 = (__int64)v69->Next & 0xFFFFFFDF;
        *((_QWORD *)&v69[6].Next + 1) = v68;
        v100 = v99 | (32 * (a5 & 1 | 0x2000));
        HIDWORD(v69[7].Next) = -1;
        v69[6].Next = (struct _SLIST_ENTRY *)v188;
        LODWORD(v69->Next) = v100;
        v101 = *((_DWORD *)a10 + 492) < 0x2000;
        v186 = 0LL;
        v189 = 0LL;
        if ( v101 && !*((_BYTE *)a10 + 2252) )
        {
          v102 = a9;
        }
        else
        {
          v102 = a9;
          if ( a9 )
          {
            v105 = a7;
            if ( !a7 )
              goto LABEL_124;
            v103 = (void *)*((_QWORD *)a7 + 185);
            v104 = *((_DWORD *)a7 + 368);
          }
          else
          {
            v103 = 0LL;
            v104 = 0;
          }
          v15 = ReadPresentPrivateDriverData(a10, v104, v103, &v186);
          v178 = v15;
          if ( v15 < 0 )
          {
            v106 = WdLogNewEntry5_WdError(v100);
            *(_QWORD *)(v106 + 24) = v15;
            WdLogEvent5_WdError(v106);
            goto LABEL_218;
          }
          v107 = v186;
          if ( v186 )
          {
            HIDWORD(v69->Next) |= 1u;
            v98 = (volatile signed __int32 *)v107;
            v189 = v107;
            *((_QWORD *)&v69[1].Next + 1) = v107;
          }
        }
        v105 = a7;
LABEL_124:
        if ( !*((_BYTE *)a10 + 185) )
        {
          if ( !v102 )
            goto LABEL_128;
          v15 = DXGCONTEXT::PrepareIndependentFlipToken(
                  (void **)v102,
                  (struct _D3DKMT_PRESENTHISTORYTOKEN *)v68,
                  v105,
                  (struct VIDSCH_SUBMIT_DATA_BASE *)v69);
          v178 = v15;
        }
        if ( v15 < 0 )
        {
LABEL_219:
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          if ( ((__int64)v69->Next & 0x1000000) != 0 && a9 && v180 )
          {
            v164 = 0LL;
            do
            {
              if ( *((_BYTE *)&v69[21].Next + 12) )
                v165 = (struct VIDMM_ALLOC **)((char *)&v69[3 * v31 * *((_DWORD *)&v69[27].Next + 3) + 30].Next
                                             + *((_DWORD *)&v69[27].Next + 3)
                                             * ((8 * LODWORD(v69[28].Next) + 175) & 0xFFFFFFF8)
                                             + 8);
              else
                v165 = (struct VIDMM_ALLOC **)&v69[27];
              VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                *((VIDMM_EXPORT **)v181 + 66),
                *((struct VIDMM_GLOBAL **)v181 + 67),
                1 << *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a7 + 187) + v164) + 360LL),
                *v165);
              ++v31;
              v164 += 8LL;
            }
            while ( v31 < v180 );
            v98 = (volatile signed __int32 *)v189;
            v15 = v178;
          }
LABEL_228:
          if ( v98 && _InterlockedExchangeAdd(v98 + 1, 0xFFFFFFFF) == 1 )
          {
            ExFreePoolWithTag((PVOID)v98, 0);
            CVidSchSubmitData::~CVidSchSubmitData(v197);
            KOBJECTREF::~KOBJECTREF((PVOID *)&v199);
            goto LABEL_235;
          }
LABEL_232:
          CVidSchSubmitData::~CVidSchSubmitData(v197);
          KOBJECTREF::~KOBJECTREF((PVOID *)&v199);
          goto LABEL_235;
        }
LABEL_128:
        if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_158;
        Next = (int)v68->Next;
        LOBYTE(v109) = 0;
        Next_high = HIDWORD(v68->Next);
        v111 = 0;
        v112 = 0;
        v190 = (struct _SLIST_ENTRY)0LL;
        v187 = 0LL;
        v194 = 0uLL;
        LOBYTE(v185) = 0;
        Srca = 0;
        v193 = 0uLL;
        v179 = Next_high;
        v113 = Next - 1;
        switch ( Next )
        {
          case 1:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
            v114 = v68[1].Next;
            break;
          case 2:
            v114 = (struct _SLIST_ENTRY *)*((_QWORD *)&v68[1].Next + 1);
            break;
          default:
            v114 = 0LL;
            break;
        }
        switch ( Next )
        {
          case 1:
            v115 = (unsigned int *)(&v68[3].Next + 1);
            break;
          case 2:
            v115 = (unsigned int *)&v68[51].Next + 1;
            break;
          case 3:
            v115 = (unsigned int *)(&v68[2].Next + 1);
            break;
          default:
            v115 = 0LL;
            break;
        }
        v116 = (unsigned int)(Next - 1);
        if ( Next == 1 )
        {
          v117 = v68[2];
          v109 = v68[3].Next;
        }
        else
        {
          if ( Next != 2 )
          {
LABEL_146:
            if ( Next == 2 )
            {
              v185 = HIDWORD(v68[47].Next);
              v113 = *((unsigned int *)&v68[47].Next + 2);
              v194 = *(__int128 *)((char *)&v68[46] + 4);
              v111 = v194;
              Srca = v113;
              v193 = *(__int128 *)((char *)&v68[47] + 12);
              v112 = v193;
            }
            if ( v115 )
            {
              v118 = 16;
              if ( *v115 < 0x10 )
                v118 = *v115;
              if ( v118 )
              {
                v115 += 3;
                v119 = v118;
                v116 = 0LL;
                do
                {
                  v120 = *(v115 - 2);
                  v115 += 4;
                  *(_DWORD *)((char *)v212 + v116) = v120;
                  v116 += 4LL;
                  *(_DWORD *)&v210[v116 + 60] = *(v115 - 4);
                  *(_DWORD *)&v209[v116 + 60] = *(v115 - 5);
                  *(_DWORD *)&v209[v116 - 4] = *(v115 - 3);
                  --v119;
                }
                while ( v119 );
                LOBYTE(Next_high) = v179;
              }
              McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq(
                HIDWORD(v187),
                (__int64)v115,
                v116,
                (__int64)v181,
                (char)v68,
                Next,
                Next_high,
                (char)v114,
                (char)v190.Next,
                *((char *)&v190.Next + 8),
                SBYTE4(v190.Next),
                *((char *)&v190.Next + 12),
                (char)v109,
                SBYTE4(v187),
                v118,
                (__int64)v212,
                (__int64)v211,
                (__int64)v210,
                (__int64)v209,
                v111,
                SBYTE8(v194),
                SBYTE4(v194),
                SBYTE12(v194),
                v185,
                Srca,
                v112,
                SBYTE8(v193),
                SBYTE4(v193),
                SBYTE12(v193));
            }
            else
            {
              LODWORD(Timeout) = Next_high;
              *(_DWORD *)Alertable = Next;
              McTemplateK0ppqqx(v113, &EventSubmitPresentHistory, v116, v181, v68, *(_QWORD *)Alertable, Timeout, v114);
            }
            v102 = a9;
LABEL_158:
            if ( !v102 || !a7 )
              goto LABEL_162;
            *((_BYTE *)a7 + 1504) = (BYTE3(v69->Next) & 1) == 0;
            if ( (*((_DWORD *)v102 + 91) & 0x10) != 0 )
            {
              v121 = *((_DWORD *)a7 + 23);
              v180 = v121 + 1;
              DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v102, *((struct DXGCONTEXT ***)a7 + 187), v121);
LABEL_162:
              v122 = v181;
              goto LABEL_163;
            }
            v137 = *((_DWORD *)a7 + 23);
            if ( !v137 || !DXGADAPTER::IsDxgmms2(a10) )
              goto LABEL_162;
            v180 = v137 + 1;
            v195 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v102 + 2) + 1720LL));
            BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)v102 + 2));
            if ( !BroadcastPresentSyncObject )
            {
              v140 = WdLogNewEntry5_WdError(v139);
              *(_QWORD *)(v140 + 24) = -1073741801LL;
              *(_QWORD *)(v140 + 32) = 2569LL;
              WdLogEvent5_WdError(v140);
              v15 = -1073741801;
              v178 = -1073741801;
              goto LABEL_219;
            }
            v141 = *((unsigned int *)a7 + 23);
            v142 = 0LL;
            v205 = 0LL;
            v207 = 0;
            if ( (unsigned int)v141 <= 8 )
            {
              PoolWithTag = v206;
              v205 = v206;
            }
            else
            {
              v138 = 0xFFFFFFFFFFFFFFFFuLL % v141;
              if ( 0xFFFFFFFFFFFFFFFFuLL / v141 < 8 )
                goto LABEL_184;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v141, 0x4B677844u);
              v205 = PoolWithTag;
            }
            v207 = v141;
            if ( !PoolWithTag )
            {
LABEL_185:
              v15 = -1073741801;
              v178 = -1073741801;
              PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v205, v138);
              goto LABEL_219;
            }
            memset(PoolWithTag, 0, 8 * v141);
            v142 = v205;
LABEL_184:
            if ( v142 )
            {
              v144 = a7;
              if ( v180 > 1 )
              {
                v145 = 8LL;
                do
                {
                  RenderHwQueue = DXGCONTEXT::GetRenderHwQueue(*(DXGCONTEXT **)(v145 + *((_QWORD *)v144 + 187)));
                  *v147 = RenderHwQueue;
                  v145 = v148 + 8;
                }
                while ( v149 != 1 );
              }
              v122 = v181;
              v150 = *((unsigned int *)v144 + 23);
              v198 = 0;
              v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, signed __int64 *))(*(_QWORD *)(*((_QWORD *)v181 + 63) + 8LL) + 544LL))(
                      v150,
                      v142,
                      1LL,
                      &BroadcastPresentSyncObject,
                      0,
                      &v195);
              v178 = v15;
              if ( v15 < 0
                || (ImplicitHwQueue = DXGCONTEXT::GetImplicitHwQueue(v102),
                    v15 = (*(__int64 (__fastcall **)(struct _VIDSCH_CONTEXT *, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(v153 + 8) + 536LL))(
                            ImplicitHwQueue,
                            BroadcastPresentSyncObject,
                            v195),
                    v178 = v15,
                    v15 < 0) )
              {
                PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v205, v151);
                goto LABEL_218;
              }
              PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v205, v151);
LABEL_163:
              v123 = 0LL;
              Global = DXGGLOBAL::GetGlobal(v100);
              v191 = Global;
              v192 = 0;
              if ( !Global )
              {
                v126 = WdLogNewEntry5_WdAssertion(v125);
                *(_QWORD *)(v126 + 24) = 1946LL;
                WdLogEvent5_WdAssertion(v126);
                Global = v191;
              }
              if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 42)) )
              {
                v129 = WdLogNewEntry5_WdAssertion(v128);
                *(_QWORD *)(v129 + 24) = 1951LL;
                WdLogEvent5_WdAssertion(v129);
              }
              if ( a11 )
              {
                DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v191);
                Current = DXGPROCESS::GetCurrent(v131, v130);
                v133 = (char *)Current + 200;
                DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
                v134 = (a11 >> 6) & 0xFFFFFF;
                if ( v134 < *((_DWORD *)Current + 60)
                  && (v135 = *((_QWORD *)Current + 28),
                      v136 = *(_DWORD *)(v135 + 16LL * v134 + 8),
                      ((a11 >> 25) & 0x60) == (v136 & 0x60))
                  && (v136 & 0x2000) == 0
                  && (v136 & 0x1F) != 0
                  && (*(_BYTE *)(v135 + 16LL * v134 + 8) & 0x1F) == 0xB )
                {
                  v123 = *(_QWORD *)(v135 + 16LL * v134);
                }
                else
                {
                  v123 = 0LL;
                }
                ExReleasePushLockSharedEx(v133, 0LL);
                KeLeaveCriticalRegion();
                if ( !v123 )
                {
                  v154 = WdLogNewEntry5_WdError(v128);
                  v15 = -1073741811;
                  v178 = -1073741811;
                  *(_QWORD *)(v154 + 24) = a11;
                  *(_QWORD *)(v154 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v154);
                  if ( v192 )
                    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v191);
                  goto LABEL_219;
                }
                v102 = a9;
              }
              if ( *((_BYTE *)a10 + 185) )
              {
                v160 = *((_QWORD *)&v69[1].Next + 1);
                if ( v160 )
                  _InterlockedIncrement((volatile signed __int32 *)(v160 + 4));
                if ( v123 )
                  v161 = *(_QWORD *)(v123 + 32);
                else
                  v161 = 0LL;
                v162 = DXGPROCESS::GetCurrent(v128, v127);
                v15 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
                        (char *)a10 + 3888,
                        v162,
                        v102,
                        v69->Next,
                        v188,
                        v68,
                        *((_QWORD *)&v69[1].Next + 1),
                        v161);
                v178 = v15;
                if ( v15 < 0 )
                {
                  v163 = (CRefCountedBuffer *)*((_QWORD *)&v69[1].Next + 1);
                  if ( v163 )
                    CRefCountedBuffer::RefCountedBufferRelease(v163);
                }
              }
              else if ( v102 )
              {
                if ( *((struct _KTHREAD **)v102 + 52) != KeGetCurrentThread() )
                {
                  v155 = WdLogNewEntry5_WdAssertion(v128);
                  *(_QWORD *)(v155 + 24) = 2640LL;
                  WdLogEvent5_WdAssertion(v155);
                }
                if ( (*((_DWORD *)v102 + 91) & 0x10) != 0 )
                  v156 = *((_QWORD *)v102 + 32);
                else
                  v156 = *((_QWORD *)v102 + 29);
                v15 = (*(__int64 (__fastcall **)(__int64, PSLIST_ENTRY))(*(_QWORD *)(*((_QWORD *)v122 + 63) + 8LL)
                                                                       + 344LL))(
                        v156,
                        v69);
                v178 = v15;
              }
              else
              {
                DXGAUTOMUTEX::DXGAUTOMUTEX(
                  (DXGAUTOMUTEX *)v200,
                  (struct DXGFASTMUTEX *const)(*(_QWORD *)(v123 + 32) + 32LL));
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v200);
                VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(*(DXGSYNCOBJECT **)(v123 + 32), v122);
                v15 = (*(__int64 (__fastcall **)(PSLIST_ENTRY, __int64, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v158 + 8) + 904LL))(
                        v69,
                        v159,
                        VidSchSyncObject);
                v178 = v15;
                if ( v200[8] )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v200);
              }
              if ( v192 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v191);
LABEL_218:
              if ( v15 >= 0 )
                goto LABEL_228;
              goto LABEL_219;
            }
            goto LABEL_185;
          }
          v117 = *(struct _SLIST_ENTRY *)((char *)&v68[6] + 4);
          v109 = *(struct _SLIST_ENTRY **)((char *)&v68[7].Next + 4);
        }
        v187 = v109;
        v190 = v117;
        goto LABEL_146;
      case D3DKMT_PM_REDIRECTED_VISTABLT:
      case D3DKMT_PM_SCREENCAPTUREFENCE:
      case D3DKMT_PM_REDIRECTED_COMPOSITION:
      case D3DKMT_PM_SURFACECOMPLETE:
        v86 = 31;
        goto LABEL_106;
      default:
        v89 = WdLogNewEntry5_WdAssertion(v67);
        *(_QWORD *)(v89 + 24) = 93LL;
        WdLogEvent5_WdAssertion(v89);
        v80 = a1;
        v86 = 7;
        goto LABEL_106;
    }
  }
LABEL_3:
  v14 = WdLogNewEntry5_WdError(a11);
  v15 = -1073741811;
  *(_QWORD *)(v14 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v14);
  return (unsigned int)v15;
}
