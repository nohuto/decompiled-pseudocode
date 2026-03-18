/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E2C88
 * Callers:
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E25F0 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C00072D8 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087DC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0008E88 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C0008FA0 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00AB1D4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00C69A0 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00C6E5C (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00C752C (MonitorGetEdidBaseBlockPtr.c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C01DCEBC (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C01E23F8 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C01E2580 (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E2778 (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E2898 (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@@Z @ 0x1C01E2A70 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@.c)
 */

__int64 __fastcall Win81::UpdateGdiInfoForVidPnSource(
        Win81 *this,
        const struct _DXGDMM_INTERFACE *a2,
        void *const a3,
        UINT a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(const struct _DXGDMM_INTERFACE *, D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *, D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *); // rax
  DXGADAPTER *v7; // rsi
  __int64 v8; // r14
  int v10; // eax
  __int64 v11; // rcx
  _OWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  unsigned int v23; // edi
  int v24; // eax
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(_QWORD, _QWORD, _QWORD, unsigned __int64 *); // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  int v32; // r15d
  bool v33; // r14
  int VideoOutputTechnology; // eax
  __int64 v35; // rcx
  __int64 v36; // rbx
  _QWORD *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // edi
  unsigned __int8 *EdidBaseBlockPtr; // r14
  int PreferredMode; // eax
  __int64 v43; // rcx
  __int64 v44; // rbx
  _QWORD *v45; // rax
  UINT APSTriggerBits; // r13d
  UINT v47; // r12d
  UINT v48; // r14d
  UINT cy; // esi
  __int64 v50; // rcx
  __int64 v51; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE cx; // eax
  unsigned __int32 VidPnSourceId; // r15d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY VidPnTargetId; // ebx
  char v55; // al
  __int64 v56; // r8
  __int64 v57; // r13
  int v58; // edx
  __int64 v59; // rax
  struct tagSIZE v60; // rdx
  int IsAudioAvailableInEdid; // eax
  __int64 v62; // rcx
  unsigned int v63; // ebx
  __int64 v64; // rax
  char v65; // si
  __int64 v66; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE ImportanceOrdinal; // ecx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v68; // eax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v69; // eax
  __int64 v70; // rdx
  struct _DPI_INFORMATION *v71; // r9
  _QWORD *v72; // rax
  struct tagSIZE v73; // r8
  unsigned int v74; // eax
  __int64 v75; // rax
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  struct _D3DKMDT_2DREGION *v81; // [rsp+28h] [rbp-E0h]
  struct _D3DKMDT_2DREGION v82; // [rsp+48h] [rbp-C0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v83[2]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v84; // [rsp+58h] [rbp-B0h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v85; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v86[6]; // [rsp+1C8h] [rbp+C0h] BYREF

  v6 = (__int64 (__fastcall *)(const struct _DXGDMM_INTERFACE *, D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *, D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *))*((_QWORD *)this + 6);
  v7 = a2;
  v8 = (unsigned int)a3;
  *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[36] = a2;
  v85.VidPnTargetColorCoeffDynamicRanges.FirstChannel = a4;
  *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[20] = (_DWORD)a3;
  *(_QWORD *)&v85.Content = 0LL;
  memset(&v85.CopyProtection.OEMCopyProtection[100], 0, 28);
  v85.CopyProtection.OEMCopyProtection[92] = 0;
  *(_QWORD *)&v85.ContentTransformation.ScalingSupport = 0LL;
  v10 = v6(a2, &v85.ContentTransformation.ScalingSupport, &v85.Content);
  v12 = (_OWORD *)v10;
  if ( v10 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = v7;
LABEL_3:
    v13[4] = v12;
LABEL_96:
    WdLogEvent5_WdError(v13);
    goto LABEL_105;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v85.CopyProtection.OEMCopyProtection[92],
    *(__int64 *)&v85.ContentTransformation.ScalingSupport,
    *((_QWORD *)this + 8),
    (__int64)v7);
  v14 = *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[100];
  *(_QWORD *)&v85.ContentTransformation.RotationSupport = 0LL;
  *(_QWORD *)&v85.VidPnTargetColorCoeffDynamicRanges.ThirdChannel = 0LL;
  v15 = (**(__int64 (__fastcall ***)(_QWORD, D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *, UINT *))&v85.Content)(
          *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[100],
          &v85.ContentTransformation.RotationSupport,
          &v85.VidPnTargetColorCoeffDynamicRanges.ThirdChannel);
  v12 = (_OWORD *)v15;
  if ( v15 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v13[3] = v14;
    goto LABEL_3;
  }
  *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[28] = 0LL;
  v17 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, UCHAR *))&v85.VidPnTargetColorCoeffDynamicRanges.ThirdChannel)(
          *(_QWORD *)&v85.ContentTransformation.RotationSupport,
          (unsigned int)v8,
          &v85.CopyProtection.OEMCopyProtection[28]);
  v12 = (_OWORD *)v17;
  if ( v17 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v13[3] = v8;
    v19 = *(_QWORD *)&v85.ContentTransformation.RotationSupport;
LABEL_95:
    v13[4] = v19;
    v13[5] = v12;
    goto LABEL_96;
  }
  memset(v86, 0, sizeof(v86));
  v21 = *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[28];
  v12 = (_OWORD *)a6;
  v22 = 0LL;
  *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[84] = 0LL;
  *(_OWORD *)&v85.GammaRamp.Type = v86[4];
  v23 = (*(_QWORD *)&v85.CopyProtection.OEMCopyProtection[28] > 1uLL) | *(_DWORD *)(a6 + 92) & 0x20;
  HIDWORD(v86[5]) = v23;
  if ( !*(_QWORD *)&v85.CopyProtection.OEMCopyProtection[28] )
  {
    *(_OWORD *)&v85.CopyProtection.OEMCopyProtection[244] = v86[1];
LABEL_98:
    if ( (v23 & 2) == 0
      || (v73 = (struct tagSIZE)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&v86[5]), 4)),
          v73.cx == 1234568) )
    {
      v74 = DWORD2(v86[0]);
    }
    else
    {
      v74 = Win81::AdjustDesktopScaleFactorForOverride(
              (Win81 *)0x64,
              v86[2],
              v73,
              (const struct Win81::DPI_SCALE_FACTOR_COLLECTION *)v20);
      DWORD2(v86[0]) = v74;
    }
    if ( !v74 )
    {
      v75 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v75 + 24) = 1048LL;
      WdLogEvent5_WdAssertion(v75);
    }
    v76 = *(_OWORD *)&v85.CopyProtection.OEMCopyProtection[244];
    *v12 = v86[0];
    v77 = v86[2];
    v12[1] = v76;
    v78 = v86[3];
    v12[2] = v77;
    v79 = *(_OWORD *)&v85.GammaRamp.Type;
    v12[3] = v78;
    v12[4] = v79;
    v12[5] = v86[5];
    LODWORD(v12) = 0;
    goto LABEL_105;
  }
  *(_OWORD *)&v85.CopyProtection.OEMCopyProtection[244] = v86[1];
  while ( 1 )
  {
    v82.cy = -1;
    BYTE2(v82.cx) = 0;
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, UINT *))(*(_QWORD *)&v85.VidPnTargetColorCoeffDynamicRanges.ThirdChannel
                                                                              + 8LL))(
            *(_QWORD *)&v85.ContentTransformation.RotationSupport,
            (unsigned int)v8,
            v22,
            &v82.cy);
    v12 = (_OWORD *)v24;
    if ( v24 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v19 = (unsigned int)v8;
      v13[3] = v22;
      goto LABEL_95;
    }
    v84 = 0LL;
    v26 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)&v85.VidPnTargetColorCoeffDynamicRanges.ThirdChannel
                                                                               + 24LL);
    memset(&v85.CopyProtection.OEMCopyProtection[52], 0, 28);
    v85.CopyProtection.OEMCopyProtection[44] = 0;
    v27 = v26(*(_QWORD *)&v85.ContentTransformation.RotationSupport, (unsigned int)v8, v82.cy, &v84);
    v12 = (_OWORD *)v27;
    if ( v27 < 0 )
      break;
    v29 = v84;
    if ( !v84 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v30 + 24) = 780LL;
      WdLogEvent5_WdAssertion(v30);
      v29 = v84;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v85.CopyProtection.OEMCopyProtection[44],
      v29,
      *(_QWORD *)(*(_QWORD *)&v85.VidPnTargetColorCoeffDynamicRanges.ThirdChannel + 32LL),
      *(__int64 *)&v85.ContentTransformation.RotationSupport);
    v31 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)(*(_QWORD *)&v85.CopyProtection.OEMCopyProtection[52] + 20LL));
    LOBYTE(v82.cx) = 0;
    v83[0] = D3DKMDT_VOT_UNINITIALIZED;
    v32 = v31;
    v33 = 0;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(v7, v82.cy, v83, 0LL);
    v36 = VideoOutputTechnology;
    if ( VideoOutputTechnology >= 0 )
    {
      v33 = IsInternalVideoOutput(v83[0]);
      LOBYTE(v82.cx) = v33;
    }
    else
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v35);
      v37[3] = v7;
      v37[4] = v82.cy;
      v37[5] = v36;
      WdLogEvent5_WdError(v37);
    }
    *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[16] = v33;
    v84 = 0LL;
    v85.VidPnTargetColorBasis = D3DKMDT_CB_UNINITIALIZED;
    v40 = (v23 ^ (v23 | (4 * v33))) & 4 ^ v23;
    EdidBaseBlockPtr = (unsigned __int8 *)MonitorGetEdidBaseBlockPtr(v7, v82.cy, v38, v39);
    *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[236] = EdidBaseBlockPtr;
    HIBYTE(v82.cx) = 0;
    *(_QWORD *)&v85.CopyProtection.APSTriggerBits = 0LL;
    *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[4] = 0;
    PreferredMode = EDID_V1_GetPreferredMode(
                      EdidBaseBlockPtr,
                      (struct DISPLAY_PREFERRED_MODE_INFO *)&v85.CopyProtection.APSTriggerBits);
    v44 = PreferredMode;
    if ( PreferredMode >= 0 )
    {
      HIBYTE(v82.cx) = 1;
    }
    else
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v43);
      v45[3] = v7;
      v45[4] = v82.cy;
      v45[5] = v44;
      WdLogEvent5_WdError(v45);
    }
    APSTriggerBits = v85.CopyProtection.APSTriggerBits;
    v47 = *(_DWORD *)v85.CopyProtection.OEMCopyProtection;
    v85.ContentTransformation.ScalingSupport = (D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)v85.CopyProtection.APSTriggerBits;
    v85.ContentTransformation.Rotation = *(_DWORD *)v85.CopyProtection.OEMCopyProtection;
    if ( ((v32 - 2) & 0xFFFFFFFD) == 0 )
    {
      APSTriggerBits = *(_DWORD *)v85.CopyProtection.OEMCopyProtection;
      v85.ContentTransformation.ScalingSupport = *(D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v85.CopyProtection.OEMCopyProtection;
      v47 = v85.CopyProtection.APSTriggerBits;
      v85.ContentTransformation.Rotation = v85.CopyProtection.APSTriggerBits;
    }
    if ( EdidBaseBlockPtr )
    {
      if ( (int)EDID_V1_GetPhysicalSize(
                  v43,
                  EdidBaseBlockPtr,
                  &v85.VisibleFromActiveBROffset.cy,
                  (unsigned int *)&v85.CopyProtection.OEMCopyProtection[12]) < 0 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v50);
        *(_QWORD *)(v51 + 24) = 839LL;
        WdLogEvent5_WdAssertion(v51);
      }
      cy = v85.VisibleFromActiveBROffset.cy;
      v48 = *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[12];
      v84 = __PAIR64__(*(unsigned int *)&v85.CopyProtection.OEMCopyProtection[12], v85.VisibleFromActiveBROffset.cy);
      if ( ((v32 - 2) & 0xFFFFFFFD) == 0 )
      {
        cy = *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[12];
        v84 = __PAIR64__(v85.VisibleFromActiveBROffset.cy, *(unsigned int *)&v85.CopyProtection.OEMCopyProtection[12]);
        v48 = v85.VisibleFromActiveBROffset.cy;
      }
      if ( cy && v48 )
      {
        if ( (int)(cy * v48) <= 16000 && !LOBYTE(v82.cx) )
        {
          v48 = 0;
          v85.VidPnTargetColorBasis = D3DKMDT_CB_INTENSITY;
          v40 |= 0x40u;
          v84 = 0LL;
          cy = 0;
LABEL_35:
          BYTE2(v82.cx) = (*(_BYTE *)(*(_QWORD *)&v85.CopyProtection.OEMCopyProtection[36] + 300LL) & 0x20) != 0;
          goto LABEL_36;
        }
      }
      else
      {
        v48 = 0;
        v84 = 0LL;
        cy = 0;
      }
    }
    else
    {
      v48 = HIDWORD(v84);
      v40 |= 8u;
      cy = v84;
    }
    if ( !cy )
      goto LABEL_35;
