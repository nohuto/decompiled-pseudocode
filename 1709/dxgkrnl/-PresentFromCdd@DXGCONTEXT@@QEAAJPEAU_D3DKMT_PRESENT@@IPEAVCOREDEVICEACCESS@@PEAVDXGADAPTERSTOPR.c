/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00C1650
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0186EE0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00088FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0008AB0 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0008B08 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0008B34 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0008EE0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0008F30 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C000F5F4 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0029160 (McTemplateK0ppxppttqddddddddq.c)
 *     McTemplateK0ptqDR2DR2DR2DR2 @ 0x1C00293D0 (McTemplateK0ptqDR2DR2DR2DR2.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C009DF28 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C009E2EC (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00AC29C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C00BE8DC (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C00BEDDC (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C4D00 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C00F5C4C (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C016F028 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::PresentFromCdd(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        struct DXGCONTEXT **a6)
{
  DXGCONTEXT *v6; // rdi
  __int64 v8; // r12
  __int64 v9; // r8
  DXGADAPTER **v10; // rcx
  __int64 Value; // rcx
  const RECT **p_pSrcSubRects; // r14
  unsigned int *p_SubRectCnt; // r15
  D3DKMT_HANDLE hDestination; // ebx
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // edx
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rcx
  D3DKMT_HANDLE hSource; // ebx
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // edx
  struct _EX_RUNDOWN_REF *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v31; // rdx
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rbx
  COREDEVICEACCESS *v36; // r13
  int v37; // eax
  struct DXGPRESENTMUTEX *v38; // r8
  char v39; // r13
  int v40; // ebx
  DXGADAPTER **v41; // r13
  int updated; // eax
  bool v43; // zf
  RECT DstRect; // xmm0
  int CurrentOrientation; // eax
  UINT v46; // eax
  __int64 v47; // rcx
  RECT SrcRect; // xmm0
  D3DKMT_HANDLE v49; // eax
  UINT i; // r15d
  __int64 v51; // r8
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  struct _VIDMM_DMA_BUFFER *v54; // r12
  UINT v55; // ebx
  __int64 v56; // rdx
  unsigned int v57; // r10d
  unsigned int v58; // r9d
  __int64 v59; // rcx
  struct COREDEVICEACCESS *v60; // r14
  DXGPRESENT *v62; // rax
  __int64 v63; // rcx
  DXGPRESENT *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  const RECT *DdiSubRectList; // r15
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  const struct tagRECT *ContentRect; // rbx
  __int64 left; // rcx
  __int64 v84; // rax
  LONG top; // eax
  __int64 v86; // rax
  __int64 v87; // rax
  const struct tagRECT *v88; // rbx
  __int64 v89; // rcx
  __int64 v90; // rax
  UINT v91; // r12d
  int v92; // r13d
  int v93; // edi
  __int64 v94; // rbx
  LONG v95; // r8d
  LONG v96; // edx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  _QWORD *v111; // rax
  struct DXGALLOCATION *v112; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v113; // [rsp+28h] [rbp-F8h]
  struct _VIDMM_DMA_BUFFER *v114; // [rsp+A0h] [rbp-80h] BYREF
  ADAPTER_DISPLAY *v115; // [rsp+A8h] [rbp-78h]
  struct VIDSCH_SUBMIT_DATA_BASE *v116[2]; // [rsp+B0h] [rbp-70h] BYREF
  struct _EX_RUNDOWN_REF *v117; // [rsp+C0h] [rbp-60h] BYREF
  union _LARGE_INTEGER v118; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v119; // [rsp+D0h] [rbp-50h]
  COREDEVICEACCESS *v120; // [rsp+D8h] [rbp-48h]
  DXGADAPTERSTOPRESETLOCKSHARED *v121; // [rsp+E0h] [rbp-40h]
  DXGCONTEXT *v122; // [rsp+E8h] [rbp-38h]
  _BYTE v123[32]; // [rsp+F0h] [rbp-30h] BYREF
  struct _DXGKARG_PRESENT v124; // [rsp+110h] [rbp-10h] BYREF
  _BYTE v126[64]; // [rsp+1C0h] [rbp+A0h] BYREF
  _BYTE v127[64]; // [rsp+200h] [rbp+E0h] BYREF
  _BYTE v128[64]; // [rsp+240h] [rbp+120h] BYREF
  _BYTE v129[64]; // [rsp+280h] [rbp+160h] BYREF

  v6 = this;
  v121 = a5;
  v118.QuadPart = (LONGLONG)a6;
  v8 = a3;
  v9 = *((_QWORD *)this + 2);
  v122 = this;
  v120 = a4;
  v119 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 96LL);
  v10 = *(DXGADAPTER ***)(*(_QWORD *)(v9 + 1672) + 2304LL);
  v115 = (ADAPTER_DISPLAY *)v10;
  if ( !v10 || !DXGADAPTER::IsCoreResourceSharedOwner(v10[2]) )
  {
    v65 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v65 + 24) = 5997LL;
    WdLogEvent5_WdAssertion(v65);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL)) )
  {
    v66 = WdLogNewEntry5_WdAssertion(Value);
    *(_QWORD *)(v66 + 24) = 5998LL;
    WdLogEvent5_WdAssertion(v66);
  }
  p_pSrcSubRects = &a2->pSrcSubRects;
  if ( !a2->pSrcSubRects
    || (p_SubRectCnt = &a2->SubRectCnt, !a2->SubRectCnt)
    || (Value = a2->Flags.Value, (((unsigned __int8)Value ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 1) == 0)
    || (Value & 0x63C) != 0 )
  {
    v111 = (_QWORD *)WdLogNewEntry5_WdError(Value);
    LODWORD(v35) = -1073741811;
    v111[3] = -1073741811LL;
    v111[4] = v6;
    v111[5] = *p_pSrcSubRects;
    v111[6] = a2->SubRectCnt;
    v111[7] = a2->Flags.Value;
    WdLogEvent5_WdError(v111);
    return (unsigned int)v35;
  }
  memset(&v124, 0, sizeof(v124));
  hDestination = a2->hDestination;
  v15 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 200));
  v16 = (hDestination >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 < *(_DWORD *)(v15 + 240)
    && (v17 = *(_QWORD *)(v15 + 224),
        v18 = *(_DWORD *)(v17 + 16 * v16 + 8),
        ((hDestination >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60))
    && (v18 & 0x2000) == 0
    && (v18 & 0x1F) != 0
    && (*(_BYTE *)(v17 + 16LL * (unsigned int)v16 + 8) & 0x1F) == 5 )
  {
    v19 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * (unsigned int)v16);
  }
  else
  {
    v19 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v117, v19);
  ExReleasePushLockSharedEx(v15 + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( !v117 )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    LODWORD(v35) = -1073741811;
    v67[3] = -1073741811LL;
    v67[4] = v6;
    v67[5] = *p_pSrcSubRects;
    v67[6] = *p_SubRectCnt;
    v67[7] = a2->hDestination;
    WdLogEvent5_WdError(v67);
    goto LABEL_80;
  }
  if ( (a2->Flags.Value & 1) != 0 )
  {
    hSource = a2->hSource;
    v22 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v22 + 200));
    v23 = (hSource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v23 < *(_DWORD *)(v22 + 240)
      && (v24 = *(_QWORD *)(v22 + 224),
          v25 = *(_DWORD *)(v24 + 16 * v23 + 8),
          ((hSource >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60))
      && (v25 & 0x2000) == 0
      && (v25 & 0x1F) != 0
      && (*(_BYTE *)(v24 + 16LL * (unsigned int)v23 + 8) & 0x1F) == 5 )
    {
      v26 = *(struct _EX_RUNDOWN_REF **)(v24 + 16LL * (unsigned int)v23);
    }
    else
    {
      v26 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v116, v26);
    ExReleasePushLockSharedEx(v22 + 200, 0LL);
    KeLeaveCriticalRegion();
    if ( !v116[0] )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      LODWORD(v35) = -1073741811;
      v68[3] = -1073741811LL;
      v68[4] = v6;
      v68[5] = a2->hSource;
      WdLogEvent5_WdError(v68);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v116);
      goto LABEL_80;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v116);
  }
  if ( !*((_QWORD *)v6 + 19) )
  {
    v62 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x670uLL);
    v64 = v62 ? DXGPRESENT::DXGPRESENT(v62, 1) : 0LL;
    *((_QWORD *)v6 + 19) = v64;
    if ( !v64 )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdLowResource(v63);
      v69[3] = -1073741801LL;
      v69[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL);
      v69[5] = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
      v69[6] = v6;
      WdLogEvent5_WdLowResource(v69);
      LODWORD(v35) = -1073741801;
      goto LABEL_80;
    }
  }
  v28 = *((_QWORD *)v6 + 2);
  v116[0] = 0LL;
  v116[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v28 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v116);
  v31 = v116[0];
  if ( !v116[0] )
  {
    v70 = WdLogNewEntry5_WdLowResource(v29);
    *(_QWORD *)(v70 + 24) = 6062LL;
    WdLogEvent5_WdLowResource(v70);
    LODWORD(v35) = -1073741801;
    goto LABEL_79;
  }
  v32 = *(_DWORD *)v116[0] | 0x10000;
  *(_DWORD *)v116[0] = v32;
  if ( (a2->Flags.Value & 0x4000) == 0 )
    *(_DWORD *)v31 = v32 | 1;
  *(_DWORD *)v31 |= 0x100u;
  v33 = *((_QWORD *)v6 + 2);
  LOBYTE(v30) = 1;
  v114 = 0LL;
  LODWORD(v35) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 528LL) + 8LL)
                                                                                                 + 488LL))(
                   *((_QWORD *)v6 + 28),
                   0LL,
                   v30,
                   &v114);
  if ( (int)v35 < 0 )
    goto LABEL_79;
  if ( !v114 )
  {
    v71 = WdLogNewEntry5_WdAssertion(v34);
    *(_QWORD *)(v71 + 24) = 6080LL;
    WdLogEvent5_WdAssertion(v71);
  }
  DXGPRESENTMUTEX::DXGPRESENTMUTEX(
    (DXGPRESENTMUTEX *)v123,
    *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v6 + 2) + 16LL));
  if ( (a2->Flags.Value & 0x4000) == 0 )
  {
    v36 = v120;
    COREDEVICEACCESS::Release(v120);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v121);
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v123);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v121);
    v37 = COREDEVICEACCESS::AcquireShared(v36);
    v35 = v37;
    if ( v37 < 0 )
    {
      v72 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v72 + 24) = v35;
      *(_QWORD *)(v72 + 32) = v6;
      WdLogEvent5_WdEvent(v72);
      COREDEVICEACCESS::AcquireSharedUncheck(v36);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL)
                                                                                         + 528LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v114,
        0LL);
      goto LABEL_78;
    }
    v39 = 0;
    if ( v119 )
    {
      v40 = *(_DWORD *)(*((_QWORD *)v6 + 19) + 8LL);
      if ( v40 != (*(unsigned int (**)(void))(v119 + 8))() )
      {
        *(_DWORD *)(*((_QWORD *)v6 + 19) + 8LL) = (*(__int64 (**)(void))(v119 + 8))();
        DXGDEVICE::FlushScheduler(*((_QWORD **)v6 + 2), 2u);
        v39 = 1;
      }
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v6 + 2), v6, v38, v39);
  }
  if ( (a2->Flags.Value & 1) == 0 || a2->hSource == a2->hDestination )
  {
    v41 = (DXGADAPTER **)v115;
    goto LABEL_43;
  }
  v41 = (DXGADAPTER **)v115;
  if ( (*(_DWORD *)(v117[6].Count + 4) & 2) == 0 )
    goto LABEL_43;
  updated = DxgkCddUpdatePresentRects(v115, v8, &a2->pSrcSubRects, &a2->SubRectCnt);
  v35 = updated;
  if ( updated < 0 )
  {
    v73 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v73[3] = v35;
    v73[4] = *((_QWORD *)v6 + 2);
    v73[5] = v8;
    goto LABEL_101;
  }
  LODWORD(v35) = 0;
  if ( *p_SubRectCnt )
  {
LABEL_43:
    LODWORD(v35) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v6 + 19), *p_SubRectCnt);
    if ( (int)v35 < 0 )
    {
LABEL_102:
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL)
                                                                                         + 528LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v114,
        0LL);
      v114 = 0LL;
      goto LABEL_78;
    }
    v43 = (a2->Flags.Value & 0x4000) == 0;
    DstRect = a2->DstRect;
    v124.SubRectCnt = *p_SubRectCnt;
    v124.DstRect = DstRect;
    if ( v43 )
    {
      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v41, v8, 1);
      v46 = (CurrentOrientation != 1 ? 0x80 : 0) | v124.Flags.Value & 0xFFFFFF7F;
      v124.Flags.Value = v46;
    }
    else
    {
      v46 = v124.Flags.Value;
    }
    v47 = a2->Flags.Value;
    if ( (v47 & 1) == 0 )
    {
      if ( (v47 & 2) == 0 )
      {
        v109 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v109 + 24) = 6283LL;
        WdLogEvent5_WdAssertion(v109);
        v46 = v124.Flags.Value;
      }
      v124.Flags.Value = v46 | 2;
      v124.Color = a2->Color;
      v124.pDstSubRects = *p_pSrcSubRects;
      goto LABEL_64;
    }
    SrcRect = a2->SrcRect;
    v124.Flags.Value = v46 | 1;
    v49 = a2->hDestination;
    v124.SrcRect = SrcRect;
    if ( a2->hSource != v49 )
    {
      v124.pDstSubRects = *p_pSrcSubRects;
LABEL_49:
      for ( i = 0; i < v124.SubRectCnt; ++i )
      {
        if ( (*p_pSrcSubRects)[i].left >= (*p_pSrcSubRects)[i].right )
        {
          v103 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
          *(_QWORD *)(v103 + 24) = 6267LL;
          WdLogEvent5_WdAssertion(v103);
        }
        if ( (*p_pSrcSubRects)[i].top >= (*p_pSrcSubRects)[i].bottom )
        {
          v104 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
          *(_QWORD *)(v104 + 24) = 6268LL;
          WdLogEvent5_WdAssertion(v104);
        }
        if ( (a2->Flags.Value & 0x4000) == 0 )
        {
          if ( (*p_pSrcSubRects)[i].left < v124.SrcRect.left )
          {
            v105 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
            *(_QWORD *)(v105 + 24) = 6273LL;
            WdLogEvent5_WdAssertion(v105);
          }
          if ( (*p_pSrcSubRects)[i].right > v124.SrcRect.right )
          {
            v106 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
            *(_QWORD *)(v106 + 24) = 6274LL;
            WdLogEvent5_WdAssertion(v106);
          }
          if ( (*p_pSrcSubRects)[i].top < v124.SrcRect.top )
          {
            v107 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
            *(_QWORD *)(v107 + 24) = 6275LL;
            WdLogEvent5_WdAssertion(v107);
          }
          if ( (*p_pSrcSubRects)[i].bottom > v124.SrcRect.bottom )
          {
            v108 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
            *(_QWORD *)(v108 + 24) = 6276LL;
            WdLogEvent5_WdAssertion(v108);
          }
        }
      }
LABEL_64:
      if ( bTracingEnabled )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 528LL)
                                                           + 8LL)
                                               + 336LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 536LL),
          a2->hDestination);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 528LL)
                                                           + 8LL)
                                               + 336LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 536LL),
          a2->hSource);
        pDstSubRects = v124.pDstSubRects;
        SubRectCnt = v124.SubRectCnt;
        v54 = v114;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          McTemplateK0ppxppttqddddddddq(
            HIDWORD(*(_QWORD *)&v124.DstRect.left),
            HIDWORD(*(_QWORD *)&v124.DstRect.right),
            HIDWORD(*(_QWORD *)&v124.SrcRect.left),
            0LL,
            v114);
        v55 = 0;
        if ( SubRectCnt )
        {
          while ( 1 )
          {
            v56 = SubRectCnt - v55;
            if ( (unsigned int)v56 > 0x10 )
              break;
            v57 = SubRectCnt - v55;
            if ( (_DWORD)v56 )
              goto LABEL_70;
LABEL_72:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            {
              LODWORD(v113) = v57;
              LODWORD(v112) = SubRectCnt - v55 <= 0x10;
              McTemplateK0ptqDR2DR2DR2DR2((__int64)v129, v56, v51, v54, v112, v113, v129, v128, v127, v126);
            }
            v55 += 16;
            if ( v55 >= SubRectCnt )
              goto LABEL_75;
          }
          v57 = 16;
LABEL_70:
          v51 = 0LL;
          v58 = 0;
          do
          {
            v59 = v58 + v55;
            ++v58;
            v59 *= 2LL;
            v51 += 4LL;
            *(_DWORD *)&v128[v51 + 60] = *(&pDstSubRects->left + 2 * v59);
            *(_DWORD *)&v127[v51 + 60] = *(&pDstSubRects->right + 2 * v59);
            *(_DWORD *)&v126[v51 + 60] = *(&pDstSubRects->top + 2 * v59);
            *(_DWORD *)&v126[v51 - 4] = *(&pDstSubRects->bottom + 2 * v59);
          }
          while ( v58 < v57 );
          goto LABEL_72;
        }
      }
