/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00925C8
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C00E6690 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0003E74 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0007BDC (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C0007C28 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C000BAE4 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000BC54 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C000D69C (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00AD1DC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00D5698 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1950 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E1A60 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     DxgkQueryDmmInterface @ 0x1C00E1BAC (DxgkQueryDmmInterface.c)
 *     DxgkStatusChangeNotify @ 0x1C00E85B0 (DxgkStatusChangeNotify.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C00F74A0 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C00F8BC8 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?DmmPowerOnTargetsFromSourceIfNecessary@@YAJQEAXI@Z @ 0x1C00F8C98 (-DmmPowerOnTargetsFromSourceIfNecessary@@YAJQEAXI@Z.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C01A37D4 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     DxgkNotifyDisplayChange @ 0x1C01CB324 (DxgkNotifyDisplayChange.c)
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
  __int64 v10; // rsi
  __int64 v11; // rdi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 FunctionalVidPnWithEnabledVidPnSource; // rbx
  __int64 v22; // r15
  unsigned int v23; // ebx
  int v24; // r12d
  __int64 v25; // rcx
  bool v26; // zf
  enum _D3DDDIFORMAT Format; // r15d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  int v32; // r12d
  DXGADAPTER **v33; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *v34; // rbx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rbx
  unsigned int updated; // eax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 Denominator; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  unsigned int *v50; // rcx
  __int64 v51; // rax
  int v52; // edx
  int DmmInterface; // eax
  __int64 v54; // r15
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rax
  _QWORD *v59; // rcx
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // r12
  int v63; // eax
  __int64 v64; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v66; // rcx
  struct DXGGLOBAL *Global; // rax
  int v68; // r8d
  __int64 v69; // rcx
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  _BYTE v73[3]; // [rsp+71h] [rbp-8Fh] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v74; // [rsp+74h] [rbp-8Ch]
  __int128 v75; // [rsp+78h] [rbp-88h] BYREF
  _D3DDDI_RATIONAL v76[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v77[24]; // [rsp+98h] [rbp-68h]
  __int64 v78; // [rsp+B0h] [rbp-50h]
  struct _DXGKARG_DESCRIBEALLOCATION v79; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v80[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v81; // [rsp+F0h] [rbp-10h]
  void (__fastcall *v82)(__int64, __int64); // [rsp+F8h] [rbp-8h]
  __int64 v83; // [rsp+100h] [rbp+0h]
  int v84; // [rsp+108h] [rbp+8h]
  enum _D3DDDI_ROTATION v85; // [rsp+110h] [rbp+10h]
  __int64 v86; // [rsp+118h] [rbp+18h]
  __int64 v87; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v88; // [rsp+128h] [rbp+28h]
  __int64 v89; // [rsp+130h] [rbp+30h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v90; // [rsp+138h] [rbp+38h]
  int v91; // [rsp+140h] [rbp+40h] BYREF
  __int64 v92; // [rsp+148h] [rbp+48h]
  _DWORD v93[40]; // [rsp+150h] [rbp+50h] BYREF
  __int64 retaddr; // [rsp+248h] [rbp+148h]
  char v95; // [rsp+270h] [rbp+170h]

  v88 = a6;
  v90 = a7;
  v87 = retaddr;
  v85 = a4;
  v74 = a3;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v87, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v45 + 24) = 6222LL;
    WdLogEvent5_WdAssertion(v45);
  }
  v10 = *((_QWORD *)this + 209);
  v11 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !v10 || !*(_QWORD *)(v10 + 2304) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 209)) )
  {
    v46 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v46 + 24) = 6230LL;
    WdLogEvent5_WdAssertion(v46);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v10 + 2304), v11);
  v13 = *((_OWORD *)DisplayModeInfo + 1);
  v75 = *(_OWORD *)DisplayModeInfo;
  v14 = *((_OWORD *)DisplayModeInfo + 2);
  *(_OWORD *)&v76[0].Numerator = v13;
  *(_QWORD *)&v13 = *((_QWORD *)DisplayModeInfo + 6);
  *(_OWORD *)v77 = v14;
  *(_QWORD *)&v77[16] = v13;
  memset(&v79, 0, sizeof(v79));
  v79.Flags.Value |= 1u;
  v79.Rotation = -1;
  v15 = *((_QWORD *)this + 2);
  v79.hAllocation = *(HANDLE *)(*((_QWORD *)a2 + 6) + 16LL);
  v17 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v15 + 16) + 2312LL), &v79, v16);
  FunctionalVidPnWithEnabledVidPnSource = v17;
  if ( v17 < 0 )
    goto LABEL_46;
  v22 = (unsigned int)v75;
  v23 = DWORD1(v75);
  if ( *(_QWORD *)&v79.Width != (_QWORD)v75 )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    v71[3] = a2;
    v71[4] = v79.Width;
    v71[5] = v79.Height;
    v71[7] = v23;
    v71[6] = v22;
    WdLogEvent5_WdWarning(v71);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_29;
  }
  if ( v79.Rotation != -1 )
  {
    Denominator = (int)v76[1].Denominator;
    if ( v79.Rotation != v76[1].Denominator )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
      v48[3] = a2;
      v48[4] = v79.Rotation;
      v48[5] = Denominator;
LABEL_48:
      WdLogEvent5_WdWarning(v48);
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
      goto LABEL_31;
    }
  }
  v24 = *(_DWORD *)&v77[8];
  v25 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v25) = (*(_DWORD *)&v77[8] >> 4) ^ v25;
  if ( (v25 & 1) == 0 )
  {
    FunctionalVidPnWithEnabledVidPnSource = *(unsigned int *)&v77[20];
    if ( v79.PrivateDriverFormatAttribute != *(_DWORD *)&v77[20] )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v18);
      v49[3] = a2;
      v49[4] = v79.PrivateDriverFormatAttribute;
      v50 = v88;
      v49[5] = FunctionalVidPnWithEnabledVidPnSource;
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071774891;
      *v50 = v79.PrivateDriverFormatAttribute;
      goto LABEL_31;
    }
  }
  v26 = *(_QWORD *)(v10 + 2312) == 0LL;
  Format = v79.Format;
  *(D3DDDI_MULTISAMPLINGMETHOD *)&v77[12] = v79.MultisampleMethod;
  DWORD2(v75) = v79.Format;
  if ( v26 )
  {
    if ( v79.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    DWORD2(v75) = Format;
  }
  if ( !v79.RefreshRate.Denominator )
  {
    v51 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v51 + 24) = v79.RefreshRate.Numerator;
    WdLogEvent5_WdError(v51);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1073741811;
    goto LABEL_31;
  }
  if ( v79.RefreshRate.Numerator == 64
    && v79.RefreshRate.Denominator == 1
    && v76[0].Numerator == -2
    && v76[0].Denominator == -2 )
  {
    v79.RefreshRate.Numerator = -2;
    v79.RefreshRate.Denominator = -2;
  }
  v95 = *(_BYTE *)&a5 & 1;
  if ( v95 && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(v76, &v79.RefreshRate, 0) )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
    v48[3] = a2;
    v48[4] = v79.RefreshRate.Numerator;
    v48[5] = v79.RefreshRate.Denominator;
    v48[6] = v76[0].Numerator;
    v48[7] = v76[0].Denominator;
    goto LABEL_48;
  }
  v76[0] = v79.RefreshRate;
  HIDWORD(v75) = DmmMapVSyncFromRationalToInteger(&v79.RefreshRate, v74, 0LL);
  v31 = *((_QWORD *)a2 + 6);
  v76[1].Numerator = v74;
  v32 = ((unsigned __int8)v24 ^ (unsigned __int8)BYTE1(*(_DWORD *)(v31 + 4))) & 0x10 ^ v24;
  v33 = *(DXGADAPTER ***)(v10 + 2304);
  *(_DWORD *)&v77[8] = v32;
  v34 = ADAPTER_DISPLAY::GetDisplayModeInfo(v33, v11);
  if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
          *(DXGADAPTER ***)(v10 + 2304),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF) )
  {
    if ( v95
      || *((_DWORD *)v34 + 4) == v76[0].Numerator
      && *((_DWORD *)v34 + 5) == v76[0].Denominator
      && *((_DWORD *)v34 + 6) == v74
      && *((_DWORD *)v34 + 7) == v76[1].Denominator
      && *((_DWORD *)v34 + 8) == *(_DWORD *)v77
      && (v52 = *((_DWORD *)v34 + 9), (((unsigned __int8)v52 ^ v77[4]) & 1) == 0)
      && (((unsigned __int8)v52 ^ v77[4]) & 2) == 0
      && (((unsigned __int8)v32 ^ *((_BYTE *)v34 + 40)) & 0xF) == 0 )
    {
      if ( *(_QWORD *)v34 == (_QWORD)v75 )
      {
        if ( (v35 = *((_DWORD *)v34 + 2), v35 == Format)
          || v35 == 21 && Format == D3DDDIFMT_X8R8G8B8
          || v35 == 22 && Format == D3DDDIFMT_A8R8G8B8 )
        {
          if ( (((unsigned __int8)v32 ^ *((_BYTE *)v34 + 40)) & 0x10) == 0
            && (((unsigned __int8)v32 ^ (unsigned __int8)*((_DWORD *)v34 + 10)) & 0x20) == 0
            && !DmmNeedTargetModeWireformatOrColorspaceChange((DXGADAPTER *)v10, v11, Format)
            && (v95 || *(_QWORD *)((char *)v34 + 44) == *(_QWORD *)&v77[12]) )
          {
            DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v11, a2, 0, 1u);
            v36 = DmmPowerOnTargetsFromSourceIfNecessary((void *const)v10, v11);
            v38 = v36;
            if ( v36 < 0 )
            {
              v58 = (_QWORD *)WdLogNewEntry5_WdError(v37);
              v58[3] = *(_QWORD *)(v10 + 2304);
              v58[4] = (unsigned int)v11;
              v58[5] = v38;
              WdLogEvent5_WdError(v58);
            }
            updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                        *(ADAPTER_DISPLAY **)(v10 + 2304),
                        this,
                        v11,
                        *((struct DXGADAPTERALLOCATION **)a2 + 6));
            v78 = 0LL;
            LODWORD(FunctionalVidPnWithEnabledVidPnSource) = updated;
            DxgkLogCodePointPacket(0x3Cu, updated, *(_DWORD *)(v10 + 268), v11, 0LL);
LABEL_27:
            if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
              goto LABEL_31;
            *((_DWORD *)this + v11 + 258) |= 0x200u;
            goto LABEL_29;
          }
        }
      }
    }
  }
  v78 = 0LL;
  DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)v10);
  FunctionalVidPnWithEnabledVidPnSource = DmmInterface;
  if ( DmmInterface < 0 )
  {
LABEL_46:
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v47[3] = FunctionalVidPnWithEnabledVidPnSource;
    v47[4] = this;
    v47[5] = *((unsigned int *)a2 + 4);
    v47[6] = a2;
    v47[7] = (unsigned int)v11;
    WdLogEvent5_WdError(v47);
    goto LABEL_29;
  }
  v54 = v78;
  v89 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0;
  v80[0] = 0;
  v86 = 0LL;
  v73[1] = 0;
  FunctionalVidPnWithEnabledVidPnSource = (int)CreateFunctionalVidPnWithEnabledVidPnSource(v78, v10, (unsigned int)v11);
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v80,
    v86,
    *(_QWORD *)(v54 + 64),
    v10);
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774925 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v57 = (unsigned int)v11;
    v56[3] = -1071774925LL;
