/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00BC4E4
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0182CC0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000153C (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0004A28 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0004A78 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0004A9C (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004AD0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0004B20 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B47C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0020820 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     Template_ppxppttqddddddddq @ 0x1C0038EF8 (Template_ppxppttqddddddddq.c)
 *     Template_ptqDR2DR2DR2DR2 @ 0x1C0039170 (Template_ptqDR2DR2DR2DR2.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C0091364 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C0091760 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C00A1234 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B2DA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BDE10 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C00BF62C (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00CA330 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6AF0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C016B3A8 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::PresentFromCdd(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        __int64 a3,
        struct COREDEVICEACCESS *a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        struct DXGCONTEXT **a6)
{
  DXGCONTEXT *v6; // rdi
  __int64 v8; // rcx
  __int64 v9; // r12
  DXGADAPTER **v10; // rcx
  __int64 v11; // rdx
  __int64 Value; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  const RECT **p_pSrcSubRects; // r14
  unsigned int *p_SubRectCnt; // r15
  D3DKMT_HANDLE hDestination; // ebx
  __int64 v18; // r13
  unsigned int v19; // ecx
  __int64 v20; // r8
  int v21; // edx
  struct DXGALLOCATION *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  D3DKMT_HANDLE hSource; // ebx
  __int64 v26; // r13
  unsigned int v27; // ecx
  __int64 v28; // r8
  int v29; // edx
  struct DXGALLOCATION *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v36; // rdx
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // r8
  __int64 v43; // r9
  DXGADAPTERSTOPRESETLOCKSHARED *v44; // r13
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // eax
  __int64 v49; // rcx
  struct DXGPRESENTMUTEX *v50; // r8
  unsigned __int8 v51; // r13
  int v52; // ebx
  DXGADAPTER **v53; // r13
  int updated; // eax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  bool v59; // zf
  RECT DstRect; // xmm0
  int CurrentOrientation; // eax
  UINT v62; // eax
  __int64 v63; // rcx
  RECT SrcRect; // xmm0
  D3DKMT_HANDLE v65; // eax
  UINT i; // r15d
  struct COREDEVICEACCESS *v67; // r14
  DXGPRESENT *v69; // rax
  __int64 v70; // rcx
  DXGPRESENT *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  const RECT *DdiSubRectList; // r15
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  const struct tagRECT *ContentRect; // rbx
  __int64 v94; // rdx
  __int64 left; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  LONG top; // eax
  __int64 v100; // rax
  __int64 v101; // rax
  const struct tagRECT *v102; // rbx
  __int64 v103; // rcx
  __int64 v104; // rax
  UINT v105; // r12d
  int v106; // r13d
  int v107; // edi
  __int64 v108; // rbx
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // r8
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  struct _VIDMM_DMA_BUFFER *v125; // r12
  UINT v126; // ebx
  unsigned int v127; // r9d
  __int64 v128; // rdx
  unsigned int v129; // r10d
  __int64 v130; // rcx
  _QWORD *v131; // rax
  struct DXGALLOCATION *v132; // [rsp+20h] [rbp-100h]
  __int64 v133; // [rsp+28h] [rbp-F8h]
  struct _VIDMM_DMA_BUFFER *v134; // [rsp+A0h] [rbp-80h] BYREF
  ADAPTER_DISPLAY *v135; // [rsp+A8h] [rbp-78h]
  struct VIDSCH_SUBMIT_DATA_BASE *v136[2]; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v137; // [rsp+C0h] [rbp-60h] BYREF
  union _LARGE_INTEGER v138; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v139; // [rsp+D0h] [rbp-50h]
  COREDEVICEACCESS *v140; // [rsp+D8h] [rbp-48h]
  DXGADAPTERSTOPRESETLOCKSHARED *v141; // [rsp+E0h] [rbp-40h]
  DXGCONTEXT *v142; // [rsp+E8h] [rbp-38h]
  _BYTE v143[32]; // [rsp+F0h] [rbp-30h] BYREF
  struct _DXGKARG_PRESENT v144; // [rsp+110h] [rbp-10h] BYREF
  _BYTE v146[64]; // [rsp+1C0h] [rbp+A0h] BYREF
  _BYTE v147[64]; // [rsp+200h] [rbp+E0h] BYREF
  _BYTE v148[64]; // [rsp+240h] [rbp+120h] BYREF
  _BYTE v149[64]; // [rsp+280h] [rbp+160h] BYREF

  v6 = this;
  v141 = a5;
  v138.QuadPart = (LONGLONG)a6;
  v142 = this;
  v8 = *((_QWORD *)this + 2);
  v140 = a4;
  v9 = (unsigned int)a3;
  v139 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 72LL);
  v10 = *(DXGADAPTER ***)(*(_QWORD *)(v8 + 1800) + 2280LL);
  v135 = (ADAPTER_DISPLAY *)v10;
  if ( !v10 || !DXGADAPTER::IsCoreResourceSharedOwner(v10[2]) )
  {
    v72 = WdLogNewEntry5_WdAssertion(v10, a2, a3, a4);
    *(_QWORD *)(v72 + 24) = 5357LL;
    WdLogEvent5_WdAssertion(v72);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL)) )
  {
    v73 = WdLogNewEntry5_WdAssertion(Value, v11, v13, v14);
    *(_QWORD *)(v73 + 24) = 5358LL;
    WdLogEvent5_WdAssertion(v73);
  }
  p_pSrcSubRects = &a2->pSrcSubRects;
  if ( !a2->pSrcSubRects
    || (p_SubRectCnt = &a2->SubRectCnt, !a2->SubRectCnt)
    || (Value = a2->Flags.Value, (((unsigned __int8)Value ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 1) == 0)
    || (Value & 0x63C) != 0 )
  {
    v131 = (_QWORD *)WdLogNewEntry5_WdError(Value, v11);
    LODWORD(v41) = -1073741811;
    v131[3] = -1073741811LL;
    v131[4] = v6;
    v131[5] = *p_pSrcSubRects;
    v131[6] = a2->SubRectCnt;
    v131[7] = a2->Flags.Value;
    WdLogEvent5_WdError(v131);
    return (unsigned int)v41;
  }
  memset(&v144, 0, sizeof(v144));
  hDestination = a2->hDestination;
  v18 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v18 + 168));
  v19 = (hDestination >> 6) & 0xFFFFFF;
  if ( v19 < *(_DWORD *)(v18 + 208)
    && (v20 = *(_QWORD *)(v18 + 192),
        v21 = *(_DWORD *)(v20 + 16LL * v19 + 8),
        ((hDestination >> 26) & 0x30) == (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x30))
    && (v21 & 0x1000) == 0
    && (v21 & 0xF) != 0
    && (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0xF) == 5 )
  {
    v22 = *(struct DXGALLOCATION **)(v20 + 16LL * v19);
  }
  else
  {
    v22 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v137, v22);
  ExReleasePushLockSharedEx(v18 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( !v137 )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    LODWORD(v41) = -1073741811;
    v74[3] = -1073741811LL;
    v74[4] = v6;
    v74[5] = *p_pSrcSubRects;
    v74[6] = *p_SubRectCnt;
    v74[7] = a2->hDestination;
    WdLogEvent5_WdError(v74);
    goto LABEL_70;
  }
  if ( (a2->Flags.Value & 1) != 0 )
  {
    hSource = a2->hSource;
    v26 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v26 + 168));
    v27 = (hSource >> 6) & 0xFFFFFF;
    if ( v27 < *(_DWORD *)(v26 + 208)
      && (v28 = *(_QWORD *)(v26 + 192),
          v29 = *(_DWORD *)(v28 + 16LL * v27 + 8),
          ((hSource >> 26) & 0x30) == (*(_BYTE *)(v28 + 16LL * v27 + 8) & 0x30))
      && (v29 & 0x1000) == 0
      && (v29 & 0xF) != 0
      && (*(_BYTE *)(v28 + 16LL * v27 + 8) & 0xF) == 5 )
    {
      v30 = *(struct DXGALLOCATION **)(v28 + 16LL * v27);
    }
    else
    {
      v30 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v136, v30);
    ExReleasePushLockSharedEx(v26 + 168, 0LL);
    KeLeaveCriticalRegion();
    if ( !v136[0] )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
      LODWORD(v41) = -1073741811;
      v75[3] = -1073741811LL;
      v75[4] = v6;
      v75[5] = a2->hSource;
      WdLogEvent5_WdError(v75);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v136);
      goto LABEL_70;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v136);
  }
  if ( !*((_QWORD *)v6 + 19) )
  {
    v69 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x668uLL);
    v71 = v69 ? DXGPRESENT::DXGPRESENT(v69, 1) : 0LL;
    *((_QWORD *)v6 + 19) = v71;
    if ( !v71 )
    {
      v76 = (_QWORD *)WdLogNewEntry5_WdLowResource(v70);
      v76[3] = -1073741801LL;
      v76[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL);
      v76[5] = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
      v76[6] = v6;
      WdLogEvent5_WdLowResource(v76);
      LODWORD(v41) = -1073741801;
      goto LABEL_70;
    }
  }
  v33 = *((_QWORD *)v6 + 2);
  v136[0] = 0LL;
  v136[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v33 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v136);
  v36 = v136[0];
  if ( !v136[0] )
  {
    v77 = WdLogNewEntry5_WdLowResource(v34);
    *(_QWORD *)(v77 + 24) = 5422LL;
    WdLogEvent5_WdLowResource(v77);
    LODWORD(v41) = -1073741801;
    goto LABEL_69;
  }
  v37 = *(_DWORD *)v136[0] | 0x10000;
  *(_DWORD *)v136[0] = v37;
  if ( (a2->Flags.Value & 0x4000) == 0 )
    *(_DWORD *)v36 = v37 | 1;
  *(_DWORD *)v36 |= 0x100u;
  v38 = *((_QWORD *)v6 + 2);
  LOBYTE(v35) = 1;
  v134 = 0LL;
  LODWORD(v41) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 432LL) + 8LL)
                                                                                                 + 488LL))(
                   *((_QWORD *)v6 + 28),
                   0LL,
                   v35,
                   &v134);
  if ( (int)v41 < 0 )
    goto LABEL_69;
  if ( !v134 )
  {
    v78 = WdLogNewEntry5_WdAssertion(v40, v39, v42, v43);
    *(_QWORD *)(v78 + 24) = 5440LL;
    WdLogEvent5_WdAssertion(v78);
  }
  DXGPRESENTMUTEX::DXGPRESENTMUTEX(
    (DXGPRESENTMUTEX *)v143,
    *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v6 + 2) + 16LL),
    v42,
    v43);
  if ( (a2->Flags.Value & 0x4000) == 0 )
  {
    COREDEVICEACCESS::Release(v140);
    v44 = v141;
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v141);
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v143, v45, v46, v47);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v44);
    v48 = COREDEVICEACCESS::AcquireShared(v140);
    v41 = v48;
    if ( v48 < 0 )
    {
      v79 = WdLogNewEntry5_WdEvent(v49);
      *(_QWORD *)(v79 + 24) = v41;
      *(_QWORD *)(v79 + 32) = v6;
      WdLogEvent5_WdEvent(v79);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL)
                                                                                         + 432LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v134,
        0LL);
      goto LABEL_68;
    }
    v51 = 0;
    if ( v139 )
    {
      v52 = *(_DWORD *)(*((_QWORD *)v6 + 19) + 8LL);
      if ( v52 != (*(unsigned int (**)(void))(v139 + 8))() )
      {
        *(_DWORD *)(*((_QWORD *)v6 + 19) + 8LL) = (*(__int64 (**)(void))(v139 + 8))();
        DXGDEVICE::FlushScheduler(*((_QWORD *)v6 + 2), 2LL);
        v51 = 1;
      }
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v6 + 2), v6, v50, v51);
  }
  if ( (a2->Flags.Value & 1) == 0 || a2->hSource == a2->hDestination )
  {
    v53 = (DXGADAPTER **)v135;
    goto LABEL_43;
  }
  v53 = (DXGADAPTER **)v135;
  if ( (*(_DWORD *)(*(_QWORD *)(v137 + 48) + 4LL) & 2) == 0 )
    goto LABEL_43;
  updated = DxgkCddUpdatePresentRects((DXGADAPTER **)v135, v9, (struct tagRECT **)&a2->pSrcSubRects, &a2->SubRectCnt);
  v41 = updated;
  if ( updated < 0 )
  {
    v80 = (_QWORD *)WdLogNewEntry5_WdEvent(v55);
    v80[3] = v41;
    v80[4] = *((_QWORD *)v6 + 2);
    v80[5] = v9;
    goto LABEL_91;
  }
  LODWORD(v41) = 0;
  if ( *p_SubRectCnt )
  {
LABEL_43:
    LODWORD(v41) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v6 + 19), *p_SubRectCnt);
    if ( (int)v41 < 0 )
    {
LABEL_92:
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL)
                                                                                         + 432LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v134,
        0LL);
      v134 = 0LL;
      goto LABEL_68;
    }
    v59 = (a2->Flags.Value & 0x4000) == 0;
    DstRect = a2->DstRect;
    v144.SubRectCnt = *p_SubRectCnt;
    v144.DstRect = DstRect;
    if ( v59 )
    {
      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(v53, (unsigned int)v9, 1LL);
      v62 = (CurrentOrientation != 1 ? 0x80 : 0) | v144.Flags.Value & 0xFFFFFF7F;
      v144.Flags.Value = v62;
    }
    else
    {
      v62 = v144.Flags.Value;
    }
    v63 = a2->Flags.Value;
    if ( (v63 & 1) == 0 )
    {
      if ( (v63 & 2) == 0 )
      {
        v121 = WdLogNewEntry5_WdAssertion(v63, v56, v57, v58);
        *(_QWORD *)(v121 + 24) = 5642LL;
        WdLogEvent5_WdAssertion(v121);
        v62 = v144.Flags.Value;
      }
      v144.Flags.Value = v62 | 2;
      v144.Color = a2->Color;
      v144.pDstSubRects = *p_pSrcSubRects;
      goto LABEL_64;
    }
    SrcRect = a2->SrcRect;
    v144.Flags.Value = v62 | 1;
    v65 = a2->hDestination;
    v144.SrcRect = SrcRect;
    if ( a2->hSource != v65 )
    {
      v144.pDstSubRects = *p_pSrcSubRects;
LABEL_49:
      for ( i = 0; i < v144.SubRectCnt; ++i )
      {
        if ( (*p_pSrcSubRects)[i].left >= (*p_pSrcSubRects)[i].right )
        {
          v115 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects, v56, v57, v58);
          *(_QWORD *)(v115 + 24) = 5626LL;
          WdLogEvent5_WdAssertion(v115);
        }
        if ( (*p_pSrcSubRects)[i].top >= (*p_pSrcSubRects)[i].bottom )
        {
          v116 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects, v56, v57, v58);
          *(_QWORD *)(v116 + 24) = 5627LL;
          WdLogEvent5_WdAssertion(v116);
        }
        if ( (a2->Flags.Value & 0x4000) == 0 )
        {
          if ( (*p_pSrcSubRects)[i].left < v144.SrcRect.left )
          {
            v117 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects, v56, v57, v58);
            *(_QWORD *)(v117 + 24) = 5632LL;
            WdLogEvent5_WdAssertion(v117);
          }
          if ( (*p_pSrcSubRects)[i].right > v144.SrcRect.right )
          {
            v118 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects, v56, v57, v58);
            *(_QWORD *)(v118 + 24) = 5633LL;
            WdLogEvent5_WdAssertion(v118);
          }
          if ( (*p_pSrcSubRects)[i].top < v144.SrcRect.top )
          {
            v119 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects, v56, v57, v58);
            *(_QWORD *)(v119 + 24) = 5634LL;
            WdLogEvent5_WdAssertion(v119);
          }
          if ( (*p_pSrcSubRects)[i].bottom > v144.SrcRect.bottom )
          {
            v120 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects, v56, v57, v58);
            *(_QWORD *)(v120 + 24) = 5635LL;
            WdLogEvent5_WdAssertion(v120);
          }
        }
      }
