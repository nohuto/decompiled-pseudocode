/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5E6C
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5514 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087DC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000B6AC (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C00143D0 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0014E10 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001569C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C0030308 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C009EDEC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00AE6F0 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     DxgkQueryDmmInterface @ 0x1C00C79F4 (DxgkQueryDmmInterface.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DDA24 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1C00DE3E0 (-DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DEA4C (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E2018 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E20D0 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E2198 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00F2718 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0155BCC (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01D0E8C (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C0225328 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        unsigned int a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  volatile signed __int64 *v5; // rbx
  __int64 v7; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  ADAPTER_DISPLAY **v14; // r13
  __int64 v15; // r9
  __int64 v16; // rdi
  int DmmInterface; // eax
  __int64 v18; // rcx
  ADAPTER_DISPLAY *v19; // rcx
  int v20; // ebx
  unsigned int v21; // r12d
  unsigned int v22; // r9d
  int v23; // r8d
  __int64 v24; // rcx
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // edx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  ADAPTER_DISPLAY *v33; // rax
  unsigned int v34; // edi
  int v35; // ebx
  __int64 v36; // rdi
  unsigned int v37; // r14d
  __int64 v38; // rcx
  __int64 v39; // r12
  bool v40; // zf
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rbx
  const struct tagRECT *DwmClipBox; // rax
  __int64 v47; // r8
  __int64 v48; // xmm1_8
  __int128 v49; // xmm0
  ADAPTER_DISPLAY *v50; // rax
  __int64 v51; // rdx
  int DisplayId; // eax
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r12
  __int64 v56; // r12
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  struct DXGGLOBAL *Global; // rax
  int v67; // r8d
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  DXGDEVICE *v70; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v71; // [rsp+48h] [rbp-B8h]
  int v72; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v73; // [rsp+58h] [rbp-A8h]
  _BYTE v74[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v75; // [rsp+68h] [rbp-98h]
  _BYTE v76[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v77; // [rsp+78h] [rbp-88h]
  void (__fastcall *v78)(__int64, __int64); // [rsp+80h] [rbp-80h]
  __int64 v79; // [rsp+88h] [rbp-78h]
  int v80; // [rsp+90h] [rbp-70h]
  __int64 v81; // [rsp+98h] [rbp-68h]
  __int64 v82; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-58h]
  _BYTE v84[16]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v85; // [rsp+C0h] [rbp-40h]
  _BYTE v86[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v87[32]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v88[104]; // [rsp+F8h] [rbp-8h] BYREF
  int i; // [rsp+170h] [rbp+70h]
  char v91; // [rsp+188h] [rbp+88h] BYREF

  v91 = 0;
  v5 = 0LL;
  v7 = 316LL * a4;
  v71 = a4;
  v9 = *((_QWORD *)this + 8);
  v70 = 0LL;
  v10 = *(_QWORD *)(v9 + 40) + v7 + 76;
  v83 = v10;
  while ( 1 )
  {
    if ( v5 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
        (struct DXGDEVICE *)v5);
      if ( _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v70 + 2), v70);
      v70 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                             &v70,
                                             0LL,
                                             0LL);
    v13 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v69[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
      v69[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
      v69[5] = v13;
      WdLogEvent5_WdError(v69);
      return (unsigned int)v13;
    }
    v5 = (volatile signed __int64 *)v70;
    v14 = (ADAPTER_DISPLAY **)*((_QWORD *)v70 + 211);
    if ( !v14 )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      LODWORD(v16) = -1073741811;
      v68[3] = v5;
      v68[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
      v68[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
      v68[6] = -1073741811LL;
      WdLogEvent5_WdError(v68);
      v40 = _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_47;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84, v70);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v74, a2[39], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v74);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v86, (__int64)v5, 1, v15, 0);
    v16 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v86);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v5) )
      break;
    COREACCESS::~COREACCESS((COREACCESS *)v88);
    COREACCESS::~COREACCESS((COREACCESS *)v87);
    if ( v75 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v74);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84);
  }
  if ( (int)v16 < 0 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
    v57[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
    v57[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
    v57[5] = *((_QWORD *)this + 8);
    v57[6] = v16;
  }
  else
  {
    v73 = 0LL;
    DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)v14);
    v16 = DmmInterface;
    if ( DmmInterface >= 0 )
    {
      v19 = v14[307];
      v20 = 1;
      v21 = 0;
      for ( i = 1; v21 < *((_DWORD *)v19 + 20); i = v20 )
      {
        if ( (v20 & *(_DWORD *)v10) != 0 )
        {
          v42 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v19, v21);
          v44 = v42;
          if ( v42 < 0 )
          {
            v58 = (_QWORD *)WdLogNewEntry5_WdError(v43);
            v58[3] = v21;
            v58[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
            v58[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
            v58[6] = v44;
            WdLogEvent5_WdError(v58);
          }
          ADAPTER_DISPLAY::ProcessModeChange(v14[307], v21);
          v19 = v14[307];
        }
        if ( (v20 & *(_DWORD *)(v10 + 4)) != 0 )
        {
          v45 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * (v21 + 79 * v71) + 8);
          DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox((DXGADAPTER **)v14[307], v21);
          v47 = 272 * v45;
          v49 = *(_OWORD *)(*((_QWORD *)this + 8) + 272 * v45 + 216);
          v85 = *DwmClipBox;
          v48 = *(_QWORD *)&v85.left;
          v50 = v14[307];
          v81 = 272 * v45;
          *(_OWORD *)(*((_QWORD *)v50 + 14) + 3760LL * v21 + 652) = v49;
          v51 = *((_QWORD *)this + 8);
          if ( v48 == *(_QWORD *)(v51 + 272 * v45 + 216) && *(_QWORD *)&v85.right == *(_QWORD *)(v51 + v47 + 224) )
          {
            v20 = i;
          }
          else
          {
            v20 = i;
            *(_DWORD *)(v10 + 44) |= i;
            v51 = *((_QWORD *)this + 8);
          }
          *(_QWORD *)(*((_QWORD *)v14[307] + 14) + 3760LL * v21 + 644) = *(_QWORD *)(v47 + v51 + 200);
          DisplayId = ADAPTER_DISPLAY::GetDisplayId(v14[307], v21);
          *(_DWORD *)(*((_QWORD *)this + 8) + v81 + 236) = DisplayId;
          v19 = v14[307];
        }
        v20 *= 2;
        ++v21;
      }
      v22 = *((_DWORD *)this + 20);
      v23 = *((_DWORD *)this + 19) & 1;
      v24 = *((_QWORD *)this + 8);
      v77 = 0LL;
      v78 = 0LL;
      v79 = 0LL;
      v80 = 0;
      v76[0] = 0;
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   v24,
                                                   (__int64)v14,
                                                   v23,
                                                   v22,
                                                   a3,
                                                   (unsigned __int64 *)&v82);
      v16 = PathModalityForAdapterWithCoreAccessHeld;
      if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdError(v26);
        v59[3] = *((_QWORD *)this + 8);
        v59[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
        v59[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
        v59[6] = v16;
        WdLogEvent5_WdError(v59);
        v5 = (volatile signed __int64 *)v70;
      }
      else
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v76,
          v82,
          *(_QWORD *)(v73 + 64),
          (__int64)v14);
        v5 = (volatile signed __int64 *)v70;
        v27 = v77;
        v16 = (int)DmmSetTimingsOnAdapter(v14, v77, a3, 1LL, v10, &v91, v70, v86);
        DisplayScenarioJournalSetCommitVidPnStatus(
          v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL,
          *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 156);
        if ( (int)v16 < 0 )
        {
          v60 = (_QWORD *)WdLogNewEntry5_WdError(v28);
          v60[3] = v27;
          v60[4] = *((_QWORD *)this + 8);
          v60[5] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
          v60[6] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
          v60[7] = v16;
          WdLogEvent5_WdError(v60);
          if ( v76[0] )
            v78(v79, v27);
        }
        else
        {
          if ( v76[0] )
            v78(v79, v27);
          v29 = *(unsigned int *)(v10 + 8);
          if ( ((unsigned int)v29 & *(_DWORD *)(v10 + 12)) != 0 )
          {
            v61 = WdLogNewEntry5_WdAssertion(v29);
            WdLogEvent5_WdAssertion(v61);
            v29 = *(unsigned int *)(v10 + 8);
          }
          if ( ((unsigned int)v29 | *(_DWORD *)(v10 + 40)) != (_DWORD)v29
            || ((unsigned int)v29 & *(_DWORD *)(v10 + 40)) != *(_DWORD *)(v10 + 40) )
          {
            v62 = WdLogNewEntry5_WdAssertion(v29);
            WdLogEvent5_WdAssertion(v62);
            v29 = *(unsigned int *)(v10 + 8);
          }
          v30 = *(_DWORD *)v10;
          if ( (_DWORD)v29 != ((unsigned int)v29 & (*(_DWORD *)v10 | *(_DWORD *)(v10 + 4))) )
          {
            v63 = WdLogNewEntry5_WdAssertion(v29);
            WdLogEvent5_WdAssertion(v63);
            v30 = *(_DWORD *)v10;
          }
          v31 = *(unsigned int *)(v10 + 12);
          if ( (_DWORD)v31 != (v30 & *(_DWORD *)(v10 + 12)) || ((unsigned int)v31 & *(_DWORD *)(v10 + 4)) != 0 )
          {
            v64 = WdLogNewEntry5_WdAssertion(v31);
            WdLogEvent5_WdAssertion(v64);
          }
          v32 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v32[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
          v32[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
          v32[5] = *(unsigned int *)(v10 + 8);
          v32[6] = *(unsigned int *)(v10 + 40);
          v32[7] = *(unsigned int *)(v10 + 12);
          WdLogEvent5_WdDmmEvent(v32);
          v33 = v14[307];
          v34 = 0;
          if ( *((_DWORD *)v33 + 20) )
          {
            do
            {
              v35 = 1 << v34;
              if ( ((1 << v34) & *(_DWORD *)(v10 + 76)) != 0 )
              {
                *(_DWORD *)(v10 + 12) |= v35 & *(_DWORD *)v10;
                CCD_TOPOLOGY::MarkPathsApplyFailure(
                  this,
                  (const struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                  v34,
                  *(_DWORD *)(v10 + 4LL * v34 + 80));
              }
              else if ( (v35 & *(_DWORD *)(v10 + 4)) != 0 )
              {
                v53 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(v33, v34);
                v55 = v53;
                if ( v53 < 0 )
                {
                  v65 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
                  v65[3] = v34;
                  v65[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
                  v65[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
                  v65[6] = v55;
                  WdLogEvent5_WdDmmEvent(v65);
                }
                if ( (v35 & *(_DWORD *)(v10 + 8)) == 0 || (v35 & *(_DWORD *)(v10 + 40)) != 0 )
                {
                  v56 = v71;
                }
                else
                {
                  Global = DXGGLOBAL::GetGlobal(v54);
                  do
                    v67 = _InterlockedIncrement((volatile signed __int32 *)Global + 228);
                  while ( !v67 );
                  v56 = v71;
                  *(_DWORD *)(272LL
                            * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * (v34 + 79 * v71) + 8)
                            + *((_QWORD *)this + 8)
                            + 236) = v67;
                  ADAPTER_DISPLAY::SetDisplayId(v14[307], v34, v67);
                }
                if ( (v35 & *(_DWORD *)(v10 + 64)) != 0 )
                  *(_QWORD *)(272LL
                            * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * (v34 + 79 * v56) + 8)
                            + *((_QWORD *)this + 8)
                            + 244) = 0LL;
              }
              if ( ((*(_DWORD *)(v10 + 76) | *(_DWORD *)(v10 + 56)) & v35) != 0 )
                ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v14[307], v34);
              v33 = v14[307];
              ++v34;
            }
            while ( v34 < *((_DWORD *)v33 + 20) );
            v5 = (volatile signed __int64 *)v70;
          }
          v36 = *((_QWORD *)this + 8);
          if ( *(_WORD *)(v36 + 20) )
          {
            v37 = 0;
            do
            {
              v38 = *(_QWORD *)(v36 + 40);
              v39 = 272LL * v37;
              if ( *(_DWORD *)(v39 + v36 + 64) == *(_DWORD *)(v38 + v7)
                && *(_DWORD *)(v39 + v36 + 68) == *(_DWORD *)(v38 + v7 + 4)
                && *(int *)(v39 + v36 + 240) >= 0
                && DmmGetTargetLinkTrainingStatus(
                     v14,
                     *(_DWORD *)(v39 + v36 + 76),
                     (enum _DXGK_CONNECTION_STATUS *)&v72) >= 0
                && v72 == 12 )
              {
                *(_DWORD *)(v39 + v36 + 240) = 259;
              }
              v36 = *((_QWORD *)this + 8);
              ++v37;
            }
            while ( v37 < *(unsigned __int16 *)(v36 + 20) );
            v10 = v83;
          }
          DmmHandleSetTimingsResult((DXGADAPTER *)v14, (struct _DMM_SET_TIMING_RESULT *)&v91, a5);
          LODWORD(v16) = 0;
        }
      }
      goto LABEL_42;
    }
    v57 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v57[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
    v57[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
    v57[5] = v16;
  }
  WdLogEvent5_WdError(v57);
LABEL_42:
  if ( (int)v16 < 0 )
  {
    *(_DWORD *)(v10 + 76) = *(_DWORD *)v10 | *(_DWORD *)(v10 + 4);
    FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v10, v16);
    *(_DWORD *)(v10 + 12) = *(_DWORD *)v10;
    CCD_TOPOLOGY::MarkPathsApplyFailure(
      this,
      (const struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
      0xFFFFFFFF,
      v16);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v88);
  COREACCESS::~COREACCESS((COREACCESS *)v87);
  if ( v75 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v74);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84);
  v40 = _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_47:
  if ( v40 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v70 + 2), v70);
  return (unsigned int)v16;
}
