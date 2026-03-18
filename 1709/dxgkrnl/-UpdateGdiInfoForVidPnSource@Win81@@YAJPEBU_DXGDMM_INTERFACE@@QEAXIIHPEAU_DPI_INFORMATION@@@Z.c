/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01D877C
 * Callers:
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01D816C (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0006980 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000BC54 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000C844 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C000C954 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00B3F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00E3640 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00E4988 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00E4B54 (MonitorGetEdidBaseBlockPtr.c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C01D4268 (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C01D7F74 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C01D80FC (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01D8290 (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01D83B0 (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@@Z @ 0x1C01D8564 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@.c)
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
  __int64 v11; // rcx
  _OWORD *v12; // rbx
  _QWORD *v13; // rax
  DpiInternal *v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // r15
  _BOOL8 v22; // rcx
  unsigned int v23; // edi
  int v24; // eax
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(__int64, _QWORD, _QWORD, unsigned __int64 *); // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v31; // eax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v32; // r15d
  bool v33; // r14
  int VideoOutputTechnology; // eax
  __int64 v35; // rcx
  __int64 v36; // rbx
  _QWORD *v37; // rax
  int v38; // edi
  unsigned __int8 *EdidBaseBlockPtr; // r14
  int PreferredMode; // eax
  __int64 v41; // rcx
  __int64 v42; // rbx
  _QWORD *v43; // rax
  int v44; // r13d
  int v45; // r12d
  unsigned __int32 v46; // r14d
  unsigned int v47; // esi
  __int64 v48; // rcx
  __int64 v49; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v50; // eax
  unsigned int v51; // r15d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v52; // ebx
  char v53; // al
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *v54; // r13
  int v55; // edx
  __int64 v56; // rax
  struct tagSIZE v57; // rdx
  int IsAudioAvailableInEdid; // eax
  unsigned __int8 v59; // al
  unsigned int v60; // ebx
  __int64 v61; // rcx
  unsigned int v62; // eax
  __int64 v63; // rax
  char cx; // si
  __int64 v65; // rax
  unsigned int v66; // ecx
  unsigned int v67; // eax
  unsigned int v68; // eax
  __int64 v69; // rdx
  struct _DPI_INFORMATION *v70; // r9
  _QWORD *v71; // rax
  struct tagSIZE v72; // r8
  unsigned int v73; // eax
  __int64 v74; // rax
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  struct _D3DKMDT_2DREGION *v80; // [rsp+28h] [rbp-E0h]
  struct _D3DKMDT_2DREGION v81; // [rsp+48h] [rbp-C0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v82[2]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v83; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v84; // [rsp+60h] [rbp-A8h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v85; // [rsp+64h] [rbp-A4h]
  unsigned int v86; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v87; // [rsp+70h] [rbp-98h] BYREF
  __int64 v88; // [rsp+78h] [rbp-90h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v89; // [rsp+80h] [rbp-88h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v90; // [rsp+84h] [rbp-84h]
  unsigned int v91; // [rsp+88h] [rbp-80h] BYREF
  int v92; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v93; // [rsp+90h] [rbp-78h]
  __int64 v94; // [rsp+98h] [rbp-70h] BYREF
  struct D3DKMDT_HVIDPN__ *v95; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v96; // [rsp+A8h] [rbp-60h] BYREF
  int v97; // [rsp+B0h] [rbp-58h]
  unsigned int v98; // [rsp+B8h] [rbp-50h] BYREF
  BOOL v99; // [rsp+BCh] [rbp-4Ch]
  int v100; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v101; // [rsp+C8h] [rbp-40h] BYREF
  DpiInternal *v102; // [rsp+D0h] [rbp-38h]
  char v103; // [rsp+D8h] [rbp-30h] BYREF
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *v104; // [rsp+E0h] [rbp-28h]
  void (__fastcall *v105)(__int64, D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *); // [rsp+E8h] [rbp-20h]
  __int64 v106; // [rsp+F0h] [rbp-18h]
  int v107; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v108; // [rsp+100h] [rbp-8h]
  char v109; // [rsp+108h] [rbp+0h] BYREF
  DpiInternal *v110; // [rsp+110h] [rbp+8h]
  void (__fastcall *v111)(__int64, DpiInternal *); // [rsp+118h] [rbp+10h]
  __int64 v112; // [rsp+120h] [rbp+18h]
  int v113; // [rsp+128h] [rbp+20h]
  _OWORD v114[12]; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int8 *v115; // [rsp+1F8h] [rbp+F0h]
  __int128 v116; // [rsp+200h] [rbp+F8h]
  __int128 v117; // [rsp+210h] [rbp+108h]

  v6 = (__int64 (__fastcall *)(const struct _DXGDMM_INTERFACE *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **))*((_QWORD *)this + 6);
  v7 = a2;
  v8 = (unsigned int)a3;
  v102 = a2;
  v93 = a4;
  v100 = (int)a3;
  v95 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  v113 = 0;
  v109 = 0;
  v87 = 0LL;
  v10 = v6(a2, &v87, &v95);
  v12 = (_OWORD *)v10;
  if ( v10 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = v7;
LABEL_5:
    v13[4] = v12;
LABEL_96:
    WdLogEvent5_WdError(v13);
    goto LABEL_105;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v109,
    v87,
    *((_QWORD *)this + 8),
    (__int64)v7);
  v14 = v110;
  v88 = 0LL;
  v94 = 0LL;
  v15 = (*(__int64 (__fastcall **)(DpiInternal *, __int64 *, __int64 *))v95)(v110, &v88, &v94);
  v12 = (_OWORD *)v15;
  if ( v15 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v13[3] = v14;
    goto LABEL_5;
  }
  v101 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))v94)(v88, (unsigned int)v8, &v101);
  v12 = (_OWORD *)v17;
  if ( v17 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v13[3] = v8;
    v19 = v88;
LABEL_95:
    v13[4] = v19;
    v13[5] = v12;
    goto LABEL_96;
  }
  memset(&v114[6], 0, 0x60uLL);
  v12 = (_OWORD *)a6;
  v21 = 0LL;
  v22 = v101 > 1;
  v108 = 0LL;
  v117 = v114[10];
  v23 = v22 | HIDWORD(v114[11]) & 0xFFFFFFDE | *(_DWORD *)(a6 + 92) & 0x20;
  HIDWORD(v114[11]) = v23;
  if ( !v101 )
  {
    v116 = v114[7];
LABEL_98:
    if ( (v23 & 2) == 0
      || (v72 = (struct tagSIZE)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&v114[11]), 4)),
          v72.cx == 1234568) )
    {
      v73 = DWORD2(v114[6]);
    }
    else
    {
      v73 = Win81::AdjustDesktopScaleFactorForOverride(
              (Win81 *)0x64,
              v114[8],
              v72,
              (const struct Win81::DPI_SCALE_FACTOR_COLLECTION *)v20);
      DWORD2(v114[6]) = v73;
    }
    if ( !v73 )
    {
      v74 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v74 + 24) = 1048LL;
      WdLogEvent5_WdAssertion(v74);
    }
    v75 = v116;
    *v12 = v114[6];
    v76 = v114[8];
    v12[1] = v75;
    v77 = v114[9];
    v12[2] = v76;
    v78 = v117;
    v12[3] = v77;
    v12[4] = v78;
    v12[5] = v114[11];
    LODWORD(v12) = 0;
    goto LABEL_105;
  }
  v116 = v114[7];
  while ( 1 )
  {
    v81.cy = -1;
    BYTE2(v81.cx) = 0;
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, UINT *))(v94 + 8))(
            v88,
            (unsigned int)v8,
            v21,
            &v81.cy);
    v12 = (_OWORD *)v24;
    if ( v24 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v19 = (unsigned int)v8;
      v13[3] = v21;
      goto LABEL_95;
    }
    v83 = 0LL;
    v26 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int64 *))(v94 + 24);
    v104 = 0LL;
    v105 = 0LL;
    v106 = 0LL;
    v107 = 0;
    v103 = 0;
    v27 = v26(v88, (unsigned int)v8, v81.cy, &v83);
    v12 = (_OWORD *)v27;
    if ( v27 < 0 )
      break;
    v29 = v83;
    if ( !v83 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v30 + 24) = 780LL;
      WdLogEvent5_WdAssertion(v30);
      v29 = v83;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v103,
      v29,
      *(_QWORD *)(v94 + 32),
      v88);
    v31 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v104[5]);
    LOBYTE(v81.cx) = 0;
    v82[0] = D3DKMDT_VOT_UNINITIALIZED;
    v32 = v31;
    v33 = 0;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(v7, v81.cy, v82, 0LL);
    v36 = VideoOutputTechnology;
    if ( VideoOutputTechnology >= 0 )
    {
      v33 = IsInternalVideoOutput(v82[0]);
      LOBYTE(v81.cx) = v33;
    }
    else
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v35);
      v37[3] = v7;
      v37[4] = v81.cy;
      v37[5] = v36;
      WdLogEvent5_WdError(v37);
    }
    v99 = v33;
    v83 = 0LL;
    v92 = 0;
    v38 = (v23 ^ (v23 | (4 * v33))) & 4 ^ v23;
    EdidBaseBlockPtr = (unsigned __int8 *)MonitorGetEdidBaseBlockPtr(v7, v81.cy);
    v115 = EdidBaseBlockPtr;
    HIBYTE(v81.cx) = 0;
    v96 = 0LL;
    v97 = 0;
    PreferredMode = EDID_V1_GetPreferredMode(EdidBaseBlockPtr, (struct DISPLAY_PREFERRED_MODE_INFO *)&v96);
    v42 = PreferredMode;
    if ( PreferredMode >= 0 )
    {
      HIBYTE(v81.cx) = 1;
    }
    else
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v41);
      v43[3] = v7;
      v43[4] = v81.cy;
      v43[5] = v42;
      WdLogEvent5_WdError(v43);
    }
    v44 = v96;
    v45 = HIDWORD(v96);
    v87 = v96;
    if ( ((v32 - 2) & 0xFFFFFFFD) == 0 )
    {
      v44 = HIDWORD(v96);
      v87 = __PAIR64__(v96, HIDWORD(v96));
      v45 = v96;
    }
    if ( EdidBaseBlockPtr )
    {
      if ( (int)EDID_V1_GetPhysicalSize(v41, EdidBaseBlockPtr, &v91, &v98) < 0 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v48);
        *(_QWORD *)(v49 + 24) = 839LL;
        WdLogEvent5_WdAssertion(v49);
      }
      v47 = v91;
      v46 = v98;
      v83 = __PAIR64__(v98, v91);
      if ( ((v32 - 2) & 0xFFFFFFFD) == 0 )
      {
        v47 = v98;
        v83 = __PAIR64__(v91, v98);
        v46 = v91;
      }
      if ( v47 && v46 )
      {
        if ( (int)(v47 * v46) <= 16000 && !LOBYTE(v81.cx) )
        {
          v46 = 0;
          v92 = 1;
          v38 |= 0x40u;
          v83 = 0LL;
          v47 = 0;
LABEL_35:
          BYTE2(v81.cx) = (*((_BYTE *)v102 + 300) & 0x20) != 0;
          goto LABEL_36;
        }
      }
      else
      {
        v46 = 0;
        v83 = 0LL;
        v47 = 0;
      }
    }
    else
    {
      v46 = HIDWORD(v83);
      v38 |= 8u;
      v47 = v83;
    }
    if ( !v47 )
      goto LABEL_35;
