/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00E2B88
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00E2A20 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0006980 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000BC54 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C000C214 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C000C330 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C000C3B4 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C000C4DC (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C000C5B8 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000C844 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C000C954 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C002C458 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00B3F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00E3640 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C00E3D80 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1C00E3E48 (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00E41A0 (MonitorGetMonitorDeviceInterfaceName.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00E42A4 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00E4988 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00E4B54 (MonitorGetEdidBaseBlockPtr.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00E4C28 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C00E4CF4 (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C00E4F04 (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C0110A74 (DpiReadPnpRegistryValue.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C01210C0 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 *     ?GetSquareRoot@@YA_K_K@Z @ 0x1C01AEA64 (-GetSquareRoot@@YA_K_K@Z.c)
 *     ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1C01D4158 (-GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z.c)
 *     ?LookupDisplayDiagonal@@YAJPEAK@Z @ 0x1C01D43F0 (-LookupDisplayDiagonal@@YAJPEAK@Z.c)
 */

__int64 __fastcall UpdateGdiInfoForVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        char *a2,
        unsigned int a3,
        int a4,
        struct _GDIINFO *a5,
        D3DDDI_GAMMA_RAMP_RGB256x3x16 *a6)
{
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // r14
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(char *, D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *, UCHAR *); // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  DpiInternal *v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // r12
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  unsigned int v25; // ebx
  BOOL v26; // eax
  unsigned int v27; // edi
  int v28; // eax
  unsigned int v29; // edi
  unsigned __int64 v30; // rdx
  int v31; // eax
  bool v32; // r14
  int v33; // eax
  __int64 v34; // rcx
  __int64 (__fastcall *v35)(__int64, _QWORD, _QWORD, struct tagSIZE *); // rax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // esi
  int VideoOutputTechnology; // eax
  __int64 v41; // rcx
  __int64 v42; // rbx
  int v43; // edi
  unsigned __int8 *EdidBaseBlockPtr; // r14
  int PreferredMode; // eax
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rcx
  UINT cx; // esi
  UINT APSTriggerBits; // r14d
  D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY VidPnSourceId; // ebx
  unsigned int v53; // ebx
  int v54; // edx
  int v55; // r8d
  unsigned int v56; // edi
  __int64 v57; // rcx
  int v58; // eax
  unsigned int v59; // ecx
  int v60; // r8d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v61; // r9d
  unsigned int v62; // r10d
  unsigned int v63; // eax
  unsigned int v64; // esi
  unsigned int v65; // eax
  char v66; // r14
  struct tagSIZE v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  bool PreferredScaleFactorForMonitor; // al
  struct tagSIZE v71; // rdx
  __int64 v72; // rcx
  struct tagSIZE v73; // rdx
  int v74; // eax
  int v75; // r8d
  int MonitorDeviceInterfaceName; // eax
  __int64 v77; // rcx
  unsigned int *v78; // r8
  __int64 v79; // rbx
  __m128i v80; // xmm1
  __int64 v81; // rcx
  unsigned int v82; // eax
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int64 v86; // rax
  _QWORD *v87; // rax
  bool v88; // zf
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rax
  __int64 v98; // r10
  __int64 v99; // rbx
  unsigned __int64 SquareRoot; // rax
  unsigned __int64 v101; // rcx
  __int64 v102; // r10
  unsigned __int64 v103; // r12
  unsigned __int64 v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rax
  EDIDCACHE *v107; // rcx
  char v108; // al
  __int64 v109; // rax
  unsigned int v110; // r8d
  unsigned __int32 v111; // ecx
  unsigned __int32 v112; // eax
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rax
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  __int64 cy; // rcx
  int v119; // edx
  int v120; // eax
  __int64 v121; // rdx
  int v122; // eax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v123; // r9
  __int64 v124; // rax
  struct _D3DKMDT_2DREGION *v125; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v126; // [rsp+20h] [rbp-E0h]
  unsigned int v127; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v128; // [rsp+28h] [rbp-D8h]
  int v129; // [rsp+30h] [rbp-D0h]
  bool v130; // [rsp+40h] [rbp-C0h]
  int v131; // [rsp+44h] [rbp-BCh] BYREF
  struct _D3DKMDT_2DREGION v132; // [rsp+48h] [rbp-B8h] BYREF
  struct tagSIZE v133; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v134; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v135; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v136; // [rsp+64h] [rbp-9Ch]
  unsigned int v137; // [rsp+68h] [rbp-98h] BYREF
  __int64 v138; // [rsp+70h] [rbp-90h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v139; // [rsp+78h] [rbp-88h] BYREF
  __int128 v140; // [rsp+1E0h] [rbp+E0h]
  struct tagSIZE v141[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  _OWORD v142[6]; // [rsp+210h] [rbp+110h] BYREF
  wchar_t pszDest[128]; // [rsp+270h] [rbp+170h] BYREF

  pRgb256x3x16 = a6;
  v8 = a3;
  *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[124] = a5;
  v9 = (__int64 (__fastcall *)(char *, D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *, UCHAR *))*((_QWORD *)a1 + 6);
  *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[24] = a4;
  *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[116] = a3;
  v139.GammaRamp.Data.pRgb256x3x16 = a6;
  *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[52] = 0LL;
  memset(&v139.VisibleFromActiveBROffset.cy, 0, 28);
  LOBYTE(v139.VisibleFromActiveTLOffset.cy) = 0;
  *(_QWORD *)&v139.ImportanceOrdinal = 0LL;
  v11 = v9(a2, &v139.ImportanceOrdinal, &v139.CopyProtection.OEMCopyProtection[52]);
  v13 = v11;
  if ( v11 < 0 )
  {
    v86 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v86 + 24) = a2;
    *(_QWORD *)(v86 + 32) = v13;
    WdLogEvent5_WdError(v86);
    return (unsigned int)v13;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v139.VisibleFromActiveTLOffset.cy,
    *(__int64 *)&v139.ImportanceOrdinal,
    *((_QWORD *)a1 + 8),
    (__int64)a2);
  v14 = *(DpiInternal **)&v139.VisibleFromActiveBROffset.cy;
  v138 = 0LL;
  *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[36] = 0LL;
  v15 = (**(__int64 (__fastcall ***)(_QWORD, __int64 *, UCHAR *))&v139.CopyProtection.OEMCopyProtection[52])(
          *(_QWORD *)&v139.VisibleFromActiveBROffset.cy,
          &v138,
          &v139.CopyProtection.OEMCopyProtection[36]);
  v13 = v15;
  if ( v15 < 0 )
  {
    v87 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v87[3] = v14;
    v87[4] = v13;
LABEL_95:
    WdLogEvent5_WdError(v87);
    goto LABEL_96;
  }
  *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[108] = 0LL;
  v17 = (**(__int64 (__fastcall ***)(__int64, _QWORD, UCHAR *))&v139.CopyProtection.OEMCopyProtection[36])(
          v138,
          (unsigned int)v8,
          &v139.CopyProtection.OEMCopyProtection[108]);
  v13 = v17;
  if ( v17 < 0 )
  {
    v87 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v87[3] = v8;
    v87[4] = v138;
    v87[5] = v13;
    goto LABEL_95;
  }
  LODWORD(v13) = GetCurrentContentResolution(
                   a2,
                   v8,
                   (const struct tagRECT **)&v139.CopyProtection.OEMCopyProtection[44],
                   (struct tagRECT *)&v139.ContentTransformation.ScalingSupport,
                   (unsigned int *)&v139.CopyProtection.OEMCopyProtection[12]);
  if ( (int)v13 < 0 )
  {
LABEL_96:
    v88 = LOBYTE(v139.VisibleFromActiveTLOffset.cy) == 0;
    goto LABEL_98;
  }
  v20 = *(_DWORD **)&v139.CopyProtection.OEMCopyProtection[44];
  if ( !*(_QWORD *)&v139.CopyProtection.OEMCopyProtection[44] )
  {
    v89 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v89 + 24) = 1904LL;
    WdLogEvent5_WdAssertion(v89);
  }
  v21 = (unsigned int)(v20[2] - *v20);
  if ( v20[2] - *v20 <= 0 || (v21 = (unsigned int)(v20[3] - v20[1]), v20[3] - v20[1] <= 0) )
  {
    v90 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v90 + 24) = 1907LL;
    WdLogEvent5_WdAssertion(v90);
  }
  v137 = 0;
  memset(v141, 0, sizeof(v141));
  v22 = QueryWin32DpiValues(&v137, (struct _DPI_SCALE_FACTOR_COLLECTION *)v141);
  v24 = v22;
  if ( v22 < 0 )
  {
    v91 = WdLogNewEntry5_WdAssertion(v23);
    *(_QWORD *)(v91 + 24) = 1913LL;
    WdLogEvent5_WdAssertion(v91);
    v93 = WdLogNewEntry5_WdError(v92);
    *(_QWORD *)(v93 + 24) = v24;
    WdLogEvent5_WdError(v93);
  }
  v25 = 0;
  *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[32] = 0;
  memset(&v139.CopyProtection.OEMCopyProtection[156], 0, 0x60uLL);
  v26 = *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[108] > 1uLL
     || *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[12] > 1u;
  v27 = v26 | *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[248] & 0xFFFFFFFE;
  if ( *v20 || (v28 = 32, v20[1]) )
    v28 = 0;
  v29 = v28 | v27 & 0xFFFFFFDF;
  v30 = 0LL;
  v31 = dword_1C00607D4;
  *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[248] = v29;
  if ( (v29 & 0x20) != 0 )
    v31 = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[24];
  dword_1C00607D4 = v31;
  *(_QWORD *)&v139.ImportanceOrdinal = 0LL;
  v140 = *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[220];
  if ( !*(_QWORD *)&v139.CopyProtection.OEMCopyProtection[108] )
  {
    v80 = *(__m128i *)&v139.CopyProtection.OEMCopyProtection[172];
    *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[252] = *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[172];
LABEL_78:
    v81 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v80, 8));
    if ( (_DWORD)v81 )
    {
      v119 = _mm_cvtsi128_si32(_mm_srli_si128(v80, 12));
      if ( v119 )
      {
        if ( (v29 & 0x80u) == 0 )
        {
          v122 = 1000 * v81;
          v81 = *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[124];
          *(_DWORD *)(*(_QWORD *)&v139.CopyProtection.OEMCopyProtection[124] + 8LL) = v122;
          *(_DWORD *)(v81 + 12) = 1000 * v119;
        }
        else
        {
          v120 = 1000 * v119;
          v121 = *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[124];
          *(_DWORD *)(*(_QWORD *)&v139.CopyProtection.OEMCopyProtection[124] + 8LL) = v120;
          *(_DWORD *)(v121 + 12) = 1000 * v81;
        }
      }
    }
    if ( (v29 & 2) == 0
      || (v123 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(
                                                                              _mm_srli_si128(
                                                                                _mm_load_si128((const __m128i *)&v139.CopyProtection.OEMCopyProtection[236]),
                                                                                4)),
          (_DWORD)v123 == 1234568) )
    {
      v82 = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[164];
    }
    else
    {
      v82 = DpiInternal::AdjustDesktopScaleFactorForOverride(
              (DpiInternal *)0x64,
              *(int *)&v139.CopyProtection.OEMCopyProtection[188],
              (struct tagSIZE)v141,
              v123);
      *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[164] = v82;
    }
    if ( v25 )
    {
      v82 = v25;
      *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[164] = v25;
      *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[240] = 1234567;
    }
    if ( !v82 )
    {
      v124 = WdLogNewEntry5_WdAssertion(v81);
      *(_QWORD *)(v124 + 24) = 2361LL;
      WdLogEvent5_WdAssertion(v124);
    }
    v83 = *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[204];
    *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[156] = 100;
    *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[160] = 100;
    *(_OWORD *)pRgb256x3x16->Red = *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[156];
    *(_OWORD *)&pRgb256x3x16->Red[8] = *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[252];
    *(_OWORD *)&pRgb256x3x16->Red[16] = *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[188];
    v84 = v140;
    *(_OWORD *)&pRgb256x3x16->Red[24] = v83;
    *(_OWORD *)&pRgb256x3x16->Red[32] = v84;
    *(_OWORD *)&pRgb256x3x16->Red[40] = *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[236];
    if ( LOBYTE(v139.VisibleFromActiveTLOffset.cy) )
      (*(void (__fastcall **)(_QWORD, DpiInternal *, _QWORD))&v139.VidPnTargetColorCoeffDynamicRanges.FirstChannel)(
        *(_QWORD *)&v139.VidPnTargetColorCoeffDynamicRanges.ThirdChannel,
        v14,
        0LL);
    return 0LL;
  }
  v32 = 0;
  *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[252] = *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[172];
  while ( 1 )
  {
    v132.cy = -1;
    BYTE1(v132.cx) = 0;
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, UINT *))(*(_QWORD *)&v139.CopyProtection.OEMCopyProtection[36]
                                                                               + 8LL))(
            v138,
            (unsigned int)v8,
            v30,
            &v132.cy);
    v13 = v33;
    if ( v33 < 0 )
    {
      v117 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v117[3] = *(_QWORD *)&v139.ImportanceOrdinal;
      cy = (unsigned int)v8;
      goto LABEL_160;
    }
    v133 = 0LL;
    v35 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct tagSIZE *))(*(_QWORD *)&v139.CopyProtection.OEMCopyProtection[36]
                                                                              + 24LL);
    memset(&v139.CopyProtection.OEMCopyProtection[76], 0, 28);
    v139.CopyProtection.OEMCopyProtection[68] = 0;
    v36 = v35(v138, (unsigned int)v8, v132.cy, &v133);
    v13 = v36;
    if ( v36 < 0 )
    {
      v117 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v117[3] = (unsigned int)v8;
      cy = v132.cy;
LABEL_160:
      v117[4] = cy;
      v117[5] = v13;
      WdLogEvent5_WdError(v117);
      v88 = LOBYTE(v139.VisibleFromActiveTLOffset.cy) == 0;
      goto LABEL_98;
    }
    v38 = (__int64)v133;
    if ( !*(_QWORD *)&v133 )
    {
      v94 = WdLogNewEntry5_WdAssertion(v37);
      *(_QWORD *)(v94 + 24) = 1969LL;
      WdLogEvent5_WdAssertion(v94);
      v38 = (__int64)v133;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v139.CopyProtection.OEMCopyProtection[68],
      v38,
      *(_QWORD *)(*(_QWORD *)&v139.CopyProtection.OEMCopyProtection[36] + 32LL),
      v138);
    v131 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)&v139.CopyProtection.OEMCopyProtection[76]
                                                                                   + 20LL));
    v130 = 0;
    v39 = v131;
    v134 = D3DKMDT_VOT_UNINITIALIZED;
    VideoOutputTechnology = DmmGetVideoOutputTechnology((DXGADAPTER *)a2, v132.cy, &v134, 0LL);
    v42 = VideoOutputTechnology;
    if ( VideoOutputTechnology < 0 )
    {
      v95 = (_QWORD *)WdLogNewEntry5_WdError(v41);
      v95[3] = a2;
      v95[4] = v132.cy;
      v95[5] = v42;
      WdLogEvent5_WdError(v95);
    }
    else
    {
      v32 = IsInternalVideoOutput(v134);
      v130 = v32;
    }
    *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[148] = v32;
    *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[28] = 0;
    v133 = 0LL;
    v43 = ((unsigned __int8)v29 ^ (unsigned __int8)(v29 | (4 * v32))) & 4 ^ v29;
    EdidBaseBlockPtr = (unsigned __int8 *)MonitorGetEdidBaseBlockPtr((DXGADAPTER *)a2, v132.cy);
    v139.GammaRamp.DataSize = (SIZE_T)EdidBaseBlockPtr;
    *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[132] = 0LL;
    *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[140] = 0;
    BYTE2(v132.cx) = 0;
    PreferredMode = EDID_V1_GetPreferredMode(
                      EdidBaseBlockPtr,
                      (struct DISPLAY_PREFERRED_MODE_INFO *)&v139.CopyProtection.OEMCopyProtection[132]);
    v47 = PreferredMode;
    if ( PreferredMode < 0 )
    {
      v96 = (_QWORD *)WdLogNewEntry5_WdError(v46);
      v96[3] = a2;
      v96[4] = v132.cy;
      v96[5] = v47;
      WdLogEvent5_WdError(v96);
    }
    else
    {
      BYTE2(v132.cx) = 1;
    }
    *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[16] = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[132];
    *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[60] = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[132];
    *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[20] = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[136];
    *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[64] = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[136];
    if ( ((v39 - 2) & 0xFFFFFFFD) == 0 )
    {
      *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[20] = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[132];
      *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[64] = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[132];
      *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[16] = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[136];
      *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[60] = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[136];
    }
    if ( !EdidBaseBlockPtr )
    {
      v43 |= 8u;
      APSTriggerBits = v133.cy;
      cx = v133.cx;
      *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[188] = *(_DWORD *)(*(_QWORD *)&v139.CopyProtection.OEMCopyProtection[124]
                                                                         + 16LL);
      *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[192] = *(_DWORD *)(*(_QWORD *)&v139.CopyProtection.OEMCopyProtection[124]
                                                                         + 20LL);
LABEL_37:
      if ( cx )
        goto LABEL_39;
      goto LABEL_38;
    }
    if ( (int)EDID_V1_GetPhysicalSize(
                *(unsigned int *)&v139.CopyProtection.OEMCopyProtection[136],
                EdidBaseBlockPtr,
                &v139.CopyProtection.APSTriggerBits,
                (unsigned int *)&v139.CopyProtection.OEMCopyProtection[152]) < 0 )
    {
      v97 = WdLogNewEntry5_WdAssertion(v48);
      *(_QWORD *)(v97 + 24) = 2030LL;
      WdLogEvent5_WdAssertion(v97);
    }
    cx = v139.CopyProtection.APSTriggerBits;
    APSTriggerBits = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[152];
    v133.cx = v139.CopyProtection.APSTriggerBits;
    v133.cy = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[152];
    if ( ((v131 - 2) & 0xFFFFFFFD) == 0 )
    {
      cx = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[152];
      v133.cx = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[152];
      APSTriggerBits = v139.CopyProtection.APSTriggerBits;
      v133.cy = v139.CopyProtection.APSTriggerBits;
    }
    if ( !cx || !APSTriggerBits )
    {
      APSTriggerBits = 0;
      v133 = 0LL;
      cx = 0;
      goto LABEL_37;
    }
    if ( (int)(cx * APSTriggerBits) > 16000 || v130 )
      goto LABEL_37;
    v43 |= 0x40u;
    *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[28] = 1;
    APSTriggerBits = 0;
    v133 = 0LL;
    cx = 0;
