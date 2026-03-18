/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BF7F0
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0096EF0 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0001CA8 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z @ 0x1C0002A28 (-IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0003884 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0005208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C000AE20 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C000AE6C (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C000D24C (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkStatusChangeNotify @ 0x1C0098C20 (DxgkStatusChangeNotify.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009A1E0 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A4324 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAU_D3DKMT_VIDPN_SOU.c)
 *     DmmCacheDisplayModeChangeRequest @ 0x1C00A5A38 (DmmCacheDisplayModeChangeRequest.c)
 *     DmmPowerOnTargetsFromSourceIfNecessary @ 0x1C00A5B08 (DmmPowerOnTargetsFromSourceIfNecessary.c)
 *     DxgkQueryDmmInterface @ 0x1C00A7230 (DxgkQueryDmmInterface.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00E7A8C (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00F5430 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C018EF8C (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     DxgkNotifyDisplayChange @ 0x1C01B1564 (DxgkNotifyDisplayChange.c)
 */

__int64 __fastcall DXGDEVICE::SetDisplayMode(
        DXGDEVICE *this,
        const struct DXGALLOCATION *a2,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a3,
        enum _D3DDDI_ROTATION a4,
        struct _D3DKMT_SETDISPLAYMODE_FLAGS a5,
        unsigned int *a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rdi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 FunctionalVidPnWithEnabledVidPnSource; // rbx
  __int64 v25; // r12
  int v26; // r12d
  __int64 v27; // rcx
  bool v28; // zf
  D3DDDIFORMAT Format; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  int v35; // r12d
  DXGADAPTER **v36; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  unsigned int updated; // eax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v48; // edi
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rbx
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 PrivateDriverFormatAttribute; // rcx
  __int64 v62; // rax
  _QWORD *v63; // rax
  int v64; // eax
  const struct _DXGDMM_INTERFACE *v65; // r13
  __int64 v66; // rdx
  __int64 v67; // rcx
  _QWORD *v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rcx
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // r13
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v80; // r9
  __int64 v81; // r8
  __int64 v82; // rcx
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rax
  _BYTE v86[3]; // [rsp+71h] [rbp-8Fh] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v87; // [rsp+74h] [rbp-8Ch]
  __int128 v88; // [rsp+78h] [rbp-88h] BYREF
  __int128 v89; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v90[24]; // [rsp+98h] [rbp-68h]
  const struct _DXGDMM_INTERFACE *v91; // [rsp+B0h] [rbp-50h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v92; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v93[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v94; // [rsp+F0h] [rbp-10h]
  void (__fastcall *v95)(__int64, __int64); // [rsp+F8h] [rbp-8h]
  __int64 v96; // [rsp+100h] [rbp+0h]
  int v97; // [rsp+108h] [rbp+8h]
  enum _D3DDDI_ROTATION v98; // [rsp+110h] [rbp+10h]
  __int64 v99; // [rsp+118h] [rbp+18h]
  __int64 v100[2]; // [rsp+120h] [rbp+20h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v101; // [rsp+130h] [rbp+30h]
  int v102; // [rsp+138h] [rbp+38h] BYREF
  __int64 v103; // [rsp+140h] [rbp+40h]
  _DWORD v104[36]; // [rsp+150h] [rbp+50h] BYREF
  __int64 retaddr; // [rsp+238h] [rbp+138h]

  v101 = a7;
  v100[0] = retaddr;
  v98 = a4;
  v87 = a3;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(v100, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v55 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v55 + 24) = 6212LL;
    WdLogEvent5_WdAssertion(v55);
  }
  v13 = *((_QWORD *)this + 225);
  v14 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !v13 || !*(_QWORD *)(v13 + 2280) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 225)) )
  {
    v56 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v56 + 24) = 6220LL;
    WdLogEvent5_WdAssertion(v56);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v13 + 2280), v14);
  v16 = *((_OWORD *)DisplayModeInfo + 1);
  v88 = *(_OWORD *)DisplayModeInfo;
  v17 = *((_OWORD *)DisplayModeInfo + 2);
  v89 = v16;
  *(_QWORD *)&v16 = *((_QWORD *)DisplayModeInfo + 6);
  *(_OWORD *)v90 = v17;
  *(_QWORD *)&v90[16] = v16;
  memset(&v92, 0, sizeof(v92));
  v92.Flags.Value |= 1u;
  v92.Rotation = -1;
  v18 = *((_QWORD *)this + 2);
  v92.hAllocation = *(HANDLE *)(*((_QWORD *)a2 + 6) + 16LL);
  v19 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v18 + 16) + 2288LL), &v92);
  FunctionalVidPnWithEnabledVidPnSource = v19;
  if ( v19 < 0 )
    goto LABEL_36;
  v25 = (unsigned int)v88;
  FunctionalVidPnWithEnabledVidPnSource = DWORD1(v88);
  if ( *(_QWORD *)&v92.Width != (_QWORD)v88 )
  {
    v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v84[3] = a2;
    v84[4] = v92.Width;
    v84[5] = v92.Height;
    v84[6] = v25;
    v84[7] = FunctionalVidPnWithEnabledVidPnSource;
    WdLogEvent5_WdWarning(v84);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_28;
  }
  if ( v92.Rotation != -1 )
  {
    v58 = SHIDWORD(v89);
    if ( v92.Rotation != HIDWORD(v89) )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      v59[3] = a2;
      v59[4] = v92.Rotation;
      v59[5] = v58;
LABEL_40:
      WdLogEvent5_WdWarning(v59);
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
      goto LABEL_30;
    }
  }
  v26 = *(_DWORD *)&v90[8];
  v27 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v27) = (*(_DWORD *)&v90[8] >> 4) ^ v27;
  if ( (v27 & 1) == 0 )
  {
    FunctionalVidPnWithEnabledVidPnSource = *(unsigned int *)&v90[20];
    if ( v92.PrivateDriverFormatAttribute != *(_DWORD *)&v90[20] )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v20, v22, v23);
      v60[3] = a2;
      PrivateDriverFormatAttribute = v92.PrivateDriverFormatAttribute;
      v60[5] = FunctionalVidPnWithEnabledVidPnSource;
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071774891;
      v60[4] = PrivateDriverFormatAttribute;
      *a6 = v92.PrivateDriverFormatAttribute;
      goto LABEL_30;
    }
  }
  v28 = *(_QWORD *)(v13 + 2288) == 0LL;
  *(D3DDDI_MULTISAMPLINGMETHOD *)&v90[12] = v92.MultisampleMethod;
  Format = v92.Format;
  DWORD2(v88) = v92.Format;
  if ( v28 )
  {
    v27 = 21LL;
    if ( v92.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    DWORD2(v88) = Format;
  }
  if ( !v92.RefreshRate.Denominator )
  {
    v62 = WdLogNewEntry5_WdError(v27, v20);
    *(_QWORD *)(v62 + 24) = v92.RefreshRate.Numerator;
    WdLogEvent5_WdError(v62);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1073741811;
    goto LABEL_30;
  }
  if ( v92.RefreshRate.Numerator == 64 && v92.RefreshRate.Denominator == 1 && (_QWORD)v89 == 0xFFFFFFFEFFFFFFFEuLL )
  {
    v92.RefreshRate.Numerator = -2;
    v92.RefreshRate.Denominator = -2;
  }
  if ( (*(_BYTE *)&a5 & 1) != 0
    && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange((const struct _D3DDDI_RATIONAL *)&v89, &v92.RefreshRate, 0) )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    v59[3] = a2;
    v59[4] = v92.RefreshRate.Numerator;
    v59[5] = v92.RefreshRate.Denominator;
    v59[6] = (unsigned int)v89;
    v59[7] = DWORD1(v89);
    goto LABEL_40;
  }
  *(D3DDDI_RATIONAL *)&v89 = v92.RefreshRate;
  HIDWORD(v88) = DmmMapVSyncFromRationalToInteger(&v92.RefreshRate, v87, 0LL);
  v34 = *((_QWORD *)a2 + 6);
  DWORD2(v89) = v87;
  v35 = ((unsigned __int8)v26 ^ (unsigned __int8)BYTE1(*(_DWORD *)(v34 + 4))) & 0x10 ^ v26;
  v36 = *(DXGADAPTER ***)(v13 + 2280);
  *(_DWORD *)&v90[8] = v35;
  v37 = ADAPTER_DISPLAY::GetDisplayModeInfo(v36, v14);
  if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v13 + 2280), v14)
    && IsDisplayModeEqual((const struct _D3DKMT_DISPLAYMODE *)v37, (const struct _D3DKMT_DISPLAYMODE *)&v88)
    && *((_DWORD *)v37 + 12) == *(_DWORD *)&v90[16]
    && *((_DWORD *)v37 + 11) == *(_DWORD *)&v90[12]
    || (*(_BYTE *)&a5 & 1) != 0
    && (((unsigned __int8)v35 ^ *((_BYTE *)v37 + 40)) & 0x10) == 0
    && (((unsigned __int8)v35 ^ (unsigned __int8)*((_DWORD *)v37 + 10)) & 0x20) == 0 )
  {
    DXGDEVICE::SetDisplayedPrimary(this, v14, a2, 0, 1u);
    v40 = DmmPowerOnTargetsFromSourceIfNecessary(v13, (unsigned int)v14);
    v43 = v40;
    if ( v40 < 0 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
      v63[3] = *(_QWORD *)(v13 + 2280);
      v63[4] = (unsigned int)v14;
      v63[5] = v43;
      WdLogEvent5_WdError(v63);
    }
    updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                *(ADAPTER_DISPLAY **)(v13 + 2280),
                this,
                v14,
                *((struct DXGADAPTERALLOCATION **)a2 + 6));
    v91 = 0LL;
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = updated;
    DxgkLogCodePointPacket(0x3Cu, updated, *(_DWORD *)(v13 + 268), v14, 0LL);