LABEL_36:
    LODWORD(v12) = DpiInternal::GetCurrentSourceResolution(
                     v110,
                     v95,
                     (const struct _DXGDMM_VIDPN_INTERFACE *)v104,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v84);
    if ( (int)v12 < 0 )
      goto LABEL_92;
    BYTE1(v81.cx) = 0;
    LODWORD(v12) = DpiInternal::GetCurrentTargetResolution(
                     v110,
                     v95,
                     (const struct _DXGDMM_VIDPN_INTERFACE *)v104,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v89,
                     (struct _D3DKMDT_2DREGION *)((char *)&v81 + 1));
    if ( (int)v12 < 0 )
      goto LABEL_92;
    v50 = v90;
    if ( ((v32 - 2) & 0xFFFFFFFD) != 0 )
    {
      v82[0] = v90;
      v50 = v89;
    }
    else
    {
      v82[0] = v89;
      v89 = v90;
      v90 = v82[0];
    }
    v51 = v84;
    v86 = v50;
    if ( (v38 & 1) != 0 && v44 && v45 )
    {
      v52 = v85;
      if ( BYTE1(v81.cx) )
      {
        v52 = (unsigned int)v85 >> 1;
        v85 = (unsigned int)v85 >> 1;
      }
      if ( v84 >= 2 * v44 || v52 >= (unsigned int)(2 * v45) )
        v53 = 2;
      else
        v53 = 0;
      v38 ^= ((unsigned __int8)v38 ^ (unsigned __int8)(v38 | v53)) & 2;
      if ( BYTE1(v81.cx) )
      {
        v52 *= 2;
        v85 = v52;
      }
    }
    else
    {
      v52 = v85;
    }
    memset(v114, 0, 0x60uLL);
    v54 = v104;
    DWORD1(v114[5]) = a5;
    *(_QWORD *)&v114[2] = __PAIR64__(v52, v84);
    v55 = *((_DWORD *)v104 + 3);
    if ( v55 != 1 )
    {
      switch ( v55 )
      {
        case 2:
          goto LABEL_81;
        case 3:
          break;
        case 4:
LABEL_81:
          if ( v55 == 4 )
          {
            v66 = v86;
            if ( v47 * v52 <= v46 * v84 )
            {
              v84 = v86;
              v68 = v52 * v86 / v51;
              v51 = v86;
              v52 = v68;
              v85 = v68;
            }
            else
            {
              v67 = v84 * v82[0] / v52;
              v52 = v82[0];
              v51 = v67;
              v84 = v67;
              v85 = v82[0];
            }
          }
          else
          {
            v66 = v86;
          }
          v47 = v47 * v51 / v66;
          v46 = v46 * v52 / v82[0];
          break;
        default:
          if ( v55 != 5 )
          {
            if ( v55 == 255 )
              break;
            v56 = WdLogNewEntry5_WdAssertion((unsigned int)(v55 - 5));
            *(_QWORD *)(v56 + 24) = *((int *)v54 + 3);
            WdLogEvent5_WdAssertion(v56);
          }
          v38 |= 0x100u;
          break;
      }
    }
    v57 = (struct tagSIZE)*((unsigned int *)v54 + 5);
    *((_QWORD *)&v114[1] + 1) = __PAIR64__(v46, v47);
    if ( (unsigned int)(v57.cx - 5) <= 0xB )
      v57 = (struct tagSIZE)(unsigned int)((v57.cx - 1) % 4 + 1);
    v23 = (((v57.cx - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v38 & 0xFFFFFF7F;
    HIDWORD(v114[11]) = v23;
    if ( !BYTE2(v81.cx) && !v92 && v115 && HIBYTE(v81.cx) )
    {
      IsAudioAvailableInEdid = DpiInternal::IsAudioAvailableInEdid(v102, (void *)v81.cy);
      LODWORD(v80) = (unsigned __int8)v97;
      v59 = Win81::DetermineViewDistance(
              v102,
              &v83,
              (const struct tagSIZE *)v99,
              (int)&v87,
              (const struct tagSIZE *)v80,
              IsAudioAvailableInEdid,
              (unsigned int *)&v114[4]);
      v60 = v114[4];
      v61 = 16 * (unsigned int)v59;
      v62 = v23 & 0xFFFFFFEF;
      v23 = v23 & 0xFFFFFFEF | v61;
      HIDWORD(v114[11]) = v62 | v61;
      if ( !LODWORD(v114[4]) )
      {
        v63 = WdLogNewEntry5_WdAssertion(v61);
        *(_QWORD *)(v63 + 24) = 1004LL;
        WdLogEvent5_WdAssertion(v63);
      }
LABEL_69:
      cx = v81.cx;
      goto LABEL_70;
    }
    v60 = 0;
    LODWORD(v114[4]) = 0;
    if ( !BYTE2(v81.cx) )
      goto LABEL_69;
    cx = v81.cx;
    if ( LOBYTE(v81.cx) )
    {
      Win81::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(Win81 **)&v114[2],
        v57,
        (__int64)v114,
        (struct _DPI_INFORMATION *)4);
      Win81::FillOverridesAndAdjustedScaleFactor((Win81 *)v93, v69, (__int64)v114, v70);
      v23 |= 0x400u;
      HIDWORD(v114[11]) = v23;
      goto LABEL_71;
    }
LABEL_70:
    Win81::FillDpiInfo(
      (Win81 *)((char *)&v114[1] + 8),
      (const struct tagSIZE *)&v114[2],
      (const struct tagSIZE *)v60,
      v93,
      (unsigned int)v80,
      (__int64)v114);
LABEL_71:
    if ( HIDWORD(v114[5]) )
    {
      v65 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v65 + 24) = 1021LL;
      WdLogEvent5_WdAssertion(v65);
    }
    HIDWORD(v114[5]) = v23;
    if ( cx
      || (v23 & 4) == 0
      && (v20 = 2LL, (DWORD2(v114[9]) + HIDWORD(v114[9])) / 2 <= (DWORD2(v114[3]) + HIDWORD(v114[3])) / 2) )
    {
      v114[6] = v114[0];
      v116 = v114[1];
      v114[8] = v114[2];
      v117 = v114[4];
      v114[11] = v114[5];
      v23 = HIDWORD(v114[5]);
      v114[9] = v114[3];
    }
    if ( v103 )
      v105(v106, v54);
    v7 = v102;
    v21 = v108 + 1;
    LODWORD(v8) = v100;
    v108 = v21;
    if ( v21 >= v101 )
    {
      v12 = (_OWORD *)a6;
      goto LABEL_98;
    }
  }
  v71 = (_QWORD *)WdLogNewEntry5_WdError(v28);
  v71[3] = (unsigned int)v8;
  v71[4] = v81.cy;
  v71[5] = v12;
  WdLogEvent5_WdError(v71);
LABEL_92:
  if ( v103 )
    v105(v106, v104);
LABEL_105:
  if ( v109 )
    v111(v112, v110);
  return (unsigned int)v12;
}
