/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01930B4
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0194F30 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C000340C (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087DC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0014DC4 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0023A84 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0E@Z @ 0x1C0030198 (-IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0E@Z.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0030250 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C0030308 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00C3E6C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     DxgkQueryDmmInterface @ 0x1C00C79F4 (DxgkQueryDmmInterface.c)
 *     DxgkStatusChangeNotify @ 0x1C00D7140 (DxgkStatusChangeNotify.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DDA24 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DEA4C (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C0157CFC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0194220 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     DxgkNotifyDisplayChange @ 0x1C01D1198 (DxgkNotifyDisplayChange.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C0211DD4 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C0214658 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DmmPowerOnTargetsFromSourceIfNecessary@@YAJQEAXI@Z @ 0x1C021494C (-DmmPowerOnTargetsFromSourceIfNecessary@@YAJQEAXI@Z.c)
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
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  void *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 FunctionalVidPnWithEnabledVidPnSource; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // rbx
  _QWORD *v32; // rax
  int v33; // r12d
  __int64 v34; // rcx
  __int64 v35; // rbx
  _QWORD *v36; // rax
  unsigned int *v37; // rcx
  bool v38; // zf
  enum _D3DDDIFORMAT Format; // ebx
  __int64 v40; // rax
  char v41; // di
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  DXGADAPTER **v45; // rcx
  const struct _D3DKMT_DISPLAYMODE *v46; // r12
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rbx
  _QWORD *v51; // rax
  unsigned int updated; // eax
  int v53; // eax
  const struct _DXGDMM_INTERFACE *v54; // rbx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rcx
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // r12
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v67; // rcx
  struct DXGGLOBAL *Global; // rax
  int v69; // r8d
  __int64 v70; // rcx
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rax
  _BYTE v78[4]; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v79; // [rsp+54h] [rbp-ACh]
  __int128 v80; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v81; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v82[24]; // [rsp+78h] [rbp-88h]
  const struct _DXGDMM_INTERFACE *v83; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v84; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v85[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v86; // [rsp+D0h] [rbp-30h]
  void (__fastcall *v87)(__int64, __int64); // [rsp+D8h] [rbp-28h]
  __int64 v88; // [rsp+E0h] [rbp-20h]
  int v89; // [rsp+E8h] [rbp-18h]
  enum _D3DDDI_ROTATION v90; // [rsp+F0h] [rbp-10h]
  __int64 v91; // [rsp+F8h] [rbp-8h]
  __int64 v92; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v93; // [rsp+108h] [rbp+8h]
  __int64 v94; // [rsp+110h] [rbp+10h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v95; // [rsp+118h] [rbp+18h]
  int v96; // [rsp+120h] [rbp+20h] BYREF
  __int64 v97; // [rsp+128h] [rbp+28h]
  _DWORD v98[60]; // [rsp+130h] [rbp+30h] BYREF
  __int64 retaddr; // [rsp+278h] [rbp+178h]

  v93 = a6;
  v95 = a7;
  v92 = retaddr;
  v90 = a4;
  v79 = a3;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<6,8>::NotifyStatusChange(&v92, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 6140LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)this + 211);
  v12 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !v11 || !*(_QWORD *)(v11 + 2456) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 211)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v13 + 24) = 6148LL;
    WdLogEvent5_WdAssertion(v13);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v11 + 2456), v12);
  v15 = *((_OWORD *)DisplayModeInfo + 1);
  v80 = *(_OWORD *)DisplayModeInfo;
  v16 = *((_OWORD *)DisplayModeInfo + 2);
  v81 = v15;
  *(_QWORD *)&v15 = *((_QWORD *)DisplayModeInfo + 6);
  *(_OWORD *)v82 = v16;
  *(_QWORD *)&v82[16] = v15;
  memset(&v84, 0, sizeof(v84));
  v84.Rotation = -1;
  v17 = *((_QWORD *)a2 + 6);
  v84.Flags.Value = 1;
  v18 = *(void **)(v17 + 16);
  v19 = *((_QWORD *)this + 2);
  v84.hAllocation = v18;
  v21 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v19 + 16) + 2464LL), &v84, v20);
  FunctionalVidPnWithEnabledVidPnSource = v21;
  if ( v21 < 0 )
    goto LABEL_8;
  FunctionalVidPnWithEnabledVidPnSource = (unsigned int)v80;
  v30 = DWORD1(v80);
  if ( *(_QWORD *)&v84.Width != (_QWORD)v80 )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    v72[3] = a2;
    v72[4] = v84.Width;
    v72[5] = v84.Height;
    v72[6] = FunctionalVidPnWithEnabledVidPnSource;
    v72[7] = v30;
    WdLogEvent5_WdWarning(v72);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