LABEL_64:
      if ( bTracingEnabled )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 432LL)
                                                           + 8LL)
                                               + 336LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 440LL),
          a2->hDestination);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 432LL)
                                                           + 8LL)
                                               + 336LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 440LL),
          a2->hSource);
        pDstSubRects = v144.pDstSubRects;
        SubRectCnt = v144.SubRectCnt;
        v125 = v134;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          Template_ppxppttqddddddddq(
            HIDWORD(*(_QWORD *)&v144.DstRect.left),
            HIDWORD(*(_QWORD *)&v144.DstRect.right),
            HIDWORD(*(_QWORD *)&v144.SrcRect.left),
            0LL,
            v134);
        v126 = 0;
        if ( SubRectCnt )
        {
          while ( 1 )
          {
            v127 = 0;
            v128 = SubRectCnt - v126;
            if ( (unsigned int)v128 > 0x10 )
              break;
            v129 = SubRectCnt - v126;
            if ( (_DWORD)v128 )
              goto LABEL_134;
LABEL_136:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            {
              LODWORD(v133) = v129;
              LODWORD(v132) = SubRectCnt - v126 <= 0x10;
              Template_ptqDR2DR2DR2DR2((__int64)v149, v128, v122, v125, v132, v133, v149, v148, v147, v146);
            }
            v126 += 16;
            if ( v126 >= SubRectCnt )
              goto LABEL_65;
          }
          v129 = 16;
LABEL_134:
          v122 = 0LL;
          do
          {
            v130 = v127 + v126;
            ++v127;
            v130 *= 2LL;
            v122 += 4LL;
            *(_DWORD *)&v148[v122 + 60] = *(&pDstSubRects->left + 2 * v130);
            *(_DWORD *)&v147[v122 + 60] = *(&pDstSubRects->right + 2 * v130);
            *(_DWORD *)&v146[v122 + 60] = *(&pDstSubRects->top + 2 * v130);
            *(_DWORD *)&v146[v122 - 4] = *(&pDstSubRects->bottom + 2 * v130);
          }
          while ( v127 < v129 );
          goto LABEL_136;
        }
      }
