/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00C7850 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C00072D8 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087DC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0008844 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0008960 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C00089E4 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C0008B08 (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C0008BE4 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0008E88 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C0008FA0 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00376C0 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00AB1D4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1C00C52FC (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C00C59B4 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00C6594 (MonitorGetMonitorDeviceInterfaceName.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00C6694 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C00C6948 (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00C69A0 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00C6E5C (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C731C (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00C752C (MonitorGetEdidBaseBlockPtr.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00C75FC (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C00C76C8 (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 *     ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1C01DCDAC (-GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C01EFEF8 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall UpdateGdiInfoForVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        char *a2,
        unsigned int a3,
        int a4,
        struct _GDIINFO *a5,
        struct _DPI_INFORMATION *a6)
{
  __int64 (__fastcall *v6)(char *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **); // rax
  struct _GDIINFO *v7; // r13
  char *v8; // r12
  struct _DPI_INFORMATION *v9; // r14
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  DpiInternal *v15; // r15
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  const struct tagRECT *v21; // rdi
  __int64 v22; // rcx
  int Win32DpiValues; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned int v26; // ebx
  BOOL v27; // eax
  int v28; // edi
  unsigned int v29; // edi
  int v30; // eax
  unsigned __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  __int64 (__fastcall *v34)(__int64, _QWORD, _QWORD, struct tagSIZE *); // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // eax
  int v39; // r13d
  bool v40; // si
  int VideoOutputTechnology; // eax
  __int64 v42; // rcx
  __int64 v43; // rbx
  int v44; // edi
  int PreferredMode; // eax
  __int64 v46; // rcx
  __int64 v47; // rbx
  unsigned int v48; // esi
  int PreferredMonitorSourceModeOnTarget; // eax
  __int64 v50; // rcx
  __int64 v51; // rbx
  UINT v52; // edx
  __int64 cy; // rcx
  __int64 v54; // rcx
  LONG v55; // esi
  LONG v56; // r14d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v57; // eax
  unsigned int v58; // r13d
  unsigned int v59; // ebx
  int v60; // edx
  unsigned int v61; // edi
  __int64 v62; // rcx
  int v63; // r8d
  int v64; // eax
  unsigned int v65; // ecx
  int v66; // r8d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v67; // r9d
  unsigned int v68; // r14d
  struct tagSIZE v69; // rdx
  char v70; // r14
  char v71; // cl
  const struct tagSIZE *p_ActiveSize; // r9
  __int64 v73; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v74; // esi
  int v75; // eax
  unsigned int v76; // ebx
  bool PreferredScaleFactorForMonitor; // al
  struct tagSIZE v78; // rdx
  __int64 v79; // rcx
  struct tagSIZE v80; // rdx
  int v81; // eax
  int v82; // r8d
  int MonitorDeviceInterfaceName; // eax
  __int64 v84; // rcx
  unsigned int *v85; // r8
  __int64 v86; // rbx
  __m128i v87; // xmm1
  __int64 v88; // rcx
  unsigned int v89; // eax
  __int128 v90; // xmm1
  __int128 v91; // xmm0
  __int64 v93; // rax
  _QWORD *v94; // rax
  bool v95; // zf
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rax
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rax
  int PhysicalDisplaySizeOverride; // eax
  struct tagSIZE v107; // rcx
  char v108; // al
  __int64 v109; // rax
  unsigned __int32 v110; // r8d
  unsigned int v111; // ecx
  unsigned __int32 v112; // eax
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rax
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  __int64 cx; // rcx
  int v119; // edx
  int v120; // eax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v121; // r9
  __int64 v122; // rax
  struct _D3DKMDT_2DREGION *v123; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v124; // [rsp+20h] [rbp-E0h]
  unsigned int v125; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v126; // [rsp+28h] [rbp-D8h]
  int v127; // [rsp+30h] [rbp-D0h]
  char v128; // [rsp+40h] [rbp-C0h]
  bool v129; // [rsp+41h] [rbp-BFh]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v130; // [rsp+44h] [rbp-BCh] BYREF
  struct _D3DKMDT_2DREGION v131; // [rsp+48h] [rbp-B8h] BYREF
  struct tagSIZE v132; // [rsp+50h] [rbp-B0h] BYREF
  DpiInternal *v133; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v134; // [rsp+60h] [rbp-A0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v135; // [rsp+68h] [rbp-98h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v136; // [rsp+6Ch] [rbp-94h]
  unsigned int v137; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v138; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v139; // [rsp+78h] [rbp-88h] BYREF
  D3DKMDT_2DREGION ActiveSize; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v141; // [rsp+88h] [rbp-78h] BYREF
  char v142; // [rsp+98h] [rbp-68h] BYREF
  DpiInternal *v143; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v144)(__int64, DpiInternal *); // [rsp+A8h] [rbp-58h]
  __int64 v145; // [rsp+B0h] [rbp-50h]
  int v146; // [rsp+B8h] [rbp-48h]
  LONG v147; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v148; // [rsp+C4h] [rbp-3Ch] BYREF
  unsigned __int64 v149; // [rsp+C8h] [rbp-38h]
  int v150; // [rsp+D0h] [rbp-30h]
  int v151; // [rsp+D4h] [rbp-2Ch]
  unsigned int v152; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v153; // [rsp+E0h] [rbp-20h] BYREF
  struct D3DKMDT_HVIDPN__ *v154; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v155; // [rsp+F0h] [rbp-10h] BYREF
  char v156; // [rsp+F8h] [rbp-8h] BYREF
  const struct _DXGDMM_VIDPN_INTERFACE *v157; // [rsp+100h] [rbp+0h]
  void (__fastcall *v158)(__int64, const struct _DXGDMM_VIDPN_INTERFACE *); // [rsp+108h] [rbp+8h]
  __int64 v159; // [rsp+110h] [rbp+10h]
  int v160; // [rsp+118h] [rbp+18h]
  LONG v161; // [rsp+120h] [rbp+20h] BYREF
  BOOL v162; // [rsp+124h] [rbp+24h]
  unsigned __int64 v163; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v164; // [rsp+130h] [rbp+30h]
  unsigned __int64 v165; // [rsp+138h] [rbp+38h] BYREF
  int v166; // [rsp+140h] [rbp+40h]
  struct tagSIZE v167; // [rsp+148h] [rbp+48h] BYREF
  const struct tagRECT *v168; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int8 *EdidBaseBlockPtr; // [rsp+158h] [rbp+58h]
  char *v170; // [rsp+160h] [rbp+60h]
  struct _GDIINFO *v171; // [rsp+168h] [rbp+68h]
  __m128i v172; // [rsp+170h] [rbp+70h]
  _OWORD v173[6]; // [rsp+180h] [rbp+80h] BYREF
  struct _DPI_INFORMATION *v174; // [rsp+1E0h] [rbp+E0h]
  __int128 v175; // [rsp+1E8h] [rbp+E8h]
  struct tagSIZE v176[5]; // [rsp+1F8h] [rbp+F8h] BYREF
  _D3DKMDT_MONITOR_SOURCE_MODE v177; // [rsp+220h] [rbp+120h] BYREF
  _OWORD v178[6]; // [rsp+280h] [rbp+180h] BYREF
  unsigned __int16 v179[128]; // [rsp+2E0h] [rbp+1E0h] BYREF

  v6 = (__int64 (__fastcall *)(char *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **))*((_QWORD *)a1 + 6);
  v7 = a5;
  v8 = a2;
  v9 = a6;
  v11 = a3;
  v170 = a2;
  v150 = a4;
  v164 = a3;
  v171 = a5;
  v174 = a6;
  v154 = 0LL;
  v143 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0;
  v142 = 0;
  v139 = 0LL;
  v12 = v6(a2, &v139, &v154);
  v14 = v12;
  if ( v12 < 0 )
  {
    v93 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v93 + 24) = v8;
    *(_QWORD *)(v93 + 32) = v14;
    WdLogEvent5_WdError(v93);
    return (unsigned int)v14;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v142,
    v139,
    *((_QWORD *)a1 + 8),
    (__int64)v8);
  v134 = 0LL;
  v153 = 0LL;
  v15 = v143;
  v16 = (*(__int64 (__fastcall **)(DpiInternal *, __int64 *, __int64 *))v154)(v143, &v134, &v153);
  v14 = v16;
  if ( v16 < 0 )
  {
    v94 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v94[3] = v15;
    v94[4] = v14;
LABEL_99:
    WdLogEvent5_WdError(v94);
    goto LABEL_100;
  }
  v163 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))v153)(v134, (unsigned int)v11, &v163);
  v14 = v18;
  if ( v18 < 0 )
  {
    v94 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v94[3] = v11;
    v94[4] = v134;
    v94[5] = v14;
    goto LABEL_99;
  }
  LODWORD(v14) = GetCurrentContentResolution(v8, v11, &v168, &v141, &v148);
  if ( (int)v14 < 0 )
  {
LABEL_100:
    v95 = v142 == 0;
    goto LABEL_102;
  }
  v21 = v168;
  if ( !v168 )
  {
    v96 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v96 + 24) = 1699LL;
    WdLogEvent5_WdAssertion(v96);
  }
  v22 = (unsigned int)(v21->right - v21->left);
  if ( v21->right - v21->left <= 0 || (v22 = (unsigned int)(v21->bottom - v21->top), v21->bottom - v21->top <= 0) )
  {
    v97 = WdLogNewEntry5_WdAssertion(v22);
    *(_QWORD *)(v97 + 24) = 1702LL;
    WdLogEvent5_WdAssertion(v97);
  }
  LODWORD(v133) = 0;
  memset(v176, 0, 0x20uLL);
  Win32DpiValues = QueryWin32DpiValues((unsigned int *)&v133, (struct _DPI_SCALE_FACTOR_COLLECTION *)v176);
  v25 = Win32DpiValues;
  if ( Win32DpiValues < 0 )
  {
    v98 = WdLogNewEntry5_WdAssertion(v24);
    *(_QWORD *)(v98 + 24) = 1708LL;
    WdLogEvent5_WdAssertion(v98);
    v100 = WdLogNewEntry5_WdError(v99);
    *(_QWORD *)(v100 + 24) = v25;
    WdLogEvent5_WdError(v100);
  }
  v26 = 0;
  v152 = 0;
  memset(v173, 0, sizeof(v173));
  v27 = v163 > 1 || v148 > 1;
  if ( v21->left || (v95 = v21->top == 0, v28 = 32, !v95) )
    v28 = 0;
  v29 = v27 | v28;
  v30 = dword_1C007A718;
  v31 = 0LL;
  HIDWORD(v173[5]) = v29;
  if ( v29 >= 0x20 )
    v30 = v150;
  dword_1C007A718 = v30;
  v139 = 0LL;
  v175 = v173[4];
  if ( !v163 )
  {
    v87 = (__m128i)v173[1];
    v172 = (__m128i)v173[1];
LABEL_85:
    v88 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v87, 8));
    if ( (_DWORD)v88 )
    {
      v119 = _mm_cvtsi128_si32(_mm_srli_si128(v87, 12));
      if ( v119 )
      {
        if ( (v29 & 0x80u) == 0 )
        {
          v7->ulHorzSize = 1000 * v88;
          v120 = 1000 * v119;
        }
        else
        {
          v7->ulHorzSize = 1000 * v119;
          v120 = 1000 * v88;
        }
        v7->ulVertSize = v120;
      }
    }
    if ( (v29 & 2) == 0
      || (v121 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(
                                                                              _mm_srli_si128(
                                                                                _mm_load_si128((const __m128i *)&v173[5]),
                                                                                4)),
          (_DWORD)v121 == 1234568) )
    {
      v89 = DWORD2(v173[0]);
    }
    else
    {
      v89 = DpiInternal::AdjustDesktopScaleFactorForOverride((DpiInternal *)0x64, v173[2], (struct tagSIZE)v176, v121);
      DWORD2(v173[0]) = v89;
    }
    if ( v26 )
    {
      v89 = v26;
      DWORD2(v173[0]) = v26;
      DWORD1(v173[5]) = 1234567;
    }
    if ( !v89 )
    {
      v122 = WdLogNewEntry5_WdAssertion(v88);
      *(_QWORD *)(v122 + 24) = 2135LL;
      WdLogEvent5_WdAssertion(v122);
    }
    v90 = v173[3];
    *(_QWORD *)&v173[0] = 0x6400000064LL;
    *(_OWORD *)v9 = v173[0];
    *((__m128i *)v9 + 1) = v172;
    *((_OWORD *)v9 + 2) = v173[2];
    v91 = v175;
    *((_OWORD *)v9 + 3) = v90;
    *((_OWORD *)v9 + 4) = v91;
    *((_OWORD *)v9 + 5) = v173[5];
    if ( v142 )
      ((void (__fastcall *)(__int64, DpiInternal *, _QWORD))v144)(v145, v15, 0LL);
    return 0LL;
  }
  v172 = (__m128i)v173[1];
  while ( 1 )
  {
    v131.cx = -1;
    BYTE1(v131.cy) = 0;
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, struct _D3DKMDT_2DREGION *))(v153 + 8))(
            v134,
            (unsigned int)v11,
            v31,
            &v131);
    v14 = v32;
    if ( v32 < 0 )
    {
      v117 = (_QWORD *)WdLogNewEntry5_WdError(v33);
      v117[3] = v139;
      cx = (unsigned int)v11;
      goto LABEL_156;
    }
    v132 = 0LL;
    v34 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct tagSIZE *))(v153 + 24);
    v157 = 0LL;
    v158 = 0LL;
    v159 = 0LL;
    v160 = 0;
    v156 = 0;
    v35 = v34(v134, (unsigned int)v11, v131.cx, &v132);
    v14 = v35;
    if ( v35 < 0 )
    {
      v117 = (_QWORD *)WdLogNewEntry5_WdError(v36);
      v117[3] = (unsigned int)v11;
      cx = v131.cx;
LABEL_156:
      v117[4] = cx;
      v117[5] = v14;
      WdLogEvent5_WdError(v117);
      v95 = v142 == 0;
      goto LABEL_102;
    }
    v37 = (__int64)v132;
    if ( !*(_QWORD *)&v132 )
    {
      v101 = WdLogNewEntry5_WdAssertion(v36);
      *(_QWORD *)(v101 + 24) = 1764LL;
      WdLogEvent5_WdAssertion(v101);
      v37 = (__int64)v132;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v156,
      v37,
      *(_QWORD *)(v153 + 32),
      v134);
    v38 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v157 + 5));
    v129 = 0;
    v130 = D3DKMDT_VOT_UNINITIALIZED;
    v39 = v38;
    v40 = 0;
    VideoOutputTechnology = DmmGetVideoOutputTechnology((DXGADAPTER *)v8, v131.cx, &v130, 0LL);
    v43 = VideoOutputTechnology;
    if ( VideoOutputTechnology < 0 )
    {
      v102 = (_QWORD *)WdLogNewEntry5_WdError(v42);
      v102[3] = v8;
      v102[4] = v131.cx;
      v102[5] = v43;
      WdLogEvent5_WdError(v102);
    }
    else
    {
      v40 = IsInternalVideoOutput(v130);
      v129 = v40;
    }
    v162 = v40;
    v132 = 0LL;
    v151 = 0;
    v44 = ((unsigned __int8)v29 ^ (unsigned __int8)(v29 | (4 * v40))) & 4 ^ v29;
    EdidBaseBlockPtr = (unsigned __int8 *)MonitorGetEdidBaseBlockPtr((DXGADAPTER *)v8, v131.cx);
    v165 = 0LL;
    v166 = 0;
    BYTE2(v131.cy) = 0;
    PreferredMode = EDID_V1_GetPreferredMode(EdidBaseBlockPtr, (struct DISPLAY_PREFERRED_MODE_INFO *)&v165);
    v47 = PreferredMode;
    if ( PreferredMode < 0 )
    {
      v103 = (_QWORD *)WdLogNewEntry5_WdError(v46);
      v103[3] = v8;
      v103[4] = v131.cx;
      v103[5] = v47;
      WdLogEvent5_WdError(v103);
    }
    else
    {
      BYTE2(v131.cy) = 1;
    }
    v48 = HIDWORD(v165);
    v149 = v165;
    v155 = v165;
    v128 = 0;
    PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(v8, v131.cx, &v177);
    v51 = PreferredMonitorSourceModeOnTarget;
    if ( PreferredMonitorSourceModeOnTarget < 0 )
    {
      v104 = (_QWORD *)WdLogNewEntry5_WdError(v50);
      v104[3] = v8;
      v104[4] = v131.cx;
      v104[5] = v51;
      WdLogEvent5_WdError(v104);
      cy = ActiveSize.cy;
      v52 = ActiveSize.cx;
    }
    else
    {
      v52 = v177.VideoSignalInfo.ActiveSize.cx;
      cy = v177.VideoSignalInfo.ActiveSize.cy;
      ActiveSize = v177.VideoSignalInfo.ActiveSize;
      v128 = 1;
    }
    if ( ((v39 - 2) & 0xFFFFFFFD) == 0 )
    {
      v149 = __PAIR64__(v165, v48);
      v155 = __PAIR64__(v165, v48);
      ActiveSize.cx = cy;
      ActiveSize.cy = v52;
    }
    if ( !EdidBaseBlockPtr )
    {
      v44 |= 8u;
      v56 = v132.cy;
      v55 = v132.cx;
      *(_QWORD *)&v173[2] = *(_QWORD *)&v171->ulHorzRes;
LABEL_39:
      if ( v55 )
        goto LABEL_41;
      goto LABEL_40;
    }
    if ( (int)EDID_V1_GetPhysicalSize(cy, EdidBaseBlockPtr, (unsigned int *)&v147, (unsigned int *)&v161) < 0 )
    {
      v105 = WdLogNewEntry5_WdAssertion(v54);
      *(_QWORD *)(v105 + 24) = 1844LL;
      WdLogEvent5_WdAssertion(v105);
    }
    v55 = v147;
    v56 = v161;
    v132.cx = v147;
    v132.cy = v161;
    if ( ((v39 - 2) & 0xFFFFFFFD) == 0 )
    {
      v55 = v161;
      v132.cx = v161;
      v56 = v147;
      v132.cy = v147;
    }
    if ( !v55 || !v56 )
    {
      v56 = 0;
      v132 = 0LL;
      v55 = 0;
      goto LABEL_39;
    }
    if ( v55 * v56 > 16000 || v129 )
      goto LABEL_39;
    v44 |= 0x40u;
    v151 = 1;
    v56 = 0;
    v132 = 0LL;
    v55 = 0;