LABEL_70:
    v56[4] = v57;
    v56[5] = (unsigned int)v75;
    v56[6] = DWORD1(v75);
    v56[7] = SDWORD2(v75);
    v59 = v56;
    goto LABEL_72;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774886 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v56[3] = (unsigned int)v11;
    v57 = *(_QWORD *)(v10 + 2304);
    goto LABEL_70;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource != -1071774970 )
  {
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v11, a2, 0, 1u);
      memset(v93, 0, 0x94uLL);
      v62 = v81;
      v73[0] = 0;
      v93[8] = 1 << v11;
      v63 = DmmSetTimingsOnAdapter(v10, v81, 0LL, 2LL, v93, v73, 0LL, 0LL);
      FunctionalVidPnWithEnabledVidPnSource = v63;
      if ( v63 < 0 )
      {
        v70 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v70[3] = FunctionalVidPnWithEnabledVidPnSource;
        v70[4] = *(_QWORD *)(v10 + 2304);
        v70[5] = (unsigned int)v11;
        v70[6] = a2;
        v70[7] = this;
        WdLogEvent5_WdError(v70);
      }
      else
      {
        DmmHandleSetTimingsResult((DXGADAPTER *)v10, (struct _DMM_SET_TIMING_RESULT *)v73, v90);
        if ( ((1 << v11) & v93[19]) != 0 )
          LODWORD(FunctionalVidPnWithEnabledVidPnSource) = v93[v11 + 20];
        Current = DXGPROCESS::GetCurrent();
        if ( !Current || !*((_BYTE *)Current + 306) )
        {
          Global = DXGGLOBAL::GetGlobal(v66);
          do
            v68 = _InterlockedIncrement((volatile signed __int32 *)Global + 208);
          while ( !v68 );
          ADAPTER_DISPLAY::SetDisplayId(
            *(ADAPTER_DISPLAY **)(v10 + 2304),
            (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
            v68);
          LOBYTE(v69) = 1;
          DxgkNotifyDisplayChange(v69);
          v62 = v81;
        }
      }
      if ( v80[0] )
        v82(v83, v62);
      goto LABEL_27;
    }
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v55);
    v61[4] = (unsigned int)v11;
    v61[5] = (unsigned int)v75;
    v61[6] = DWORD1(v75);
    v61[7] = SDWORD2(v75);
    v61[3] = FunctionalVidPnWithEnabledVidPnSource;
    WdLogEvent5_WdError(v61);
    if ( v80[0] )
      v82(v83, v81);
