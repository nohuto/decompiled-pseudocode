/*
 * XREFs of ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BDE10
 * Callers:
 *     DxgkPresent @ 0x1C008FA90 (DxgkPresent.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00949F0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00B1B40 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00BC4E4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00BCAF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004AD0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     Template_ppqqx @ 0x1C0014730 (Template_ppqqx.c)
 *     Template_ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq @ 0x1C0014838 (Template_ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00201C8 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1KOBJECTREF@@QEAA@XZ @ 0x1C0020EE8 (--1KOBJECTREF@@QEAA@XZ.c)
 *     ?VmBusSendSubmitPresentHistoryToken@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@@Z @ 0x1C0032180 (-VmBusSendSubmitPresentHistoryToken@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SU.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0038E6C (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C00929C0 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C00B1990 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@.c)
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BA040 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C0187B64 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentHistoryToken(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct CWin32kLocks *a5,
        char a6,
        union _LARGE_INTEGER *a7,
        struct DXGK_PRESENT_PARAMS *a8,
        struct VIDSCH_SUBMIT_DATA_BASE *a9)
{
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  char *v28; // rdi
  _QWORD *v29; // rax
  struct _KTHREAD **v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  NTSTATUS v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rbx
  unsigned int v43; // ebx
  __int64 v44; // rbx
  _QWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r15
  PSLIST_ENTRY v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // r12
  PSLIST_ENTRY v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rdx
  int v60; // r8d
  unsigned int v61; // eax
  __int64 v62; // rax
  int v63; // r8d
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v67; // rdx
  unsigned __int64 v68; // r8
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  __int64 v70; // rax
  unsigned int v71; // ebx
  __int64 v72; // rax
  int v73; // eax
  UINT NumRects; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // r9
  volatile signed __int32 *v79; // rbx
  unsigned int v80; // eax
  struct DXGK_PRESENT_PARAMS *v81; // rdx
  __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rax
  struct CRefCountedBuffer *v86; // rax
  int v87; // edi
  int v88; // r10d
  __int64 v89; // rax
  __int64 v90; // r15
  __int64 v91; // rcx
  __int64 v92; // r9
  unsigned int *v93; // rdx
  __int64 v94; // r8
  __int128 v95; // xmm0
  unsigned int v96; // r11d
  __int64 v97; // r10
  int v98; // ecx
  signed __int64 v99; // rax
  DXGDEVICE *v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  unsigned __int64 v104; // rdi
  _QWORD *v105; // r10
  _BYTE *PoolWithTag; // r10
  __int64 v107; // rdx
  __int64 v108; // r9
  _QWORD *v109; // r8
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdi
  DXGPROCESS *Current; // rax
  CRefCountedBuffer *v115; // rcx
  __int64 v116; // rdi
  struct VIDMM_ALLOC **v117; // r9
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rax
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-148h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-140h]
  unsigned int v129; // [rsp+F0h] [rbp-80h]
  PRKSEMAPHORE Semaphore; // [rsp+F8h] [rbp-78h]
  int v131; // [rsp+100h] [rbp-70h]
  int Srca; // [rsp+108h] [rbp-68h]
  char v134; // [rsp+118h] [rbp-58h]
  union _SLIST_HEADER *v135; // [rsp+120h] [rbp-50h]
  unsigned int v136; // [rsp+12Ch] [rbp-44h]
  struct CRefCountedBuffer *v137; // [rsp+130h] [rbp-40h]
  __int128 v138; // [rsp+138h] [rbp-38h]
  __int128 v139; // [rsp+148h] [rbp-28h]
  __int128 v140; // [rsp+158h] [rbp-18h]
  struct CRefCountedBuffer *v141; // [rsp+168h] [rbp-8h] BYREF
  __int64 v142; // [rsp+170h] [rbp+0h]
  signed __int64 v143; // [rsp+178h] [rbp+8h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+180h] [rbp+10h] BYREF
  struct _SLIST_ENTRY *v145[2]; // [rsp+188h] [rbp+18h] BYREF
  int v146; // [rsp+198h] [rbp+28h]
  PRKSEMAPHORE v147; // [rsp+1A0h] [rbp+30h] BYREF
  PVOID Object[2]; // [rsp+1A8h] [rbp+38h] BYREF
  char v149[8]; // [rsp+1B8h] [rbp+48h] BYREF
  __int64 v150; // [rsp+1C0h] [rbp+50h]
  int v151; // [rsp+1C8h] [rbp+58h]
  _BYTE *v152; // [rsp+1D0h] [rbp+60h] BYREF
  _BYTE v153[64]; // [rsp+1D8h] [rbp+68h] BYREF
  int v154; // [rsp+218h] [rbp+A8h]
  _BYTE v156[64]; // [rsp+220h] [rbp+B0h] BYREF
  _BYTE v157[64]; // [rsp+260h] [rbp+F0h] BYREF
  char v158[64]; // [rsp+2A0h] [rbp+130h] BYREF
  _DWORD v159[16]; // [rsp+2E0h] [rbp+170h] BYREF

  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v142 = v12;
  v13 = *(_QWORD *)(v12 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 144)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 1884LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = v12 + 624;
  v150 = v12 + 624;
  if ( v12 != -624 && *(struct _KTHREAD **)(v12 + 632) == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 624, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v19 = *(_DWORD *)(v12 + 640);
      if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v17, &EventBlockThread, v18, v19);
    }
    ExAcquirePushLockSharedEx(v12 + 624, 0LL);
  }
  v151 = 1;
  CurrentProcess = PsGetCurrentProcess(v17);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *(_DWORD *)(v12 + 648)
    || (v22 = 8LL * ProcessSessionId, !*(_QWORD *)(v22 + *(_QWORD *)(v12 + 656)))
    || (_mm_lfence(), v23 = *(_QWORD *)(v22 + *(_QWORD *)(v12 + 656)), (v135 = (union _SLIST_HEADER *)v23) == 0LL) )
  {
    v125 = WdLogNewEntry5_WdEvent(v22);
    *(_QWORD *)(v125 + 24) = this;
    WdLogEvent5_WdEvent(v125);
    v43 = -1073741811;
    goto LABEL_188;
  }
  Semaphore = *(PRKSEMAPHORE *)(v23 + 64);
  v147 = Semaphore;
  ObfReferenceObject(Semaphore);
  v24 = 0;
  v151 = 0;
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)a3 + 80) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 40));
  v28 = (char *)a3 + 8;
  if ( !*((_BYTE *)a3 + 32) )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v27);
    v29[3] = 275LL;
    v29[4] = 4LL;
    v29[5] = v28;
    v29[6] = 0LL;
    v29[7] = 0LL;
    WdLogEvent5_WdCriticalError(v29);
  }
  v30 = (struct _KTHREAD **)*((_QWORD *)a3 + 3);
  *((_BYTE *)a3 + 32) = 0;
  if ( KeGetCurrentThread() != v30[20] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v30);
  if ( *((_BYTE *)a4 + 16) )
  {
    v31 = *((_QWORD *)a4 + 1) + 120LL;
    *((_BYTE *)a4 + 16) = 0;
    ExReleasePushLockSharedEx(v31, 0LL);
    KeLeaveCriticalRegion();
    v32 = *((_QWORD *)a4 + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v32 + 16), (struct DXGADAPTER *)v32);
  }
  if ( a5 )
  {
    if ( *((_QWORD *)a5 + 2) )
    {
      (*(void (**)(void))(*((_QWORD *)a5 + 3) + 24LL))();
      *((_QWORD *)a5 + 2) = 0LL;
    }
    if ( *(_QWORD *)a5 )
    {
      v33 = *((_QWORD *)a5 + 5);
      if ( v33 )
      {
        if ( *((_DWORD *)a5 + 13) )
          (*(void (__fastcall **)(__int64, bool))(*((_QWORD *)a5 + 4) + 288LL))(v33, *((_DWORD *)a5 + 12) == 0);
        (*(void (**)(void))(*((_QWORD *)a5 + 4) + 272LL))();
        *((_QWORD *)a5 + 5) = 0LL;
        *((_QWORD *)a5 + 6) = 0LL;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a5 + 3) + 296LL))(*(_QWORD *)a5, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a5 + 3) + 64LL))(*(_QWORD *)a5, *((_QWORD *)a5 + 1));
      *(_QWORD *)a5 = 0LL;
    }
  }
  Object[0] = (PVOID)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2256LL);
  Object[1] = Semaphore;
  v34 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, a7, 0LL);
  if ( !v34 )
  {
    v38 = WdLogNewEntry5_WdEvent(v36);
    *(_QWORD *)(v38 + 24) = this;
    goto LABEL_42;
  }
  if ( v34 != 258 )
  {
    if ( !*((_BYTE *)a4 + 16) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a4 + 1) + 24LL));
      v44 = *((_QWORD *)a4 + 1);
      *(_QWORD *)a4 = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v44 + 120, 0LL);
      *((_BYTE *)a4 + 16) = 1;
    }
    if ( *((_BYTE *)a3 + 32) )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35, v37);
      v45[3] = 275LL;
      v45[4] = 4LL;
      v45[5] = v28;
      v45[6] = 0LL;
      v45[7] = 0LL;
      WdLogEvent5_WdCriticalError(v45);
    }
    v46 = *((_QWORD *)a3 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v46 + 160) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v46 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v47, &EventBlockThread, v48, 72);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a3 + 3) + 48LL), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a3 + 3));
    }
    *((_BYTE *)a3 + 32) = 1;
    if ( *(_DWORD *)(*((_QWORD *)a3 + 9) + 408LL) != 1 )
      goto LABEL_59;
    if ( *((_BYTE *)a3 + 80) )
    {
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a3 + 40));
      if ( *(_DWORD *)(*((_QWORD *)a3 + 7) + 176LL) != 1 )
      {
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 40));
LABEL_59:
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 8));
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v50 = WdLogNewEntry5_WdEvent(v49);
        v43 = -1073741130;
        *(_QWORD *)(v50 + 24) = -1073741130LL;
        *(_QWORD *)(v50 + 32) = this;
        WdLogEvent5_WdEvent(v50);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
        goto LABEL_188;
      }
    }
    LODWORD(v51) = 0;
    v52 = ExpInterlockedPopEntrySList(v135 + 3);
    if ( !v52
      && (!DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(v135)
       || (v52 = ExpInterlockedPopEntrySList(v135 + 3)) == 0LL)
      || (v55 = (__int64)&v52[1], v52 == (PSLIST_ENTRY)-16LL) )
    {
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v124 = WdLogNewEntry5_WdLowResource(v123);
      *(_QWORD *)(v124 + 24) = -1073741801LL;
      *(_QWORD *)(v124 + 32) = this;
      WdLogEvent5_WdLowResource(v124);
      v43 = -1073741801;
      KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
      goto LABEL_188;
    }
    v56 = 0LL;
    v57 = *((_QWORD *)this + 2);
    v145[0] = 0LL;
    v58 = *(_QWORD *)(v57 + 16);
    v145[1] = (struct _SLIST_ENTRY *)v58;
    if ( !a9 )
    {
      ++*(_DWORD *)(v58 + 1028);
      v56 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v58 + 1008));
      if ( !v56 )
      {
        ++*(_DWORD *)(v58 + 1032);
        v56 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v58 + 1056))(
                              *(unsigned int *)(v58 + 1044),
                              *(unsigned int *)(v58 + 1052),
                              *(unsigned int *)(v58 + 1048),
                              v58 + 1008);
      }
      v145[0] = v56;
      if ( v56 )
      {
        v59 = *(_QWORD *)(v58 + 16);
        v60 = *(int *)(v59 + 1944) < 0x2000 ? 1 : *(_DWORD *)(v59 + 248);
        v61 = *(int *)(v59 + 1944) >= 0x2000 || *(_BYTE *)(v59 + 2228)
            ? *(_DWORD *)(v59 + 2152) * (48 * v60 + ((8 * v60 + 167) & 0xFFFFFFF8)) + 8 * (v60 + 56)
            : 936;
        memset(v56, 0, v61);
        v62 = *(_QWORD *)(v58 + 16);
        v53 = *(unsigned int *)(v62 + 1944);
        v63 = (int)v53 < 0x2000 ? 1 : *(_DWORD *)(v62 + 248);
        LOBYTE(v53) = (int)v53 >= 0x2000 || *(_BYTE *)(v62 + 2228);
        v54 = *(unsigned int *)(v62 + 2152);
        *((_BYTE *)&v56[21].Next + 12) = v53;
        if ( (_BYTE)v53 )
        {
          HIDWORD(v56[27].Next) = v54;
          *((_DWORD *)&v56[27].Next + 2) = v63;
          v53 = (unsigned int)v54 * (48 * v63 + ((8 * v63 + 167) & 0xFFFFFFF8)) + 16;
          *((_DWORD *)&v56[27].Next + 3) = v53;
          v64 = v54 * (48 * v63 + ((8 * v63 + 167) & 0xFFFFFFF8)) + 448;
          LODWORD(v56[26].Next) = v64;
          HIDWORD(v56[26].Next) = 8 * v63 + v64;
        }
      }
    }
    if ( a9 )
    {
      v56 = (PSLIST_ENTRY)a9;
    }
    else if ( !v56 )
    {
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v66 = WdLogNewEntry5_WdLowResource(v65);
      *(_QWORD *)(v66 + 24) = 1972LL;
      WdLogEvent5_WdLowResource(v66);
      CVidSchSubmitData::~CVidSchSubmitData(v145);
      v43 = -1073741801;
      KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
      goto LABEL_188;
    }
    v67 = a2;
    v68 = 0x1C0000000uLL;
    v129 = 1;
    switch ( a2->Model )
    {
      case D3DKMT_PM_REDIRECTED_GDI:
        FlipInterval = a2->Token.Flip.FlipInterval;
        if ( (unsigned int)FlipInterval > 0x10 )
        {
          v70 = WdLogNewEntry5_WdAssertion(v53, a2, 0x1C0000000uLL, v54);
          *(_QWORD *)(v70 + 24) = 52LL;
          goto LABEL_91;
        }
        v73 = 16 * FlipInterval + 60;
        goto LABEL_102;
      case D3DKMT_PM_REDIRECTED_FLIP:
        NumRects = a2->Token.Flip.DirtyRegions.NumRects;
        if ( NumRects > 0x10 )
        {
          v70 = WdLogNewEntry5_WdAssertion(v53, a2, 0x1C0000000uLL, v54);
          *(_QWORD *)(v70 + 24) = 62LL;
          goto LABEL_91;
        }
        v73 = 16 * NumRects + 824;
        goto LABEL_102;
      case D3DKMT_PM_REDIRECTED_BLT:
        VidPnSourceId = a2->Token.Flip.VidPnSourceId;
        if ( VidPnSourceId > 0x10 )
        {
          v70 = WdLogNewEntry5_WdAssertion(v53, a2, 0x1C0000000uLL, v54);
          *(_QWORD *)(v70 + 24) = 72LL;
LABEL_91:
          WdLogEvent5_WdAssertion(v70);
          v71 = 0;
LABEL_92:
          v72 = WdLogNewEntry5_WdWarning(v53, v67, v68, v54);
          *(_QWORD *)(v72 + 24) = v71;
          WdLogEvent5_WdWarning(v72);
          CVidSchSubmitData::~CVidSchSubmitData(v145);
          v43 = -1073741811;
          KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
          goto LABEL_188;
        }
        v73 = 16 * VidPnSourceId + 44;
LABEL_102:
        v71 = (v73 + 7) & 0xFFFFFFF8;
        if ( v71 - 1 > 0x437 )
          goto LABEL_92;
        memmove((void *)v55, v67, v71);
        if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 72LL)
                                                      + 256LL))(v55) )
        {
          LODWORD(v51) = -1071775733;
          ExpInterlockedPushEntrySList(v135 + 3, (PSLIST_ENTRY)(v55 - 16));
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          v122 = WdLogNewEntry5_WdWarning(v119, v118, v120, v121);
          *(_QWORD *)(v122 + 24) = -1071775733LL;
          *(_QWORD *)(v122 + 32) = this;
          WdLogEvent5_WdWarning(v122);
          goto LABEL_185;
        }
        v79 = 0LL;
        v80 = (__int64)v56->Next & 0xFFFFFFDF;
        v81 = a8;
        *((_QWORD *)&v56[6].Next + 1) = v55;
        v82 = v80 | (32 * (a6 & 1 | 0x2000));
        HIDWORD(v56[7].Next) = -1;
        v56[6].Next = (struct _SLIST_ENTRY *)v135;
        LODWORD(v56->Next) = v82;
        v141 = 0LL;
        v137 = 0LL;
        if ( !a8 )
          goto LABEL_111;
        v82 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
        if ( *(int *)(v82 + 1944) < 0x2000 && !*(_BYTE *)(v82 + 2228) )
          goto LABEL_111;
        v83 = ReadPresentPrivateDriverData((struct DXGADAPTER *)v82, (const struct _D3DKMT_PRESENT *)a8, &v141, v78);
        v51 = v83;
        if ( v83 < 0 )
        {
          v85 = WdLogNewEntry5_WdError(v82, v84);
          *(_QWORD *)(v85 + 24) = v51;
          WdLogEvent5_WdError(v85);
          goto LABEL_172;
        }
        v86 = v141;
        v81 = a8;
        if ( v141 )
        {
          HIDWORD(v56->Next) |= 1u;
          v79 = (volatile signed __int32 *)v86;
          v137 = v86;
          *((_QWORD *)&v56[1].Next + 1) = v86;
        }
LABEL_111:
        if ( !*((_BYTE *)this + 369) )
          LODWORD(v51) = DXGCONTEXT::PrepareIndependentFlipToken(
                           this,
                           (struct _D3DKMT_PRESENTHISTORYTOKEN *)v55,
                           v81,
                           (struct VIDSCH_SUBMIT_DATA_BASE *)v56);
        if ( (int)v51 < 0 )
          goto LABEL_173;
        if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_143;
        v87 = *(_DWORD *)v55;
        v88 = *(_DWORD *)(v55 + 4);
        LOBYTE(v89) = 0;
        LOBYTE(v90) = 0;
        v139 = 0uLL;
        v138 = 0uLL;
        v136 = 0;
        v140 = 0uLL;
        LOBYTE(Srca) = 0;
        LOBYTE(v131) = 0;
        v134 = v88;
        v91 = *(_DWORD *)v55 - 1;
        switch ( *(_DWORD *)v55 )
        {
          case 1:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
            v92 = *(_QWORD *)(v55 + 16);
            break;
          case 2:
            v92 = *(_QWORD *)(v55 + 24);
            break;
          default:
            v92 = 0LL;
            break;
        }
        switch ( v87 )
        {
          case 1:
            v93 = (unsigned int *)(v55 + 56);
            break;
          case 2:
            v93 = (unsigned int *)(v55 + 820);
            break;
          case 3:
            v93 = (unsigned int *)(v55 + 40);
            break;
          default:
            v93 = 0LL;
            break;
        }
        v94 = (unsigned int)(v87 - 1);
        if ( v87 == 1 )
        {
          v95 = *(_OWORD *)(v55 + 32);
          v89 = *(_QWORD *)(v55 + 48);
        }
        else
        {
          if ( v87 != 2 )
          {
LABEL_132:
            if ( v87 == 2 )
            {
              Srca = *(_DWORD *)(v55 + 756);
              v91 = *(unsigned int *)(v55 + 760);
              v140 = *(_OWORD *)(v55 + 740);
              v90 = *(_QWORD *)(v55 + 740);
              v131 = *(_DWORD *)(v55 + 760);
              v139 = *(_OWORD *)(v55 + 764);
            }
            if ( v93 )
            {
              v96 = 16;
              if ( *v93 < 0x10 )
                v96 = *v93;
              if ( v96 )
              {
                v93 += 3;
                v97 = v96;
                v94 = 0LL;
                do
                {
                  v98 = *(v93 - 2);
                  v93 += 4;
                  *(_DWORD *)((char *)v159 + v94) = v98;
                  v94 += 4LL;
                  *(_DWORD *)&v157[v94 + 60] = *(v93 - 4);
                  *(_DWORD *)&v156[v94 + 60] = *(v93 - 5);
                  *(_DWORD *)&v156[v94 - 4] = *(v93 - 3);
                  --v97;
                }
                while ( v97 );
                LOBYTE(v88) = v134;
              }
              Template_ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq(
                v136,
                (__int64)v93,
                v94,
                v142,
                v55,
                v87,
                v88,
                v92,
                v138,
                SBYTE8(v138),
                SBYTE4(v138),
                SBYTE12(v138),
                v89,
                v136,
                v96,
                (__int64)v159,
                (__int64)v158,
                (__int64)v157,
                (__int64)v156,
                v90,
                SBYTE8(v140),
                SBYTE4(v140),
                SBYTE12(v140),
                Srca,
                v131,
                v139,
                SBYTE8(v139),
                SBYTE4(v139),
                SBYTE12(v139));
            }
            else
            {
              LODWORD(Timeout) = *(_DWORD *)(v55 + 4);
              *(_DWORD *)Alertable = *(_DWORD *)v55;
              Template_ppqqx(v91, &EventSubmitPresentHistory, v94, v142, v55, *(_QWORD *)Alertable, Timeout, v92);
            }
LABEL_143:
            if ( !a8 )
              goto LABEL_163;
            v77 = *((unsigned int *)a8 + 23);
            *((_BYTE *)a8 + 1504) = (BYTE3(v56->Next) & 1) == 0;
            if ( !(_DWORD)v77
              || !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
            {
              goto LABEL_163;
            }
            v129 = v77 + 1;
            v99 = _InterlockedExchangeAdd64((volatile signed __int64 *)v81 + 231, 1uLL);
            v100 = (DXGDEVICE *)*((_QWORD *)this + 2);
            v143 = v99 + 1;
            BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(v100);
            if ( !BroadcastPresentSyncObject )
            {
              v103 = WdLogNewEntry5_WdError(v102, v101);
              *(_QWORD *)(v103 + 24) = -1073741801LL;
              *(_QWORD *)(v103 + 32) = 2065LL;
              WdLogEvent5_WdError(v103);
              LODWORD(v51) = -1073741801;
LABEL_173:
              KeReleaseSemaphore(Semaphore, 0, 1, 0);
              if ( ((__int64)v56->Next & 0x1000000) != 0 && v129 )
              {
                v116 = 0LL;
                do
                {
                  if ( *((_BYTE *)&v56[21].Next + 12) )
                    v117 = (struct VIDMM_ALLOC **)((char *)&v56[3 * v24 * HIDWORD(v56[27].Next) + 30]
                                                 + HIDWORD(v56[27].Next)
                                                 * ((8 * *((_DWORD *)&v56[27].Next + 2) + 167) & 0xFFFFFFF8));
                  else
                    v117 = (struct VIDMM_ALLOC **)(&v56[26].Next + 1);
                  VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
                    *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 592LL),
                    1 << *(_DWORD *)(*(_QWORD *)(v116 + *((_QWORD *)a8 + 187)) + 344LL),
                    *v117);
                  ++v24;
                  v116 += 8LL;
                }
                while ( v24 < v129 );
                v79 = (volatile signed __int32 *)v137;
              }
              goto LABEL_181;
            }
            v104 = *((unsigned int *)a8 + 23);
            v105 = 0LL;
            v152 = 0LL;
            v154 = 0;
            if ( (unsigned int)v104 <= 8 )
            {
              PoolWithTag = v153;
              v152 = v153;
            }
            else
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / v104 < 8 )
              {
LABEL_154:
                if ( !v105 )
                  goto LABEL_155;
                if ( v129 > 1 )
                {
                  v107 = 8LL;
                  v108 = v129 - 1;
                  v109 = v105;
                  do
                  {
                    ++v109;
                    v107 += 8LL;
                    *(v109 - 1) = *(_QWORD *)(*(_QWORD *)(v107 + *((_QWORD *)a8 + 187) - 8) + 232LL);
                    --v108;
                  }
                  while ( v108 );
                }
                v110 = *((_QWORD *)this + 2);
                v146 = 0;
                LODWORD(v51) = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, signed __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v110 + 16) + 408LL) + 8LL) + 544LL))(
                                 *((unsigned int *)a8 + 23),
                                 v105,
                                 1LL,
                                 &BroadcastPresentSyncObject,
                                 0,
                                 &v143);
                if ( (int)v51 < 0
                  || (LODWORD(v51) = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL) + 8LL) + 536LL))(
                                       *((_QWORD *)this + 29),
                                       BroadcastPresentSyncObject,
                                       v143),
                      (int)v51 < 0) )
                {
                  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v152);
LABEL_172:
                  if ( (int)v51 >= 0 )
                    goto LABEL_181;
                  goto LABEL_173;
                }
                PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v152);
LABEL_163:
                if ( *((_BYTE *)this + 369) )
                {
                  v112 = *((_QWORD *)&v56[1].Next + 1);
                  if ( v112 )
                    _InterlockedIncrement((volatile signed __int32 *)(v112 + 4));
                  v113 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
                  Current = DXGPROCESS::GetCurrent();
                  LODWORD(v51) = DXGADAPTER::VmBusSendSubmitPresentHistoryToken(
                                   v113,
                                   Current,
                                   (__int64)this,
                                   (__int64)v56->Next,
                                   (__int64)v135,
                                   v55,
                                   *((_QWORD *)&v56[1].Next + 1));
                  if ( (int)v51 >= 0 )
                  {
LABEL_181:
                    if ( v79 && _InterlockedExchangeAdd(v79 + 1, 0xFFFFFFFF) == 1 )
                    {
                      ExFreePoolWithTag((PVOID)v79, 0);
                      CVidSchSubmitData::~CVidSchSubmitData(v145);
                      v43 = v51;
                      KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
                      goto LABEL_188;
                    }
LABEL_185:
                    CVidSchSubmitData::~CVidSchSubmitData(v145);
                    v43 = v51;
                    KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
                    goto LABEL_188;
                  }
                  v115 = (CRefCountedBuffer *)*((_QWORD *)&v56[1].Next + 1);
                  if ( v115 )
                    CRefCountedBuffer::RefCountedBufferRelease(v115);
                }
                else
                {
                  if ( *((struct _KTHREAD **)this + 48) != KeGetCurrentThread() )
                  {
                    v111 = WdLogNewEntry5_WdAssertion(v82, v81, v77, v78);
                    *(_QWORD *)(v111 + 24) = 2111LL;
                    WdLogEvent5_WdAssertion(v111);
                  }
                  LODWORD(v51) = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL)
                                                                                             + 8LL)
                                                                                 + 344LL))(
                                   *((_QWORD *)this + 29),
                                   v56);
                }
                goto LABEL_172;
              }
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v104, 0x4B677844u);
              v152 = PoolWithTag;
            }
            v154 = v104;
            if ( !PoolWithTag )
            {
LABEL_155:
              LODWORD(v51) = -1073741801;
              PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v152);
              goto LABEL_173;
            }
            memset(PoolWithTag, 0, 8 * v104);
            v105 = v152;
            goto LABEL_154;
          }
          v95 = *(_OWORD *)(v55 + 100);
          v89 = *(_QWORD *)(v55 + 116);
        }
        v136 = HIDWORD(v89);
        v138 = v95;
        goto LABEL_132;
      case D3DKMT_PM_REDIRECTED_VISTABLT:
      case D3DKMT_PM_SCREENCAPTUREFENCE:
      case D3DKMT_PM_REDIRECTED_COMPOSITION:
      case D3DKMT_PM_SURFACECOMPLETE:
        v73 = 24;
        goto LABEL_102;
      default:
        v76 = WdLogNewEntry5_WdAssertion(v53, a2, 0x1C0000000uLL, v54);
        *(_QWORD *)(v76 + 24) = 92LL;
        WdLogEvent5_WdAssertion(v76);
        v67 = a2;
        v73 = 0;
        goto LABEL_102;
    }
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_q(v36, &EventPerformanceWarning, v37, 19);
  v39 = WdLogNewEntry5_WdEvent(v36);
  *(_QWORD *)(v39 + 24) = 258LL;
  WdLogEvent5_WdEvent(v39);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a4);
  v40 = COREDEVICEACCESS::AcquireShared(a3);
  v42 = v40;
  if ( v40 >= 0 )
  {
    v43 = 258;
    KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
    goto LABEL_188;
  }
  v38 = WdLogNewEntry5_WdEvent(v41);
  *(_QWORD *)(v38 + 24) = v42;
  *(_QWORD *)(v38 + 32) = this;
LABEL_42:
  WdLogEvent5_WdEvent(v38);
  v43 = -1073741130;
  KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
LABEL_188:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v149);
  return v43;
}
