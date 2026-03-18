/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01B2E2C
 * Callers:
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@I@Z @ 0x1C016EE00 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@I@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z @ 0x1C016FA54 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0170610 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0019B40 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0019BCC (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C0019E50 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0023DE4 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C002486C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00249B8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0024A9C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0033B94 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0033F48 (McTemplateK0ppxppttqddddddddq.c)
 *     McTemplateK0ptqDR2DR2DR2DR2 @ 0x1C00341B8 (McTemplateK0ptqDR2DR2DR2DR2.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CB880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E1B78 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100890 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C01086D0 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C01458DC (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C01458FC (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C01715F0 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C01B48A0 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGCONTEXT::PresentFromCdd(
        DXGCONTEXT *this,
        struct _D3DKMT_SUBMITPRESENTBLTTOHWQUEUE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        struct DXGCONTEXT **a6)
{
  unsigned int v6; // r12d
  DXGCONTEXT *v8; // rsi
  struct DXGGLOBAL *Global; // rax
  char *v10; // rbx
  PSLIST_ENTRY v11; // rdi
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64, __int64, __int64, char *); // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rdx
  D3DKMT_PRESENT *p_PrivatePresentData; // rax
  _OWORD *v21; // rcx
  __int128 v22; // xmm1
  __int64 v23; // rcx
  __int64 v24; // rax
  DXGADAPTER **v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  const RECT **v29; // r15
  unsigned int *v30; // r14
  unsigned int v31; // ebx
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // ecx
  struct _EX_RUNDOWN_REF *v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rbx
  unsigned int Next_high; // ebx
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // r8
  int v44; // ecx
  struct _EX_RUNDOWN_REF *v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  DXGPRESENT *v48; // rax
  __int64 v49; // rcx
  DXGPRESENT *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v55; // rdx
  __int64 v56; // rax
  int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // eax
  COREDEVICEACCESS *v62; // r12
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  struct DXGPRESENTMUTEX *v66; // r8
  __int64 v67; // rax
  unsigned __int8 v68; // r12
  __int64 v69; // r13
  int v70; // ebx
  DXGADAPTER **v71; // r13
  int updated; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rcx
  int CurrentOrientation; // eax
  UINT Value; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  const RECT *DdiSubRectList; // r14
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  const struct tagRECT *ContentRect; // rbx
  __int64 left; // rcx
  __int64 v91; // rax
  LONG top; // eax
  __int64 v93; // rax
  __int64 v94; // rax
  const struct tagRECT *v95; // rbx
  __int64 v96; // rcx
  __int64 v97; // rax
  UINT v98; // r12d
  int v99; // r13d
  int v100; // esi
  __int64 v101; // rbx
  LONG v102; // r8d
  LONG v103; // edx
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  LONG v107; // eax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  UINT i; // r14d
  const RECT *v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rax
  const RECT *v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // r8
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  struct _VIDMM_DMA_BUFFER *v124; // r12
  UINT v125; // ebx
  __int64 v126; // rdx
  unsigned int v127; // r10d
  unsigned int v128; // r9d
  __int64 v129; // rcx
  struct COREDEVICEACCESS *v130; // r14
  _QWORD *v131; // rax
  __int64 v132; // rcx
  struct DXGGLOBAL *v133; // rax
  union _SLIST_HEADER *v134; // rsi
  struct DXGCONTEXT **v135; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v136; // [rsp+28h] [rbp-F8h]
  struct _VIDMM_DMA_BUFFER *v137; // [rsp+A0h] [rbp-80h] BYREF
  unsigned int v138; // [rsp+A8h] [rbp-78h]
  ADAPTER_DISPLAY *v139; // [rsp+B0h] [rbp-70h]
  struct VIDSCH_SUBMIT_DATA_BASE *v140[2]; // [rsp+B8h] [rbp-68h] BYREF
  struct _EX_RUNDOWN_REF *v141; // [rsp+C8h] [rbp-58h] BYREF
  union _LARGE_INTEGER v142; // [rsp+D0h] [rbp-50h] BYREF
  COREDEVICEACCESS *v143; // [rsp+D8h] [rbp-48h]
  DXGADAPTERSTOPRESETLOCKSHARED *v144; // [rsp+E0h] [rbp-40h]
  __int64 v145; // [rsp+E8h] [rbp-38h]
  DXGCONTEXT *v146; // [rsp+F0h] [rbp-30h]
  char v147[8]; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v148; // [rsp+100h] [rbp-20h]
  char v149; // [rsp+108h] [rbp-18h]
  _BYTE v150[16]; // [rsp+110h] [rbp-10h] BYREF
  struct _DXGKARG_PRESENT v151; // [rsp+120h] [rbp+0h] BYREF
  _BYTE v153[64]; // [rsp+1D0h] [rbp+B0h] BYREF
  _BYTE v154[64]; // [rsp+210h] [rbp+F0h] BYREF
  _BYTE v155[64]; // [rsp+250h] [rbp+130h] BYREF
  _BYTE v156[64]; // [rsp+290h] [rbp+170h] BYREF

  v6 = a3;
  v144 = a5;
  v8 = this;
  v142.QuadPart = (LONGLONG)a6;
  v143 = a4;
  v138 = a3;
  v146 = this;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v10 = (char *)Global + 768;
  ++*((_DWORD *)Global + 197);
  v11 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 48);
  if ( !v11 )
  {
    v12 = *((unsigned int *)v10 + 11);
    v13 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v10 + 6);
    v14 = *((unsigned int *)v10 + 10);
    v15 = *((unsigned int *)v10 + 9);
    ++*((_DWORD *)v10 + 6);
    v11 = (PSLIST_ENTRY)v13(v15, v12, v14, v10);
    if ( !v11 )
    {
      v17 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v17 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v17);
      return 3221225495LL;
    }
  }
  memset(v11, 0, 0x600uLL);
  v19 = 11LL;
  p_PrivatePresentData = &a2->PrivatePresentData;
  v21 = v11;
  do
  {
    *v21 = *(_OWORD *)&p_PrivatePresentData->hDevice;
    v21[1] = *(_OWORD *)&p_PrivatePresentData->VidPnSourceId;
    v21[2] = p_PrivatePresentData->DstRect;
    v21[3] = p_PrivatePresentData->SrcRect;
    v21[4] = *(_OWORD *)&p_PrivatePresentData->SubRectCnt;
    v21[5] = *(_OWORD *)&p_PrivatePresentData->PresentCount;
    v21[6] = *(_OWORD *)p_PrivatePresentData->BroadcastContext;
    v21 += 8;
    v22 = *(_OWORD *)&p_PrivatePresentData->BroadcastContext[4];
    p_PrivatePresentData = (D3DKMT_PRESENT *)((char *)p_PrivatePresentData + 128);
    *(v21 - 1) = v22;
    --v19;
  }
  while ( v19 );
  *v21 = *(_OWORD *)&p_PrivatePresentData->hDevice;
  v21[1] = *(_OWORD *)&p_PrivatePresentData->VidPnSourceId;
  v21[2] = p_PrivatePresentData->DstRect;
  v21[3] = p_PrivatePresentData->SrcRect;
  v21[4] = *(_OWORD *)&p_PrivatePresentData->SubRectCnt;
  *((_QWORD *)v21 + 10) = *(_QWORD *)&p_PrivatePresentData->PresentCount;
  *((_QWORD *)&v11[95].Next + 1) = a2->HwQueueProgressFenceId;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v150,
    a2->hHwQueue,
    *(struct _KTHREAD ***)(*((_QWORD *)v8 + 2) + 40LL),
    (struct DXGHWQUEUE **)&v11[95],
    1);
  v23 = *((_QWORD *)v8 + 2);
  v24 = *(_QWORD *)(v23 + 1688);
  v145 = *(_QWORD *)(*(_QWORD *)(v23 + 40) + 104LL);
  v25 = *(DXGADAPTER ***)(v24 + 2456);
  v139 = (ADAPTER_DISPLAY *)v25;
  if ( !v25 || !DXGADAPTER::IsCoreResourceSharedOwner(v25[2]) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v26 + 24) = 6055LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 16LL)) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v28 + 24) = 6056LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v29 = (const RECT **)(&v11[4].Next + 1);
  if ( !*((_QWORD *)&v11[4].Next + 1)
    || (v30 = (unsigned int *)&v11[4], !LODWORD(v11[4].Next))
    || (v27 = *((unsigned int *)&v11[5].Next + 2),
        (((unsigned __int8)v27 ^ (unsigned __int8)(*((_DWORD *)&v11[5].Next + 2) >> 1)) & 1) == 0)
    || (v27 & 0x63C) != 0 )
  {
    v131 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    LODWORD(v39) = -1073741811;
    v131[3] = -1073741811LL;
    v131[4] = v8;
    v131[5] = *v29;
    v131[6] = LODWORD(v11[4].Next);
    v131[7] = *((unsigned int *)&v11[5].Next + 2);
    WdLogEvent5_WdError(v131);
    goto LABEL_145;
  }
  memset(&v151, 0, sizeof(v151));
  v31 = *((_DWORD *)&v11[1].Next + 2);
  v32 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v32 + 208));
  v33 = (v31 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v33 < *(_DWORD *)(v32 + 248)
    && (v34 = *(_QWORD *)(v32 + 232),
        v35 = *(_DWORD *)(v34 + 16 * v33 + 8),
        ((v31 >> 25) & 0x60) == (*(_BYTE *)(v34 + 16 * v33 + 8) & 0x60))
    && (v35 & 0x2000) == 0
    && (v35 & 0x1F) == 5 )
  {
    v36 = *(struct _EX_RUNDOWN_REF **)(v34 + 16LL * (unsigned int)v33);
  }
  else
  {
    v36 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v141, v36);
  ExReleasePushLockSharedEx(v32 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v141 )
  {
    if ( (*(_DWORD *)(&v11[5].Next + 1) & 1) != 0 )
    {
      Next_high = HIDWORD(v11[1].Next);
      v41 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 40LL);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v41 + 208));
      v42 = (Next_high >> 6) & 0xFFFFFF;
      if ( (unsigned int)v42 < *(_DWORD *)(v41 + 248)
        && (v43 = *(_QWORD *)(v41 + 232),
            v44 = *(_DWORD *)(v43 + 16 * v42 + 8),
            ((Next_high >> 25) & 0x60) == (*(_BYTE *)(v43 + 16 * v42 + 8) & 0x60))
        && (v44 & 0x2000) == 0
        && (v44 & 0x1F) == 5 )
      {
        v45 = *(struct _EX_RUNDOWN_REF **)(v43 + 16LL * (unsigned int)v42);
      }
      else
      {
        v45 = 0LL;
      }
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v140, v45);
      ExReleasePushLockSharedEx(v41 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( !v140[0] )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdError(v46);
        LODWORD(v39) = -1073741811;
        v47[3] = -1073741811LL;
        v47[4] = v8;
        v47[5] = HIDWORD(v11[1].Next);
        WdLogEvent5_WdError(v47);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v140);
        goto LABEL_76;
      }
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v140);
    }
    if ( !*((_QWORD *)v8 + 19) )
    {
      v48 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x670uLL);
      v50 = v48 ? DXGPRESENT::DXGPRESENT(v48, 1) : 0LL;
      *((_QWORD *)v8 + 19) = v50;
      if ( !v50 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdLowResource(v49);
        v51[3] = -1073741801LL;
        v51[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 16LL);
        v51[5] = *(_QWORD *)(*((_QWORD *)v8 + 2) + 40LL);
        v51[6] = v8;
        WdLogEvent5_WdLowResource(v51);
        LODWORD(v39) = -1073741801;
        goto LABEL_76;
      }
    }
    v52 = *((_QWORD *)v8 + 2);
    v140[0] = 0LL;
    v140[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v52 + 16);
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v140);
    v55 = v140[0];
    if ( !v140[0] )
    {
      v56 = WdLogNewEntry5_WdLowResource(v53);
      *(_QWORD *)(v56 + 24) = 6120LL;
      WdLogEvent5_WdLowResource(v56);
      LODWORD(v39) = -1073741801;
LABEL_75:
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v140);
      goto LABEL_76;
    }
    v57 = *(_DWORD *)v140[0] | 0x10000;
    *(_DWORD *)v140[0] = v57;
    if ( (*(_DWORD *)(&v11[5].Next + 1) & 0x4000) == 0 )
    {
      v57 |= 1u;
      *(_DWORD *)v55 = v57;
    }
    *(_DWORD *)v55 = v57 | 0x100;
    LOBYTE(v54) = 1;
    v58 = *((_QWORD *)v8 + 2);
    v137 = 0LL;
    LODWORD(v39) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 16) + 544LL) + 8LL) + 488LL))(
                     *((_QWORD *)v8 + 28),
                     0LL,
                     v54,
                     &v137);
    if ( (int)v39 < 0 )
      goto LABEL_75;
    if ( !v137 )
    {
      v60 = WdLogNewEntry5_WdAssertion(v59);
      *(_QWORD *)(v60 + 24) = 6138LL;
      WdLogEvent5_WdAssertion(v60);
    }
    DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v147, *(struct _KTHREAD ***)(*((_QWORD *)v8 + 2) + 16LL));
    v61 = *((_DWORD *)&v11[5].Next + 2);
    if ( (v61 & 0x4000) == 0 )
    {
      v62 = v143;
      COREDEVICEACCESS::Release(v143);
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v144);
      DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v147);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v144);
      v63 = COREDEVICEACCESS::AcquireShared(v62);
      v39 = v63;
      if ( v63 < 0 )
      {
        v67 = WdLogNewEntry5_WdEvent(v65, v64);
        *(_QWORD *)(v67 + 24) = v39;
        *(_QWORD *)(v67 + 32) = v8;
        WdLogEvent5_WdEvent(v67);
        COREDEVICEACCESS::AcquireSharedUncheck(v62);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL)
                                                                                           + 544LL)
                                                                               + 8LL)
                                                                   + 496LL))(
          v137,
          0LL);
        goto LABEL_73;
      }
      v68 = 0;
      v69 = v145;
      if ( v145 )
      {
        v70 = *(_DWORD *)(*((_QWORD *)v8 + 19) + 8LL);
        if ( v70 != (*(unsigned int (**)(void))(v145 + 8))() )
        {
          *(_DWORD *)(*((_QWORD *)v8 + 19) + 8LL) = (*(__int64 (**)(void))(v69 + 8))();
          DXGDEVICE::FlushScheduler(*((_QWORD **)v8 + 2), 2u);
          v68 = 1;
        }
      }
      DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v8 + 2), v8, v66, v68);
      v61 = *((_DWORD *)&v11[5].Next + 2);
      v6 = v138;
    }
    if ( (v61 & 1) == 0 || HIDWORD(v11[1].Next) == *((_DWORD *)&v11[1].Next + 2) )
    {
      v71 = (DXGADAPTER **)v139;
    }
    else
    {
      v71 = (DXGADAPTER **)v139;
      if ( (*(_DWORD *)(v141[6].Count + 4) & 2) != 0 )
      {
        updated = DxgkCddUpdatePresentRects(
                    (DXGADAPTER **)v139,
                    v6,
                    (struct tagRECT **)&v11[4].Next + 1,
                    (unsigned int *)&v11[4]);
        v39 = updated;
        if ( updated < 0 )
        {
          v75 = (_QWORD *)WdLogNewEntry5_WdEvent(v74, v73);
          v75[3] = v39;
          v75[4] = *((_QWORD *)v8 + 2);
          v75[5] = v6;
LABEL_70:
          WdLogEvent5_WdEvent(v75);
          goto LABEL_71;
        }
        if ( !*v30 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdEvent(v74, v73);
          v76[3] = 0LL;
          v76[4] = *((_QWORD *)v8 + 2);
          v76[5] = *((unsigned int *)&v11[1].Next + 2);
          v76[6] = v6;
          WdLogEvent5_WdEvent(v76);
          (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL)
                                                                                             + 544LL)
                                                                                 + 8LL)
                                                                     + 496LL))(
            v137,
            0LL);
          LODWORD(v39) = 0;