LABEL_26:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
      goto LABEL_30;
    *((_DWORD *)this + v14 + 258) |= 0x200u;
    goto LABEL_28;
  }
  v91 = 0LL;
  v64 = DxgkQueryDmmInterface((DXGADAPTER *)v13, v38, &v91, v39);
  FunctionalVidPnWithEnabledVidPnSource = v64;
  if ( v64 < 0 )
  {
LABEL_36:
    v57 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v57[3] = FunctionalVidPnWithEnabledVidPnSource;
    v57[4] = this;
    v57[5] = *((unsigned int *)a2 + 4);
    v57[6] = a2;
    v57[7] = (unsigned int)v14;
    WdLogEvent5_WdError(v57);
    goto LABEL_28;
  }
  v65 = v91;
  v100[1] = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0;
  v93[0] = 0;
  v99 = 0LL;
  v86[1] = 0;
  FunctionalVidPnWithEnabledVidPnSource = (int)CreateFunctionalVidPnWithEnabledVidPnSource(v91, v13, (unsigned int)v14);
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v93,
    v99,
    *((_QWORD *)v65 + 8),
    v13);
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774925 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v69 = (unsigned int)v14;
    v68[3] = -1071774925LL;
LABEL_53:
    v68[4] = v69;
    v68[5] = (unsigned int)v88;
    v68[6] = DWORD1(v88);
    v68[7] = SDWORD2(v88);
    v70 = v68;
    goto LABEL_55;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774886 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v68[3] = (unsigned int)v14;
    v69 = *(_QWORD *)(v13 + 2280);
    goto LABEL_53;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource != -1071774970 )
  {
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      DXGDEVICE::SetDisplayedPrimary(this, v14, a2, 0, 1u);
      memset(v104, 0, 0x8CuLL);
      v73 = v94;
      v86[0] = 0;
      v104[6] = 1 << v14;
      v74 = DmmSetTimingsOnAdapter(v13, v94, 0, 2u, v104, (__int64)v86, 0LL);
      FunctionalVidPnWithEnabledVidPnSource = v74;
      if ( v74 < 0 )
      {
        v83 = (_QWORD *)WdLogNewEntry5_WdError(v76, v75);
        v83[3] = FunctionalVidPnWithEnabledVidPnSource;
        v83[4] = *(_QWORD *)(v13 + 2280);
        v83[5] = (unsigned int)v14;
        v83[6] = a2;
        v83[7] = this;
        WdLogEvent5_WdError(v83);
      }
      else
      {
        DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)v13, (struct _DMM_SET_TIMING_RESULT *)v86, v101);
        if ( ((1 << v14) & v104[17]) != 0 )
          LODWORD(FunctionalVidPnWithEnabledVidPnSource) = v104[v14 + 18];
        Current = DXGPROCESS::GetCurrent(v77);
        if ( !Current || !*((_BYTE *)Current + 274) )
        {
          Global = DXGGLOBAL::GetGlobal();
          do
            v81 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)Global + 208);
          while ( !(_DWORD)v81 );
          ADAPTER_DISPLAY::SetDisplayId(
            *(ADAPTER_DISPLAY **)(v13 + 2280),
            (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
            v81,
            v80);
          LOBYTE(v82) = 1;
          DxgkNotifyDisplayChange(v82);
          v73 = v94;
        }
      }
      if ( v93[0] )
        v95(v96, v73);
      goto LABEL_26;
    }
    v72 = (_QWORD *)WdLogNewEntry5_WdError(v67, v66);
    v72[4] = (unsigned int)v14;
    v72[5] = (unsigned int)v88;
    v72[6] = DWORD1(v88);
    v72[7] = SDWORD2(v88);
    v72[3] = FunctionalVidPnWithEnabledVidPnSource;
    WdLogEvent5_WdError(v72);
    if ( v93[0] )
      v95(v96, v94);
