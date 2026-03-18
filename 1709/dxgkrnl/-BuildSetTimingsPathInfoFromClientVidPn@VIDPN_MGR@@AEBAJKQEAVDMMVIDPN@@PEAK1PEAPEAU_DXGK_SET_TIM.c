/*
 * XREFs of ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00A8B60
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000586C (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B5C (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0007BDC (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0007EB8 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000EBC4 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?SetColorSpaceTansform@DMMVIDEOPRESENTTARGET@@QEAAEPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00162D0 (-SetColorSpaceTansform@DMMVIDEOPRESENTTARGET@@QEAAEPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C001635C (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C007C464 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00A38D4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00A5E1C (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00F8784 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
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
  unsigned int v11; // esi
  unsigned int *v12; // r13
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  DMMVIDPNTOPOLOGY *v19; // r12
  __int64 v20; // rcx
  const struct DMMVIDPNTOPOLOGY *v21; // r15
  __int64 v22; // rax
  bool v23; // zf
  unsigned int v24; // eax
  unsigned __int64 v25; // r14
  SIZE_T v26; // rax
  unsigned __int64 v27; // kr00_8
  __int64 v28; // rcx
  struct _DXGK_SET_TIMING_PATH_INFO *v29; // rsi
  __int64 v30; // rax
  SIZE_T v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // r12
  _QWORD *v37; // r12
  int v38; // edx
  unsigned int v39; // eax
  unsigned int v40; // r14d
  struct _DXGK_SET_TIMING_PATH_INFO *v41; // rdi
  __int64 v42; // rdx
  int v43; // esi
  int v44; // eax
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v48; // rax
  int v49; // eax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v50; // eax
  unsigned int v51; // edx
  char v52; // al
  struct DMMVIDPNPRESENTPATH *v53; // rax
  struct DMMVIDPNPRESENTPATH *v54; // r14
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v58; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v59; // eax
  unsigned int v60; // edx
  int v61; // eax
  char v62; // al
  int v63; // edx
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v64; // edx
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v65; // r8d
  int v66; // r9d
  int v67; // ecx
  unsigned int v68; // eax
  int v69; // ecx
  int v70; // eax
  unsigned int v71; // edx
  char v72; // al
  int v73; // r13d
  int v74; // ecx
  unsigned int v75; // edi
  int NumPathsFromSource; // eax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  unsigned int *v80; // rdi
  __int64 i; // rcx
  __int64 v82; // rcx
  int v83; // edi
  __int64 v84; // rdx
  __int64 v85; // rax
  DMMVIDPNTOPOLOGY *v86; // rsi
  DMMVIDPNPRESENTPATH *v87; // rdi
  _QWORD *v88; // rax
  int v89; // r15d
  __int64 v90; // r13
  int v91; // r12d
  int v92; // r14d
  int v93; // eax
  int v94; // ecx
  struct _DXGK_SET_TIMING_PATH_INFO *v95; // rsi
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v96; // r12d
  __int64 v97; // rax
  __int64 v98; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v99; // rax
  unsigned int v100; // edx
  char v101; // al
  _QWORD *v102; // rax
  int v103; // r14d
  unsigned int v104; // edi
  int v105; // r14d
  int MostImportantVidPnPathTargetsFromSource; // eax
  int v107; // esi
  __int64 v108; // rax
  char IsVidPnSourceActive; // al
  int v110; // r13d
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  int v121; // edx
  __int64 v122; // rcx
  __int64 v123; // rax
  unsigned int *v124; // r10
  struct _DXGK_SET_TIMING_PATH_INFO *v125; // rcx
  PVOID v126; // rcx
  __int64 v127; // rax
  int v128; // eax
  int v129; // edx
  __int64 v130; // rax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v132; // r8d
  int v133; // edx
  int v134; // ecx
  unsigned int *v135; // rax
  int v136; // [rsp+28h] [rbp-E0h]
  int v137; // [rsp+2Ch] [rbp-DCh]
  int v138; // [rsp+30h] [rbp-D8h]
  unsigned int v139; // [rsp+34h] [rbp-D4h]
  int v140; // [rsp+38h] [rbp-D0h]
  int v141; // [rsp+3Ch] [rbp-CCh]
  int v142; // [rsp+40h] [rbp-C8h]
  int v143; // [rsp+44h] [rbp-C4h]
  unsigned int v144; // [rsp+48h] [rbp-C0h]
  int v145; // [rsp+4Ch] [rbp-BCh]
  int v146; // [rsp+50h] [rbp-B8h]
  int v147; // [rsp+50h] [rbp-B8h]
  int v148; // [rsp+54h] [rbp-B4h]
  int v149; // [rsp+54h] [rbp-B4h]
  int v150; // [rsp+58h] [rbp-B0h]
  int v151; // [rsp+5Ch] [rbp-ACh]
  int v152; // [rsp+60h] [rbp-A8h]
  __int64 v153; // [rsp+68h] [rbp-A0h]
  int v154; // [rsp+68h] [rbp-A0h]
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v155; // [rsp+70h] [rbp-98h]
  _QWORD *v156; // [rsp+70h] [rbp-98h]
  unsigned int v157; // [rsp+78h] [rbp-90h]
  int v158; // [rsp+7Ch] [rbp-8Ch]
  int v159; // [rsp+80h] [rbp-88h]
  int v160; // [rsp+84h] [rbp-84h]
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v161; // [rsp+88h] [rbp-80h]
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v162; // [rsp+90h] [rbp-78h]
  DMMVIDPNTOPOLOGY *v163; // [rsp+98h] [rbp-70h]
  __int64 v164; // [rsp+A8h] [rbp-60h]
  unsigned int *v165; // [rsp+B0h] [rbp-58h]
  struct _DXGK_SET_TIMING_PATH_INFO *P; // [rsp+B8h] [rbp-50h]
  PVOID v167; // [rsp+C0h] [rbp-48h]
  int v168; // [rsp+C8h] [rbp-40h]
  unsigned int v169; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v170; // [rsp+D4h] [rbp-34h]
  unsigned __int64 v171; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v172; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v173; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v174; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v175; // [rsp+F8h] [rbp-10h] BYREF
  const struct DMMVIDPNTOPOLOGY *v176; // [rsp+100h] [rbp-8h]
  int Value; // [rsp+158h] [rbp+50h]
  int v180; // [rsp+168h] [rbp+60h]
  char v181; // [rsp+168h] [rbp+60h]
  DMMVIDEOPRESENTTARGET *v182; // [rsp+168h] [rbp+60h]
  unsigned int *v183; // [rsp+170h] [rbp+68h]

  v183 = a4;
  v11 = 0;
  v12 = 0LL;
  v139 = 0;
  v13 = 0;
  v165 = 0LL;
  v138 = 0;
  v145 = 0;
  v158 = 0;
  v137 = 0;
  v141 = 0;
  v146 = 0;
  v159 = 0;
  v157 = 0;
  v152 = 0;
  v136 = 0;
  v148 = 0;
  v160 = 0;
  v150 = 0;
  if ( !*((_QWORD *)this + 1) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v14);
    a4 = v183;
  }
  v164 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( a3 && a3[6] != this )
  {
    v15 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v15 + 24) = a3;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v17 = *((_QWORD *)this + 11);
  if ( !v17 )
  {
    v172 = 0LL;
LABEL_9:
    v19 = 0LL;
    goto LABEL_11;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v17 + 32));
  v18 = *((_QWORD *)this + 11);
  v172 = v18;
  if ( !v18 )
    goto LABEL_9;
  v19 = (DMMVIDPNTOPOLOGY *)(v18 + 96);
LABEL_11:
  v163 = v19;
  LODWORD(v20) = 0;
  v21 = (const struct DMMVIDPNTOPOLOGY *)((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL));
  v176 = v21;
  if ( v19 )
    v20 = *((_QWORD *)v19 + 5);
  LODWORD(v22) = 0;
  if ( v21 )
    v22 = *(_QWORD *)(((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL)) + 0x28);
  v23 = (_DWORD)v20 + (_DWORD)v22 == 0;
  v24 = v20 + v22;
  v170 = v24;
  if ( v23 )
  {
    *a4 = 0;
    *a5 = 0;
    *a6 = 0LL;
    *a7 = 0LL;
    if ( a9 )
      *a9 = 0LL;
    goto LABEL_204;
  }
  v25 = v24;
  v27 = v24;
  v26 = 56LL * v24;
  if ( !is_mul_ok(v27, 0x38uLL) )
    v26 = -1LL;
  P = (struct _DXGK_SET_TIMING_PATH_INFO *)operator new(v26, 0x4E506456u, PagedPool);
  v29 = P;
  if ( !P )
  {
    v11 = -1073741801;
    v30 = WdLogNewEntry5_WdLowResource(v28);
    *(_QWORD *)(v30 + 24) = v25;
    *(_QWORD *)(v30 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v30);
    goto LABEL_204;
  }
  v31 = 4 * v25;
  if ( !is_mul_ok(v25, 4uLL) )
    v31 = -1LL;
  v167 = operator new(v31, 0x4E506456u, PagedPool);
  if ( !v167 )
  {
    v11 = -1073741801;
    v33 = (_QWORD *)WdLogNewEntry5_WdLowResource(v32);
    v33[3] = v25;
    v33[4] = -1073741801LL;
    goto LABEL_26;
  }
  memset(P, 0, 56 * v25);
  memset(v167, 0, 4 * v25);
  if ( !v19
    || (v35 = (_QWORD *)((char *)v19 + 24), v36 = (_QWORD *)*((_QWORD *)v19 + 3), v36 == v35)
    || (v37 = v36 - 1) == 0LL )
  {
    v86 = v163;
LABEL_122:
    v87 = 0LL;
    if ( v21 )
    {
      v34 = (_QWORD *)*((_QWORD *)v21 + 3);
      if ( v34 != (_QWORD *)((char *)v21 + 24) )
        v87 = (DMMVIDPNPRESENTPATH *)(v34 - 1);
    }
    if ( v87 )
    {
      v88 = (_QWORD *)((char *)v21 + 24);
      v89 = 0;
      v156 = v88;
      do
      {
        v90 = *((_QWORD *)v87 + 12);
        v91 = *(_DWORD *)(*((_QWORD *)v87 + 11) + 24LL);
        v92 = 1 << v91;
        v89 |= 1 << v91;
        v182 = *(DMMVIDEOPRESENTTARGET **)(v90 + 96);
        v93 = 1 << v91;
        if ( *((_BYTE *)v182 + 536) )
          v93 = 0;
        v94 = v159 | (1 << *(_DWORD *)(*((_QWORD *)v87 + 11) + 24LL));
        v150 |= v93;
        if ( (v138 & v92) != 0 )
          v94 = v159;
        v159 = v94;
        if ( !v86 || !DMMVIDPNTOPOLOGY::GetPathFromTarget(v86, *(_DWORD *)(v90 + 24)) )
        {
          *((_DWORD *)v167 + v139) = v91;
          v95 = &P[v139];
          v96.Value = 0;
          v97 = *(_QWORD *)(v90 + 104);
          ++v139;
          Value = 4;
          if ( v97 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v97 + 96));
            v98 = *(_QWORD *)(v90 + 104);
            v96.Value = 0;
          }
          else
          {
            v98 = 0LL;
          }
          v175 = v98;
          v99 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v98 + 144);
          if ( v99 )
          {
            v96.0 = v99[33].0;
            Value = v99[34].Value;
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v175, 0LL);
          v95->VidPnTargetId = *(_DWORD *)(v90 + 24);
          v95->InputFlags = v95->InputFlags & 0xFFFFFFFC | 1;
          v95->InputFlags ^= (v95->InputFlags ^ (4 * (unsigned __int8)DMMVIDEOPRESENTTARGET::NeedToBeActive(v182))) & 4;
          v141 |= v92;
          v13 |= v92;
          v100 = v95->InputFlags & 0xFFFFFFF7 | (*((_BYTE *)v182 + 407) == 0 ? 8 : 0);
          v95->InputFlags = v100;
          v101 = v100 ^ (16 * *((_BYTE *)v182 + 408));
          v95->SelectedWireFormat = v96;
          v95->InputFlags = v100 ^ v101 & 0x10;
          v95->OutputColorSpace = Value;
          DMMVIDPNPRESENTPATH::UpdateGammaRamp(v87);
          v86 = v163;
          *((_BYTE *)v182 + 406) = 0;
        }
        v102 = (_QWORD *)*((_QWORD *)v87 + 1);
        v87 = (DMMVIDPNPRESENTPATH *)(v102 - 1);
        if ( v102 == v156 )
          v87 = 0LL;
      }
      while ( v87 );
      v145 = v89;
      v21 = v176;
      v137 = v13;
    }
    if ( v21 )
    {
      v103 = v145;
    }
    else
    {
      v103 = v138;
      v21 = v86;
      v145 = v138;
    }
    v104 = 0;
    if ( !*(_DWORD *)(*(_QWORD *)(v164 + 2304) + 80LL) )
    {
LABEL_157:
      v110 = ~v157 & v158;
      if ( (v110 & v13) != v110 )
      {
        v111 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v111);
      }
      if ( (v157 & v13) != 0 )
      {
        v112 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v112);
      }
      v147 = ~v13 & v146;
      if ( (v157 & v147) != 0 )
      {
        v113 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v113);
      }
      if ( (v141 & v157) != v157 )
      {
        v114 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v114);
      }
      if ( (v110 & v141) != v110 )
      {
        v115 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v115);
      }
      if ( (v141 & (v13 | v157)) != v141 )
      {
        v116 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v116);
      }
      if ( (v13 & v159) != v159 )
      {
        v117 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v117);
      }
      if ( (v141 & v159) != v159 )
      {
        v118 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v118);
      }
      if ( (v159 & v138) != 0 )
      {
        v119 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v119);
      }
      if ( (v157 & v103) != 0 )
      {
        v120 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v120);
      }
      v121 = v138;
      v122 = v103 | v157;
      if ( (v138 | v159) != (_DWORD)v122 )
      {
        v123 = WdLogNewEntry5_WdAssertion(v122);
        WdLogEvent5_WdAssertion(v123);
        v121 = v138;
      }
      v149 = ~v13 & v148;
      v124 = 0LL;
      *v183 = v170;
      v125 = P;
      P = 0LL;
      *a5 = v139;
      *a6 = v125;
      v126 = v167;
      *a7 = (unsigned int *)v167;
      if ( a8 )
      {
        if ( *(_DWORD *)a8 && *(_DWORD *)a8 != v121 )
        {
          v127 = WdLogNewEntry5_WdAssertion(v167);
          WdLogEvent5_WdAssertion(v127);
        }
        v128 = *((_DWORD *)a8 + 1);
        v129 = v138;
        *(_DWORD *)a8 = v138;
        if ( v128 && v128 != v103 )
        {
          v130 = WdLogNewEntry5_WdAssertion(v126);
          WdLogEvent5_WdAssertion(v130);
          v129 = v138;
        }
        *((_DWORD *)a8 + 10) = v147;
        *((_DWORD *)a8 + 5) = v152;
        *((_DWORD *)a8 + 6) = v136;
        *((_DWORD *)a8 + 12) = v149;
        *((_DWORD *)a8 + 1) = v103;
        *((_DWORD *)a8 + 2) = v13;
        *((_DWORD *)a8 + 7) = v141;
        *((_DWORD *)a8 + 3) = v157;
        *((_DWORD *)a8 + 4) = v159;
        *((_DWORD *)a8 + 13) = v110;
        *((_DWORD *)a8 + 16) = v160;
        *((_DWORD *)a8 + 19) = 0;
        *((_DWORD *)a8 + 17) = 0;
        if ( (a2 & 0x10000) != 0 )
        {
          *((_DWORD *)a8 + 14) = -1;
        }
        else
        {
          v132 = ~(v129 | v103) | v150;
          *((_DWORD *)a8 + 14) |= v141 | v160 | ((v141 & v132) != 0 ? v132 : 0);
          v133 = *((_DWORD *)a8 + 14);
          v134 = v13 & v132;
          if ( (((v13 & v132) - 1) & v13 & v132) != 0 )
          {
            *((_DWORD *)a8 + 14) = v132 | v133;
          }
          else if ( v134 )
          {
            *((_DWORD *)a8 + 14) = v133 | v132 & ~v134;
          }
        }
        FillFailedStatus(a8, 0);
      }
      if ( a9 )
        *a9 = v165;
      v135 = v124;
      v11 = (unsigned int)v124;
      if ( !a9 )
        v135 = v165;
      v12 = v135;
      goto LABEL_200;
    }
    v105 = 0;
    while ( 1 )
    {
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v21, v104, &v169);
      v107 = MostImportantVidPnPathTargetsFromSource;
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        if ( v169 != -1 )
        {
          PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v21, v169);
          IsVidPnSourceActive = DMMVIDEOPRESENTTARGET::NeedToBeActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)PathFromTarget
                                                                                                  + 12)
                                                                                                + 96LL));
LABEL_153:
          if ( IsVidPnSourceActive )
          {
            v34 = (_QWORD *)v104;
            v105 |= 1 << v104;
          }
          goto LABEL_155;
        }
      }
      else
      {
        if ( MostImportantVidPnPathTargetsFromSource == -1071774919 )
          goto LABEL_152;
        v108 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v108);
      }
      if ( v107 == -1071774919 )
      {
LABEL_152:
        IsVidPnSourceActive = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v164 + 2304), v104);
        goto LABEL_153;
      }
LABEL_155:
      if ( ++v104 >= *(_DWORD *)(*(_QWORD *)(v164 + 2304) + 80LL) )
      {
        v13 = v137;
        v152 = v105;
        v103 = v145;
        goto LABEL_157;
      }
    }
  }
  v38 = 0;
  v39 = 0;
  while ( 1 )
  {
    v40 = *(_DWORD *)(v37[11] + 24LL);
    v41 = &v29[v39];
    v168 = v38;
    v180 = v38;
    v144 = v40;
    *((_DWORD *)v167 + v39) = v40;
    v42 = v37[12];
    v43 = 1 << v40;
    v138 |= 1 << v40;
    v44 = 1 << v40;
    v153 = v42;
    v45 = *(_QWORD *)(v42 + 96);
    v142 = 4;
    if ( *(_BYTE *)(v45 + 536) )
      v44 = 0;
    v150 |= v44;
    v162.Value = 0;
    v161.Value = 0;
    v151 = *(_DWORD *)(*(_QWORD *)(v45 + 512) + 24LL);
    v46 = *(_QWORD *)(v42 + 104);
    if ( v46 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v46 + 96));
      v47 = *(_QWORD *)(v42 + 104);
      v162.Value = 0;
    }
    else
    {
      v47 = 0LL;
    }
    v173 = v47;
    v48 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v47 + 144);
    if ( v48 )
    {
      v142 = v48[34].Value;
      v162.0 = v48[33].0;
      v161.0 = v162.0;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v173, 0LL);
    v49 = 0;
    if ( v21 )
      break;
    v50 = *(_DWORD *)(v153 + 24);
    v41->InputFlags &= 0xFFFFFFFC;
    v41->VidPnTargetId = v50;
    v41->InputFlags ^= (v41->InputFlags ^ (4
                                         * (unsigned __int8)DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v45))) & 4;
    v51 = v41->InputFlags & 0xFFFFFFF7 | (*(_BYTE *)(v45 + 407) == 0 ? 8 : 0);
    v41->InputFlags = v51;
    v52 = v51 ^ (16 * *(_BYTE *)(v45 + 408));
    v41->SelectedWireFormat = v162;
    v41->OutputColorSpace = v142;
    v41->InputFlags = v51 ^ v52 & 0x10;
    if ( (DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v45) == 0) == (*(_BYTE *)(v45 + 410) == 0) )
    {
      if ( v151 == 13
        || (a2 & 0x4000) != 0
        || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v164 + 2304), v40) )
      {
        v13 |= v43;
        v41->InputFlags = v41->InputFlags & 0xFFFFFFFC | ((v151 != 13) + 1);
        v137 = v13;
      }
      goto LABEL_115;
    }
    v38 = v43 | v136;
    v136 |= v43;
    if ( v151 == 13 )
      v41->InputFlags = v41->InputFlags & 0xFFFFFFFC | 1;
LABEL_116:
    v34 = (_QWORD *)v37[1];
    v86 = v163;
    v37 = v34 - 1;
    if ( v34 == (_QWORD *)((char *)v163 + 24) )
      v37 = 0LL;
    v39 = ++v139;
    if ( !v37 )
      goto LABEL_122;
    v29 = P;
  }
  LOBYTE(v49) = v151 != 13;
  v140 = v49 + 1;
  v53 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v21, *(_DWORD *)(v37[12] + 24LL));
  v143 = 4;
  v155.Value = 0;
  v54 = v53;
  if ( v53 )
  {
    v55 = *((_QWORD *)v53 + 12);
    v56 = *(_QWORD *)(v55 + 104);
    if ( v56 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v56 + 96));
      v57 = *(_QWORD *)(v55 + 104);
      v162.0 = v161.0;
      v155.Value = 0;
    }
    else
    {
      v57 = 0LL;
    }
    v174 = v57;
    v58 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v57 + 144);
    if ( v58 )
    {
      v143 = v58[34].Value;
      v155.0 = v58[33].0;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v174, 0LL);
    if ( *(_DWORD *)(*((_QWORD *)v54 + 11) + 24LL) == v144 )
    {
      v59 = *(_DWORD *)(v153 + 24);
      v41->InputFlags &= 0xFFFFFFFC;
      v41->VidPnTargetId = v59;
      v41->InputFlags ^= (v41->InputFlags ^ (4
                                           * (unsigned __int8)DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v45))) & 4;
      v60 = v41->InputFlags & 0xFFFFFFF7 | (*(_BYTE *)(v45 + 407) == 0 ? 8 : 0);
      v41->InputFlags = v60;
      v41->InputFlags = v60 ^ ((unsigned __int8)v60 ^ (unsigned __int8)(16 * *(_BYTE *)(v45 + 408))) & 0x10;
      v41->SelectedWireFormat = v155;
      v41->OutputColorSpace = v143;
      v61 = v13 | v43;
      if ( *(_DWORD *)(*(_QWORD *)(v45 + 512) + 24LL) == 14 )
        v61 = v13;
      v154 = v61;
      v13 = v61;
      v137 = v61;
      v62 = DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v45);
      v63 = v180 | v43;
      if ( (v62 == 0) == (*(_BYTE *)(v45 + 410) == 0) )
        v63 = v168;
      v136 = v63;
      if ( (!*(_BYTE *)(v164 + 2169) || (a2 & 0x400000) == 0) && !*(_BYTE *)(*(_QWORD *)(v164 + 2304) + 132LL)
        || (v181 = 1, !ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*(DXGADAPTER ***)(v164 + 2304), v144)) )
      {
        v181 = 0;
      }
      if ( v151 == 13
        || (a2 & 0x4000) != 0
        || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v164 + 2304), v144)
        || !DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v37, v54, v181) )
      {
        v67 = v140;
        v64.0 = v155.0;
        v13 = v154 | v43;
        v65.0 = v162.0;
        v66 = v142;
        v137 = v154 | v43;
        v41->InputFlags = v140 | v41->InputFlags & 0xFFFFFFFC;
LABEL_71:
        if ( (v43 & v13) == 0
          && (*((_DWORD *)v37 + 26) != *((_DWORD *)v54 + 26) || *((_WORD *)v37 + 54) != *((_WORD *)v54 + 54)) )
        {
          v148 |= v43;
        }
        if ( *(_BYTE *)(v45 + 406) )
        {
          v160 |= v43;
          v68 = *(_DWORD *)(v45 + 80) - 10;
          *(_BYTE *)(v45 + 406) = 0;
          if ( v68 <= 1 )
          {
            v13 |= v43;
            v137 = v13;
            v41->InputFlags = v67 | v41->InputFlags & 0xFFFFFFFC;
          }
        }
        if ( v65.Value != v64.Value || v66 != v143 )
        {
          DMMVIDEOPRESENTTARGET::SetColorSpaceTansform((DMMVIDEOPRESENTTARGET *)v45, 0LL);
          DMMVIDPNPRESENTPATH::UpdateGammaRamp(v54);
          v38 = v136;
          goto LABEL_116;
        }
        DMMVIDPNPRESENTPATH::SetGammaRamp(v54, (const struct DXGK_GAMMA_RAMP *)v37[23]);
        goto LABEL_115;
      }
      v64.0 = v155.0;
      v65.0 = v162.0;
      v66 = v142;
      if ( v162.Value == v155.Value && v142 == v143 )
      {
        if ( *((_DWORD *)v37 + 29) != *((_DWORD *)v54 + 29) )
        {
          v146 |= v43;
LABEL_70:
          v67 = v140;
          goto LABEL_71;
        }
        v137 = v13;
        if ( !*((_BYTE *)this + 464) )
          goto LABEL_70;
        v13 |= v43;
      }
      else
      {
        v13 = v154 | v43;
      }
      v137 = v13;
      goto LABEL_70;
    }
  }
  v69 = v140;
  v41->VidPnTargetId = *(_DWORD *)(v153 + 24);
  if ( !v54 )
    v69 = 3;
  v41->InputFlags = v69 | v41->InputFlags & 0xFFFFFFFC;
  if ( v54 )
    v70 = (unsigned __int8)DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v45);
  else
    v70 = 0;
  v41->InputFlags ^= (v41->InputFlags ^ (4 * v70)) & 4;
  v71 = v41->InputFlags & 0xFFFFFFF7 | (*(_BYTE *)(v45 + 407) == 0 ? 8 : 0);
  v41->InputFlags = v71;
  v72 = *(_BYTE *)(v45 + 408);
  v73 = v43 | v141;
  v141 |= v43;
  v41->InputFlags = v71 ^ ((unsigned __int8)v71 ^ (unsigned __int8)(16 * v72)) & 0x10;
  v41->SelectedWireFormat = v155;
  v41->OutputColorSpace = v143;
  if ( v54 )
  {
    v74 = *(_DWORD *)(*((_QWORD *)v54 + 11) + 24LL);
    v13 |= 1 << v74;
    *((_DWORD *)v167 + v139) = v74;
    v137 = v13;
    v141 = (1 << v74) | v73;
    DMMVIDPNPRESENTPATH::UpdateGammaRamp(v54);
  }
  v75 = v144;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v21, v144, &v171);
  if ( NumPathsFromSource < 0 )
  {
    if ( NumPathsFromSource == -1071774919 && !v171 )
      goto LABEL_99;
    v78 = WdLogNewEntry5_WdAssertion(v77);
    WdLogEvent5_WdAssertion(v78);
  }
  if ( !v171 )
  {
LABEL_99:
    v157 |= v43;
LABEL_115:
    v38 = v136;
    goto LABEL_116;
  }
  v158 |= v43;
  v13 |= v43;
  v12 = v165;
  v137 = v13;
  if ( !a9 )
    goto LABEL_107;
  if ( v165 )
    goto LABEL_108;
  v165 = (unsigned int *)operator new(0x400uLL, 0x4E506456u, PagedPool);
  v12 = v165;
  if ( v165 )
  {
    v80 = v165;
    for ( i = 256LL; i; --i )
      *v80++ = -1;
    v75 = v144;
LABEL_107:
    if ( !v12 )
      goto LABEL_115;
LABEL_108:
    v82 = 0LL;
    v83 = 2 * v75;
    while ( 1 )
    {
      v84 = (unsigned int)(v82 + 8 * v83);
      if ( v12[v84] == -1 )
        break;
      v82 = (unsigned int)(v82 + 1);
      if ( (unsigned int)v82 >= 0x10 )
        goto LABEL_113;
    }
    v12[v84] = *(_DWORD *)(v153 + 24);
LABEL_113:
    if ( (unsigned int)v82 >= 0x10 )
    {
      v85 = WdLogNewEntry5_WdAssertion(v82);
      WdLogEvent5_WdAssertion(v85);
    }
    goto LABEL_115;
  }
  v11 = -1073741801;
  v33 = (_QWORD *)WdLogNewEntry5_WdLowResource(v79);
  v33[3] = *(int *)(v164 + 272);
  v33[4] = *(unsigned int *)(v164 + 268);
  v33[5] = -1073741801LL;
LABEL_26:
  WdLogEvent5_WdLowResource(v33);
LABEL_200:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
LABEL_204:
  auto_rc<DMMVIDPN const>::reset(&v172, 0LL);
  return v11;
}