LABEL_66:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      v97 = 0LL;
      v96 = 1;
      DxgkStatusChangeNotify(&v96, v28, v29);
    }
    goto LABEL_68;
  }
  if ( v84.Rotation != -1 )
  {
    v31 = SHIDWORD(v81);
    if ( v84.Rotation != HIDWORD(v81) )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
      v32[3] = a2;
      v32[4] = v84.Rotation;
      v32[5] = v31;
LABEL_13:
      WdLogEvent5_WdWarning(v32);
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
      goto LABEL_68;
    }
  }
  v33 = *(_DWORD *)&v82[8];
  v34 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v34) = (*(_DWORD *)&v82[8] >> 4) ^ v34;
  if ( (v34 & 1) == 0 )
  {
    v35 = *(unsigned int *)&v82[20];
    if ( v84.PrivateDriverFormatAttribute != *(_DWORD *)&v82[20] )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v34, v22, v24, v25);
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071774891;
      v36[3] = a2;
      v36[4] = v84.PrivateDriverFormatAttribute;
      v37 = v93;
      v36[5] = v35;
      *v37 = v84.PrivateDriverFormatAttribute;
      goto LABEL_68;
    }
  }
  v38 = *(_QWORD *)(v11 + 2464) == 0LL;
  Format = v84.Format;
  *(D3DDDI_MULTISAMPLINGMETHOD *)&v82[12] = v84.MultisampleMethod;
  DWORD2(v80) = v84.Format;
  if ( v38 )
  {
    if ( v84.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    DWORD2(v80) = Format;
  }
  if ( !v84.RefreshRate.Denominator )
  {
    v40 = WdLogNewEntry5_WdError(v34);
    *(_QWORD *)(v40 + 24) = v84.RefreshRate.Numerator;
    WdLogEvent5_WdError(v40);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1073741811;
    goto LABEL_68;
  }
  if ( v84.RefreshRate.Numerator == 64 && v84.RefreshRate.Denominator == 1 && (_QWORD)v81 == 0xFFFFFFFEFFFFFFFEuLL )
  {
    v84.RefreshRate.Numerator = -2;
    v84.RefreshRate.Denominator = -2;
  }
  v41 = *(_BYTE *)&a5 & 1;
  if ( (*(_BYTE *)&a5 & 1) != 0
    && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange((const struct _D3DDDI_RATIONAL *)&v81, &v84.RefreshRate, 0) )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
    v32[3] = a2;
    v32[4] = v84.RefreshRate.Numerator;
    v32[5] = v84.RefreshRate.Denominator;
    v32[6] = (unsigned int)v81;
    v32[7] = DWORD1(v81);
    goto LABEL_13;
  }
  *(D3DDDI_RATIONAL *)&v81 = v84.RefreshRate;
  HIDWORD(v80) = DmmMapVSyncFromRationalToInteger(&v84.RefreshRate, v79, 0LL);
  DWORD2(v81) = v79;
  v45 = *(DXGADAPTER ***)(v11 + 2456);
  *(_DWORD *)&v82[8] = ((unsigned __int8)v33 ^ (unsigned __int8)BYTE1(*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL))) & 0x10 ^ v33;
  v46 = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v45, v12);
  if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
          *(DXGADAPTER ***)(v11 + 2456),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF)
    && IsDisplayModeEqual(v46, (const struct _D3DKMT_DISPLAYMODE *)&v80, v41)
    && !DmmNeedTargetModeWireformatOrColorspaceChange((DXGADAPTER *)v11, v12, Format)
    && (v41 || v46[1].Height == *(_DWORD *)&v82[16] && v46[1].Width == *(_DWORD *)&v82[12]) )
  {
    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v12, a2, 0, 1u);
    v48 = DmmPowerOnTargetsFromSourceIfNecessary((void *const)v11, v12);
    v50 = v48;
    if ( v48 < 0 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v49);
      v51[3] = *(_QWORD *)(v11 + 2456);
      v51[4] = (unsigned int)v12;
      v51[5] = v50;
      WdLogEvent5_WdError(v51);
    }
    updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                *(PERESOURCE ***)(v11 + 2456),
                (PERESOURCE **)this,
                v12,
                *((struct DXGADAPTERALLOCATION **)a2 + 6));
    v83 = 0LL;
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = updated;
    DxgkLogCodePointPacket(0x3Cu, updated, *(_DWORD *)(v11 + 268), v12, 0LL);
    goto LABEL_63;
  }
  v83 = 0LL;
  v53 = DxgkQueryDmmInterface((DXGADAPTER *)v11, v47, &v83);
  FunctionalVidPnWithEnabledVidPnSource = v53;
  if ( v53 < 0 )
  {
LABEL_8:
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v27[3] = FunctionalVidPnWithEnabledVidPnSource;
    v27[4] = this;
    v27[5] = *((unsigned int *)a2 + 4);
    v27[6] = a2;
    v27[7] = (unsigned int)v12;
    WdLogEvent5_WdError(v27);
    goto LABEL_66;
  }
  v54 = v83;
  v94 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0;
  v85[0] = 0;
  v91 = 0LL;
  FunctionalVidPnWithEnabledVidPnSource = (int)CreateFunctionalVidPnWithEnabledVidPnSource(v83, v11, (unsigned int)v12);
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v85,
    v91,
    *((_QWORD *)v54 + 8),
    v11);
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774925 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v55);
    v57 = (unsigned int)v12;
    v56[3] = -1071774925LL;
