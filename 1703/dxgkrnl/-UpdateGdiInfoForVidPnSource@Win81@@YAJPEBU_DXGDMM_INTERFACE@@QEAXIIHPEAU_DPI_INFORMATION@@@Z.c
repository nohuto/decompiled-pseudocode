/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01BFFE0
 * Callers:
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01BF9FC (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0003884 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C0003F8C (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0004038 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009CF0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AB07C (DmmGetVideoOutputTechnology.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00AB5C0 (MonitorGetEdidBaseBlockPtr.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00AB694 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00ABA7C (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C01BBD70 (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C01BF804 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C01BF98C (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01BFAF8 (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01BFC14 (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@@Z @ 0x1C01BFDC8 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@.c)
 */

__int64 __fastcall Win81::UpdateGdiInfoForVidPnSource(
        Win81 *this,
        const struct _DXGDMM_INTERFACE *a2,
        void *const a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(const struct _DXGDMM_INTERFACE *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **); // rax
  DXGADAPTER *v7; // rsi
  __int64 v8; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _OWORD *v13; // rbx
  _QWORD *v14; // rax
  DpiInternal *v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct tagSIZE v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r15
  _BOOL8 v27; // rcx
  unsigned int v28; // edi
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 (__fastcall *v32)(__int64, _QWORD, _QWORD, unsigned __int64 *); // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v40; // eax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v41; // r15d
  bool v42; // r14
  int VideoOutputTechnology; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbx
  _QWORD *v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // edi
  unsigned __int8 *EdidBaseBlockPtr; // r14
  int PreferredMode; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  _QWORD *v56; // rax
  int v57; // r13d
  int v58; // r12d
  unsigned int v59; // r14d
  unsigned int v60; // esi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  unsigned int v66; // eax
  unsigned int v67; // r15d
  unsigned int v68; // ebx
  char v69; // al
  __int64 v70; // r8
  __int64 v71; // r9
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *v72; // r13
  __int64 v73; // rdx
  __int64 v74; // rax
  struct tagSIZE v75; // rdx
  int IsAudioAvailableInEdid; // eax
  char v77; // al
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  unsigned int v82; // ebx
  __int64 v83; // rax
  char cx; // si
  __int64 v85; // rax
  unsigned int v86; // ecx
  unsigned int v87; // eax
  unsigned int v88; // eax
  __int64 v89; // rdx
  struct _DPI_INFORMATION *v90; // r9
  _QWORD *v91; // rax
  unsigned int v92; // eax
  __int64 v93; // rax
  __int128 v94; // xmm1
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  __int128 v97; // xmm0
  struct _D3DKMDT_2DREGION *v99; // [rsp+28h] [rbp-E0h]
  struct _D3DKMDT_2DREGION v100; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v101; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v102; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v103; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v104; // [rsp+64h] [rbp-A4h]
  unsigned int v105; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v106; // [rsp+70h] [rbp-98h] BYREF
  __int64 v107; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v108; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v109; // [rsp+84h] [rbp-84h]
  unsigned int v110; // [rsp+88h] [rbp-80h] BYREF
  int v111; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v112; // [rsp+90h] [rbp-78h]
  __int64 v113; // [rsp+98h] [rbp-70h] BYREF
  struct D3DKMDT_HVIDPN__ *v114; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v115; // [rsp+A8h] [rbp-60h] BYREF
  int v116; // [rsp+B0h] [rbp-58h]
  unsigned int v117; // [rsp+B8h] [rbp-50h] BYREF
  BOOL v118; // [rsp+BCh] [rbp-4Ch]
  int v119; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v120; // [rsp+C8h] [rbp-40h] BYREF
  DpiInternal *v121; // [rsp+D0h] [rbp-38h]
  char v122; // [rsp+D8h] [rbp-30h] BYREF
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *v123; // [rsp+E0h] [rbp-28h]
  void (__fastcall *v124)(__int64, D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *); // [rsp+E8h] [rbp-20h]
  __int64 v125; // [rsp+F0h] [rbp-18h]
  int v126; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v127; // [rsp+100h] [rbp-8h]
  char v128; // [rsp+108h] [rbp+0h] BYREF
  DpiInternal *v129; // [rsp+110h] [rbp+8h]
  void (__fastcall *v130)(__int64, DpiInternal *); // [rsp+118h] [rbp+10h]
  __int64 v131; // [rsp+120h] [rbp+18h]
  int v132; // [rsp+128h] [rbp+20h]
  _OWORD v133[12]; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int8 *v134; // [rsp+1F8h] [rbp+F0h]
  __int128 v135; // [rsp+200h] [rbp+F8h]
  __int128 v136; // [rsp+210h] [rbp+108h]

  v6 = (__int64 (__fastcall *)(const struct _DXGDMM_INTERFACE *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **))*((_QWORD *)this + 6);
  v7 = a2;
  v8 = (unsigned int)a3;
  v121 = a2;
  v112 = a4;
  v119 = (int)a3;
  v114 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  v131 = 0LL;
  v132 = 0;
  v128 = 0;
  v106 = 0LL;
  v10 = v6(a2, &v106, &v114);
  v13 = (_OWORD *)v10;
  if ( v10 < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v14[3] = v7;
LABEL_5:
    v14[4] = v13;
LABEL_96:
    WdLogEvent5_WdError(v14);
    goto LABEL_105;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v128,
    v106,
    *((_QWORD *)this + 8),
    (__int64)v7);
  v15 = v129;
  v107 = 0LL;
  v113 = 0LL;
  v16 = (*(__int64 (__fastcall **)(DpiInternal *, __int64 *, __int64 *))v114)(v129, &v107, &v113);
  v13 = (_OWORD *)v16;
  if ( v16 < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v14[3] = v15;
    goto LABEL_5;
  }
  v120 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))v113)(v107, (unsigned int)v8, &v120);
  v13 = (_OWORD *)v19;
  if ( v19 < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v14[3] = v8;
    v22 = v107;
LABEL_95:
    v14[4] = v22;
    v14[5] = v13;
    goto LABEL_96;
  }
  memset(&v133[6], 0, 0x60uLL);
  v25 = v120;
  v13 = (_OWORD *)a6;
  v26 = 0LL;
  v27 = v120 > 1;
  v127 = 0LL;
  v136 = v133[10];
  v28 = v27 | HIDWORD(v133[11]) & 0xFFFFFFDE | *(_DWORD *)(a6 + 92) & 0x20;
  HIDWORD(v133[11]) = v28;
  if ( !v120 )
  {
    v135 = v133[7];
LABEL_98:
    if ( (v28 & 2) == 0
      || (v23 = (struct tagSIZE)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&v133[11]), 4)),
          v23.cx == 1234568) )
    {
      v92 = DWORD2(v133[6]);
    }
    else
    {
      v92 = Win81::AdjustDesktopScaleFactorForOverride(
              (Win81 *)0x64,
              *(__int64 *)&v133[8],
              v23,
              (const struct Win81::DPI_SCALE_FACTOR_COLLECTION *)v24);
      DWORD2(v133[6]) = v92;
    }
    if ( !v92 )
    {
      v93 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(v27, v25, v23, v24);
      *(_QWORD *)(v93 + 24) = 1048LL;
      WdLogEvent5_WdAssertion(v93);
    }
    v94 = v135;
    *v13 = v133[6];
    v95 = v133[8];
    v13[1] = v94;
    v96 = v133[9];
    v13[2] = v95;
    v97 = v136;
    v13[3] = v96;
    v13[4] = v97;
    v13[5] = v133[11];
    LODWORD(v13) = 0;
    goto LABEL_105;
  }
  v135 = v133[7];
  while ( 1 )
  {
    v100.cy = -1;
    BYTE2(v100.cx) = 0;
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, UINT *))(v113 + 8))(
            v107,
            (unsigned int)v8,
            v26,
            &v100.cy);
    v13 = (_OWORD *)v29;
    if ( v29 < 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v22 = (unsigned int)v8;
      v14[3] = v26;
      goto LABEL_95;
    }
    v102 = 0LL;
    v32 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int64 *))(v113 + 24);
    v123 = 0LL;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0;
    v122 = 0;
    v33 = v32(v107, (unsigned int)v8, v100.cy, &v102);
    v13 = (_OWORD *)v33;
    if ( v33 < 0 )
      break;
    v38 = v102;
    if ( !v102 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v35, 0LL, v36, v37);
      *(_QWORD *)(v39 + 24) = 780LL;
      WdLogEvent5_WdAssertion(v39);
      v38 = v102;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v122,
      v38,
      *(_QWORD *)(v113 + 32),
      v107);
    v40 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v123[5]);
    LOBYTE(v100.cx) = 0;
    LODWORD(v101) = -2;
    v41 = v40;
    v42 = 0;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(v7, v100.cy, &v101, 0LL);
    v46 = VideoOutputTechnology;
    if ( VideoOutputTechnology >= 0 )
    {
      v42 = IsInternalVideoOutput(v101);
      LOBYTE(v100.cx) = v42;
    }
    else
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
      v47[3] = v7;
      v47[4] = v100.cy;
      v47[5] = v46;
      WdLogEvent5_WdError(v47);
    }
    v118 = v42;
    v102 = 0LL;
    v111 = 0;
    v50 = (v28 ^ (v28 | (4 * v42))) & 4 ^ v28;
    EdidBaseBlockPtr = (unsigned __int8 *)MonitorGetEdidBaseBlockPtr(v7, v100.cy, v48, v49);
    v134 = EdidBaseBlockPtr;
    HIBYTE(v100.cx) = 0;
    v115 = 0LL;
    v116 = 0;
    PreferredMode = EDID_V1_GetPreferredMode(EdidBaseBlockPtr, (struct DISPLAY_PREFERRED_MODE_INFO *)&v115);
    v55 = PreferredMode;
    if ( PreferredMode >= 0 )
    {
      HIBYTE(v100.cx) = 1;
    }
    else
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v54, v53);
      v56[3] = v7;
      v56[4] = v100.cy;
      v56[5] = v55;
      WdLogEvent5_WdError(v56);
    }
    v57 = v115;
    v58 = HIDWORD(v115);
    v106 = v115;
    if ( ((v41 - 2) & 0xFFFFFFFD) == 0 )
    {
      v57 = HIDWORD(v115);
      v106 = __PAIR64__(v115, HIDWORD(v115));
      v58 = v115;
    }
    if ( EdidBaseBlockPtr )
    {
      if ( (int)EDID_V1_GetPhysicalSize(v54, EdidBaseBlockPtr, &v110, &v117) < 0 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v62, v61, v63, v64);
        *(_QWORD *)(v65 + 24) = 839LL;
        WdLogEvent5_WdAssertion(v65);
      }
      v60 = v110;
      v59 = v117;
      v102 = __PAIR64__(v117, v110);
      if ( ((v41 - 2) & 0xFFFFFFFD) == 0 )
      {
        v60 = v117;
        v102 = __PAIR64__(v110, v117);
        v59 = v110;
      }
      if ( v60 && v59 )
      {
        if ( (int)(v60 * v59) <= 16000 && !LOBYTE(v100.cx) )
        {
          v59 = 0;
          v111 = 1;
          v50 |= 0x40u;
          v102 = 0LL;
          v60 = 0;
LABEL_35:
          BYTE2(v100.cx) = (*((_BYTE *)v121 + 300) & 0x20) != 0;
          goto LABEL_36;
        }
      }
      else
      {
        v59 = 0;
        v102 = 0LL;
        v60 = 0;
      }
    }
    else
    {
      v59 = HIDWORD(v102);
      v50 |= 8u;
      v60 = v102;
    }
    if ( !v60 )
      goto LABEL_35;
