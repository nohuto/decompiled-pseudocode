/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE190
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD780 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001CA0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0006DB8 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0007054 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C0007C28 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000BC54 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000EBC4 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0092A34 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00ACB60 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00ACC14 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00ACCD8 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00AD12C (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00D1D18 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1950 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E1A60 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     DxgkQueryDmmInterface @ 0x1C00E1BAC (DxgkQueryDmmInterface.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01CB260 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C01F7774 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
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
  __int64 v10; // r14
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  ADAPTER_DISPLAY **v14; // r13
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rcx
  int DmmInterface; // eax
  __int64 v19; // rcx
  ADAPTER_DISPLAY *v20; // rcx
  int v21; // ebx
  unsigned int v22; // r12d
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rbx
  const struct tagRECT *DwmClipBox; // rax
  __int64 v28; // r8
  __int64 v29; // xmm1_8
  __int128 v30; // xmm0
  ADAPTER_DISPLAY *v31; // rax
  __int64 v32; // rcx
  int DisplayId; // eax
  int v34; // r9d
  int v35; // r8d
  __int64 v36; // rcx
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // rcx
  int v41; // edx
  __int64 v42; // rcx
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  ADAPTER_DISPLAY *v47; // rax
  __int64 v48; // rdi
  int v49; // ebx
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // r12
  int v53; // eax
  unsigned __int8 v54; // cf
  int v55; // eax
  __int64 v56; // r12
  bool v57; // zf
  struct DXGGLOBAL *Global; // rax
  int v60; // r8d
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  DXGDEVICE *v72; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v73; // [rsp+48h] [rbp-B8h]
  __int64 v74; // [rsp+50h] [rbp-B0h]
  _BYTE v75[8]; // [rsp+58h] [rbp-A8h] BYREF
  char v76; // [rsp+60h] [rbp-A0h]
  _BYTE v77[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v78; // [rsp+70h] [rbp-90h]
  void (__fastcall *v79)(__int64, __int64); // [rsp+78h] [rbp-88h]
  __int64 v80; // [rsp+80h] [rbp-80h]
  int v81; // [rsp+88h] [rbp-78h]
  __int64 v82; // [rsp+90h] [rbp-70h]
  __int64 v83; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v84[16]; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v85; // [rsp+B0h] [rbp-50h]
  _BYTE v86[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v87[32]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v88[104]; // [rsp+E8h] [rbp-18h] BYREF
  int i; // [rsp+160h] [rbp+60h]
  char v91; // [rsp+178h] [rbp+78h] BYREF

  v5 = 0LL;
  v91 = 0;
  v8 = 224LL * a4;
  v73 = a4;
  v9 = *((_QWORD *)this + 8);
  v72 = 0LL;
  v10 = *(_QWORD *)(v9 + 40) + v8 + 76;
  while ( 1 )
  {
    if ( v5 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
        (struct DXGDEVICE *)v5);
      if ( _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v72 + 2), v72);
      v72 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                             &v72,
                                             0LL);
    v13 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v71[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v71[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v71[5] = v13;
      WdLogEvent5_WdError(v71);
      return (unsigned int)v13;
    }
    v5 = (volatile signed __int64 *)v72;
    v14 = (ADAPTER_DISPLAY **)*((_QWORD *)v72 + 209);
    if ( !v14 )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      LODWORD(v16) = -1073741811;
      v70[3] = v5;
      v70[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v70[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v70[6] = -1073741811LL;
      WdLogEvent5_WdError(v70);
      v57 = _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_50;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84, v72);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v75, a2[37]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v75);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v86, (__int64)v5, 1, v15, 0);
    v16 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v86, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v5) )
      break;
    COREACCESS::~COREACCESS((COREACCESS *)v88);
    COREACCESS::~COREACCESS((COREACCESS *)v87);
    if ( v76 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v75);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84);
  }
  if ( (int)v16 < 0 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v61[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
    v61[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
    v61[5] = *((_QWORD *)this + 8);
    v61[6] = v16;
  }
  else
  {
    v74 = 0LL;
    DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)v14);
    v16 = DmmInterface;
    if ( DmmInterface >= 0 )
    {
      v20 = v14[288];
      v21 = 1;
      v22 = 0;
      for ( i = 1; v22 < *((_DWORD *)v20 + 20); i = v21 )
      {
        if ( (v21 & *(_DWORD *)v10) != 0 )
        {
          v23 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource((DXGADAPTER **)v20, v22);
          v25 = v23;
          if ( v23 < 0 )
          {
            v62 = (_QWORD *)WdLogNewEntry5_WdError(v24);
            v62[3] = v22;
            v62[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
            v62[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
            v62[6] = v25;
            WdLogEvent5_WdError(v62);
          }
          ADAPTER_DISPLAY::ProcessModeChange(v14[288], v22);
        }
        if ( (v21 & *(_DWORD *)(v10 + 4)) != 0 )
        {
          v26 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * (v22 + 56 * v73) + 8);
          DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox((DXGADAPTER **)v14[288], v22);
          v28 = 264 * v26;
          v30 = *(_OWORD *)(264 * v26 + *((_QWORD *)this + 8) + 216);
          v85 = *DwmClipBox;
          v29 = *(_QWORD *)&v85.left;
          v31 = v14[288];
          v82 = 264 * v26;
          *(_OWORD *)(*((_QWORD *)v31 + 14) + 3760LL * v22 + 652) = v30;
          v32 = *((_QWORD *)this + 8);
          if ( v29 == *(_QWORD *)(264 * v26 + v32 + 216) && *(_QWORD *)&v85.right == *(_QWORD *)(v28 + v32 + 224) )
          {
            v21 = i;
          }
          else
          {
            v21 = i;
            *(_DWORD *)(v10 + 44) |= i;
          }
          *(_QWORD *)(*((_QWORD *)v14[288] + 14) + 3760LL * v22 + 644) = *(_QWORD *)(v28 + *((_QWORD *)this + 8) + 200);
          DisplayId = ADAPTER_DISPLAY::GetDisplayId(v14[288], v22);
          *(_DWORD *)(v82 + *((_QWORD *)this + 8) + 236) = DisplayId;
        }
        v20 = v14[288];
        v21 *= 2;
        ++v22;
      }
      v34 = *((_DWORD *)this + 20);
      v35 = *((_DWORD *)this + 19) & 1;
      v36 = *((_QWORD *)this + 8);
      v78 = 0LL;
      v79 = 0LL;
      v80 = 0LL;
      v81 = 0;
      v77[0] = 0;
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   v36,
                                                   (__int64)v14,
                                                   v35,
                                                   v34,
                                                   a3,
                                                   (__int64)&v83);
      v16 = PathModalityForAdapterWithCoreAccessHeld;
      if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
      {
        v63 = (_QWORD *)WdLogNewEntry5_WdError(v38);
        v63[3] = *((_QWORD *)this + 8);
        v63[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
        v63[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
        v63[6] = v16;
        WdLogEvent5_WdError(v63);
        v5 = (volatile signed __int64 *)v72;
      }
      else
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v77,
          v83,
          *(_QWORD *)(v74 + 64),
          (__int64)v14);
        v5 = (volatile signed __int64 *)v72;
        v39 = v78;
        v16 = (int)DmmSetTimingsOnAdapter(v14, v78, a3, 1LL, v10, &v91, v72, v86);
        DisplayScenarioJournalSetCommitVidPnStatus(
          v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL,
          *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 156);
        if ( (int)v16 < 0 )
        {
          v64 = (_QWORD *)WdLogNewEntry5_WdError(v40);
          v64[3] = v39;
          v64[4] = *((_QWORD *)this + 8);
          v64[5] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
          v64[6] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
          v64[7] = v16;
          WdLogEvent5_WdError(v64);
          if ( v77[0] )
            v79(v80, v39);
        }
        else
        {
          if ( v77[0] )
            v79(v80, v39);
          if ( (*(_DWORD *)(v10 + 8) & *(_DWORD *)(v10 + 12)) != 0 )
          {
            v65 = WdLogNewEntry5_WdAssertion(v40);
            WdLogEvent5_WdAssertion(v65);
          }
          v41 = *(_DWORD *)(v10 + 8);
          v42 = *(unsigned int *)(v10 + 40);
          if ( (v41 | *(_DWORD *)(v10 + 40)) != v41 || (v41 & (unsigned int)v42) != (_DWORD)v42 )
          {
            v66 = WdLogNewEntry5_WdAssertion(v42);
            WdLogEvent5_WdAssertion(v66);
          }
          v43 = *(_DWORD *)(v10 + 8);
          v44 = v43 & (unsigned int)(*(_DWORD *)v10 | *(_DWORD *)(v10 + 4));
          if ( v43 != (_DWORD)v44 )
          {
            v67 = WdLogNewEntry5_WdAssertion(v44);
            WdLogEvent5_WdAssertion(v67);
          }
          v45 = *(unsigned int *)(v10 + 12);
          if ( __PAIR64__((unsigned int)v45 & *(_DWORD *)(v10 + 4), *(_DWORD *)v10 & *(_DWORD *)(v10 + 12)) != (unsigned int)v45 )
          {
            v68 = WdLogNewEntry5_WdAssertion(v45);
            WdLogEvent5_WdAssertion(v68);
          }
          v46 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v45);
          v46[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
          v46[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
          v46[5] = *(unsigned int *)(v10 + 8);
          v46[6] = *(unsigned int *)(v10 + 40);
          v46[7] = *(unsigned int *)(v10 + 12);
          WdLogEvent5_WdDmmEvent(v46);
          v47 = v14[288];
          v48 = 0LL;
          if ( *((_DWORD *)v47 + 20) )
          {
            do
            {
              v49 = 1 << v48;
              if ( ((1 << v48) & *(_DWORD *)(v10 + 76)) != 0 )
              {
                *(_DWORD *)(v10 + 12) |= v49 & *(_DWORD *)v10;
                CCD_TOPOLOGY::MarkPathsApplyFailure(
                  this,
                  (const struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                  v48,
                  *(_DWORD *)(v10 + 4 * v48 + 80));
              }
              else if ( (v49 & *(_DWORD *)(v10 + 4)) != 0 )
              {
                v50 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)v47, v48);
                v52 = v50;
                if ( v50 < 0 )
                {
                  v69 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v51);
                  v69[3] = (unsigned int)v48;
                  v69[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
                  v69[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
                  v69[6] = v52;
                  WdLogEvent5_WdDmmEvent(v69);
                }
                v53 = *(_DWORD *)(v10 + 8);
                v54 = _bittest(&v53, v48);
                v55 = *(_DWORD *)(v10 + 40);
                LOBYTE(v51) = v54;
                if ( (v54 & !_bittest(&v55, v48)) != 0 )
                {
                  Global = DXGGLOBAL::GetGlobal(v51);
                  do
                    v60 = _InterlockedIncrement((volatile signed __int32 *)Global + 208);
                  while ( !v60 );
                  v56 = v73;
                  *(_DWORD *)(264LL
                            * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL)
                                              + 4 * ((unsigned int)v48 + 56 * v73)
                                              + 8)
                            + *((_QWORD *)this + 8)
                            + 236) = v60;
                  ADAPTER_DISPLAY::SetDisplayId(v14[288], v48, v60);
                }
                else
                {
                  v56 = v73;
                }
                if ( (v49 & *(_DWORD *)(v10 + 64)) != 0 )
                  *(_QWORD *)(264LL
                            * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL)
                                              + 4 * ((unsigned int)v48 + 56 * v56)
                                              + 8)
                            + *((_QWORD *)this + 8)
                            + 244) = 0LL;
              }
              if ( ((*(_DWORD *)(v10 + 76) | *(_DWORD *)(v10 + 56)) & v49) != 0 )
                ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource((PERESOURCE **)v14[288], v48);
              v47 = v14[288];
              v48 = (unsigned int)(v48 + 1);
            }
            while ( (unsigned int)v48 < *((_DWORD *)v47 + 20) );
            v5 = (volatile signed __int64 *)v72;
          }
          DmmHandleSetTimingsResult((DXGADAPTER *)v14, (struct _DMM_SET_TIMING_RESULT *)&v91, a5);
          LODWORD(v16) = 0;
        }
      }
      goto LABEL_45;
    }
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v61[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
    v61[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
    v61[5] = v16;
  }
  WdLogEvent5_WdError(v61);
LABEL_45:
  if ( (int)v16 < 0 )
  {
    *(_DWORD *)(v10 + 76) = *(_DWORD *)v10 | *(_DWORD *)(v10 + 4);
    FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v10, v16);
    *(_DWORD *)(v10 + 12) = *(_DWORD *)v10;
    CCD_TOPOLOGY::MarkPathsApplyFailure(
      this,
      (const struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
      0xFFFFFFFF,
      v16);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v88);
  COREACCESS::~COREACCESS((COREACCESS *)v87);
  if ( v76 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v75);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84);
  v57 = _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_50:
  if ( v57 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v72 + 2), v72);
  return (unsigned int)v16;
}
