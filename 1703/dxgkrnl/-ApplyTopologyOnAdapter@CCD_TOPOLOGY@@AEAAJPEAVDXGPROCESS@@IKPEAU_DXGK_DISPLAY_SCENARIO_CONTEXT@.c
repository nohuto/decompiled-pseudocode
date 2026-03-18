/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00ED624
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?FillFailedStatus@@YAXPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C0002AD8 (-FillFailedStatus@@YAXPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0003884 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0005AB8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C000AE6C (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C000AEB4 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000B0D4 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ @ 0x1C0020EF8 (--1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0098DC4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009A1E0 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A4324 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAU_D3DKMT_VIDPN_SOU.c)
 *     DxgkQueryDmmInterface @ 0x1C00A7230 (DxgkQueryDmmInterface.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00BFBD0 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E7474 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E7528 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E75EC (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E79E4 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00F1AB4 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01B14A0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C01DE768 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        unsigned int a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  volatile signed __int64 *v5; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  struct _D3DKMT_VIDPN_SOURCE_MASKS *v10; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  ADAPTER_DISPLAY **v15; // r13
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  ADAPTER_DISPLAY *v29; // rcx
  int v30; // ebx
  unsigned int v31; // r12d
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  _QWORD *v36; // rax
  __int64 v37; // rbx
  const struct tagRECT *DwmClipBox; // rax
  __int64 v39; // r8
  __int64 v40; // xmm1_8
  __int64 v41; // r9
  __int128 v42; // xmm0
  ADAPTER_DISPLAY *v43; // rax
  __int64 v44; // rcx
  int DisplayId; // eax
  __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // rcx
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  _QWORD *v67; // rax
  ADAPTER_DISPLAY *v68; // r8
  __int64 v69; // rdi
  int v70; // ebx
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r12
  _QWORD *v77; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v79; // r9
  __int64 v80; // r8
  __int64 v81; // r12
  bool v82; // zf
  _QWORD *v83; // rax
  _QWORD *v85; // rax
  DXGDEVICE *v86; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v87; // [rsp+48h] [rbp-B8h]
  const struct _DXGDMM_INTERFACE *v88; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v89[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v90; // [rsp+60h] [rbp-A0h]
  void (__fastcall *v91)(__int64, __int64); // [rsp+68h] [rbp-98h]
  __int64 v92; // [rsp+70h] [rbp-90h]
  int v93; // [rsp+78h] [rbp-88h]
  __int64 v94; // [rsp+80h] [rbp-80h]
  __int64 v95; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v96[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v97[16]; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v98; // [rsp+B0h] [rbp-50h]
  _BYTE v99[144]; // [rsp+C0h] [rbp-40h] BYREF
  int i; // [rsp+160h] [rbp+60h]
  char v102; // [rsp+178h] [rbp+78h] BYREF

  v5 = 0LL;
  v102 = 0;
  v8 = 216LL * a4;
  v87 = a4;
  v9 = *((_QWORD *)this + 8);
  v86 = 0LL;
  v10 = (struct _D3DKMT_VIDPN_SOURCE_MASKS *)(*(_QWORD *)(v9 + 40) + v8 + 76);
  while ( 1 )
  {
    if ( v5 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
        (struct DXGDEVICE *)v5);
      if ( _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v86 + 2), v86);
      v86 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                             &v86,
                                             0LL);
    v14 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v85 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v85[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v85[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v85[5] = v14;
      WdLogEvent5_WdError(v85);
      return (unsigned int)v14;
    }
    v5 = (volatile signed __int64 *)v86;
    v15 = (ADAPTER_DISPLAY **)*((_QWORD *)v86 + 225);
    if ( !v15 )
    {
      v83 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      LODWORD(v19) = -1073741811;
      v83[3] = v5;
      v83[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v83[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v83[6] = -1073741811LL;
      WdLogEvent5_WdError(v83);
      v82 = _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_66;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v97, v86);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v96, a2[33], v16, v17);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v96);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v99, (__int64)v5, 1LL, v18, 0);
    v19 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v99, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v5, v20, v21, v22) )
      break;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v99);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v96);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v97);
  }
  if ( (int)v19 >= 0 )
  {
    v88 = 0LL;
    v19 = (int)DxgkQueryDmmInterface((DXGADAPTER *)v15, v23, &v88, v25);
    if ( (int)v19 >= 0 )
    {
      v29 = v15[285];
      v30 = 1;
      v31 = 0;
      for ( i = 1; v31 < *((_DWORD *)v29 + 20); i = v30 )
      {
        if ( (v30 & *(_DWORD *)v10) != 0 )
        {
          v32 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource((DXGADAPTER **)v29, v31);
          v35 = v32;
          if ( v32 < 0 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
            v36[3] = v31;
            v36[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
            v36[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
            v36[6] = v35;
            WdLogEvent5_WdError(v36);
          }
          ADAPTER_DISPLAY::ProcessModeChange(v15[285], v31);
        }
        if ( (v30 & *((_DWORD *)v10 + 1)) != 0 )
        {
          v37 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * (v31 + 54 * v87) + 8);
          DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox((DXGADAPTER **)v15[285], v31);
          v39 = 264 * v37;
          v41 = 3208LL * v31;
          v42 = *(_OWORD *)(*((_QWORD *)this + 8) + 264 * v37 + 216);
          v98 = *DwmClipBox;
          v40 = *(_QWORD *)&v98.left;
          v43 = v15[285];
          v94 = 264 * v37;
          *(_OWORD *)(*((_QWORD *)v43 + 14) + v41 + 652) = v42;
          v44 = *((_QWORD *)this + 8);
          if ( v40 == *(_QWORD *)(v44 + 264 * v37 + 216) && *(_QWORD *)&v98.right == *(_QWORD *)(v44 + v39 + 224) )
          {
            v30 = i;
          }
          else
          {
            v30 = i;
            *((_DWORD *)v10 + 9) |= i;
          }
          *(_QWORD *)(*((_QWORD *)v15[285] + 14) + v41 + 644) = *(_QWORD *)(*((_QWORD *)this + 8) + v39 + 200);
          DisplayId = ADAPTER_DISPLAY::GetDisplayId(v15[285], v31, v39, v41);
          *(_DWORD *)(*((_QWORD *)this + 8) + v94 + 284) = DisplayId;
        }
        v29 = v15[285];
        v30 *= 2;
        ++v31;
      }
      v46 = *((unsigned int *)this + 20);
      v47 = *((_DWORD *)this + 19) & 1;
      v48 = *((_QWORD *)this + 8);
      v90 = 0LL;
      v91 = 0LL;
      v92 = 0LL;
      v93 = 0;
      v89[0] = 0;
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   v48,
                                                   v15,
                                                   v47,
                                                   v46,
                                                   a3,
                                                   &v95);
      v19 = PathModalityForAdapterWithCoreAccessHeld;
      if ( PathModalityForAdapterWithCoreAccessHeld >= 0 )
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v89,
          v95,
          *((_QWORD *)v88 + 8),
          (__int64)v15);
        v5 = (volatile signed __int64 *)v86;
        v53 = v90;
        v19 = (int)DmmSetTimingsOnAdapter((__int64)v15, v90, a3, 1u, v10, (__int64)&v102, (__int64)v86);
        DisplayScenarioJournalSetCommitVidPnStatus(
          v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL,
          *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 148);
        if ( (int)v19 >= 0 )
        {
          if ( v89[0] )
            v91(v92, v53);
          if ( (*((_DWORD *)v10 + 3) & *((_DWORD *)v10 + 2)) != 0 )
          {
            v59 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
            WdLogEvent5_WdAssertion(v59);
          }
          v60 = *((unsigned int *)v10 + 2);
          v61 = *((unsigned int *)v10 + 8);
          if ( ((unsigned int)v60 | *((_DWORD *)v10 + 8)) != (_DWORD)v60
            || ((unsigned int)v60 & (unsigned int)v61) != (_DWORD)v61 )
          {
            v62 = WdLogNewEntry5_WdAssertion(v61, v60, v56, v57);
            WdLogEvent5_WdAssertion(v62);
          }
          v63 = *((_DWORD *)v10 + 2) & (unsigned int)(*(_DWORD *)v10 | *((_DWORD *)v10 + 1));
          if ( *((_DWORD *)v10 + 2) != (_DWORD)v63 )
          {
            v64 = WdLogNewEntry5_WdAssertion(v63, v60, v56, v57);
            WdLogEvent5_WdAssertion(v64);
          }
          v65 = *((unsigned int *)v10 + 3);
          if ( __PAIR64__((unsigned int)v65 & *((_DWORD *)v10 + 1), *(_DWORD *)v10 & *((_DWORD *)v10 + 3)) != (unsigned int)v65 )
          {
            v66 = WdLogNewEntry5_WdAssertion(v65, v60, v56, v57);
            WdLogEvent5_WdAssertion(v66);
          }
          v67 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v65, v60, v56, v57);
          v67[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
          v67[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
          v67[5] = *((unsigned int *)v10 + 2);
          v67[6] = *((unsigned int *)v10 + 8);
          v67[7] = *((unsigned int *)v10 + 3);
          WdLogEvent5_WdDmmEvent(v67);
          v68 = v15[285];
          v69 = 0LL;
          if ( *((_DWORD *)v68 + 20) )
          {
            do
            {
              v70 = 1 << v69;
              if ( ((1 << v69) & *((_DWORD *)v10 + 17)) != 0 )
              {
                *((_DWORD *)v10 + 3) |= v70 & *(_DWORD *)v10;
                CCD_TOPOLOGY::MarkPathsApplyFailure(
                  this,
                  (const struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                  v69,
                  *((_DWORD *)v10 + v69 + 18));
              }
              else if ( (v70 & *((_DWORD *)v10 + 1)) != 0 )
              {
                v71 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)v68, v69);
                v76 = v71;
                if ( v71 < 0 )
                {
                  v77 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v73, v72, v74, v75);
                  v77[3] = (unsigned int)v69;
                  v77[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
                  v77[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
                  v77[6] = v76;
                  WdLogEvent5_WdDmmEvent(v77);
                }
                if ( (v70 & *((_DWORD *)v10 + 2)) == 0 || (v70 & *((_DWORD *)v10 + 8)) != 0 )
                {
                  v81 = v87;
                }
                else
                {
                  Global = DXGGLOBAL::GetGlobal(v73, v72, v74, v75);
                  do
                    v80 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)Global + 208);
                  while ( !(_DWORD)v80 );
                  v81 = v87;
                  *(_DWORD *)(264LL
                            * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL)
                                              + 4 * ((unsigned int)v69 + 54 * v87)
                                              + 8)
                            + *((_QWORD *)this + 8)
                            + 284) = v80;
                  ADAPTER_DISPLAY::SetDisplayId(v15[285], (unsigned int)v69, v80, v79);
                }
                if ( (v70 & *((_DWORD *)v10 + 14)) != 0 )
                  *(_QWORD *)(264LL
                            * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL)
                                              + 4 * ((unsigned int)v69 + 54 * v81)
                                              + 8)
                            + *((_QWORD *)this + 8)
                            + 292) = 0LL;
              }
              if ( ((*((_DWORD *)v10 + 12) | *((_DWORD *)v10 + 17)) & v70) != 0 )
                ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource((PERESOURCE **)v15[285], v69);
              v68 = v15[285];
              v69 = (unsigned int)(v69 + 1);
            }
            while ( (unsigned int)v69 < *((_DWORD *)v68 + 20) );
            v5 = (volatile signed __int64 *)v86;
          }
          DmmHandleSetTimingsResult(v15, (struct _DMM_SET_TIMING_RESULT *)&v102, a5);
          LODWORD(v19) = 0;
        }
        else
        {
          v58 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
          v58[3] = v53;
          v58[4] = *((_QWORD *)this + 8);
          v58[5] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
          v58[6] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
          v58[7] = v19;
          WdLogEvent5_WdError(v58);
          if ( v89[0] )
            v91(v92, v53);
        }
      }
      else
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
        v52[3] = *((_QWORD *)this + 8);
        v52[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
        v52[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
        v52[6] = v19;
        WdLogEvent5_WdError(v52);
        v5 = (volatile signed __int64 *)v86;
      }
      goto LABEL_62;
    }
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
    v26[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
    v26[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
    v26[5] = v19;
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v26[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
    v26[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
    v26[5] = *((_QWORD *)this + 8);
    v26[6] = v19;
  }
  WdLogEvent5_WdError(v26);
LABEL_62:
  if ( (int)v19 < 0 )
  {
    *((_DWORD *)v10 + 17) = *(_DWORD *)v10 | *((_DWORD *)v10 + 1);
    FillFailedStatus(v10, v19);
    *((_DWORD *)v10 + 3) = *(_DWORD *)v10;
    CCD_TOPOLOGY::MarkPathsApplyFailure(
      this,
      (const struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
      0xFFFFFFFF,
      v19);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v99);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v96);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v97);
  v82 = _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_66:
  if ( v82 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v86 + 2), v86);
  return (unsigned int)v19;
}