LABEL_36:
    LODWORD(v13) = DpiInternal::GetCurrentSourceResolution(
                     v129,
                     v114,
                     (const struct _DXGDMM_VIDPN_INTERFACE *)v123,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v103);
    if ( (int)v13 < 0 )
      goto LABEL_92;
    BYTE1(v100.cx) = 0;
    LODWORD(v13) = DpiInternal::GetCurrentTargetResolution(
                     v129,
                     v114,
                     (const struct _DXGDMM_VIDPN_INTERFACE *)v123,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v108,
                     (struct _D3DKMDT_2DREGION *)((char *)&v100 + 1));
    if ( (int)v13 < 0 )
      goto LABEL_92;
    v66 = v109;
    if ( ((v41 - 2) & 0xFFFFFFFD) != 0 )
    {
      LODWORD(v101) = v109;
      v66 = v108;
    }
    else
    {
      LODWORD(v101) = v108;
      v108 = v109;
      v109 = v101;
    }
    v67 = v103;
    v105 = v66;
    if ( (v50 & 1) != 0 && v57 && v58 )
    {
      v68 = v104;
      if ( BYTE1(v100.cx) )
      {
        v68 = v104 >> 1;
        v104 >>= 1;
      }
      if ( v103 >= 2 * v57 || v68 >= 2 * v58 )
        v69 = 2;
      else
        v69 = 0;
      v50 ^= ((unsigned __int8)v50 ^ (unsigned __int8)(v50 | v69)) & 2;
      if ( BYTE1(v100.cx) )
      {
        v68 *= 2;
        v104 = v68;
      }
    }
    else
    {
      v68 = v104;
    }
    memset(v133, 0, 0x60uLL);
    v72 = v123;
    DWORD1(v133[5]) = a5;
    *(_QWORD *)&v133[2] = __PAIR64__(v68, v103);
    v73 = *((unsigned int *)v123 + 3);
    if ( *((_DWORD *)v123 + 3) != 1 )
    {
      switch ( *((_DWORD *)v123 + 3) )
      {
        case 2:
          goto LABEL_81;
        case 3:
          break;
        case 4:
LABEL_81:
          if ( (_DWORD)v73 == 4 )
          {
            v86 = v105;
            if ( v60 * v68 <= v59 * v103 )
            {
              v103 = v105;
              v88 = v68 * v105 / v67;
              v67 = v105;
              v68 = v88;
              v104 = v88;
            }
            else
            {
              v87 = v103 * (unsigned int)v101 / v68;
              v68 = v101;
              v67 = v87;
              v103 = v87;
              v104 = v101;
            }
          }
          else
          {
            v86 = v105;
          }
          v60 = v60 * v67 / v86;
          v59 = v59 * v68 / (unsigned int)v101;
          break;
        default:
          if ( *((_DWORD *)v123 + 3) != 5 )
          {
            if ( *((_DWORD *)v123 + 3) == 255 )
              break;
            v74 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)v123 + 3) - 5), v73, v70, v71);
            *(_QWORD *)(v74 + 24) = *((int *)v72 + 3);
            WdLogEvent5_WdAssertion(v74);
          }
          v50 |= 0x100u;
          break;
      }
    }
    v75 = (struct tagSIZE)*((unsigned int *)v72 + 5);
    *((_QWORD *)&v133[1] + 1) = __PAIR64__(v59, v60);
    if ( (unsigned int)(v75.cx - 5) <= 0xB )
      v75 = (struct tagSIZE)(unsigned int)((v75.cx - 1) % 4 + 1);
    v28 = (((v75.cx - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v50 & 0xFFFFFF7F;
    HIDWORD(v133[11]) = v28;
    if ( !BYTE2(v100.cx) && !v111 && v134 && HIBYTE(v100.cx) )
    {
      IsAudioAvailableInEdid = DpiInternal::IsAudioAvailableInEdid(v121, (void *)v100.cy);
      LODWORD(v99) = (unsigned __int8)v116;
      v77 = Win81::DetermineViewDistance(
              v121,
              &v102,
              (const struct tagSIZE *)v118,
              (int)&v106,
              (const struct tagSIZE *)v99,
              IsAudioAvailableInEdid,
              (unsigned int *)&v133[4]);
      v82 = v133[4];
      v28 ^= ((unsigned __int8)v28 ^ (unsigned __int8)(16 * v77)) & 0x10;
      HIDWORD(v133[11]) = v28;
      if ( !LODWORD(v133[4]) )
      {
        v83 = WdLogNewEntry5_WdAssertion(v79, v78, v80, v81);
        *(_QWORD *)(v83 + 24) = 1004LL;
        WdLogEvent5_WdAssertion(v83);
      }
LABEL_69:
      cx = v100.cx;
      goto LABEL_70;
    }
    v82 = 0;
    LODWORD(v133[4]) = 0;
    if ( !BYTE2(v100.cx) )
      goto LABEL_69;
    cx = v100.cx;
    if ( LOBYTE(v100.cx) )
    {
      Win81::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(Win81 **)&v133[2],
        v75,
        (__int64)v133,
        (struct _DPI_INFORMATION *)4);
      Win81::FillOverridesAndAdjustedScaleFactor((Win81 *)v112, v89, (__int64)v133, v90);
      v28 |= 0x400u;
      HIDWORD(v133[11]) = v28;
      goto LABEL_71;
    }
LABEL_70:
    Win81::FillDpiInfo(
      (Win81 *)((char *)&v133[1] + 8),
      (const struct tagSIZE *)&v133[2],
      (const struct tagSIZE *)v82,
      v112,
      (unsigned int)v99,
      (__int64)v133);
LABEL_71:
    if ( HIDWORD(v133[5]) )
    {
      v85 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(v27, v25, v23, v24);
      *(_QWORD *)(v85 + 24) = 1021LL;
      WdLogEvent5_WdAssertion(v85);
    }
    HIDWORD(v133[5]) = v28;
    if ( cx
      || (v28 & 4) == 0
      && (v24 = 2LL,
          v23 = (struct tagSIZE)(unsigned int)((DWORD2(v133[3]) + HIDWORD(v133[3])) / 2),
          v25 = (unsigned int)((DWORD2(v133[9]) + HIDWORD(v133[9])) >> 31),
          LODWORD(v25) = (DWORD2(v133[9]) + HIDWORD(v133[9])) % 2,
          (DWORD2(v133[9]) + HIDWORD(v133[9])) / 2 <= v23.cx) )
    {
      v133[6] = v133[0];
      v135 = v133[1];
      v133[8] = v133[2];
      v136 = v133[4];
      v133[11] = v133[5];
      v28 = HIDWORD(v133[5]);
      v133[9] = v133[3];
    }
    if ( v122 )
      v124(v125, v72);
    v7 = v121;
    v26 = v127 + 1;
    LODWORD(v8) = v119;
    v127 = v26;
    if ( v26 >= v120 )
    {
      v13 = (_OWORD *)a6;
      goto LABEL_98;
    }
  }
  v91 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
  v91[3] = (unsigned int)v8;
  v91[4] = v100.cy;
  v91[5] = v13;
  WdLogEvent5_WdError(v91);
LABEL_92:
  if ( v122 )
    v124(v125, v123);
LABEL_105:
  if ( v128 )
    v130(v131, v129);
  return (unsigned int)v13;
}