LABEL_72:
          v137 = 0LL;
LABEL_73:
          if ( v149 )
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v148 + 560));
          goto LABEL_75;
        }
      }
    }
    LODWORD(v39) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v8 + 19), *v30);
    if ( (int)v39 < 0 )
    {
LABEL_71:
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v137,
        0LL);
      goto LABEL_72;
    }
    v151.DstRect = (RECT)v11[2];
    v151.SubRectCnt = *v30;
    v77 = *((unsigned int *)&v11[5].Next + 2);
    if ( (v77 & 0x4000) != 0 )
    {
      Value = v151.Flags.Value;
    }
    else
    {
      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v71, v6, 1);
      Value = (CurrentOrientation != 1 ? 0x80 : 0) | v151.Flags.Value & 0xFFFFFF7F;
      v151.Flags.Value = Value;
      v77 = *((unsigned int *)&v11[5].Next + 2);
    }
    if ( (v77 & 1) != 0 )
    {
      v151.Flags.Value = Value | 1;
      v151.SrcRect = (RECT)v11[3];
      if ( HIDWORD(v11[1].Next) == *((_DWORD *)&v11[1].Next + 2) )
      {
        if ( (*(_DWORD *)(&v11[5].Next + 1) & 0x4000) == 0
          && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v71, v6) )
        {
          v75 = (_QWORD *)WdLogNewEntry5_WdEvent(v81, v80);
          LODWORD(v39) = -1071774910;
          v75[3] = -1071774910LL;
          v75[4] = *((_QWORD *)v8 + 2);
          v75[5] = *((unsigned int *)&v11[1].Next + 2);
          v75[6] = v6;
          goto LABEL_70;
        }
        DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v8 + 19), 0);
        v83 = (unsigned int)(v151.DstRect.right - v151.DstRect.left);
        v151.pDstSubRects = DdiSubRectList;
        if ( (_DWORD)v83 != v151.SrcRect.right - v151.SrcRect.left )
        {
          v84 = WdLogNewEntry5_WdAssertion(v83);
          *(_QWORD *)(v84 + 24) = 6286LL;
          WdLogEvent5_WdAssertion(v84);
        }
        v85 = (unsigned int)(v151.SrcRect.bottom - v151.SrcRect.top);
        if ( v151.DstRect.bottom - v151.DstRect.top != (_DWORD)v85 )
        {
          v86 = WdLogNewEntry5_WdAssertion(v85);
          *(_QWORD *)(v86 + 24) = 6289LL;
          WdLogEvent5_WdAssertion(v86);
        }
        if ( v151.SrcRect.left >= v151.SrcRect.right )
        {
          v87 = WdLogNewEntry5_WdAssertion(v85);
          *(_QWORD *)(v87 + 24) = 6291LL;
          WdLogEvent5_WdAssertion(v87);
        }
        if ( v151.SrcRect.left < 0 )
        {
          v88 = WdLogNewEntry5_WdAssertion(v85);
          *(_QWORD *)(v88 + 24) = 6292LL;
          WdLogEvent5_WdAssertion(v88);
        }
        ContentRect = ADAPTER_DISPLAY::GetContentRect(v71, v6);
        left = (unsigned int)ADAPTER_DISPLAY::GetContentRect(v71, v6)->left;
        if ( v151.SrcRect.right > ContentRect->right - (int)left )
        {
          v91 = WdLogNewEntry5_WdAssertion(left);
          *(_QWORD *)(v91 + 24) = 6293LL;
          WdLogEvent5_WdAssertion(v91);
        }
        top = v151.DstRect.top;
        if ( v151.DstRect.top >= v151.DstRect.bottom )
        {
          v93 = WdLogNewEntry5_WdAssertion(left);
          *(_QWORD *)(v93 + 24) = 6295LL;
          WdLogEvent5_WdAssertion(v93);
          top = v151.DstRect.top;
        }
        if ( top < 0 )
        {
          v94 = WdLogNewEntry5_WdAssertion(left);
          *(_QWORD *)(v94 + 24) = 6296LL;
          WdLogEvent5_WdAssertion(v94);
        }
        v95 = ADAPTER_DISPLAY::GetContentRect(v71, v6);
        v96 = (unsigned int)ADAPTER_DISPLAY::GetContentRect(v71, v6)->top;
        if ( v151.SrcRect.bottom > v95->bottom - (int)v96 )
        {
          v97 = WdLogNewEntry5_WdAssertion(v96);
          *(_QWORD *)(v97 + 24) = 6297LL;
          WdLogEvent5_WdAssertion(v97);
        }
        v98 = 0;
        v99 = v151.DstRect.left - v151.SrcRect.left;
        if ( v151.SubRectCnt )
        {
          v100 = v151.DstRect.top - v151.SrcRect.top;
          do
          {
            v101 = v98;
            v102 = v99 + (*v29)[v98].left;
            DdiSubRectList[v101].left = v102;
            v103 = v99 + (*v29)[v98].right;
            DdiSubRectList[v101].right = v103;
            DdiSubRectList[v101].top = v100 + (*v29)[v98].top;
            DdiSubRectList[v101].bottom = v100 + (*v29)[v98].bottom;
            if ( v102 >= v103 )
            {
              v104 = WdLogNewEntry5_WdAssertion(v96);
              *(_QWORD *)(v104 + 24) = 6309LL;
              WdLogEvent5_WdAssertion(v104);
              v102 = DdiSubRectList[v98].left;
            }
            if ( v102 < v151.DstRect.left )
            {
              v105 = WdLogNewEntry5_WdAssertion(v96);
              *(_QWORD *)(v105 + 24) = 6310LL;
              WdLogEvent5_WdAssertion(v105);
            }
            if ( DdiSubRectList[v98].right > v151.DstRect.right )
            {
              v106 = WdLogNewEntry5_WdAssertion(v96);
              *(_QWORD *)(v106 + 24) = 6311LL;
              WdLogEvent5_WdAssertion(v106);
            }
            v107 = DdiSubRectList[v98].top;
            if ( v107 >= DdiSubRectList[v98].bottom )
            {
              v108 = WdLogNewEntry5_WdAssertion(v96);
              *(_QWORD *)(v108 + 24) = 6312LL;
              WdLogEvent5_WdAssertion(v108);
              v107 = DdiSubRectList[v98].top;
            }
            if ( v107 < v151.DstRect.top )
            {
              v109 = WdLogNewEntry5_WdAssertion(v96);
              *(_QWORD *)(v109 + 24) = 6313LL;
              WdLogEvent5_WdAssertion(v109);
            }
            if ( DdiSubRectList[v98].bottom > v151.DstRect.bottom )
            {
              v110 = WdLogNewEntry5_WdAssertion(v96);
              *(_QWORD *)(v110 + 24) = 6314LL;
              WdLogEvent5_WdAssertion(v110);
            }
            ++v98;
          }
          while ( v98 < v151.SubRectCnt );
          v8 = v146;
        }
      }
      else
      {
        v151.pDstSubRects = *v29;
      }
      for ( i = 0; i < v151.SubRectCnt; ++i )
      {
        v112 = *v29;
        if ( (*v29)[i].left >= (*v29)[i].right )
        {
          v113 = WdLogNewEntry5_WdAssertion(v112);
          *(_QWORD *)(v113 + 24) = 6325LL;
          WdLogEvent5_WdAssertion(v113);
          v112 = *v29;
        }
        if ( v112[i].top >= v112[i].bottom )
        {
          v114 = WdLogNewEntry5_WdAssertion(v112);
          *(_QWORD *)(v114 + 24) = 6326LL;
          WdLogEvent5_WdAssertion(v114);
        }
        if ( (*(_DWORD *)(&v11[5].Next + 1) & 0x4000) == 0 )
        {
          v115 = *v29;
          if ( (*v29)[i].left < v151.SrcRect.left )
          {
            v116 = WdLogNewEntry5_WdAssertion(v115);
            *(_QWORD *)(v116 + 24) = 6331LL;
            WdLogEvent5_WdAssertion(v116);
            v115 = *v29;
          }
          if ( v115[i].right > v151.SrcRect.right )
          {
            v117 = WdLogNewEntry5_WdAssertion(v115);
            *(_QWORD *)(v117 + 24) = 6332LL;
            WdLogEvent5_WdAssertion(v117);
            v115 = *v29;
          }
          if ( v115[i].top < v151.SrcRect.top )
          {
            v118 = WdLogNewEntry5_WdAssertion(v115);
            *(_QWORD *)(v118 + 24) = 6333LL;
            WdLogEvent5_WdAssertion(v118);
            v115 = *v29;
          }
          if ( v115[i].bottom > v151.SrcRect.bottom )
          {
            v119 = WdLogNewEntry5_WdAssertion(v115);
            *(_QWORD *)(v119 + 24) = 6334LL;
            WdLogEvent5_WdAssertion(v119);
          }
        }
      }
    }
    else
    {
      if ( (v77 & 2) == 0 )
      {
        v120 = WdLogNewEntry5_WdAssertion(v77);
        *(_QWORD *)(v120 + 24) = 6341LL;
        WdLogEvent5_WdAssertion(v120);
        Value = v151.Flags.Value;
      }
      v151.Flags.Value = Value | 2;
      v151.Color = *((_DWORD *)&v11[1].Next + 3);
      v151.pDstSubRects = *v29;
    }
    if ( !bTracingEnabled )
      goto LABEL_141;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 544LL)
                                                       + 8LL)
                                           + 336LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 552LL),
      *((unsigned int *)&v11[1].Next + 2));
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 544LL)
                                                       + 8LL)
                                           + 336LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 552LL),
      HIDWORD(v11[1].Next));
    pDstSubRects = v151.pDstSubRects;
    SubRectCnt = v151.SubRectCnt;
    v124 = v137;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      McTemplateK0ppxppttqddddddddq(
        HIDWORD(*(_QWORD *)&v151.DstRect.left),
        HIDWORD(*(_QWORD *)&v151.DstRect.right),
        HIDWORD(*(_QWORD *)&v151.SrcRect.left),
        0LL,
        v137);
    v125 = 0;
    if ( !SubRectCnt )
    {
LABEL_141:
      v130 = v143;
      LODWORD(v39) = DXGCONTEXT::SubmitPresent(
                       v8,
                       (struct _D3DKMT_PRESENT *)v11,
                       (const struct DXGK_PRESENT_PARAMS *)v11,
                       *((_DWORD *)&v11[5].Next + 3),
                       (struct DXGCONTEXT **)v142.QuadPart,
                       0LL,
                       HIDWORD(v11[1].Next),
                       *((_DWORD *)&v11[1].Next + 2),
                       &v151,
                       0LL,
                       v137,
                       v140[0],
                       D3DDDIFMT_A8B8G8R8,
                       (struct _D3DKMT_PRESENT *)v143);
      if ( (int)v39 >= 0 && *((_DWORD *)&v11[22].Next + 2) == 1 )
      {
        v142.QuadPart = -100000LL;
        LODWORD(v39) = SubmitPresentHistoryToken(
                         (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v11[22].Next + 1),
                         v130,
                         v144,
                         0LL,
                         0,
                         &v142,
                         0LL,
                         0LL,
                         v8,
                         0LL);
      }
      goto LABEL_73;
    }
    while ( 1 )
    {
      v126 = SubRectCnt - v125;
      if ( (unsigned int)v126 > 0x10 )
        break;
      v127 = SubRectCnt - v125;
      if ( (_DWORD)v126 )
        goto LABEL_136;
LABEL_138:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        LODWORD(v136) = v127;
        LODWORD(v135) = SubRectCnt - v125 <= 0x10;
        McTemplateK0ptqDR2DR2DR2DR2((__int64)v156, v126, v121, v124, v135, v136, v156, v155, v154, v153);
      }
      v125 += 16;
      if ( v125 >= SubRectCnt )
        goto LABEL_141;
    }
    v127 = 16;
