/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AC900
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00A70D0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0003884 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0003BD0 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0003CEC (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C0003D70 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C0003E98 (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C0003F74 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C0003F8C (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0004038 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009CF0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C003C128 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00A5188 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C00A916C (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AB07C (DmmGetVideoOutputTechnology.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00AB5C0 (MonitorGetEdidBaseBlockPtr.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00AB694 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00ABA7C (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C00ABF68 (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00ABFC0 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00AC7FC (MonitorGetMonitorDeviceInterfaceName.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C00AD4B0 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1C00AD578 (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiReadPnpRegistryValue @ 0x1C01147D0 (DpiReadPnpRegistryValue.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C0121820 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 *     ?GetSquareRoot@@YA_K_K@Z @ 0x1C0198C04 (-GetSquareRoot@@YA_K_K@Z.c)
 *     ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1C01BBC60 (-GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z.c)
 *     ?LookupDisplayDiagonal@@YAJPEAK@Z @ 0x1C01BBDD4 (-LookupDisplayDiagonal@@YAJPEAK@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  DpiInternal *v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *v26; // r12
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  unsigned int v34; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v35; // r9
  BOOL v36; // eax
  unsigned int v37; // edi
  int v38; // eax
  unsigned int v39; // edi
  unsigned __int64 v40; // rdx
  int v41; // eax
  bool v42; // r14
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 (__fastcall *v46)(__int64, _QWORD, _QWORD, struct tagSIZE *); // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  int v53; // esi
  int VideoOutputTechnology; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // edi
  unsigned __int8 *EdidBaseBlockPtr; // r14
  int PreferredMode; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  UINT cx; // esi
  UINT APSTriggerBits; // r14d
  D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // ebx
  unsigned int v74; // ebx
  __int64 v75; // rdx
  __int64 v76; // r8
  unsigned int v77; // edi
  __int64 v78; // rcx
  int v79; // eax
  unsigned int v80; // ecx
  int v81; // r8d
  unsigned int v82; // r9d
  unsigned int v83; // r10d
  unsigned int v84; // ecx
  unsigned int v85; // r8d
  unsigned int v86; // esi
  char v87; // r14
  struct tagSIZE v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  int v92; // eax
  unsigned __int8 PreferredScaleFactorForMonitor; // al
  struct tagSIZE v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  struct tagSIZE v98; // rdx
  int v99; // eax
  int v100; // r8d
  int MonitorDeviceInterfaceName; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  unsigned int *v104; // r8
  __int64 v105; // rbx
  __m128i v106; // xmm1
  __int64 v107; // rcx
  unsigned int v108; // eax
  __int128 v109; // xmm1
  __int128 v110; // xmm0
  __int64 v112; // rax
  _QWORD *v113; // rax
  bool v114; // zf
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rax
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  __int64 v124; // rax
  __int64 v125; // r10
  __int64 v126; // rbx
  unsigned __int64 SquareRoot; // rax
  unsigned __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // r10
  unsigned __int64 v132; // r12
  unsigned __int64 v133; // rbx
  __int64 v134; // rdx
  unsigned __int64 v135; // rbx
  __int64 v136; // rax
  __int64 v137; // rax
  EDIDCACHE *v138; // rcx
  char v139; // al
  __int64 v140; // rax
  unsigned int v141; // r8d
  unsigned int v142; // ecx
  unsigned __int32 v143; // eax
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rax
  _QWORD *v147; // rax
  _QWORD *v148; // rax
  __int64 cy; // rcx
  int v150; // eax
  int v151; // eax
  __int64 v152; // rax
  struct _D3DKMDT_2DREGION *v153; // [rsp+20h] [rbp-E0h]
  DpiInternal *v154; // [rsp+20h] [rbp-E0h]
  unsigned int v155; // [rsp+20h] [rbp-E0h]
  struct _DPI_SCALE_FACTOR_COLLECTION *v156; // [rsp+30h] [rbp-D0h]
  bool v157; // [rsp+40h] [rbp-C0h]
  int v158; // [rsp+44h] [rbp-BCh] BYREF
  struct _D3DKMDT_2DREGION v159; // [rsp+48h] [rbp-B8h] BYREF
  struct tagSIZE v160; // [rsp+50h] [rbp-B0h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v161; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v162; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v163; // [rsp+64h] [rbp-9Ch]
  unsigned int v164; // [rsp+68h] [rbp-98h] BYREF
  __int64 v165; // [rsp+70h] [rbp-90h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v166; // [rsp+78h] [rbp-88h] BYREF
  __int128 v167; // [rsp+1E0h] [rbp+E0h]
  struct tagSIZE v168[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  _OWORD v169[6]; // [rsp+210h] [rbp+110h] BYREF
  wchar_t pszDest[128]; // [rsp+270h] [rbp+170h] BYREF

  pRgb256x3x16 = a6;
  v8 = a3;
  *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[124] = a5;
  v9 = (__int64 (__fastcall *)(char *, D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *, UCHAR *))*((_QWORD *)a1 + 6);
  *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[24] = a4;
  *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[116] = a3;
  v166.GammaRamp.Data.pRgb256x3x16 = a6;
  *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[52] = 0LL;
  memset(&v166.VisibleFromActiveBROffset.cy, 0, 28);
  LOBYTE(v166.VisibleFromActiveTLOffset.cy) = 0;
  *(_QWORD *)&v166.ImportanceOrdinal = 0LL;
  v11 = v9(a2, &v166.ImportanceOrdinal, &v166.CopyProtection.OEMCopyProtection[52]);
  v14 = v11;
  if ( v11 < 0 )
  {
    v112 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v112 + 24) = a2;
    *(_QWORD *)(v112 + 32) = v14;
    WdLogEvent5_WdError(v112);
    return (unsigned int)v14;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v166.VisibleFromActiveTLOffset.cy,
    *(__int64 *)&v166.ImportanceOrdinal,
    *((_QWORD *)a1 + 8),
    (__int64)a2);
  v15 = *(DpiInternal **)&v166.VisibleFromActiveBROffset.cy;
  v165 = 0LL;
  *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[36] = 0LL;
  v16 = (**(__int64 (__fastcall ***)(_QWORD, __int64 *, UCHAR *))&v166.CopyProtection.OEMCopyProtection[52])(
          *(_QWORD *)&v166.VisibleFromActiveBROffset.cy,
          &v165,
          &v166.CopyProtection.OEMCopyProtection[36]);
  v14 = v16;
  if ( v16 < 0 )
  {
    v113 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v113[3] = v15;
    v113[4] = v14;
LABEL_92:
    WdLogEvent5_WdError(v113);
    goto LABEL_93;
  }
  *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[108] = 0LL;
  v19 = (**(__int64 (__fastcall ***)(__int64, _QWORD, UCHAR *))&v166.CopyProtection.OEMCopyProtection[36])(
          v165,
          (unsigned int)v8,
          &v166.CopyProtection.OEMCopyProtection[108]);
  v14 = v19;
  if ( v19 < 0 )
  {
    v113 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v113[3] = v8;
    v113[4] = v165;
    v113[5] = v14;
    goto LABEL_92;
  }
  LODWORD(v14) = GetCurrentContentResolution(
                   (DXGADAPTER *)a2,
                   v8,
                   (const struct tagRECT **)&v166.CopyProtection.OEMCopyProtection[44],
                   (struct tagRECT *)&v166.ContentTransformation.ScalingSupport,
                   (unsigned int *)&v166.CopyProtection.OEMCopyProtection[12]);
  if ( (int)v14 < 0 )
  {
LABEL_93:
    v114 = LOBYTE(v166.VisibleFromActiveTLOffset.cy) == 0;
    goto LABEL_95;
  }
  v26 = *(_DWORD **)&v166.CopyProtection.OEMCopyProtection[44];
  if ( !*(_QWORD *)&v166.CopyProtection.OEMCopyProtection[44] )
  {
    v115 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    *(_QWORD *)(v115 + 24) = 1899LL;
    WdLogEvent5_WdAssertion(v115);
  }
  v27 = (unsigned int)(v26[2] - *v26);
  if ( v26[2] - *v26 <= 0 || (v27 = (unsigned int)(v26[3] - v26[1]), v26[3] - v26[1] <= 0) )
  {
    v116 = WdLogNewEntry5_WdAssertion(v27, v22, v24, v25);
    *(_QWORD *)(v116 + 24) = 1902LL;
    WdLogEvent5_WdAssertion(v116);
  }
  v164 = 0;
  memset(v168, 0, sizeof(v168));
  v28 = QueryWin32DpiValues(&v164, (struct _DPI_SCALE_FACTOR_COLLECTION *)v168);
  v33 = v28;
  if ( v28 < 0 )
  {
    v117 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
    *(_QWORD *)(v117 + 24) = 1908LL;
    WdLogEvent5_WdAssertion(v117);
    v120 = WdLogNewEntry5_WdError(v119, v118);
    *(_QWORD *)(v120 + 24) = v33;
    WdLogEvent5_WdError(v120);
  }
  v34 = 0;
  *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[32] = 0;
  memset(&v166.CopyProtection.OEMCopyProtection[156], 0, 0x60uLL);
  v36 = *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[108] > 1uLL
     || *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[12] > 1u;
  v37 = v36 | *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[248] & 0xFFFFFFFE;
  if ( *v26 || (v38 = 32, v26[1]) )
    v38 = 0;
  v39 = v38 | v37 & 0xFFFFFFDF;
  v40 = 0LL;
  v41 = dword_1C006F954;
  *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[248] = v39;
  if ( (v39 & 0x20) != 0 )
    v41 = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[24];
  dword_1C006F954 = v41;
  *(_QWORD *)&v166.ImportanceOrdinal = 0LL;
  v167 = *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[220];
  if ( !*(_QWORD *)&v166.CopyProtection.OEMCopyProtection[108] )
  {
    v106 = *(__m128i *)&v166.CopyProtection.OEMCopyProtection[172];
    *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[252] = *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[172];
LABEL_78:
    v107 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v106, 8));
    if ( (_DWORD)v107 )
    {
      v40 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v106, 12));
      if ( (_DWORD)v40 )
      {
        if ( (v39 & 0x80u) == 0 )
        {
          v151 = 1000 * v107;
          v107 = *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[124];
          *(_DWORD *)(*(_QWORD *)&v166.CopyProtection.OEMCopyProtection[124] + 8LL) = v151;
          *(_DWORD *)(v107 + 12) = 1000 * v40;
        }
        else
        {
          v150 = 1000 * v40;
          v40 = *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[124];
          *(_DWORD *)(*(_QWORD *)&v166.CopyProtection.OEMCopyProtection[124] + 8LL) = v150;
          *(_DWORD *)(v40 + 12) = 1000 * v107;
        }
      }
    }
    if ( (v39 & 2) == 0
      || (v35 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(
                                                                             _mm_srli_si128(
                                                                               _mm_load_si128((const __m128i *)&v166.CopyProtection.OEMCopyProtection[236]),
                                                                               4)),
          (_DWORD)v35 == 1234568) )
    {
      v108 = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[164];
    }
    else
    {
      v108 = DpiInternal::AdjustDesktopScaleFactorForOverride(
               (DpiInternal *)0x64,
               *(__int64 *)&v166.CopyProtection.OEMCopyProtection[188],
               (struct tagSIZE)v168,
               v35,
               (const struct _DPI_SCALE_FACTOR_COLLECTION *)v153);
      *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[164] = v108;
    }
    if ( v34 )
    {
      v108 = v34;
      *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[164] = v34;
      *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[240] = 1234567;
    }
    if ( !v108 )
    {
      v152 = WdLogNewEntry5_WdAssertion(v107, v40, 0LL, v35);
      *(_QWORD *)(v152 + 24) = 2356LL;
      WdLogEvent5_WdAssertion(v152);
    }
    v109 = *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[204];
    *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[156] = 100;
    *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[160] = 100;
    *(_OWORD *)pRgb256x3x16->Red = *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[156];
    *(_OWORD *)&pRgb256x3x16->Red[8] = *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[252];
    *(_OWORD *)&pRgb256x3x16->Red[16] = *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[188];
    v110 = v167;
    *(_OWORD *)&pRgb256x3x16->Red[24] = v109;
    *(_OWORD *)&pRgb256x3x16->Red[32] = v110;
    *(_OWORD *)&pRgb256x3x16->Red[40] = *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[236];
    if ( LOBYTE(v166.VisibleFromActiveTLOffset.cy) )
      (*(void (__fastcall **)(_QWORD, DpiInternal *, _QWORD))&v166.VidPnTargetColorCoeffDynamicRanges.FirstChannel)(
        *(_QWORD *)&v166.VidPnTargetColorCoeffDynamicRanges.ThirdChannel,
        v15,
        0LL);
    return 0LL;
  }
  v42 = 0;
  *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[252] = *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[172];
  while ( 1 )
  {
    v159.cy = -1;
    BYTE1(v159.cx) = 0;
    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, UINT *))(*(_QWORD *)&v166.CopyProtection.OEMCopyProtection[36]
                                                                               + 8LL))(
            v165,
            (unsigned int)v8,
            v40,
            &v159.cy);
    v14 = v43;
    if ( v43 < 0 )
    {
      v148 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
      v148[3] = *(_QWORD *)&v166.ImportanceOrdinal;
      cy = (unsigned int)v8;
      goto LABEL_159;
    }
    v160 = 0LL;
    v46 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct tagSIZE *))(*(_QWORD *)&v166.CopyProtection.OEMCopyProtection[36]
                                                                              + 24LL);
    memset(&v166.CopyProtection.OEMCopyProtection[76], 0, 28);
    v166.CopyProtection.OEMCopyProtection[68] = 0;
    v47 = v46(v165, (unsigned int)v8, v159.cy, &v160);
    v14 = v47;
    if ( v47 < 0 )
    {
      v148 = (_QWORD *)WdLogNewEntry5_WdError(v49, v48);
      v148[3] = (unsigned int)v8;
      cy = v159.cy;
LABEL_159:
      v148[4] = cy;
      v148[5] = v14;
      WdLogEvent5_WdError(v148);
      v114 = LOBYTE(v166.VisibleFromActiveTLOffset.cy) == 0;
      goto LABEL_95;
    }
    v52 = (__int64)v160;
    if ( !*(_QWORD *)&v160 )
    {
      v121 = WdLogNewEntry5_WdAssertion(v49, 0LL, v50, v51);
      *(_QWORD *)(v121 + 24) = 1964LL;
      WdLogEvent5_WdAssertion(v121);
      v52 = (__int64)v160;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v166.CopyProtection.OEMCopyProtection[68],
      v52,
      *(_QWORD *)(*(_QWORD *)&v166.CopyProtection.OEMCopyProtection[36] + 32LL),
      v165);
    v158 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)&v166.CopyProtection.OEMCopyProtection[76]
                                                                                   + 20LL));
    v157 = 0;
    v53 = v158;
    v161 = -2;
    VideoOutputTechnology = DmmGetVideoOutputTechnology((DXGADAPTER *)a2, v159.cy, &v161, 0LL);
    v57 = VideoOutputTechnology;
    if ( VideoOutputTechnology < 0 )
    {
      v122 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55);
      v122[3] = a2;
      v122[4] = v159.cy;
      v122[5] = v57;
      WdLogEvent5_WdError(v122);
    }
    else
    {
      v42 = IsInternalVideoOutput(v161);
      v157 = v42;
    }
    *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[148] = v42;
    *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[28] = 0;
    v160 = 0LL;
    v60 = ((unsigned __int8)v39 ^ (unsigned __int8)(v39 | (4 * v42))) & 4 ^ v39;
    EdidBaseBlockPtr = (unsigned __int8 *)MonitorGetEdidBaseBlockPtr((DXGADAPTER *)a2, v159.cy, v58, v59);
    v166.GammaRamp.DataSize = (SIZE_T)EdidBaseBlockPtr;
    *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[132] = 0LL;
    *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[140] = 0;
    BYTE2(v159.cx) = 0;
    PreferredMode = EDID_V1_GetPreferredMode(
                      EdidBaseBlockPtr,
                      (struct DISPLAY_PREFERRED_MODE_INFO *)&v166.CopyProtection.OEMCopyProtection[132]);
    v65 = PreferredMode;
    if ( PreferredMode < 0 )
    {
      v123 = (_QWORD *)WdLogNewEntry5_WdError(v64, v63);
      v123[3] = a2;
      v123[4] = v159.cy;
      v123[5] = v65;
      WdLogEvent5_WdError(v123);
    }
    else
    {
      BYTE2(v159.cx) = 1;
    }
    *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[16] = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[132];
    *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[60] = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[132];
    *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[20] = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[136];
    *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[64] = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[136];
    if ( ((v53 - 2) & 0xFFFFFFFD) == 0 )
    {
      *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[20] = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[132];
      *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[64] = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[132];
      *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[16] = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[136];
      *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[60] = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[136];
    }
    if ( !EdidBaseBlockPtr )
    {
      v60 |= 8u;
      APSTriggerBits = v160.cy;
      cx = v160.cx;
      *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[188] = *(_DWORD *)(*(_QWORD *)&v166.CopyProtection.OEMCopyProtection[124]
                                                                         + 16LL);
      *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[192] = *(_DWORD *)(*(_QWORD *)&v166.CopyProtection.OEMCopyProtection[124]
                                                                         + 20LL);
LABEL_37:
      if ( cx )
        goto LABEL_39;
      goto LABEL_38;
    }
    if ( (int)EDID_V1_GetPhysicalSize(
                *(unsigned int *)&v166.CopyProtection.OEMCopyProtection[136],
                EdidBaseBlockPtr,
                &v166.CopyProtection.APSTriggerBits,
                (unsigned int *)&v166.CopyProtection.OEMCopyProtection[152]) < 0 )
    {
      v124 = WdLogNewEntry5_WdAssertion(v67, v66, v68, v69);
      *(_QWORD *)(v124 + 24) = 2025LL;
      WdLogEvent5_WdAssertion(v124);
    }
    cx = v166.CopyProtection.APSTriggerBits;
    APSTriggerBits = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[152];
    v160.cx = v166.CopyProtection.APSTriggerBits;
    v160.cy = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[152];
    if ( ((v158 - 2) & 0xFFFFFFFD) == 0 )
    {
      cx = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[152];
      v160.cx = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[152];
      APSTriggerBits = v166.CopyProtection.APSTriggerBits;
      v160.cy = v166.CopyProtection.APSTriggerBits;
    }
    if ( !cx || !APSTriggerBits )
    {
      APSTriggerBits = 0;
      v160 = 0LL;
      cx = 0;
      goto LABEL_37;
    }
    if ( (int)(cx * APSTriggerBits) > 16000 || v157 )
      goto LABEL_37;
    v60 |= 0x40u;
    *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[28] = 1;
    APSTriggerBits = 0;
    v160 = 0LL;
    cx = 0;