LABEL_29:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      v92 = 0LL;
      v91 = 1;
      DxgkStatusChangeNotify(&v91);
    }
    goto LABEL_31;
  }
  v60 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
  v60[3] = (unsigned int)v75;
  v60[4] = DWORD1(v75);
  v60[5] = SDWORD2(v75);
  v60[6] = v76[0].Numerator / v76[0].Denominator;
  v60[7] = (unsigned int)v11;
  v59 = v60;
LABEL_72:
  WdLogEvent5_WdDmmEvent(v59);
  if ( v80[0] )
    v82(v83, v81);
LABEL_31:
  *(_QWORD *)&v75 = *(_QWORD *)&v79.Width;
  DWORD2(v75) = v79.Format;
  if ( v79.RefreshRate.Denominator )
    HIDWORD(v75) = DmmMapVSyncFromRationalToInteger(&v79.RefreshRate, v74, 0LL);
  else
    HIDWORD(v75) = 0;
  v76[0] = v79.RefreshRate;
  v76[1].Numerator = v74;
  v76[1].Denominator = v85;
  v40 = DmmCacheDisplayModeChangeRequest(v10, (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF, &v75);
  v42 = v40;
  if ( v40 < 0 )
  {
    v72 = WdLogNewEntry5_WdError(v41);
    *(_QWORD *)(v72 + 24) = v42;
    WdLogEvent5_WdError(v72);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v87, 8);
  return (unsigned int)FunctionalVidPnWithEnabledVidPnSource;
}