LABEL_28:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      v103 = 0LL;
      v102 = 1;
      DxgkStatusChangeNotify(&v102, v45, v46);
    }
    goto LABEL_30;
  }
  v71 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
  v71[3] = (unsigned int)v88;
  v71[4] = DWORD1(v88);
  v71[5] = SDWORD2(v88);
  v71[6] = (unsigned int)v89 / DWORD1(v89);
  v71[7] = (unsigned int)v14;
  v70 = v71;
LABEL_55:
  WdLogEvent5_WdDmmEvent(v70);
  if ( v93[0] )
    v95(v96, v94);
LABEL_30:
  v48 = v87;
  *(_QWORD *)&v88 = *(_QWORD *)&v92.Width;
  DWORD2(v88) = v92.Format;
  if ( v92.RefreshRate.Denominator )
    HIDWORD(v88) = DmmMapVSyncFromRationalToInteger(&v92.RefreshRate, v87, 0LL);
  else
    HIDWORD(v88) = 0;
  *(D3DDDI_RATIONAL *)&v89 = v92.RefreshRate;
  v49 = *((_QWORD *)a2 + 6);
  *((_QWORD *)&v89 + 1) = __PAIR64__(v98, v48);
  v50 = DmmCacheDisplayModeChangeRequest(
          (DXGADAPTER *)v13,
          (*(_DWORD *)(v49 + 4) >> 6) & 0xF,
          (__int64)&v88,
          v47,
          FunctionalVidPnWithEnabledVidPnSource);
  v53 = v50;
  if ( v50 < 0 )
  {
    v85 = WdLogNewEntry5_WdError(v52, v51);
    *(_QWORD *)(v85 + 24) = v53;
    WdLogEvent5_WdError(v85);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(v100, 8);
  return (unsigned int)FunctionalVidPnWithEnabledVidPnSource;
}