LABEL_38:
    BYTE1(v132.cx) = (a2[300] & 0x20) != 0;
LABEL_39:
    LODWORD(v13) = DpiInternal::GetCurrentSourceResolution(
                     v14,
                     *(struct D3DKMDT_HVIDPN__ *const *)&v139.CopyProtection.OEMCopyProtection[52],
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v139.CopyProtection.OEMCopyProtection[76],
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v135,
                     v125);
    if ( (int)v13 < 0 )
      break;
    LOBYTE(v132.cx) = 0;
    LODWORD(v13) = DpiInternal::GetCurrentTargetResolution(
                     v14,
                     *(struct D3DKMDT_HVIDPN__ *const *)&v139.CopyProtection.OEMCopyProtection[52],
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v139.CopyProtection.OEMCopyProtection[76],
                     &v139,
                     &v132,
                     v128);
    if ( (int)v13 < 0 )
    {
      if ( v139.CopyProtection.OEMCopyProtection[68] )
        (*(void (__fastcall **)(_QWORD, _QWORD))&v139.CopyProtection.OEMCopyProtection[84])(
          *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[92],
          *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[76]);
      v88 = LOBYTE(v139.VisibleFromActiveTLOffset.cy) == 0;
      goto LABEL_98;
    }
    if ( ((v131 - 2) & 0xFFFFFFFD) != 0 )
    {
      VidPnTargetId = v139.VidPnTargetId;
      VidPnSourceId = v139.VidPnSourceId;
    }
    else
    {
      VidPnTargetId = v139.VidPnSourceId;
      VidPnSourceId = v139.VidPnTargetId;
      v139.VidPnSourceId = v139.VidPnTargetId;
      v139.VidPnTargetId = VidPnTargetId;
    }
    v134 = VidPnSourceId;
    v131 = VidPnTargetId;
    if ( g_IsMobileCore )
    {
      *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[4] = 0LL;
      if ( (int)GetPhysicalDisplaySizeOverride((struct tagSIZE *)&v139.CopyProtection.OEMCopyProtection[4]) < 0 )
      {
        if ( v130 )
        {
          *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[4] = 0;
          if ( (int)LookupDisplayDiagonal((unsigned int *)&v139.CopyProtection.OEMCopyProtection[4]) >= 0
            && (unsigned int)VidPnSourceId < 0x20000
            && (unsigned int)v131 < 0x20000 )
          {
            v98 = (unsigned int)(1000 * VidPnSourceId);
            v99 = (unsigned int)(1000 * v131);
            SquareRoot = GetSquareRoot(v98 * (unsigned int)v98 + v99 * v99);
            v101 = v99 * *(unsigned int *)&v139.CopyProtection.OEMCopyProtection[4];
            v103 = (v102 * (unsigned __int64)*(unsigned int *)&v139.CopyProtection.OEMCopyProtection[4] / SquareRoot
                  + 500)
                 / 0x3E8;
            v104 = (v101 / SquareRoot + 500) / 0x3E8;
            if ( v103 >= 0x7FFFFFFF )
            {
              v105 = WdLogNewEntry5_WdAssertion(v101);
              *(_QWORD *)(v105 + 24) = 2131LL;
              WdLogEvent5_WdAssertion(v105);
            }
            if ( v104 >= 0x7FFFFFFF )
            {
              v106 = WdLogNewEntry5_WdAssertion(v101);
              *(_QWORD *)(v106 + 24) = 2132LL;
              WdLogEvent5_WdAssertion(v106);
            }
            if ( v103 < 0x7FFFFFFF && v104 < 0x7FFFFFFF )
            {
              cx = v103;
              v133.cx = v103;
              APSTriggerBits = v104;
              v133.cy = v104;
              v107 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v101) + 85);
              if ( v107 )
                EDIDCACHE::SetPhysicalDimensionOfInternalPanel(v107, v103, v104, 1u);
            }
            v20 = *(_DWORD **)&v139.CopyProtection.OEMCopyProtection[44];
          }
        }
      }
      else
      {
        v133 = *(struct tagSIZE *)&v139.CopyProtection.OEMCopyProtection[4];
        cx = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[4];
        APSTriggerBits = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[8];
      }
    }
    if ( (v43 & 1) != 0
      && *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[12] <= 1u
      && *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[16]
      && *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[20] )
    {
      v53 = v136;
      if ( LOBYTE(v132.cx) )
      {
        v53 = v136 >> 1;
        v136 >>= 1;
      }
      if ( v135 >= 2 * *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[16]
        || (v108 = 0, v53 >= 2 * *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[20]) )
      {
        v108 = 2;
      }
      v43 ^= ((unsigned __int8)v43 ^ (unsigned __int8)(v43 | v108)) & 2;
      if ( LOBYTE(v132.cx) )
      {
        v53 *= 2;
        v136 = v53;
      }
    }
    else
    {
      v53 = v136;
    }
    memset(v142, 0, sizeof(v142));
    DWORD1(v142[5]) = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[24];
    v54 = *(_DWORD *)(*(_QWORD *)&v139.CopyProtection.OEMCopyProtection[76] + 20LL);
    if ( (unsigned int)(v54 - 5) <= 0xB )
      v54 = (v54 - 1) % 4 + 1;
    v55 = v20[2] - *v20;
    LODWORD(v142[2]) = v55;
    v56 = (((v54 - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v43 & 0xFFFFFF7F;
    v57 = (unsigned int)(v20[3] - v20[1]);
    DWORD1(v142[2]) = v20[3] - v20[1];
    if ( ((v54 - 2) & 0xFFFFFFFD) == 0 )
      *(_QWORD *)&v142[2] = __PAIR64__(v55, v57);
    v58 = *(_DWORD *)(*(_QWORD *)&v139.CopyProtection.OEMCopyProtection[76] + 12LL);
    if ( v58 <= 0 )
    {
LABEL_140:
      v109 = WdLogNewEntry5_WdAssertion(v57);
      *(_QWORD *)(v109 + 24) = *(int *)(*(_QWORD *)&v139.CopyProtection.OEMCopyProtection[76] + 12LL);
      WdLogEvent5_WdAssertion(v109);
LABEL_141:
      v56 |= 0x100u;
      goto LABEL_52;
    }
    if ( v58 > 2 )
    {
      switch ( v58 )
      {
        case 3:
          v61 = v134;
          v62 = v131;
          v59 = v134
              * (*(_DWORD *)&v139.ContentTransformation.RotationSupport
               - *(_DWORD *)&v139.ContentTransformation.ScalingSupport)
              / v135;
          v112 = v131 * (v139.VisibleFromActiveTLOffset.cx - v139.ContentTransformation.Rotation);
LABEL_147:
          v60 = v112 / v53;
          goto LABEL_53;
        case 4:
          v62 = v131;
          v61 = v134;
          if ( v134 * v53 <= v131 * v135 )
          {
            v111 = v134;
            v110 = v134 * v53 / v135;
          }
          else
          {
            v110 = v131;
            v111 = v131 * v135 / v53;
          }
          v59 = v111
              * (*(_DWORD *)&v139.ContentTransformation.RotationSupport
               - *(_DWORD *)&v139.ContentTransformation.ScalingSupport)
              / v135;
          v112 = v110 * (v139.VisibleFromActiveTLOffset.cx - v139.ContentTransformation.Rotation);
          goto LABEL_147;
        case 5:
          goto LABEL_141;
      }
      if ( v58 != 255 )
        goto LABEL_140;
    }
LABEL_52:
    v59 = *(_DWORD *)&v139.ContentTransformation.RotationSupport - *(_DWORD *)&v139.ContentTransformation.ScalingSupport;
    v60 = v139.VisibleFromActiveTLOffset.cx - v139.ContentTransformation.Rotation;
    v61 = v134;
    v62 = v131;
LABEL_53:
    v63 = v59 * cx;
    v64 = 0;
    v67.cy = 0;
    DWORD2(v142[1]) = v63 / v61;
    v65 = v60 * APSTriggerBits;
    v66 = BYTE1(v132.cx);
    v67.cx = v65 % v62;
    HIDWORD(v142[1]) = v65 / v62;
    if ( BYTE1(v132.cx)
      || *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[28]
      || !v139.GammaRamp.DataSize
      || !BYTE2(v132.cx) )
    {
      LODWORD(v142[4]) = 0;
    }
    else
    {
      v68 = 16
          * (unsigned int)DetermineViewDistance(
                            a2,
                            &v133,
                            *(int *)&v139.CopyProtection.OEMCopyProtection[148],
                            (const struct tagSIZE *)&v139.CopyProtection.OEMCopyProtection[60],
                            (unsigned int *)&v142[4]);
      v56 = v56 & 0xFFFFFFEF | v68;
      if ( !LODWORD(v142[4]) )
      {
        v113 = WdLogNewEntry5_WdAssertion(v68);
        *(_QWORD *)(v113 + 24) = 2262LL;
        WdLogEvent5_WdAssertion(v113);
      }
    }
    v131 = 0;
    if ( v130
      && (LODWORD(v126) = 2, (int)DpiReadPnpRegistryValue(*((_QWORD *)a2 + 24), L"PreferredScaleFactor", &v131, 4LL) >= 0) )
    {
      v64 = v131;
      v69 = 4096;
    }
    else
    {
      v131 = 0;
      v69 = 0;
    }
    v29 = v69 | v56 & 0xFFFFEFFF;
    *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[248] = v29;
    if ( (v29 & 0x1000) == 0 )
    {
      PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                         (DpiInternal *)a2,
                                         (void *const)v132.cy,
                                         (v29 >> 5) & 1,
                                         (int)&v131,
                                         (unsigned int *)v126);
      v64 = v131;
      v29 = v29 & 0xFFFFF7FF | (PreferredScaleFactorForMonitor << 11);
      *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[248] = v29;
    }
    if ( v66 )
    {
      v32 = 0;
      if ( v130 && !v64 )
      {
        DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
          *(DpiInternal **)&v142[2],
          v67,
          (__int64)v141,
          (const struct _DPI_SCALE_FACTOR_COLLECTION *)v142);
        DpiInternal::FillOverridesAndAdjustedScaleFactor(
          (DpiInternal *)v137,
          v114,
          (int *)v141,
          (const struct _DPI_SCALE_FACTOR_COLLECTION *)v142);
        v29 |= 0x400u;
        *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[248] = v29;
        goto LABEL_66;
      }
    }
    else
    {
      v32 = 0;
    }
    LODWORD(v126) = v137;
    FillDpiInfo(
      (const struct tagSIZE *)&v142[1] + 1,
      (struct tagSIZE *)&v142[2],
      v141,
      v142[4],
      (DpiInternal *)v126,
      v64,
      v129,
      (struct _DPI_INFORMATION *)v142);
LABEL_66:
    if ( HIDWORD(v142[5]) )
    {
      v115 = WdLogNewEntry5_WdAssertion(v72);
      *(_QWORD *)(v115 + 24) = 2293LL;
      WdLogEvent5_WdAssertion(v115);
    }
    HIDWORD(v142[5]) = v29;
    if ( v130
      || (v29 & 4) == 0
      && (DpiInternal::AvgXY(*((DpiInternal **)&v142[3] + 1), v71),
          v74 = DpiInternal::AvgXY(*(DpiInternal **)&v139.CopyProtection.OEMCopyProtection[212], v73),
          v74 <= v75) )
    {
      *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[156] = v142[0];
      *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[252] = v142[1];
      *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[188] = v142[2];
      v140 = v142[4];
      *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[236] = v142[5];
      v29 = HIDWORD(v142[5]);
      *(_OWORD *)&v139.CopyProtection.OEMCopyProtection[204] = v142[3];
    }
    memset(pszDest, 0, sizeof(pszDest));
    MonitorDeviceInterfaceName = MonitorGetMonitorDeviceInterfaceName((DXGADAPTER *)a2, v132.cy, 0x80uLL, pszDest);
    v79 = MonitorDeviceInterfaceName;
    if ( MonitorDeviceInterfaceName < 0 )
    {
      v116 = (_QWORD *)WdLogNewEntry5_WdError(v77);
      v116[3] = a2;
      v116[4] = v132.cy;
      v116[5] = v79;
      WdLogEvent5_WdError(v116);
      pszDest[0] = 0;
    }
    else
    {
      ScaleOverrideTestHook(
        (DpiInternal *)pszDest,
        (const unsigned __int16 *)&v139.CopyProtection.OEMCopyProtection[32],
        v78);
    }
    v127 = v64;
    LODWORD(v8) = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[116];
    TraceLogDpiInfo(
      (struct _DPI_INFORMATION *)v142,
      pszDest,
      (const struct _LUID *)(a2 + 268),
      *(unsigned int *)&v139.CopyProtection.OEMCopyProtection[116],
      v127);
    LogScaleFactor(*(struct _LUID *)(a2 + 268), v8, v137, (struct _DPI_INFORMATION *)v142);
    if ( v139.CopyProtection.OEMCopyProtection[68] )
      (*(void (__fastcall **)(_QWORD, _QWORD))&v139.CopyProtection.OEMCopyProtection[84])(
        *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[92],
        *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[76]);
    v30 = *(_QWORD *)&v139.ImportanceOrdinal + 1LL;
    *(_QWORD *)&v139.ImportanceOrdinal = v30;
    if ( v30 >= *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[108] )
    {
      v25 = *(_DWORD *)&v139.CopyProtection.OEMCopyProtection[32];
      v80 = *(__m128i *)&v139.CopyProtection.OEMCopyProtection[252];
      pRgb256x3x16 = v139.GammaRamp.Data.pRgb256x3x16;
      goto LABEL_78;
    }
  }
  if ( v139.CopyProtection.OEMCopyProtection[68] )
    (*(void (__fastcall **)(_QWORD, _QWORD))&v139.CopyProtection.OEMCopyProtection[84])(
      *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[92],
      *(_QWORD *)&v139.CopyProtection.OEMCopyProtection[76]);
  v88 = LOBYTE(v139.VisibleFromActiveTLOffset.cy) == 0;
LABEL_98:
  if ( !v88 )
    (*(void (__fastcall **)(_QWORD, DpiInternal *))&v139.VidPnTargetColorCoeffDynamicRanges.FirstChannel)(
      *(_QWORD *)&v139.VidPnTargetColorCoeffDynamicRanges.ThirdChannel,
      v14);
  return (unsigned int)v13;
}