LABEL_36:
    LODWORD(v12) = DpiInternal::GetCurrentSourceResolution(
                     *(DpiInternal **)&v85.CopyProtection.OEMCopyProtection[100],
                     *(struct D3DKMDT_HVIDPN__ *const *)&v85.Content,
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v85.CopyProtection.OEMCopyProtection[52],
                     &v85);
    if ( (int)v12 < 0 )
      goto LABEL_92;
    BYTE1(v82.cx) = 0;
    LODWORD(v12) = DpiInternal::GetCurrentTargetResolution(
                     *(DpiInternal **)&v85.CopyProtection.OEMCopyProtection[100],
                     *(struct D3DKMDT_HVIDPN__ *const *)&v85.Content,
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v85.CopyProtection.OEMCopyProtection[52],
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v85.VisibleFromActiveTLOffset.cy,
                     (struct _D3DKMDT_2DREGION *)((char *)&v82 + 1));
    if ( (int)v12 < 0 )
      goto LABEL_92;
    cx = v85.VisibleFromActiveBROffset.cx;
    if ( ((v32 - 2) & 0xFFFFFFFD) != 0 )
    {
      v83[0] = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v85.VisibleFromActiveBROffset.cx;
      cx = v85.VisibleFromActiveTLOffset.cy;
    }
    else
    {
      v83[0] = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v85.VisibleFromActiveTLOffset.cy;
      v85.VisibleFromActiveTLOffset.cy = v85.VisibleFromActiveBROffset.cx;
      v85.VisibleFromActiveBROffset.cx = v83[0];
    }
    VidPnSourceId = v85.VidPnSourceId;
    v85.ImportanceOrdinal = cx;
    if ( (v40 & 1) != 0 && APSTriggerBits && v47 )
    {
      VidPnTargetId = v85.VidPnTargetId;
      if ( BYTE1(v82.cx) )
      {
        VidPnTargetId = v85.VidPnTargetId >> 1;
        v85.VidPnTargetId >>= 1;
      }
      if ( v85.VidPnSourceId >= 2 * APSTriggerBits || VidPnTargetId >= 2 * v47 )
        v55 = 2;
      else
        v55 = 0;
      v40 ^= ((unsigned __int8)v40 ^ (unsigned __int8)(v40 | v55)) & 2;
      if ( BYTE1(v82.cx) )
      {
        VidPnTargetId *= 2;
        v85.VidPnTargetId = VidPnTargetId;
      }
    }
    else
    {
      VidPnTargetId = v85.VidPnTargetId;
    }
    memset(&v85.CopyProtection.OEMCopyProtection[140], 0, 0x60uLL);
    v57 = *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[52];
    *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[224] = a5;
    *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[172] = v85.VidPnSourceId;
    v58 = *(_DWORD *)(*(_QWORD *)&v85.CopyProtection.OEMCopyProtection[52] + 12LL);
    *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[176] = VidPnTargetId;
    if ( v58 != 1 )
    {
      switch ( v58 )
      {
        case 2:
          goto LABEL_81;
        case 3:
          break;
        case 4:
LABEL_81:
          v56 = (unsigned int)v83[0];
          if ( v58 == 4 )
          {
            ImportanceOrdinal = v85.ImportanceOrdinal;
            if ( cy * VidPnTargetId <= v48 * v85.VidPnSourceId )
            {
              v85.VidPnSourceId = v85.ImportanceOrdinal;
              v69 = VidPnTargetId * v85.ImportanceOrdinal / VidPnSourceId;
              VidPnSourceId = v85.ImportanceOrdinal;
              VidPnTargetId = v69;
              v85.VidPnTargetId = v69;
            }
            else
            {
              v68 = v85.VidPnSourceId * v83[0] / VidPnTargetId;
              VidPnTargetId = v83[0];
              VidPnSourceId = v68;
              v85.VidPnSourceId = v68;
              v85.VidPnTargetId = v83[0];
            }
          }
          else
          {
            ImportanceOrdinal = v85.ImportanceOrdinal;
          }
          cy = cy * VidPnSourceId / ImportanceOrdinal;
          v48 = v48 * VidPnTargetId / v83[0];
          break;
        default:
          if ( v58 != 5 )
          {
            if ( v58 == 255 )
              break;
            v59 = WdLogNewEntry5_WdAssertion((unsigned int)(v58 - 5));
            *(_QWORD *)(v59 + 24) = *(int *)(v57 + 12);
            WdLogEvent5_WdAssertion(v59);
          }
          v40 |= 0x100u;
          break;
      }
    }
    v60 = (struct tagSIZE)*(unsigned int *)(v57 + 20);
    *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[164] = cy;
    *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[168] = v48;
    if ( (unsigned int)(v60.cx - 5) <= 0xB )
      v60 = (struct tagSIZE)(unsigned int)((v60.cx - 1) % 4 + 1);
    v23 = (((v60.cx - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v40 & 0xFFFFFF7F;
    HIDWORD(v86[5]) = v23;
    if ( !BYTE2(v82.cx)
      && v85.VidPnTargetColorBasis == D3DKMDT_CB_UNINITIALIZED
      && *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[236]
      && HIBYTE(v82.cx) )
    {
      IsAudioAvailableInEdid = DpiInternal::IsAudioAvailableInEdid(
                                 *(DpiInternal **)&v85.CopyProtection.OEMCopyProtection[36],
                                 (void *)v82.cy,
                                 v56,
                                 4LL);
      LODWORD(v81) = v85.CopyProtection.OEMCopyProtection[4];
      v23 = v23 & 0xFFFFFFEF | (16
                              * (unsigned __int8)Win81::DetermineViewDistance(
                                                   *(Win81 **)&v85.CopyProtection.OEMCopyProtection[36],
                                                   &v84,
                                                   (const struct tagSIZE *)*(unsigned int *)&v85.CopyProtection.OEMCopyProtection[16],
                                                   (int)&v85.ContentTransformation.ScalingSupport,
                                                   (const struct tagSIZE *)v81,
                                                   IsAudioAvailableInEdid,
                                                   (unsigned int *)&v85.CopyProtection.OEMCopyProtection[204]));
      v63 = *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[204];
      HIDWORD(v86[5]) = v23;
      if ( !*(_DWORD *)&v85.CopyProtection.OEMCopyProtection[204] )
      {
        v64 = WdLogNewEntry5_WdAssertion(v62);
        *(_QWORD *)(v64 + 24) = 1004LL;
        WdLogEvent5_WdAssertion(v64);
      }
LABEL_69:
      v65 = v82.cx;
      goto LABEL_70;
    }
    v63 = 0;
    *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[204] = 0;
    if ( !BYTE2(v82.cx) )
      goto LABEL_69;
    v65 = v82.cx;
    if ( LOBYTE(v82.cx) )
    {
      Win81::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(Win81 **)&v85.CopyProtection.OEMCopyProtection[172],
        v60,
        (__int64)&v85.CopyProtection.OEMCopyProtection[140],
        (struct _DPI_INFORMATION *)4);
      Win81::FillOverridesAndAdjustedScaleFactor(
        (Win81 *)v85.VidPnTargetColorCoeffDynamicRanges.FirstChannel,
        v70,
        (__int64)&v85.CopyProtection.OEMCopyProtection[140],
        v71);
      v23 |= 0x400u;
      HIDWORD(v86[5]) = v23;
      goto LABEL_71;
    }
LABEL_70:
    Win81::FillDpiInfo(
      (Win81 *)&v85.CopyProtection.OEMCopyProtection[164],
      (const struct tagSIZE *)&v85.CopyProtection.OEMCopyProtection[172],
      (const struct tagSIZE *)v63,
      v85.VidPnTargetColorCoeffDynamicRanges.FirstChannel,
      (unsigned int)v81,
      (__int64)&v85.CopyProtection.OEMCopyProtection[140]);
LABEL_71:
    if ( *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[232] )
    {
      v66 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v66 + 24) = 1021LL;
      WdLogEvent5_WdAssertion(v66);
    }
    *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[232] = v23;
    if ( v65
      || (v23 & 4) == 0
      && (v20 = 2LL,
          (DWORD2(v86[3]) + HIDWORD(v86[3])) / 2 <= (*(_DWORD *)&v85.CopyProtection.OEMCopyProtection[196]
                                                   + *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[200])
                                                  / 2) )
    {
      v86[0] = *(_OWORD *)&v85.CopyProtection.OEMCopyProtection[140];
      *(_OWORD *)&v85.CopyProtection.OEMCopyProtection[244] = *(_OWORD *)&v85.CopyProtection.OEMCopyProtection[156];
      v86[2] = *(_OWORD *)&v85.CopyProtection.OEMCopyProtection[172];
      *(_OWORD *)&v85.GammaRamp.Type = *(_OWORD *)&v85.CopyProtection.OEMCopyProtection[204];
      v86[5] = *(_OWORD *)&v85.CopyProtection.OEMCopyProtection[220];
      v23 = *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[232];
      v86[3] = *(_OWORD *)&v85.CopyProtection.OEMCopyProtection[188];
    }
    if ( v85.CopyProtection.OEMCopyProtection[44] )
      (*(void (__fastcall **)(_QWORD, __int64))&v85.CopyProtection.OEMCopyProtection[60])(
        *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[68],
        v57);
    v7 = *(DXGADAPTER **)&v85.CopyProtection.OEMCopyProtection[36];
    v22 = *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[84] + 1LL;
    LODWORD(v8) = *(_DWORD *)&v85.CopyProtection.OEMCopyProtection[20];
    *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[84] = v22;
    if ( v22 >= *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[28] )
    {
      v12 = (_OWORD *)a6;
      goto LABEL_98;
    }
  }
  v72 = (_QWORD *)WdLogNewEntry5_WdError(v28);
  v72[3] = (unsigned int)v8;
  v72[4] = v82.cy;
  v72[5] = v12;
  WdLogEvent5_WdError(v72);
LABEL_92:
  if ( v85.CopyProtection.OEMCopyProtection[44] )
    (*(void (__fastcall **)(_QWORD, _QWORD))&v85.CopyProtection.OEMCopyProtection[60])(
      *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[68],
      *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[52]);
LABEL_105:
  if ( v85.CopyProtection.OEMCopyProtection[92] )
    (*(void (__fastcall **)(_QWORD, _QWORD))&v85.CopyProtection.OEMCopyProtection[108])(
      *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[116],
      *(_QWORD *)&v85.CopyProtection.OEMCopyProtection[100]);
  return (unsigned int)v12;
}