LABEL_38:
    BYTE1(v159.cx) = (a2[300] & 0x20) != 0;
LABEL_39:
    LODWORD(v14) = DpiInternal::GetCurrentSourceResolution(
                     v15,
                     *(struct D3DKMDT_HVIDPN__ *const *)&v166.CopyProtection.OEMCopyProtection[52],
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v166.CopyProtection.OEMCopyProtection[76],
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v162);
    if ( (int)v14 < 0 )
      break;
    LOBYTE(v159.cx) = 0;
    LODWORD(v14) = DpiInternal::GetCurrentTargetResolution(
                     v15,
                     *(struct D3DKMDT_HVIDPN__ *const *)&v166.CopyProtection.OEMCopyProtection[52],
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v166.CopyProtection.OEMCopyProtection[76],
                     &v166,
                     &v159);
    if ( (int)v14 < 0 )
    {
      if ( v166.CopyProtection.OEMCopyProtection[68] )
        (*(void (__fastcall **)(_QWORD, _QWORD))&v166.CopyProtection.OEMCopyProtection[84])(
          *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[92],
          *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[76]);
      v114 = LOBYTE(v166.VisibleFromActiveTLOffset.cy) == 0;
      goto LABEL_95;
    }
    if ( ((v158 - 2) & 0xFFFFFFFD) != 0 )
    {
      VidPnTargetId = v166.VidPnTargetId;
      VidPnSourceId = v166.VidPnSourceId;
    }
    else
    {
      VidPnTargetId = v166.VidPnSourceId;
      VidPnSourceId = v166.VidPnTargetId;
      v166.VidPnSourceId = v166.VidPnTargetId;
      v166.VidPnTargetId = VidPnTargetId;
    }
    v161 = VidPnSourceId;
    v158 = VidPnTargetId;
    if ( g_IsMobileCore )
    {
      *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[4] = 0LL;
      if ( (int)GetPhysicalDisplaySizeOverride((struct tagSIZE *)&v166.CopyProtection.OEMCopyProtection[4]) < 0 )
      {
        if ( v157 )
        {
          *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[4] = 0;
          if ( (int)LookupDisplayDiagonal((unsigned int *)&v166.CopyProtection.OEMCopyProtection[4]) >= 0
            && VidPnSourceId < 0x20000
            && (unsigned int)v158 < 0x20000 )
          {
            v125 = 1000 * VidPnSourceId;
            v126 = (unsigned int)(1000 * v158);
            SquareRoot = GetSquareRoot(v125 * (unsigned int)v125 + v126 * v126);
            v128 = v126 * *(unsigned int *)&v166.CopyProtection.OEMCopyProtection[4];
            v129 = 500LL;
            v130 = 0x624DD2F1A9FBE77LL;
            v132 = (v131 * (unsigned __int64)*(unsigned int *)&v166.CopyProtection.OEMCopyProtection[4] / SquareRoot
                  + 500)
                 / 0x3E8;
            v133 = v128 / SquareRoot + 500;
            v134 = (v133 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
            v135 = v133 / 0x3E8;
            if ( v132 >= 0x7FFFFFFF )
            {
              v136 = WdLogNewEntry5_WdAssertion(v128, v134, 500LL, 0x624DD2F1A9FBE77LL);
              *(_QWORD *)(v136 + 24) = 2126LL;
              WdLogEvent5_WdAssertion(v136);
            }
            if ( v135 >= 0x7FFFFFFF )
            {
              v137 = WdLogNewEntry5_WdAssertion(v128, v134, v129, v130);
              *(_QWORD *)(v137 + 24) = 2127LL;
              WdLogEvent5_WdAssertion(v137);
            }
            if ( v132 < 0x7FFFFFFF && v135 < 0x7FFFFFFF )
            {
              cx = v132;
              v160.cx = v132;
              APSTriggerBits = v135;
              v160.cy = v135;
              v138 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 85);
              if ( v138 )
                EDIDCACHE::SetPhysicalDimensionOfInternalPanel(v138, v132, v135, 1u);
            }
            v26 = *(_DWORD **)&v166.CopyProtection.OEMCopyProtection[44];
          }
        }
      }
      else
      {
        v160 = *(struct tagSIZE *)&v166.CopyProtection.OEMCopyProtection[4];
        cx = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[4];
        APSTriggerBits = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[8];
      }
    }
    if ( (v60 & 1) != 0
      && *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[12] <= 1u
      && *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[16]
      && *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[20] )
    {
      v74 = v163;
      if ( LOBYTE(v159.cx) )
      {
        v74 = v163 >> 1;
        v163 >>= 1;
      }
      if ( v162 >= 2 * *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[16]
        || (v139 = 0, v74 >= 2 * *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[20]) )
      {
        v139 = 2;
      }
      v60 ^= ((unsigned __int8)v60 ^ (unsigned __int8)(v60 | v139)) & 2;
      if ( LOBYTE(v159.cx) )
      {
        v74 *= 2;
        v163 = v74;
      }
    }
    else
    {
      v74 = v163;
    }
    memset(v169, 0, sizeof(v169));
    DWORD1(v169[5]) = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[24];
    v75 = *(unsigned int *)(*(_QWORD *)&v166.CopyProtection.OEMCopyProtection[76] + 20LL);
    if ( (unsigned int)(v75 - 5) <= 0xB )
      v75 = (unsigned int)(((int)v75 - 1) % 4 + 1);
    v76 = (unsigned int)(v26[2] - *v26);
    LODWORD(v169[2]) = v26[2] - *v26;
    v77 = ((((_DWORD)v75 - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v60 & 0xFFFFFF7F;
    v78 = (unsigned int)(v26[3] - v26[1]);
    DWORD1(v169[2]) = v26[3] - v26[1];
    if ( (((_DWORD)v75 - 2) & 0xFFFFFFFD) == 0 )
      *(_QWORD *)&v169[2] = __PAIR64__(v76, v78);
    v79 = *(_DWORD *)(*(_QWORD *)&v166.CopyProtection.OEMCopyProtection[76] + 12LL);
    if ( v79 <= 0 )
    {
LABEL_137:
      v140 = WdLogNewEntry5_WdAssertion(v78, v75, v76, *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[76]);
      *(_QWORD *)(v140 + 24) = *(int *)(*(_QWORD *)&v166.CopyProtection.OEMCopyProtection[76] + 12LL);
      WdLogEvent5_WdAssertion(v140);
LABEL_138:
      v77 |= 0x100u;
      goto LABEL_52;
    }
    if ( v79 > 2 )
    {
      switch ( v79 )
      {
        case 3:
          v82 = v161;
          v83 = v158;
          v80 = v161
              * (*(_DWORD *)&v166.ContentTransformation.RotationSupport
               - *(_DWORD *)&v166.ContentTransformation.ScalingSupport)
              / v162;
          v143 = v158 * (v166.VisibleFromActiveTLOffset.cx - v166.ContentTransformation.Rotation);
LABEL_144:
          v81 = v143 / v74;
          goto LABEL_53;
        case 4:
          v83 = v158;
          v82 = v161;
          if ( v161 * v74 <= v158 * v162 )
          {
            v142 = v161;
            v141 = v161 * v74 / v162;
          }
          else
          {
            v141 = v158;
            v142 = v158 * v162 / v74;
          }
          v80 = v142
              * (*(_DWORD *)&v166.ContentTransformation.RotationSupport
               - *(_DWORD *)&v166.ContentTransformation.ScalingSupport)
              / v162;
          v143 = v141 * (v166.VisibleFromActiveTLOffset.cx - v166.ContentTransformation.Rotation);
          goto LABEL_144;
        case 5:
          goto LABEL_138;
      }
      if ( v79 != 255 )
        goto LABEL_137;
    }
LABEL_52:
    v80 = *(_DWORD *)&v166.ContentTransformation.RotationSupport - *(_DWORD *)&v166.ContentTransformation.ScalingSupport;
    v81 = v166.VisibleFromActiveTLOffset.cx - v166.ContentTransformation.Rotation;
    v82 = v161;
    v83 = v158;
LABEL_53:
    v84 = cx * v80;
    v85 = APSTriggerBits * v81;
    v86 = 0;
    v87 = BYTE1(v159.cx);
    DWORD2(v169[1]) = v84 / v82;
    v88 = (struct tagSIZE)(v85 % v83);
    HIDWORD(v169[1]) = v85 / v83;
    if ( BYTE1(v159.cx)
      || *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[28]
      || !v166.GammaRamp.DataSize
      || !BYTE2(v159.cx) )
    {
      LODWORD(v169[4]) = 0;
    }
    else
    {
      v77 ^= ((unsigned __int8)v77 ^ (unsigned __int8)(16
                                                     * DetermineViewDistance(
                                                         a2,
                                                         &v160,
                                                         *(int *)&v166.CopyProtection.OEMCopyProtection[148],
                                                         (const struct tagSIZE *)&v166.CopyProtection.OEMCopyProtection[60],
                                                         (unsigned int *)&v169[4]))) & 0x10;
      if ( !LODWORD(v169[4]) )
      {
        v144 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(v89, v88, v90, v91);
        *(_QWORD *)(v144 + 24) = 2257LL;
        WdLogEvent5_WdAssertion(v144);
      }
    }
    v158 = 0;
    if ( v157 && (int)DpiReadPnpRegistryValue(*((_QWORD *)a2 + 24), L"PreferredScaleFactor", &v158, 4LL, 2) >= 0 )
    {
      v86 = v158;
      v92 = 4096;
    }
    else
    {
      v158 = 0;
      v92 = 0;
    }
    v39 = v92 | v77 & 0xFFFFEFFF;
    *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[248] = v39;
    if ( (v39 & 0x1000) == 0 )
    {
      PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                         (DpiInternal *)a2,
                                         (void *const)v159.cy,
                                         (v39 >> 5) & 1,
                                         &v158);
      v86 = v158;
      v39 ^= ((unsigned __int16)v39 ^ (unsigned __int16)(PreferredScaleFactorForMonitor << 11)) & 0x800;
      *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[248] = v39;
    }
    if ( v87 )
    {
      v42 = 0;
      if ( v157 && !v86 )
      {
        DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
          *(DpiInternal **)&v169[2],
          v88,
          (__int64)v168,
          (const struct _DPI_SCALE_FACTOR_COLLECTION *)v169);
        DpiInternal::FillOverridesAndAdjustedScaleFactor(
          (DpiInternal *)v164,
          v145,
          (int *)v168,
          (const struct _DPI_SCALE_FACTOR_COLLECTION *)v169);
        v39 |= 0x400u;
        *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[248] = v39;
        goto LABEL_66;
      }
    }
    else
    {
      v42 = 0;
    }
    LODWORD(v154) = v164;
    FillDpiInfo(
      (const struct tagSIZE *)&v169[1] + 1,
      (struct tagSIZE *)&v169[2],
      v168,
      (DpiInternal *)LODWORD(v169[4]),
      v154,
      v86,
      v156,
      (struct _DPI_INFORMATION *)v169);
LABEL_66:
    if ( HIDWORD(v169[5]) )
    {
      v146 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(v95, v94, v96, v97);
      *(_QWORD *)(v146 + 24) = 2288LL;
      WdLogEvent5_WdAssertion(v146);
    }
    HIDWORD(v169[5]) = v39;
    if ( v157
      || (v39 & 4) == 0
      && (DpiInternal::AvgXY(*((DpiInternal **)&v169[3] + 1), v94),
          v99 = DpiInternal::AvgXY(*(DpiInternal **)&v166.CopyProtection.OEMCopyProtection[212], v98),
          v99 <= v100) )
    {
      *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[156] = v169[0];
      *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[252] = v169[1];
      *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[188] = v169[2];
      v167 = v169[4];
      *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[236] = v169[5];
      v39 = HIDWORD(v169[5]);
      *(_OWORD *)&v166.CopyProtection.OEMCopyProtection[204] = v169[3];
    }
    memset(pszDest, 0, sizeof(pszDest));
    MonitorDeviceInterfaceName = MonitorGetMonitorDeviceInterfaceName((DXGADAPTER *)a2, v159.cy, 0x80uLL, pszDest);
    v105 = MonitorDeviceInterfaceName;
    if ( MonitorDeviceInterfaceName < 0 )
    {
      v147 = (_QWORD *)WdLogNewEntry5_WdError(v103, v102);
      v147[3] = a2;
      v147[4] = v159.cy;
      v147[5] = v105;
      WdLogEvent5_WdError(v147);
      pszDest[0] = 0;
    }
    else
    {
      ScaleOverrideTestHook(
        (DpiInternal *)pszDest,
        (const unsigned __int16 *)&v166.CopyProtection.OEMCopyProtection[32],
        v104);
    }
    v155 = v86;
    LODWORD(v8) = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[116];
    TraceLogDpiInfo(
      (struct _DPI_INFORMATION *)v169,
      pszDest,
      (const struct _LUID *)(a2 + 268),
      *(unsigned int *)&v166.CopyProtection.OEMCopyProtection[116],
      v155);
    LogScaleFactor(*(struct _LUID *)(a2 + 268), v8, v164, (struct _DPI_INFORMATION *)v169);
    if ( v166.CopyProtection.OEMCopyProtection[68] )
      (*(void (__fastcall **)(_QWORD, _QWORD))&v166.CopyProtection.OEMCopyProtection[84])(
        *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[92],
        *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[76]);
    v40 = *(_QWORD *)&v166.ImportanceOrdinal + 1LL;
    *(_QWORD *)&v166.ImportanceOrdinal = v40;
    if ( v40 >= *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[108] )
    {
      v34 = *(_DWORD *)&v166.CopyProtection.OEMCopyProtection[32];
      v106 = *(__m128i *)&v166.CopyProtection.OEMCopyProtection[252];
      pRgb256x3x16 = v166.GammaRamp.Data.pRgb256x3x16;
      goto LABEL_78;
    }
  }
  if ( v166.CopyProtection.OEMCopyProtection[68] )
    (*(void (__fastcall **)(_QWORD, _QWORD))&v166.CopyProtection.OEMCopyProtection[84])(
      *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[92],
      *(_QWORD *)&v166.CopyProtection.OEMCopyProtection[76]);
  v114 = LOBYTE(v166.VisibleFromActiveTLOffset.cy) == 0;
LABEL_95:
  if ( !v114 )
    (*(void (__fastcall **)(_QWORD, DpiInternal *))&v166.VidPnTargetColorCoeffDynamicRanges.FirstChannel)(
      *(_QWORD *)&v166.VidPnTargetColorCoeffDynamicRanges.ThirdChannel,
      v15);
  return (unsigned int)v14;
}