LABEL_42:
    v56[4] = v57;
    v56[5] = (unsigned int)v80;
    v56[6] = DWORD1(v80);
    v56[7] = SDWORD2(v80);
    v58 = v56;
    goto LABEL_43;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774886 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v55);
    v56[3] = (unsigned int)v12;
    v57 = *(_QWORD *)(v11 + 2456);
    goto LABEL_42;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource != -1071774970 )
  {
    if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v55);
      v60[4] = (unsigned int)v12;
      v60[5] = (unsigned int)v80;
      v60[6] = DWORD1(v80);
      v60[7] = SDWORD2(v80);
      v60[3] = FunctionalVidPnWithEnabledVidPnSource;
      WdLogEvent5_WdError(v60);
      if ( v85[0] )
        v87(v88, v86);
      goto LABEL_66;
    }
    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v12, a2, 0, 1u);
    memset(v98, 0, sizeof(v98));
    v61 = v86;
    v78[0] = 0;
    v98[8] = 1 << v12;
    v62 = DmmSetTimingsOnAdapter(v11, v86, 0, 2u, (__int64)v98, v78, 0LL, 0LL);
    FunctionalVidPnWithEnabledVidPnSource = v62;
    if ( v62 < 0 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v63);
      v71[3] = FunctionalVidPnWithEnabledVidPnSource;
      v71[4] = *(_QWORD *)(v11 + 2456);
      v71[5] = (unsigned int)v12;
      v71[6] = a2;
      v71[7] = this;
      WdLogEvent5_WdError(v71);
    }
    else
    {
      DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)v11, (struct _DMM_SET_TIMING_RESULT *)v78, v95);
      if ( ((1 << v12) & v98[19]) != 0 )
        LODWORD(FunctionalVidPnWithEnabledVidPnSource) = v98[v12 + 20];
      Current = DXGPROCESS::GetCurrent(v65, v64);
      if ( !Current || !*((_BYTE *)Current + 322) )
      {
        Global = DXGGLOBAL::GetGlobal(v67);
        do
          v69 = _InterlockedIncrement((volatile signed __int32 *)Global + 228);
        while ( !v69 );
        ADAPTER_DISPLAY::SetDisplayId(
          *(ADAPTER_DISPLAY **)(v11 + 2456),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
          v69);
        LOBYTE(v70) = 1;
        DxgkNotifyDisplayChange(v70);
        v61 = v86;
      }
    }
    if ( v85[0] )
      v87(v88, v61);
LABEL_63:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
      goto LABEL_68;
    *((_DWORD *)this + v12 + 262) |= 0x200u;
    goto LABEL_66;
  }
  v59 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v55);
  v59[3] = (unsigned int)v80;
  v59[4] = DWORD1(v80);
  v59[5] = SDWORD2(v80);
  v59[6] = (unsigned int)v81 / DWORD1(v81);
  v59[7] = (unsigned int)v12;
  v58 = v59;
LABEL_43:
  WdLogEvent5_WdDmmEvent(v58);
  if ( v85[0] )
    v87(v88, v86);
LABEL_68:
  *(_QWORD *)&v80 = *(_QWORD *)&v84.Width;
  DWORD2(v80) = v84.Format;
  if ( v84.RefreshRate.Denominator )
    HIDWORD(v80) = DmmMapVSyncFromRationalToInteger(&v84.RefreshRate, v79, 0LL);
  else
    HIDWORD(v80) = 0;
  *(D3DDDI_RATIONAL *)&v81 = v84.RefreshRate;
  *((_QWORD *)&v81 + 1) = __PAIR64__(v90, v79);
  v73 = DmmCacheDisplayModeChangeRequest(v11, (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF, &v80);
  v75 = v73;
  if ( v73 < 0 )
  {
    v76 = WdLogNewEntry5_WdError(v74);
    *(_QWORD *)(v76 + 24) = v75;
    WdLogEvent5_WdError(v76);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<6,8>::NotifyStatusChange(&v92, 8);
  return (unsigned int)FunctionalVidPnWithEnabledVidPnSource;
}