LABEL_136:
    v121 = 0LL;
    v128 = 0;
    do
    {
      v129 = v128 + v125;
      ++v128;
      v129 *= 2LL;
      v121 += 4LL;
      *(_DWORD *)&v155[v121 + 60] = *(&pDstSubRects->left + 2 * v129);
      *(_DWORD *)&v154[v121 + 60] = *(&pDstSubRects->right + 2 * v129);
      *(_DWORD *)&v153[v121 + 60] = *(&pDstSubRects->top + 2 * v129);
      *(_DWORD *)&v153[v121 - 4] = *(&pDstSubRects->bottom + 2 * v129);
    }
    while ( v128 < v127 );
    goto LABEL_138;
  }
  v38 = (_QWORD *)WdLogNewEntry5_WdError(v37);
  LODWORD(v39) = -1073741811;
  v38[3] = -1073741811LL;
  v38[4] = v8;
  v38[5] = *v29;
  v38[6] = *v30;
  v38[7] = *((unsigned int *)&v11[1].Next + 2);
  WdLogEvent5_WdError(v38);
LABEL_76:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v141);
LABEL_145:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v150);
  v133 = DXGGLOBAL::GetGlobal(v132);
  v134 = (union _SLIST_HEADER *)((char *)v133 + 768);
  ++*((_DWORD *)v133 + 199);
  if ( ExQueryDepthSList((PSLIST_HEADER)v133 + 48) < *((_WORD *)v133 + 392) )
  {
    ExpInterlockedPushEntrySList(v134, v11);
  }
  else
  {
    ++LODWORD(v134[2].Alignment);
    ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v134[3].Region)(v11, v134);
  }
  return (unsigned int)v39;
}