LABEL_65:
      v67 = v140;
      LODWORD(v41) = DXGCONTEXT::SubmitPresent(
                       v6,
                       a2,
                       a2->BroadcastContextCount,
                       (struct DXGCONTEXT **)v138.QuadPart,
                       0LL,
                       a2->hSource,
                       a2->hDestination,
                       &v144,
                       0LL,
                       v134,
                       v136[0],
                       D3DDDIFMT_A8B8G8R8,
                       (struct _D3DKMT_PRESENT *)v140);
      if ( (int)v41 >= 0 && a2->PresentHistoryToken.Model == D3DKMT_PM_REDIRECTED_GDI )
      {
        v138.QuadPart = -100000LL;
        LODWORD(v41) = DXGCONTEXT::SubmitPresentHistoryToken(
                         v6,
                         &a2->PresentHistoryToken,
                         v67,
                         v141,
                         0LL,
                         0,
                         &v138,
                         0LL,
                         0LL);
      }
      goto LABEL_68;
    }
    if ( (v63 & 0x4000) != 0 || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v53, v9) )
    {
      DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v6 + 19), 0);
      v86 = (unsigned int)(v144.SrcRect.right - v144.SrcRect.left);
      v87 = (unsigned int)(v144.DstRect.right - v144.DstRect.left);
      v144.pDstSubRects = DdiSubRectList;
      if ( (_DWORD)v87 != (_DWORD)v86 )
      {
        v88 = WdLogNewEntry5_WdAssertion(v87, v86, v83, v84);
        *(_QWORD *)(v88 + 24) = 5587LL;
        WdLogEvent5_WdAssertion(v88);
      }
      v89 = (unsigned int)(v144.SrcRect.bottom - v144.SrcRect.top);
      if ( v144.DstRect.bottom - v144.DstRect.top != (_DWORD)v89 )
      {
        v90 = WdLogNewEntry5_WdAssertion(v89, v86, v83, v84);
        *(_QWORD *)(v90 + 24) = 5590LL;
        WdLogEvent5_WdAssertion(v90);
      }
      if ( v144.SrcRect.left >= v144.SrcRect.right )
      {
        v91 = WdLogNewEntry5_WdAssertion(v89, v86, v83, v84);
        *(_QWORD *)(v91 + 24) = 5592LL;
        WdLogEvent5_WdAssertion(v91);
      }
      if ( v144.SrcRect.left < 0 )
      {
        v92 = WdLogNewEntry5_WdAssertion(v89, v86, v83, v84);
        *(_QWORD *)(v92 + 24) = 5593LL;
        WdLogEvent5_WdAssertion(v92);
      }
      ContentRect = ADAPTER_DISPLAY::GetContentRect(v53, v9);
      left = (unsigned int)ADAPTER_DISPLAY::GetContentRect(v53, v9)->left;
      if ( v144.SrcRect.right > ContentRect->right - (int)left )
      {
        v98 = WdLogNewEntry5_WdAssertion(left, v94, v96, v97);
        *(_QWORD *)(v98 + 24) = 5594LL;
        WdLogEvent5_WdAssertion(v98);
      }
      top = v144.DstRect.top;
      if ( v144.DstRect.top >= v144.DstRect.bottom )
      {
        v100 = WdLogNewEntry5_WdAssertion(left, v94, v96, v97);
        *(_QWORD *)(v100 + 24) = 5596LL;
        WdLogEvent5_WdAssertion(v100);
        top = v144.DstRect.top;
      }
      if ( top < 0 )
      {
        v101 = WdLogNewEntry5_WdAssertion(left, v94, v96, v97);
        *(_QWORD *)(v101 + 24) = 5597LL;
        WdLogEvent5_WdAssertion(v101);
      }
      v102 = ADAPTER_DISPLAY::GetContentRect(v53, v9);
      v103 = (unsigned int)ADAPTER_DISPLAY::GetContentRect(v53, v9)->top;
      if ( v144.SrcRect.bottom > v102->bottom - (int)v103 )
      {
        v104 = WdLogNewEntry5_WdAssertion(v103, v56, v57, v58);
        *(_QWORD *)(v104 + 24) = 5598LL;
        WdLogEvent5_WdAssertion(v104);
      }
      v105 = 0;
      v106 = v144.DstRect.left - v144.SrcRect.left;
      if ( v144.SubRectCnt )
      {
        v107 = v144.DstRect.top - v144.SrcRect.top;
        do
        {
          v108 = v105;
          v57 = (unsigned int)(v106 + (*p_pSrcSubRects)[v105].left);
          DdiSubRectList[v108].left = v57;
          v56 = (unsigned int)(v106 + (*p_pSrcSubRects)[v105].right);
          DdiSubRectList[v108].right = v56;
          DdiSubRectList[v108].top = v107 + (*p_pSrcSubRects)[v105].top;
          DdiSubRectList[v108].bottom = v107 + (*p_pSrcSubRects)[v105].bottom;
          if ( (int)v57 >= (int)v56 )
          {
            v109 = WdLogNewEntry5_WdAssertion(v103, v56, v57, v58);
            *(_QWORD *)(v109 + 24) = 5610LL;
            WdLogEvent5_WdAssertion(v109);
          }
          if ( DdiSubRectList[v105].left < v144.DstRect.left )
          {
            v110 = WdLogNewEntry5_WdAssertion(v103, v56, v57, v58);
            *(_QWORD *)(v110 + 24) = 5611LL;
            WdLogEvent5_WdAssertion(v110);
          }
          if ( DdiSubRectList[v105].right > v144.DstRect.right )
          {
            v111 = WdLogNewEntry5_WdAssertion(v103, v56, v57, v58);
            *(_QWORD *)(v111 + 24) = 5612LL;
            WdLogEvent5_WdAssertion(v111);
          }
          if ( DdiSubRectList[v105].top >= DdiSubRectList[v105].bottom )
          {
            v112 = WdLogNewEntry5_WdAssertion(v103, v56, v57, v58);
            *(_QWORD *)(v112 + 24) = 5613LL;
            WdLogEvent5_WdAssertion(v112);
          }
          if ( DdiSubRectList[v105].top < v144.DstRect.top )
          {
            v113 = WdLogNewEntry5_WdAssertion(v103, v56, v57, v58);
            *(_QWORD *)(v113 + 24) = 5614LL;
            WdLogEvent5_WdAssertion(v113);
          }
          if ( DdiSubRectList[v105].bottom > v144.DstRect.bottom )
          {
            v114 = WdLogNewEntry5_WdAssertion(v103, v56, v57, v58);
            *(_QWORD *)(v114 + 24) = 5615LL;
            WdLogEvent5_WdAssertion(v114);
          }
          ++v105;
        }
        while ( v105 < v144.SubRectCnt );
        v6 = v142;
      }
      goto LABEL_49;
    }
    v80 = (_QWORD *)WdLogNewEntry5_WdEvent(v82);
    LODWORD(v41) = -1071774910;
    v80[3] = -1071774910LL;
    v80[4] = *((_QWORD *)v6 + 2);
    v80[5] = a2->hDestination;
    v80[6] = v9;
LABEL_91:
    WdLogEvent5_WdEvent(v80);
    goto LABEL_92;
  }
  v81 = (_QWORD *)WdLogNewEntry5_WdEvent(v55);
  v81[3] = 0LL;
  v81[4] = *((_QWORD *)v6 + 2);
  v81[5] = a2->hDestination;
  v81[6] = v9;
  WdLogEvent5_WdEvent(v81);
  (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2)
                                                                                                 + 16LL)
                                                                                     + 432LL)
                                                                         + 8LL)
                                                             + 496LL))(
    v134,
    0LL);
  v134 = 0LL;
LABEL_68:
  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v143);
LABEL_69:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v136);
LABEL_70:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v137);
  return (unsigned int)v41;
}