LABEL_75:
      v60 = v120;
      LODWORD(v35) = DXGCONTEXT::SubmitPresent(
                       v6,
                       a2,
                       a2->BroadcastContextCount,
                       (struct DXGCONTEXT **)v118.QuadPart,
                       0LL,
                       a2->hSource,
                       a2->hDestination,
                       &v124,
                       0LL,
                       v114,
                       v116[0],
                       D3DDDIFMT_A8B8G8R8,
                       v120);
      if ( (int)v35 >= 0 && a2->PresentHistoryToken.Model == D3DKMT_PM_REDIRECTED_GDI )
      {
        v110 = *((_QWORD *)v6 + 2);
        v118.QuadPart = -100000LL;
        LODWORD(v35) = SubmitPresentHistoryToken(
                         &a2->PresentHistoryToken,
                         v60,
                         v121,
                         0LL,
                         0,
                         &v118,
                         0LL,
                         0LL,
                         v6,
                         *(struct DXGADAPTER **)(*(_QWORD *)(v110 + 16) + 16LL),
                         0);
      }
      goto LABEL_78;
    }
    if ( (v47 & 0x4000) != 0 || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v41, v8) )
    {
      DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v6 + 19), 0);
      v76 = (unsigned int)(v124.DstRect.right - v124.DstRect.left);
      v124.pDstSubRects = DdiSubRectList;
      if ( (_DWORD)v76 != v124.SrcRect.right - v124.SrcRect.left )
      {
        v77 = WdLogNewEntry5_WdAssertion(v76);
        *(_QWORD *)(v77 + 24) = 6228LL;
        WdLogEvent5_WdAssertion(v77);
      }
      v78 = (unsigned int)(v124.SrcRect.bottom - v124.SrcRect.top);
      if ( v124.DstRect.bottom - v124.DstRect.top != (_DWORD)v78 )
      {
        v79 = WdLogNewEntry5_WdAssertion(v78);
        *(_QWORD *)(v79 + 24) = 6231LL;
        WdLogEvent5_WdAssertion(v79);
      }
      if ( v124.SrcRect.left >= v124.SrcRect.right )
      {
        v80 = WdLogNewEntry5_WdAssertion(v78);
        *(_QWORD *)(v80 + 24) = 6233LL;
        WdLogEvent5_WdAssertion(v80);
      }
      if ( v124.SrcRect.left < 0 )
      {
        v81 = WdLogNewEntry5_WdAssertion(v78);
        *(_QWORD *)(v81 + 24) = 6234LL;
        WdLogEvent5_WdAssertion(v81);
      }
      ContentRect = ADAPTER_DISPLAY::GetContentRect(v41, v8);
      left = (unsigned int)ADAPTER_DISPLAY::GetContentRect(v41, v8)->left;
      if ( v124.SrcRect.right > ContentRect->right - (int)left )
      {
        v84 = WdLogNewEntry5_WdAssertion(left);
        *(_QWORD *)(v84 + 24) = 6235LL;
        WdLogEvent5_WdAssertion(v84);
      }
      top = v124.DstRect.top;
      if ( v124.DstRect.top >= v124.DstRect.bottom )
      {
        v86 = WdLogNewEntry5_WdAssertion(left);
        *(_QWORD *)(v86 + 24) = 6237LL;
        WdLogEvent5_WdAssertion(v86);
        top = v124.DstRect.top;
      }
      if ( top < 0 )
      {
        v87 = WdLogNewEntry5_WdAssertion(left);
        *(_QWORD *)(v87 + 24) = 6238LL;
        WdLogEvent5_WdAssertion(v87);
      }
      v88 = ADAPTER_DISPLAY::GetContentRect(v41, v8);
      v89 = (unsigned int)ADAPTER_DISPLAY::GetContentRect(v41, v8)->top;
      if ( v124.SrcRect.bottom > v88->bottom - (int)v89 )
      {
        v90 = WdLogNewEntry5_WdAssertion(v89);
        *(_QWORD *)(v90 + 24) = 6239LL;
        WdLogEvent5_WdAssertion(v90);
      }
      v91 = 0;
      v92 = v124.DstRect.left - v124.SrcRect.left;
      if ( v124.SubRectCnt )
      {
        v93 = v124.DstRect.top - v124.SrcRect.top;
        do
        {
          v94 = v91;
          v95 = v92 + (*p_pSrcSubRects)[v91].left;
          DdiSubRectList[v94].left = v95;
          v96 = v92 + (*p_pSrcSubRects)[v91].right;
          DdiSubRectList[v94].right = v96;
          DdiSubRectList[v94].top = v93 + (*p_pSrcSubRects)[v91].top;
          DdiSubRectList[v94].bottom = v93 + (*p_pSrcSubRects)[v91].bottom;
          if ( v95 >= v96 )
          {
            v97 = WdLogNewEntry5_WdAssertion(v89);
            *(_QWORD *)(v97 + 24) = 6251LL;
            WdLogEvent5_WdAssertion(v97);
          }
          if ( DdiSubRectList[v91].left < v124.DstRect.left )
          {
            v98 = WdLogNewEntry5_WdAssertion(v89);
            *(_QWORD *)(v98 + 24) = 6252LL;
            WdLogEvent5_WdAssertion(v98);
          }
          if ( DdiSubRectList[v91].right > v124.DstRect.right )
          {
            v99 = WdLogNewEntry5_WdAssertion(v89);
            *(_QWORD *)(v99 + 24) = 6253LL;
            WdLogEvent5_WdAssertion(v99);
          }
          if ( DdiSubRectList[v91].top >= DdiSubRectList[v91].bottom )
          {
            v100 = WdLogNewEntry5_WdAssertion(v89);
            *(_QWORD *)(v100 + 24) = 6254LL;
            WdLogEvent5_WdAssertion(v100);
          }
          if ( DdiSubRectList[v91].top < v124.DstRect.top )
          {
            v101 = WdLogNewEntry5_WdAssertion(v89);
            *(_QWORD *)(v101 + 24) = 6255LL;
            WdLogEvent5_WdAssertion(v101);
          }
          if ( DdiSubRectList[v91].bottom > v124.DstRect.bottom )
          {
            v102 = WdLogNewEntry5_WdAssertion(v89);
            *(_QWORD *)(v102 + 24) = 6256LL;
            WdLogEvent5_WdAssertion(v102);
          }
          ++v91;
        }
        while ( v91 < v124.SubRectCnt );
        v6 = v122;
      }
      goto LABEL_49;
    }
    v73 = (_QWORD *)WdLogNewEntry5_WdEvent();
    LODWORD(v35) = -1071774910;
    v73[3] = -1071774910LL;
    v73[4] = *((_QWORD *)v6 + 2);
    v73[5] = a2->hDestination;
    v73[6] = v8;
LABEL_101:
    WdLogEvent5_WdEvent(v73);
    goto LABEL_102;
  }
  v74 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v74[3] = 0LL;
  v74[4] = *((_QWORD *)v6 + 2);
  v74[5] = a2->hDestination;
  v74[6] = v8;
  WdLogEvent5_WdEvent(v74);
  (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2)
                                                                                                 + 16LL)
                                                                                     + 528LL)
                                                                         + 8LL)
                                                             + 496LL))(
    v114,
    0LL);
  v114 = 0LL;
LABEL_78:
  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v123);
LABEL_79:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v116);
LABEL_80:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v117);
  return (unsigned int)v35;
}
