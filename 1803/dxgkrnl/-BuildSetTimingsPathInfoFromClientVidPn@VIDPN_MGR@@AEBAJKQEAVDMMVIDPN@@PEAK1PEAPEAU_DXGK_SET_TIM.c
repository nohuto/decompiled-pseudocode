/*
 * XREFs of ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00B838C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0003540 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0004454 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00064C4 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000B6AC (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014D74 (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0014DC4 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?SetColorSpaceTansform@DMMVIDEOPRESENTTARGET@@QEAAEPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0044ED8 (-SetColorSpaceTansform@DMMVIDEOPRESENTTARGET@@QEAAEPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00AA594 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00BC348 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00BF000 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00BF36C (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C02230A0 (-IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
        VIDPN_MGR *this,
        int a2,
        VIDPN_MGR **a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _DXGK_SET_TIMING_PATH_INFO **a6,
        unsigned int **a7,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a8,
        unsigned int **a9)
{
  struct D3DKMT_VIDPN_SOURCE_MASKS *v9; // rbx
  __int64 v12; // rax
  unsigned int v13; // r14d
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rax
  DMMVIDPNTOPOLOGY *v17; // rdi
  unsigned __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  unsigned int v22; // eax
  unsigned __int64 v23; // r15
  SIZE_T v24; // rax
  unsigned __int64 v25; // kr00_8
  __int64 v26; // rcx
  struct _DXGK_SET_TIMING_PATH_INFO *v27; // rsi
  SIZE_T v28; // rax
  __int64 v29; // rcx
  unsigned int *v30; // r14
  struct DMMVIDPN *v31; // r11
  DMMVIDPNPRESENTPATH *v32; // r13
  _QWORD *v33; // rcx
  unsigned int v34; // eax
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rdi
  unsigned int v38; // eax
  DMMVIDEOPRESENTTARGET *v39; // rdx
  int v40; // r14d
  int v41; // eax
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v45; // rax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v47; // r11d
  struct DMMVIDPNPRESENTPATH *v48; // r15
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v52; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v53; // eax
  unsigned int v54; // edx
  char v55; // al
  int v56; // r8d
  DXGADAPTER ***v57; // r13
  unsigned __int8 v58; // al
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v59; // edx
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v60; // r8d
  int v61; // r9d
  int v62; // ecx
  DMMVIDEOPRESENTTARGET *v63; // rax
  __int64 v64; // rax
  struct DMMVIDPN *v65; // rdi
  __int64 v66; // rcx
  __int64 v67; // r13
  int v68; // eax
  __int64 v69; // rcx
  unsigned __int64 v70; // rax
  bool v71; // r14
  int v72; // r15d
  int v73; // edx
  int v74; // eax
  int v75; // eax
  int v76; // ecx
  __int64 v77; // rax
  DMMVIDPNTOPOLOGY *v78; // rax
  unsigned int v79; // edi
  unsigned int v80; // r14d
  __int64 v81; // rax
  int v82; // edi
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v84; // rcx
  int v85; // r15d
  char IsVidPnSourceActive; // al
  unsigned int v87; // edx
  int v88; // edi
  __int64 v89; // rcx
  unsigned int *v90; // r9
  _DWORD *p_InputFlags; // r8
  __int64 v92; // r10
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  unsigned int v97; // edx
  __int64 v98; // rcx
  unsigned int *v99; // rcx
  int v100; // eax
  unsigned int v101; // edx
  int v102; // r8d
  int v103; // edx
  int v104; // ecx
  unsigned int *v105; // r15
  struct DMMVIDPNPRESENTPATH *v107; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v108; // eax
  unsigned int v109; // edx
  char v110; // al
  char v111; // al
  unsigned __int8 v112; // al
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  unsigned int InputFlags; // eax
  char v118; // cl
  int v119; // ecx
  unsigned int v120; // edx
  int v121; // edx
  unsigned int v122; // ecx
  unsigned int v123; // edi
  int NumPathsFromSource; // eax
  __int64 v125; // rcx
  __int64 v126; // rax
  unsigned int *v127; // rax
  __int64 v128; // rcx
  unsigned int *v129; // rdi
  __int64 i; // rcx
  __int64 v131; // rcx
  int v132; // edi
  __int64 v133; // rdx
  __int64 v134; // rax
  _QWORD *v135; // rax
  __int64 v136; // rax
  int v137; // eax
  bool IsVidPnPathSyncLockMatch; // al
  __int64 v139; // r14
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v140; // r13d
  struct _DXGK_SET_TIMING_PATH_INFO *v141; // r14
  __int64 v142; // rax
  __int64 v143; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v144; // rax
  unsigned int v145; // edx
  char v146; // al
  __int64 v147; // rax
  int v148; // r10d
  int v149; // edx
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  int v163; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v164; // [rsp+34h] [rbp-CCh]
  unsigned int v165; // [rsp+38h] [rbp-C8h]
  unsigned int v166; // [rsp+3Ch] [rbp-C4h]
  unsigned int v167; // [rsp+40h] [rbp-C0h]
  unsigned int v168; // [rsp+48h] [rbp-B8h]
  int v169; // [rsp+4Ch] [rbp-B4h]
  int v170; // [rsp+50h] [rbp-B0h]
  unsigned int v171; // [rsp+50h] [rbp-B0h]
  int Value; // [rsp+54h] [rbp-ACh]
  int v173; // [rsp+58h] [rbp-A8h]
  int v174; // [rsp+5Ch] [rbp-A4h]
  int v175; // [rsp+5Ch] [rbp-A4h]
  int v176; // [rsp+60h] [rbp-A0h]
  int v177; // [rsp+60h] [rbp-A0h]
  int v178; // [rsp+64h] [rbp-9Ch]
  int v179; // [rsp+68h] [rbp-98h]
  int v180; // [rsp+6Ch] [rbp-94h]
  int v181; // [rsp+70h] [rbp-90h]
  DMMVIDPNPRESENTPATH *v182; // [rsp+78h] [rbp-88h]
  DMMVIDPNPRESENTPATH *v183; // [rsp+78h] [rbp-88h]
  DMMVIDEOPRESENTTARGET *v184; // [rsp+80h] [rbp-80h]
  DMMVIDEOPRESENTTARGET *v185; // [rsp+80h] [rbp-80h]
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v186; // [rsp+88h] [rbp-78h]
  unsigned int v187; // [rsp+8Ch] [rbp-74h]
  int v188; // [rsp+90h] [rbp-70h]
  int v189; // [rsp+94h] [rbp-6Ch]
  int v190; // [rsp+98h] [rbp-68h]
  DMMVIDEOPRESENTTARGET *v191; // [rsp+A0h] [rbp-60h]
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v192; // [rsp+A8h] [rbp-58h]
  DMMVIDPNTOPOLOGY *v193; // [rsp+B0h] [rbp-50h]
  unsigned int *v194; // [rsp+B8h] [rbp-48h]
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v195; // [rsp+C0h] [rbp-40h]
  __int64 v196; // [rsp+D0h] [rbp-30h]
  DMMVIDPNTOPOLOGY *v197; // [rsp+D8h] [rbp-28h]
  DMMVIDPNTOPOLOGY *v198; // [rsp+D8h] [rbp-28h]
  unsigned int *v199; // [rsp+E0h] [rbp-20h]
  int v200; // [rsp+E8h] [rbp-18h]
  unsigned int v201; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v202; // [rsp+F4h] [rbp-Ch]
  int v203; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v204; // [rsp+100h] [rbp+0h]
  unsigned __int64 v205; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v206; // [rsp+110h] [rbp+10h] BYREF
  __int64 v207; // [rsp+118h] [rbp+18h] BYREF
  __int64 v208; // [rsp+120h] [rbp+20h] BYREF
  __int64 v209; // [rsp+128h] [rbp+28h] BYREF
  __int64 v210; // [rsp+130h] [rbp+30h] BYREF
  struct _DXGK_SET_TIMING_PATH_INFO *v211; // [rsp+138h] [rbp+38h]
  __int64 v212; // [rsp+140h] [rbp+40h]
  DMMVIDPNPRESENTPATH *v213; // [rsp+148h] [rbp+48h]
  unsigned int v215; // [rsp+1A0h] [rbp+A0h]
  int v216; // [rsp+1A0h] [rbp+A0h]
  unsigned int *v219; // [rsp+1B8h] [rbp+B8h]

  v219 = a4;
  v9 = a8;
  v167 = 0;
  v212 = 0LL;
  v213 = 0LL;
  v12 = *((_QWORD *)this + 1);
  v13 = 0;
  v194 = 0LL;
  v14 = 0;
  v165 = 0;
  v187 = 0;
  v170 = 0;
  v169 = 0;
  v174 = 0;
  v166 = 0;
  v188 = 0;
  v181 = 0;
  v163 = 0;
  v176 = 0;
  v189 = 0;
  v178 = 0;
  v190 = 0;
  v180 = 0;
  if ( !v12 )
  {
    v113 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v113);
    v12 = *((_QWORD *)this + 1);
    a4 = v219;
  }
  v196 = *(_QWORD *)(v12 + 16);
  if ( a3 && a3[6] != this )
  {
    v114 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v114 + 24) = a3;
    *(_QWORD *)(v114 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v114);
    return 3221225485LL;
  }
  v15 = *((_QWORD *)this + 11);
  if ( !v15 )
  {
    v207 = 0LL;
    goto LABEL_161;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
  v16 = *((_QWORD *)this + 11);
  v207 = v16;
  if ( !v16 )
  {
LABEL_161:
    v17 = 0LL;
    goto LABEL_8;
  }
  v17 = (DMMVIDPNTOPOLOGY *)(v16 + 96);
LABEL_8:
  v197 = v17;
  v18 = (unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL);
  LODWORD(v19) = 0;
  v193 = (DMMVIDPNTOPOLOGY *)v18;
  if ( v17 )
    v19 = *((_QWORD *)v17 + 5);
  LODWORD(v20) = 0;
  if ( v18 )
    v20 = *(_QWORD *)(((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL)) + 0x28);
  v21 = (_DWORD)v19 + (_DWORD)v20 == 0;
  v22 = v19 + v20;
  v202 = v22;
  if ( v21 )
  {
    *a4 = 0;
    *a5 = 0;
    *a6 = 0LL;
    *a7 = 0LL;
    if ( a9 )
      *a9 = 0LL;
  }
  else
  {
    v23 = v22;
    v25 = v22;
    v24 = 56LL * v22;
    if ( !is_mul_ok(v25, 0x38uLL) )
      v24 = -1LL;
    v211 = (struct _DXGK_SET_TIMING_PATH_INFO *)operator new[](v24, 0x4E506456u, PagedPool);
    v27 = v211;
    if ( v211 )
    {
      v28 = 4 * v23;
      if ( !is_mul_ok(v23, 4uLL) )
        v28 = -1LL;
      v199 = (unsigned int *)operator new[](v28, 0x4E506456u, PagedPool);
      v30 = v199;
      if ( !v199 )
      {
        v13 = -1073741801;
        v116 = WdLogNewEntry5_WdLowResource(v29);
        *(_QWORD *)(v116 + 24) = v23;
        *(_QWORD *)(v116 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v116);
        v105 = 0LL;
        goto LABEL_147;
      }
      memset(v211, 0, 56 * v23);
      memset(v199, 0, 4LL * (unsigned int)v23);
      v31 = 0LL;
      if ( v17 )
      {
        v32 = 0LL;
        v33 = (_QWORD *)*((_QWORD *)v17 + 3);
        v204 = (unsigned __int64)v17 + 24;
        if ( v33 != (_QWORD *)((char *)v17 + 24) )
          v32 = (DMMVIDPNPRESENTPATH *)(v33 - 1);
        v182 = v32;
        if ( v32 )
        {
          v34 = 0;
          v35 = 0;
          while ( 1 )
          {
            v200 = v35;
            v36 = v34;
            v37 = v34;
            v38 = *(_DWORD *)(*((_QWORD *)v32 + 11) + 24LL);
            v30[v36] = v38;
            v39 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v32 + 12);
            v40 = 1 << v38;
            v165 |= 1 << v38;
            v168 = v38;
            v41 = 1 << v38;
            v42 = *((_QWORD *)v39 + 12);
            v203 = v14;
            v184 = v39;
            v191 = (DMMVIDEOPRESENTTARGET *)v42;
            Value = 4;
            if ( (*(_BYTE *)(v42 + 540) & 0x40) != 0 )
              v41 = 0;
            v178 |= v41;
            v195.Value = 0;
            v186.Value = 0;
            v179 = *(_DWORD *)(*(_QWORD *)(v42 + 512) + 24LL);
            v43 = *((_QWORD *)v39 + 13);
            if ( v43 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v43 + 96));
              v44 = *((_QWORD *)v39 + 13);
              v195.Value = 0;
            }
            else
            {
              v44 = 0LL;
            }
            v208 = v44;
            v45 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v44 + 144);
            if ( v45 )
            {
              Value = v45[34].Value;
              v195.0 = v45[33].0;
              v186.0 = v195.0;
            }
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v208, 0LL);
            if ( !v193 )
            {
              v108 = *((_DWORD *)v184 + 6);
              v27[v37].InputFlags &= 0xFFFFFFFC;
              v27[v37].VidPnTargetId = v108;
              v27[v37].InputFlags ^= (v27[v37].InputFlags ^ (4
                                                           * (unsigned __int8)DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v42))) & 4;
              v109 = v27[v37].InputFlags & 0xFFFFFFF7 | (*(_BYTE *)(v42 + 406) == 0 ? 8 : 0);
              v27[v37].InputFlags = v109;
              v110 = v109 ^ (16 * *(_BYTE *)(v42 + 407));
              v27[v37].SelectedWireFormat = v195;
              v27[v37].OutputColorSpace = Value;
              v27[v37].InputFlags = v109 ^ v110 & 0x10;
              v111 = DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v42);
              v31 = 0LL;
              if ( (v111 == 0) == (*(_BYTE *)(v42 + 409) == 0) )
              {
                if ( v179 == 13
                  || (a2 & 0x4000) != 0
                  || (v112 = ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v196 + 2456), v168),
                      v31 = 0LL,
                      v112) )
                {
                  v27[v37].InputFlags = v27[v37].InputFlags & 0xFFFFFFFC | ((v179 != 13) + 1);
                  v14 |= v40;
                }
                goto LABEL_62;
              }
              v35 = v40 | v163;
              v163 |= v40;
              if ( v179 == 13 )
                v27[v37].InputFlags = v27[v37].InputFlags & 0xFFFFFFFC | 1;
              goto LABEL_63;
            }
            PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v193, *(_DWORD *)(*((_QWORD *)v32 + 12) + 24LL));
            v173 = 4;
            v192.Value = 0;
            v48 = PathFromTarget;
            if ( !PathFromTarget )
              goto LABEL_183;
            v49 = *((_QWORD *)PathFromTarget + 12);
            v50 = *(_QWORD *)(v49 + 104);
            if ( v50 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v50 + 96));
              v51 = *(_QWORD *)(v49 + 104);
              v195.0 = v186.0;
              v192.Value = 0;
            }
            else
            {
              v51 = 0LL;
            }
            v209 = v51;
            v52 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v51 + 144);
            if ( v52 )
            {
              v173 = v52[34].Value;
              v192.0 = v52[33].0;
            }
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v209, 0LL);
            if ( *(_DWORD *)(*((_QWORD *)v48 + 11) + 24LL) != v168 )
            {
              v47 = (v179 != 13) + 1;
LABEL_183:
              v27[v37].VidPnTargetId = *((_DWORD *)v184 + 6);
              if ( !v48 )
                v47 = 3;
              InputFlags = v47 | v27[v37].InputFlags & 0xFFFFFFFC;
              v27[v37].InputFlags = InputFlags;
              if ( v48 )
              {
                v118 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v191);
                InputFlags = v27[v37].InputFlags;
              }
              else
              {
                v118 = 0;
              }
              v119 = InputFlags ^ ((unsigned __int8)InputFlags ^ (unsigned __int8)(4 * v118)) & 4;
              v27[v37].InputFlags = v119;
              v120 = v119 & 0xFFFFFFF7 | (*((_BYTE *)v191 + 406) == 0 ? 8 : 0);
              v27[v37].InputFlags = v120;
              v27[v37].InputFlags = v120 ^ ((unsigned __int8)v120 ^ (unsigned __int8)(16 * *((_BYTE *)v191 + 407))) & 0x10;
              v121 = v40 | v169;
              v27[v37].SelectedWireFormat = v192;
              v27[v37].OutputColorSpace = v173;
              v169 |= v40;
              if ( v48 )
              {
                v122 = *(_DWORD *)(*((_QWORD *)v48 + 11) + 24LL);
                v14 |= 1 << v122;
                v169 = (1 << v122) | v121;
                v199[v167] = v122;
                DMMVIDPNPRESENTPATH::UpdateGammaRamp(v48);
              }
              v123 = v168;
              NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v193, v168, &v205);
              v31 = 0LL;
              if ( NumPathsFromSource < 0 )
              {
                if ( NumPathsFromSource != -1071774919 || v205 )
                {
                  v126 = WdLogNewEntry5_WdAssertion(v125);
                  WdLogEvent5_WdAssertion(v126);
                  v31 = 0LL;
                  goto LABEL_194;
                }
LABEL_207:
                v188 |= v40;
LABEL_62:
                v35 = v163;
                goto LABEL_63;
              }
LABEL_194:
              if ( !v205 )
                goto LABEL_207;
              v170 |= v40;
              v14 |= v40;
              v105 = v194;
              if ( a9 )
              {
                if ( !v194 )
                {
                  v127 = (unsigned int *)operator new[](0x400uLL, 0x4E506456u, PagedPool);
                  v31 = 0LL;
                  v194 = v127;
                  v105 = v127;
                  if ( !v127 )
                  {
                    v13 = -1073741801;
                    v135 = (_QWORD *)WdLogNewEntry5_WdLowResource(v128);
                    v135[3] = *(int *)(v196 + 272);
                    v135[4] = *(unsigned int *)(v196 + 268);
                    v135[5] = -1073741801LL;
                    WdLogEvent5_WdLowResource(v135);
                    goto LABEL_147;
                  }
                  v129 = v127;
                  for ( i = 256LL; i; --i )
                    *v129++ = -1;
                  v123 = v168;
                  goto LABEL_202;
                }
              }
              else
              {
LABEL_202:
                if ( !v105 )
                  goto LABEL_62;
              }
              v131 = 0LL;
              v132 = 2 * v123;
              while ( 1 )
              {
                v133 = (unsigned int)(v131 + 8 * v132);
                if ( v105[v133] == -1 )
                  break;
                v131 = (unsigned int)(v131 + 1);
                if ( (unsigned int)v131 >= 0x10 )
                  goto LABEL_209;
              }
              v105[v133] = *((_DWORD *)v184 + 6);
LABEL_209:
              if ( (unsigned int)v131 < 0x10 )
                goto LABEL_62;
              v134 = WdLogNewEntry5_WdAssertion(v131);
              WdLogEvent5_WdAssertion(v134);
LABEL_61:
              v31 = 0LL;
              goto LABEL_62;
            }
            v53 = *((_DWORD *)v184 + 6);
            v27[v37].InputFlags &= 0xFFFFFFFC;
            v27[v37].VidPnTargetId = v53;
            v27[v37].InputFlags ^= (v27[v37].InputFlags ^ (4
                                                         * (unsigned __int8)DMMVIDEOPRESENTTARGET::NeedToBeActive(v191))) & 4;
            v14 |= v40;
            v54 = v27[v37].InputFlags & 0xFFFFFFF7 | (*((_BYTE *)v191 + 406) == 0 ? 8 : 0);
            v27[v37].InputFlags = v54;
            v27[v37].InputFlags = v54 ^ ((unsigned __int8)v54 ^ (unsigned __int8)(16 * *((_BYTE *)v191 + 407))) & 0x10;
            v27[v37].SelectedWireFormat = v192;
            v27[v37].OutputColorSpace = v173;
            if ( *(_DWORD *)(*((_QWORD *)v191 + 64) + 24LL) == 14 )
              v14 = v203;
            v55 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v191);
            v56 = v40 | v200;
            if ( (v55 == 0) == (*((_BYTE *)v191 + 409) == 0) )
              v56 = v200;
            v163 = v56;
            if ( *(_BYTE *)(v196 + 2305) && (a2 & 0x400000) != 0 )
            {
              v57 = (DXGADAPTER ***)(v196 + 2456);
            }
            else
            {
              v57 = (DXGADAPTER ***)(v196 + 2456);
              if ( !*(_BYTE *)(*(_QWORD *)(v196 + 2456) + 132LL) )
                goto LABEL_172;
            }
            v164 = 1;
            if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*v57, v168) )
LABEL_172:
              v164 = 0;
            if ( v179 == 13 || (a2 & 0x4000) != 0 )
            {
              v32 = v182;
            }
            else
            {
              v58 = ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*v57, v168);
              v32 = v182;
              if ( !v58 && DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(v182, v48, v164) )
              {
                v59.0 = v192.0;
                v60.0 = v195.0;
                v61 = Value;
                if ( v195.Value == v192.Value && Value == v173 )
                {
                  if ( *((_DWORD *)v182 + 29) != *((_DWORD *)v48 + 29) )
                  {
                    v174 |= v40;
                    goto LABEL_53;
                  }
                  if ( !*((_BYTE *)this + 464) )
                  {
LABEL_53:
                    v62 = (v179 != 13) + 1;
                    goto LABEL_54;
                  }
                }
                v14 |= v40;
                goto LABEL_53;
              }
            }
            v62 = (v179 != 13) + 1;
            v59.0 = v192.0;
            v60.0 = v195.0;
            v14 |= v40;
            v61 = Value;
            v27[v37].InputFlags = v62 | v27[v37].InputFlags & 0xFFFFFFFC;
LABEL_54:
            if ( (v40 & v14) == 0
              && (*((_DWORD *)v32 + 26) != *((_DWORD *)v48 + 26) || *((_WORD *)v32 + 54) != *((_WORD *)v48 + 54)) )
            {
              v176 |= v40;
            }
            v63 = v191;
            if ( *((_BYTE *)v191 + 405) )
            {
              v189 |= v40;
              *((_BYTE *)v191 + 405) = 0;
              if ( (unsigned int)(*((_DWORD *)v191 + 20) - 10) <= 1 )
              {
                v14 |= v40;
                v27[v37].InputFlags = v62 | v27[v37].InputFlags & 0xFFFFFFFC;
              }
              v63 = v191;
            }
            if ( v60.Value == v59.Value && v61 == v173 )
            {
              DMMVIDPNPRESENTPATH::SetGammaRamp(v48, *((const struct DXGK_GAMMA_RAMP **)v32 + 23));
              goto LABEL_61;
            }
            DMMVIDEOPRESENTTARGET::SetColorSpaceTansform(v63, 0LL);
            DMMVIDPNPRESENTPATH::UpdateGammaRamp(v48);
            v35 = v163;
            v31 = 0LL;
LABEL_63:
            v64 = *((_QWORD *)v32 + 1);
            v32 = (DMMVIDPNPRESENTPATH *)(v64 - 8);
            if ( v64 == v204 )
              v32 = 0LL;
            v34 = v167 + 1;
            v182 = v32;
            ++v167;
            if ( !v32 )
              break;
            v30 = v199;
          }
        }
        v18 = (unsigned __int64)v193;
      }
      v65 = 0LL;
      if ( v18 )
      {
        v66 = *(_QWORD *)(v18 + 24);
        if ( v66 != v18 + 24 )
          v65 = (struct DMMVIDPN *)(v66 - 8);
      }
      if ( v65 )
      {
        v204 = v18 + 24;
        while ( 1 )
        {
          v67 = *(unsigned int *)(*((_QWORD *)v65 + 11) + 24LL);
          v183 = (DMMVIDPNPRESENTPATH *)*((_QWORD *)v65 + 12);
          v185 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v183 + 12);
          v68 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v193, *(_DWORD *)(*((_QWORD *)v65 + 11) + 24LL), &v206);
          v31 = 0LL;
          if ( v68 || (v70 = v206) == 0 )
          {
            v136 = WdLogNewEntry5_WdAssertion(v69);
            WdLogEvent5_WdAssertion(v136);
            v70 = v206;
            v31 = 0LL;
          }
          v71 = v70 != 1;
          v72 = 1 << v67;
          v187 |= 1 << v67;
          v73 = *((_DWORD *)v185 + 135);
          v74 = 1 << v67;
          if ( (v73 & 0x40) != 0 )
            v74 = 0;
          v178 |= v74;
          if ( (v73 & 0x80) == 0 || (v75 = 1 << v67, v71) )
            v75 = 0;
          v190 |= v75;
          v76 = v166 | v72;
          if ( (v165 & v72) != 0 )
            v76 = v166;
          v166 = v76;
          if ( !a8 )
            goto LABEL_82;
          if ( (v73 & 0x100) == 0 )
            goto LABEL_82;
          v137 = v180;
          if ( (v180 & 2) != 0 )
            goto LABEL_82;
          if ( !v71 && (v73 & 0x80) != 0 )
          {
            if ( !v213
              || (IsVidPnPathSyncLockMatch = DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(v213, v65),
                  v31 = 0LL,
                  IsVidPnPathSyncLockMatch) )
            {
              if ( !*((_DWORD *)a8 + 57) )
              {
                v213 = v65;
                *((_DWORD *)a8 + 58) = v67;
                *((_DWORD *)a8 + 59) = 1;
              }
              *((_DWORD *)a8 + v67 + 38) = *((_DWORD *)a8 + v67 + 38) & 0xFFFFFFF8 | 1;
              *((_DWORD *)a8 + 57) |= v72;
              goto LABEL_82;
            }
            v137 = v180;
          }
          v180 = v137 | 2;
          DxgkLogCodePointPacket(0x65u, v67, 1u, v71, *(_QWORD *)(v196 + 268));
          v31 = 0LL;
LABEL_82:
          if ( !v197 || !DMMVIDPNTOPOLOGY::GetPathFromTarget(v197, *((_DWORD *)v183 + 6)) )
          {
            v139 = v167;
            v199[v167] = v67;
            v140.Value = 0;
            ++v167;
            v141 = &v27[v139];
            v216 = 4;
            v142 = *((_QWORD *)v183 + 13);
            if ( v142 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v142 + 96));
              v143 = *((_QWORD *)v183 + 13);
              v140.Value = 0;
            }
            else
            {
              v143 = (__int64)v31;
            }
            v210 = v143;
            v144 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v143 + 144);
            if ( v144 )
            {
              v140.0 = v144[33].0;
              v216 = v144[34].Value;
            }
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v210, 0LL);
            v141->VidPnTargetId = *((_DWORD *)v183 + 6);
            v141->InputFlags = v141->InputFlags & 0xFFFFFFFC | 1;
            v141->InputFlags ^= (v141->InputFlags ^ (4 * (unsigned __int8)DMMVIDEOPRESENTTARGET::NeedToBeActive(v185))) & 4;
            v169 |= v72;
            v14 |= v72;
            v145 = v141->InputFlags & 0xFFFFFFF7 | (*((_BYTE *)v185 + 406) == 0 ? 8 : 0);
            v141->InputFlags = v145;
            v146 = v145 ^ (16 * *((_BYTE *)v185 + 407));
            v141->SelectedWireFormat = v140;
            v141->InputFlags = v145 ^ v146 & 0x10;
            v141->OutputColorSpace = v216;
            DMMVIDPNPRESENTPATH::UpdateGammaRamp(v65);
            v31 = 0LL;
            *((_BYTE *)v185 + 405) = 0;
          }
          v77 = *((_QWORD *)v65 + 1);
          v65 = (struct DMMVIDPN *)(v77 - 8);
          if ( v77 == v204 )
            v65 = v31;
          if ( !v65 )
          {
            v18 = (unsigned __int64)v193;
            break;
          }
        }
      }
      v78 = v197;
      v79 = v165;
      v80 = (unsigned int)v31;
      if ( v18 )
      {
        v79 = v187;
        v78 = (DMMVIDPNTOPOLOGY *)v18;
      }
      v198 = v78;
      v215 = v79;
      v81 = *(_QWORD *)(v196 + 2456);
      if ( *(_DWORD *)(v81 + 80) > (unsigned int)v31 )
      {
        v82 = 0;
        while ( 1 )
        {
          MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v198, v80, &v201);
          v85 = MostImportantVidPnPathTargetsFromSource;
          if ( MostImportantVidPnPathTargetsFromSource >= 0 )
          {
            if ( v201 != -1 )
            {
              v107 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v198, v201);
              IsVidPnSourceActive = DMMVIDEOPRESENTTARGET::NeedToBeActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)v107 + 12) + 96LL));
LABEL_95:
              v31 = 0LL;
              if ( IsVidPnSourceActive )
                v82 |= 1 << v80;
              goto LABEL_97;
            }
          }
          else
          {
            if ( MostImportantVidPnPathTargetsFromSource == -1071774919 )
              goto LABEL_94;
            v147 = WdLogNewEntry5_WdAssertion(v84);
            WdLogEvent5_WdAssertion(v147);
          }
          if ( v85 == -1071774919 )
          {
LABEL_94:
            IsVidPnSourceActive = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v196 + 2456), v80);
            goto LABEL_95;
          }
          v31 = 0LL;
LABEL_97:
          v81 = *(_QWORD *)(v196 + 2456);
          if ( ++v80 >= *(_DWORD *)(v81 + 80) )
          {
            v9 = a8;
            v27 = v211;
            v181 = v82;
            v79 = v215;
            break;
          }
        }
      }
      if ( v9 && a3 != (VIDPN_MGR **)v31 )
      {
        v87 = (unsigned int)v31;
        if ( *(_DWORD *)(v81 + 80) > (unsigned int)v31 )
        {
          v88 = v180;
          do
          {
            v89 = *((_DWORD *)v9 + v87 + 38) & 7;
            if ( (*((_DWORD *)v9 + v87 + 38) & 7) != 0
              && (((1 << (*((_BYTE *)v9 + 4 * v87 + 152) & 7)) & v88) != 0
               || (v148 = *((_DWORD *)v9 + 3 * v89 + 54)) != 0 && ((v148 - 1) & v148) == 0) )
            {
              *((_DWORD *)v9 + v87 + 38) &= 0xFFFFFFF8;
              v88 |= 1 << v89;
              *((_DWORD *)v9 + 3 * v89 + 54) = 0;
              *((_DWORD *)v9 + 3 * v89 + 56) = 0;
            }
            ++v87;
          }
          while ( v87 < *(_DWORD *)(*(_QWORD *)(v196 + 2456) + 80LL) );
          v79 = v215;
        }
        if ( v167 )
        {
          v90 = v199;
          p_InputFlags = &v27->InputFlags;
          v92 = v167;
          do
          {
            v93 = *v90;
            v94 = *((_DWORD *)v9 + v93 + 38) & 7;
            if ( (*((_DWORD *)v9 + v93 + 38) & 7) != 0 )
            {
              v149 = *p_InputFlags & 0xFFFFFF1F | (32 * v94);
              *p_InputFlags = v149;
              *p_InputFlags = v149 ^ ((unsigned __int16)v149 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v9 + 3 * v94 + 56) << 8)) & 0xF00;
            }
            ++v90;
            p_InputFlags += 14;
            --v92;
          }
          while ( v92 );
        }
      }
      v171 = ~v188 & v170;
      v95 = v171;
      if ( ((unsigned int)v95 & v14) != (_DWORD)v95 )
      {
        v150 = WdLogNewEntry5_WdAssertion(v171);
        WdLogEvent5_WdAssertion(v150);
      }
      if ( (v188 & v14) != 0 )
      {
        v151 = WdLogNewEntry5_WdAssertion(v95);
        WdLogEvent5_WdAssertion(v151);
      }
      v175 = ~v14 & v174;
      if ( (v188 & v175) != 0 )
      {
        v152 = WdLogNewEntry5_WdAssertion(v95);
        WdLogEvent5_WdAssertion(v152);
      }
      if ( (v169 & v188) != v188 )
      {
        v153 = WdLogNewEntry5_WdAssertion(v95);
        WdLogEvent5_WdAssertion(v153);
      }
      if ( (v171 & v169) != v171 )
      {
        v154 = WdLogNewEntry5_WdAssertion(v95);
        WdLogEvent5_WdAssertion(v154);
      }
      if ( (v169 & (v14 | v188)) != v169 )
      {
        v155 = WdLogNewEntry5_WdAssertion(v95);
        WdLogEvent5_WdAssertion(v155);
      }
      v96 = v166;
      if ( (v14 & v166) != v166 )
      {
        v156 = WdLogNewEntry5_WdAssertion(v166);
        WdLogEvent5_WdAssertion(v156);
        v96 = v166;
      }
      if ( (v169 & (unsigned int)v96) != (_DWORD)v96 )
      {
        v157 = WdLogNewEntry5_WdAssertion(v96);
        WdLogEvent5_WdAssertion(v157);
        v96 = v166;
      }
      if ( ((unsigned int)v96 & v165) != 0 )
      {
        v158 = WdLogNewEntry5_WdAssertion(v96);
        WdLogEvent5_WdAssertion(v158);
      }
      if ( (v79 & v188) != 0 )
      {
        v159 = WdLogNewEntry5_WdAssertion(v96);
        WdLogEvent5_WdAssertion(v159);
      }
      v97 = v165;
      v98 = v188 | v79;
      if ( (v165 | v166) != (_DWORD)v98 )
      {
        v160 = WdLogNewEntry5_WdAssertion(v98);
        WdLogEvent5_WdAssertion(v160);
        v97 = v165;
      }
      v177 = ~v14 & v176;
      v13 = 0;
      *v219 = v202;
      v99 = v199;
      *a5 = v167;
      *a6 = v27;
      v27 = 0LL;
      *a7 = v199;
      if ( v9 )
      {
        if ( *(_DWORD *)v9 && *(_DWORD *)v9 != v97 )
        {
          v161 = WdLogNewEntry5_WdAssertion(v199);
          WdLogEvent5_WdAssertion(v161);
        }
        v100 = *((_DWORD *)v9 + 1);
        v101 = v165;
        *(_DWORD *)v9 = v165;
        if ( v100 && v100 != v79 )
        {
          v162 = WdLogNewEntry5_WdAssertion(v99);
          WdLogEvent5_WdAssertion(v162);
          v101 = v165;
        }
        *((_DWORD *)v9 + 10) = v175;
        *((_DWORD *)v9 + 4) = v166;
        *((_DWORD *)v9 + 13) = v171;
        *((_DWORD *)v9 + 5) = v181;
        *((_DWORD *)v9 + 6) = v163;
        *((_DWORD *)v9 + 12) = v177;
        *((_DWORD *)v9 + 37) = v190;
        *((_DWORD *)v9 + 1) = v79;
        *((_DWORD *)v9 + 2) = v14;
        *((_DWORD *)v9 + 7) = v169;
        *((_DWORD *)v9 + 3) = v188;
        *((_DWORD *)v9 + 16) = v189;
        *((_DWORD *)v9 + 19) = 0;
        *((_DWORD *)v9 + 17) = 0;
        if ( (a2 & 0x10000) != 0 )
        {
          *((_DWORD *)v9 + 14) = -1;
        }
        else
        {
          v102 = ~(v101 | v79) | v178;
          v103 = v14 & v102;
          v104 = v189 | v169 | *((_DWORD *)v9 + 14) | ((v169 & v102) != 0 ? v102 : 0);
          *((_DWORD *)v9 + 14) = v104;
          if ( (((v14 & v102) - 1) & v14 & v102) != 0 )
          {
            *((_DWORD *)v9 + 14) = v102 | v104;
          }
          else if ( v103 )
          {
            *((_DWORD *)v9 + 14) = v104 | v102 & ~v103;
          }
        }
        FillFailedStatus(v9, 0);
      }
      if ( a9 )
      {
        v105 = 0LL;
        *a9 = v194;
      }
      else
      {
        v105 = v194;
      }
LABEL_147:
      if ( v27 )
        operator delete[](v27);
      if ( v105 )
        operator delete[](v105);
    }
    else
    {
      v13 = -1073741801;
      v115 = WdLogNewEntry5_WdLowResource(v26);
      *(_QWORD *)(v115 + 24) = v23;
      *(_QWORD *)(v115 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v115);
    }
  }
  auto_rc<DMMVIDPN const>::reset(&v207, 0LL);
  return v13;
}