LABEL_40:
    BYTE1(v131.cy) = (v8[300] & 0x20) != 0;
LABEL_41:
    LODWORD(v14) = DpiInternal::GetCurrentSourceResolution(
                     v15,
                     v154,
                     v157,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v137,
                     v123);
    if ( (int)v14 < 0 )
      break;
    LOBYTE(v131.cy) = 0;
    LODWORD(v14) = DpiInternal::GetCurrentTargetResolution(
                     v15,
                     v154,
                     v157,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v135,
                     (struct _D3DKMDT_2DREGION *)&v131.cy,
                     v126);
    if ( (int)v14 < 0 )
    {
      if ( v156 )
        v158(v159, v157);
      v95 = v142 == 0;
      goto LABEL_102;
    }
    if ( ((v39 - 2) & 0xFFFFFFFD) != 0 )
    {
      v57 = v136;
      v58 = v135;
    }
    else
    {
      v57 = v135;
      v58 = v136;
      v135 = v136;
      v136 = v57;
    }
    v95 = *((_DWORD *)v8 + 74) == 4;
    v130 = v57;
    if ( v95 )
    {
      v167 = 0LL;
      PhysicalDisplaySizeOverride = GetPhysicalDisplaySizeOverride(&v167);
      v107 = v132;
      if ( PhysicalDisplaySizeOverride >= 0 )
        v107 = v167;
      v132 = v107;
      v55 = v107.cx;
      v56 = v107.cy;
    }
    if ( (v44 & 1) != 0 && v148 <= 1 && (_DWORD)v149 && HIDWORD(v149) )
    {
      v59 = v138;
      if ( LOBYTE(v131.cy) )
      {
        v59 = v138 >> 1;
        v138 >>= 1;
      }
      if ( v137 >= 2 * (int)v149 || (v108 = 0, v59 >= 2 * HIDWORD(v149)) )
        v108 = 2;
      v44 ^= ((unsigned __int8)v44 ^ (unsigned __int8)(v44 | v108)) & 2;
      if ( LOBYTE(v131.cy) )
      {
        v59 *= 2;
        v138 = v59;
      }
    }
    else
    {
      v59 = v138;
    }
    memset(v178, 0, sizeof(v178));
    DWORD1(v178[5]) = v150;
    v60 = *((_DWORD *)v157 + 5);
    if ( (unsigned int)(v60 - 5) <= 0xB )
      v60 = (v60 - 1) % 4 + 1;
    v61 = (((v60 - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v44 & 0xFFFFFF7F;
    v62 = (unsigned int)(v168->right - v168->left);
    LODWORD(v178[2]) = v168->right - v168->left;
    v63 = v168->bottom - v168->top;
    DWORD1(v178[2]) = v63;
    if ( ((v60 - 2) & 0xFFFFFFFD) == 0 )
      *(_QWORD *)&v178[2] = __PAIR64__(v62, v63);
    v64 = *((_DWORD *)v157 + 3);
    if ( v64 <= 0 )
      goto LABEL_133;
    if ( v64 <= 2 )
      goto LABEL_54;
    switch ( v64 )
    {
      case 3:
        v67 = v130;
        v65 = v58 * (v141.right - v141.left) / v137;
        v112 = v130 * (v141.bottom - v141.top);
        break;
      case 4:
        v67 = v130;
        if ( v59 * v58 <= v137 * v130 )
        {
          v111 = v58;
          v110 = v59 * v58 / v137;
        }
        else
        {
          v110 = v130;
          v111 = v137 * v130 / v59;
        }
        v65 = v111 * (v141.right - v141.left) / v137;
        v112 = v110 * (v141.bottom - v141.top);
        break;
      case 5:
        goto LABEL_134;
      default:
        if ( v64 != 255 )
        {
LABEL_133:
          v109 = WdLogNewEntry5_WdAssertion(v62);
          *(_QWORD *)(v109 + 24) = *((int *)v157 + 3);
          WdLogEvent5_WdAssertion(v109);
LABEL_134:
          v61 |= 0x100u;
        }
LABEL_54:
        v65 = v141.right - v141.left;
        v66 = v141.bottom - v141.top;
        v67 = v130;
        goto LABEL_55;
    }
    v66 = v112 / v59;
LABEL_55:
    v68 = v66 * v56;
    DWORD2(v178[1]) = v65 * v55 / v58;
    v69 = (struct tagSIZE)(v68 % v67);
    HIDWORD(v178[1]) = v68 / v67;
    if ( (v61 & 2) != 0 || (LOBYTE(v69.cx) = 0, !v128) )
      LOBYTE(v69.cx) = 1;
    v70 = BYTE1(v131.cy);
    if ( BYTE1(v131.cy) || v151 || !EdidBaseBlockPtr )
      goto LABEL_142;
    v71 = BYTE2(v131.cy);
    if ( !LOBYTE(v69.cx) )
      v71 = v128;
    if ( !v71 )
    {
LABEL_142:
      v8 = v170;
      LODWORD(v178[4]) = 0;
    }
    else
    {
      v8 = v170;
      p_ActiveSize = (const struct tagSIZE *)&ActiveSize;
      if ( LOBYTE(v69.cx) )
        p_ActiveSize = (const struct tagSIZE *)&v155;
      v73 = 16 * (unsigned int)DetermineViewDistance(v170, &v132, v162, p_ActiveSize, (unsigned int *)&v178[4]);
      v61 = v61 & 0xFFFFFFEF | v73;
      if ( !LODWORD(v178[4]) )
      {
        v113 = WdLogNewEntry5_WdAssertion(v73);
        *(_QWORD *)(v113 + 24) = 2036LL;
        WdLogEvent5_WdAssertion(v113);
      }
    }
    v130 = D3DKMDT_VOT_HD15;
    if ( v129
      && (LODWORD(v124) = 2, (int)DpiReadPnpRegistryValue(*((_QWORD *)v8 + 24), L"PreferredScaleFactor", &v130, 4LL) >= 0) )
    {
      v74 = v130;
      v75 = 4096;
    }
    else
    {
      v74 = D3DKMDT_VOT_HD15;
      v130 = D3DKMDT_VOT_HD15;
      v75 = 0;
    }
    v29 = v75 | v61 & 0xFFFFEFFF;
    HIDWORD(v173[5]) = v29;
    v76 = v29;
    if ( (v29 & 0x1000) == 0 )
    {
      PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                         (DpiInternal *)v8,
                                         (void *const)v131.cx,
                                         (v29 >> 5) & 1,
                                         (int)&v130,
                                         (unsigned int *)v124);
      v74 = v130;
      v29 = v29 & 0xFFFFF7FF | (PreferredScaleFactorForMonitor << 11);
      HIDWORD(v173[5]) = v76 & 0xFFFFF7FF | (PreferredScaleFactorForMonitor << 11);
      v76 = HIDWORD(v173[5]);
    }
    if ( v70 && v129 && v74 == D3DKMDT_VOT_HD15 )
    {
      DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(DpiInternal **)&v178[2],
        v69,
        (__int64)v176,
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v178);
      DpiInternal::FillOverridesAndAdjustedScaleFactor(
        (DpiInternal *)(unsigned int)v133,
        v114,
        (int *)v176,
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v178);
      v29 = v76 | 0x400;
      HIDWORD(v173[5]) = v76 | 0x400;
    }
    else
    {
      LODWORD(v124) = (_DWORD)v133;
      FillDpiInfo(
        (const struct tagSIZE *)&v178[1] + 1,
        (struct tagSIZE *)&v178[2],
        v176,
        v178[4],
        (DpiInternal *)v124,
        v74,
        v127,
        (struct _DPI_INFORMATION *)v178);
    }
    if ( HIDWORD(v178[5]) )
    {
      v115 = WdLogNewEntry5_WdAssertion(v79);
      *(_QWORD *)(v115 + 24) = 2067LL;
      WdLogEvent5_WdAssertion(v115);
    }
    HIDWORD(v178[5]) = v29;
    if ( v129
      || (v29 & 4) == 0
      && (DpiInternal::AvgXY(*((DpiInternal **)&v178[3] + 1), v78),
          v81 = DpiInternal::AvgXY(*((DpiInternal **)&v173[3] + 1), v80),
          v81 <= v82) )
    {
      v173[0] = v178[0];
      v172 = (__m128i)v178[1];
      v173[2] = v178[2];
      v175 = v178[4];
      v173[5] = v178[5];
      v29 = HIDWORD(v178[5]);
      v173[3] = v178[3];
    }
    memset(v179, 0, sizeof(v179));
    MonitorDeviceInterfaceName = MonitorGetMonitorDeviceInterfaceName((DXGADAPTER *)v8, v131.cx, 0x80uLL, v179);
    v86 = MonitorDeviceInterfaceName;
    if ( MonitorDeviceInterfaceName < 0 )
    {
      v116 = (_QWORD *)WdLogNewEntry5_WdError(v84);
      v116[3] = v8;
      v116[4] = v131.cx;
      v116[5] = v86;
      WdLogEvent5_WdError(v116);
      v179[0] = 0;
    }
    else
    {
      ScaleOverrideTestHook((DpiInternal *)v179, (const unsigned __int16 *)&v152, v85);
    }
    v125 = v74;
    LODWORD(v11) = v164;
    TraceLogDpiInfo((struct _DPI_INFORMATION *)v178, v179, (const struct _LUID *)(v8 + 268), v164, v125);
    LogScaleFactor(*(struct _LUID *)(v8 + 268), v11, (unsigned int)v133, (struct _DPI_INFORMATION *)v178);
    if ( v156 )
      v158(v159, v157);
    v31 = v139 + 1;
    v139 = v31;
    if ( v31 >= v163 )
    {
      v26 = v152;
      v87 = v172;
      v9 = v174;
      v7 = v171;
      goto LABEL_85;
    }
  }
  if ( v156 )
    v158(v159, v157);
  v95 = v142 == 0;
LABEL_102:
  if ( !v95 )
    v144(v145, v15);
  return (unsigned int)v14;
}
