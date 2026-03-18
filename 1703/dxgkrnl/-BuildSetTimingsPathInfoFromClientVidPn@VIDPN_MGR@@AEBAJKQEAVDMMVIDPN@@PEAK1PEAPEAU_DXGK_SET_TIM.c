/*
 * XREFs of ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00E18C8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 * Callees:
 *     ?FillFailedStatus@@YAXPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C0002AD8 (-FillFailedStatus@@YAXPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0002CFC (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000A78C (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000ADD0 (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C000AE20 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00A5300 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00DF4EC (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00E15B4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
        VIDPN_MGR *this,
        int a2,
        VIDPN_MGR **a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _DXGK_SET_TIMING_PATH_INFO **a6,
        unsigned int **a7,
        struct _D3DKMT_VIDPN_SOURCE_MASKS *a8,
        unsigned int **a9)
{
  unsigned int v11; // ebx
  unsigned int *v12; // r15
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  DMMVIDPNTOPOLOGY *v19; // r12
  __int64 v20; // rcx
  const struct DMMVIDPNTOPOLOGY *v21; // r13
  __int64 v22; // rax
  bool v23; // zf
  unsigned int v24; // eax
  unsigned __int64 v25; // rsi
  SIZE_T v26; // rax
  unsigned __int64 v27; // kr00_8
  __int64 v28; // rcx
  struct _DXGK_SET_TIMING_PATH_INFO *v29; // rbx
  __int64 v30; // rax
  SIZE_T v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rcx
  DMMVIDPNPRESENTPATH *v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // eax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v39; // esi
  struct _DXGK_SET_TIMING_PATH_INFO *v40; // rdi
  unsigned int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // r12
  int v44; // r15d
  __int64 v45; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v46; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v47; // eax
  unsigned int v48; // edx
  char v49; // al
  struct DMMVIDPNPRESENTPATH *v50; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v51; // r15d
  struct DMMVIDPNPRESENTPATH *v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v56; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v57; // eax
  unsigned int v58; // edx
  char v59; // al
  char v60; // r15
  char v61; // r8
  DMMVIDPNPRESENTPATH *v62; // r15
  int v63; // edx
  unsigned int v64; // eax
  int v65; // eax
  int v66; // r8d
  int v67; // eax
  unsigned int v68; // edx
  char v69; // al
  int v70; // ecx
  int NumPathsFromSource; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rcx
  unsigned int *v77; // rdi
  __int64 v78; // rdx
  int v79; // ebx
  __int64 v80; // rax
  _QWORD *v81; // rbx
  _QWORD *v82; // rbx
  __int64 v83; // rdi
  int v84; // r15d
  struct _DXGK_SET_TIMING_PATH_INFO *v85; // rsi
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v86; // r15d
  __int64 v87; // rax
  int Value; // r12d
  __int64 v89; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v90; // rax
  unsigned __int8 v91; // al
  unsigned int v92; // edi
  char v93; // al
  _QWORD *v94; // rax
  unsigned int v95; // edi
  int v96; // r14d
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v98; // rdx
  int v99; // ebx
  __int64 v100; // rax
  char IsVidPnSourceActive; // al
  int v102; // ebx
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rax
  struct _DXGK_SET_TIMING_PATH_INFO *v107; // rcx
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  unsigned int *v109; // rax
  int v110; // [rsp+28h] [rbp-C1h]
  unsigned int v111; // [rsp+2Ch] [rbp-BDh]
  unsigned int v112; // [rsp+30h] [rbp-B9h]
  unsigned int v113; // [rsp+34h] [rbp-B5h]
  int v114; // [rsp+34h] [rbp-B5h]
  int v115; // [rsp+38h] [rbp-B1h]
  int v116; // [rsp+3Ch] [rbp-ADh]
  int v117; // [rsp+40h] [rbp-A9h]
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v118; // [rsp+44h] [rbp-A5h]
  int v119; // [rsp+48h] [rbp-A1h]
  int v120; // [rsp+4Ch] [rbp-9Dh]
  int v121; // [rsp+50h] [rbp-99h]
  int v122; // [rsp+54h] [rbp-95h]
  int v123; // [rsp+58h] [rbp-91h]
  DMMVIDPNPRESENTPATH *v124; // [rsp+60h] [rbp-89h]
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v125; // [rsp+68h] [rbp-81h]
  DMMVIDEOPRESENTTARGET *v126; // [rsp+68h] [rbp-81h]
  __int64 v127; // [rsp+78h] [rbp-71h]
  unsigned int *v128; // [rsp+80h] [rbp-69h]
  struct _DXGK_SET_TIMING_PATH_INFO *P; // [rsp+88h] [rbp-61h]
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v130; // [rsp+90h] [rbp-59h]
  __int64 v131; // [rsp+98h] [rbp-51h]
  PVOID v132; // [rsp+A0h] [rbp-49h]
  int v133; // [rsp+A8h] [rbp-41h]
  unsigned int v134; // [rsp+B0h] [rbp-39h] BYREF
  unsigned int v135; // [rsp+B4h] [rbp-35h]
  DMMVIDPNTOPOLOGY *v136; // [rsp+B8h] [rbp-31h]
  unsigned __int64 v137; // [rsp+C0h] [rbp-29h] BYREF
  __int64 v138; // [rsp+C8h] [rbp-21h] BYREF
  __int64 v139; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v140; // [rsp+D8h] [rbp-11h] BYREF
  __int64 v141[9]; // [rsp+E0h] [rbp-9h] BYREF
  char v143; // [rsp+138h] [rbp+4Fh]
  unsigned int v145; // [rsp+148h] [rbp+5Fh]
  unsigned int *v146; // [rsp+150h] [rbp+67h]

  v146 = a4;
  v11 = 0;
  v12 = 0LL;
  v111 = 0;
  v13 = 0;
  v128 = 0LL;
  v121 = 0;
  v110 = 0;
  v113 = 0;
  v120 = 0;
  v117 = 0;
  v115 = 0;
  v122 = 0;
  v145 = 0;
  v123 = 0;
  if ( !*((_QWORD *)this + 1) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v14);
    a4 = v146;
  }
  v127 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( a3 && a3[6] != this )
  {
    v15 = WdLogNewEntry5_WdError(this, 0LL);
    *(_QWORD *)(v15 + 24) = a3;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v17 = *((_QWORD *)this + 11);
  if ( !v17 )
  {
    v138 = 0LL;
LABEL_9:
    v19 = 0LL;
    goto LABEL_11;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v17 + 32));
  v18 = *((_QWORD *)this + 11);
  v138 = v18;
  if ( !v18 )
    goto LABEL_9;
  v19 = (DMMVIDPNTOPOLOGY *)(v18 + 96);
LABEL_11:
  v136 = v19;
  LODWORD(v20) = 0;
  v21 = (const struct DMMVIDPNTOPOLOGY *)((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL));
  if ( v19 )
    v20 = *((_QWORD *)v19 + 5);
  LODWORD(v22) = 0;
  if ( v21 )
    v22 = *(_QWORD *)(((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL)) + 0x28);
  v23 = (_DWORD)v20 + (_DWORD)v22 == 0;
  v24 = v20 + v22;
  v135 = v24;
  if ( v23 )
  {
    *a4 = 0;
    *a5 = 0;
    *a6 = 0LL;
    *a7 = 0LL;
    if ( a9 )
      *a9 = 0LL;
    goto LABEL_162;
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
    goto LABEL_162;
  }
  v31 = 4 * v25;
  if ( !is_mul_ok(v25, 4uLL) )
    v31 = -1LL;
  v132 = operator new(v31, 0x4E506456u, PagedPool);
  if ( !v132 )
  {
    v11 = -1073741801;
    v33 = (_QWORD *)WdLogNewEntry5_WdLowResource(v32);
    v33[3] = v25;
    v33[4] = -1073741801LL;
    goto LABEL_26;
  }
  memset(P, 0, 56 * v25);
  memset(v132, 0, 4 * v25);
  if ( !v19
    || (v35 = *((_QWORD *)v19 + 3), (DMMVIDPNTOPOLOGY *)v35 == (DMMVIDPNTOPOLOGY *)((char *)v19 + 24))
    || (v34 = (DMMVIDPNPRESENTPATH *)(v35 - 8), v124 = (DMMVIDPNPRESENTPATH *)(v35 - 8), v35 == 8) )
  {
LABEL_113:
    if ( !v21 || (v81 = (_QWORD *)*((_QWORD *)v21 + 3), v81 == (_QWORD *)((char *)v21 + 24)) )
      v82 = 0LL;
    else
      v82 = v81 - 1;
    if ( v82 )
    {
      do
      {
        v83 = v82[12];
        v84 = *(_DWORD *)(v82[11] + 24LL);
        v126 = *(DMMVIDEOPRESENTTARGET **)(v83 + 96);
        v143 = v84;
        if ( !v19 || !DMMVIDPNTOPOLOGY::GetPathFromTarget(v19, *(_DWORD *)(v83 + 24)) )
        {
          *((_DWORD *)v132 + v111) = v84;
          v85 = &P[v111];
          v86.Value = 0;
          v87 = *(_QWORD *)(v83 + 104);
          ++v111;
          Value = 4;
          if ( v87 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v87 + 96));
            v89 = *(_QWORD *)(v83 + 104);
            v86.Value = 0;
          }
          else
          {
            v89 = 0LL;
          }
          v141[0] = v89;
          v90 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v89 + 144);
          if ( v90 )
          {
            v86.0 = v90[33].0;
            Value = v90[34].Value;
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset(v141, 0LL);
          v85->VidPnTargetId = *(_DWORD *)(v83 + 24);
          v85->InputFlags = v85->InputFlags & 0xFFFFFFFC | 1;
          v91 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v126);
          v36 = (__int64)v126;
          v85->InputFlags ^= (v85->InputFlags ^ (4 * v91)) & 4;
          v34 = (DMMVIDPNPRESENTPATH *)(v85->InputFlags & 0xFFFFFFF7);
          v92 = (unsigned int)v34 | (*((_BYTE *)v126 + 407) == 0 ? 8 : 0);
          v85->InputFlags = v92;
          v93 = v92 ^ (16 * *((_BYTE *)v126 + 408));
          v85->OutputColorSpace = Value;
          v19 = v136;
          v85->SelectedWireFormat = v86;
          v85->InputFlags = v92 ^ v93 & 0x10;
          v13 |= 1 << v143;
          v145 = -1;
          *((_BYTE *)v126 + 406) = 0;
        }
        v94 = (_QWORD *)v82[1];
        v35 = (unsigned __int64)v21 + 24;
        v82 = v94 - 1;
        if ( v94 == (_QWORD *)((char *)v21 + 24) )
          v82 = 0LL;
      }
      while ( v82 );
      v110 = v13;
    }
    v95 = 0;
    if ( !v21 )
      v21 = v19;
    if ( !*(_DWORD *)(*(_QWORD *)(v127 + 2280) + 80LL) )
    {
LABEL_143:
      v102 = ~v120 & v121;
      if ( (v102 & v13) != v102 )
      {
        v103 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
        WdLogEvent5_WdAssertion(v103);
      }
      if ( (v120 & v13) != 0 )
      {
        v104 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
        WdLogEvent5_WdAssertion(v104);
      }
      v105 = ~v13 & v113;
      v114 = v105;
      if ( (v120 & (unsigned int)v105) != 0 )
      {
        v106 = WdLogNewEntry5_WdAssertion(v35, v105, v36, v37);
        WdLogEvent5_WdAssertion(v106);
        LODWORD(v105) = v114;
      }
      *v146 = v135;
      v107 = P;
      P = 0LL;
      *a5 = v111;
      *a6 = v107;
      *a7 = (unsigned int *)v132;
      if ( a8 )
      {
        *((_DWORD *)a8 + 12) = v145;
        *((_DWORD *)a8 + 4) = v117;
        *((_DWORD *)a8 + 3) = v120;
        *((_DWORD *)a8 + 5) = v115;
        *((_DWORD *)a8 + 8) = v105;
        *((_DWORD *)a8 + 14) = v123;
        *((_DWORD *)a8 + 2) = v13;
        *((_DWORD *)a8 + 11) = v102;
        *((_DWORD *)a8 + 10) = v122 & ~v13;
        *((_DWORD *)a8 + 17) = 0;
        *((_DWORD *)a8 + 15) = 0;
        FillFailedStatus(a8, 0);
      }
      if ( a9 )
        *a9 = v128;
      v109 = 0LL;
      v11 = 0;
      if ( !a9 )
        v109 = v128;
      v12 = v109;
      goto LABEL_158;
    }
    v96 = 0;
    while ( 1 )
    {
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v21, v95, &v134);
      v99 = MostImportantVidPnPathTargetsFromSource;
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        v34 = (DMMVIDPNPRESENTPATH *)v134;
        if ( v134 != -1 )
        {
          PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v21, v134);
          IsVidPnSourceActive = DMMVIDEOPRESENTTARGET::NeedToBeActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)PathFromTarget
                                                                                                  + 12)
                                                                                                + 96LL));
LABEL_139:
          if ( IsVidPnSourceActive )
          {
            v35 = v95;
            v96 |= 1 << v95;
          }
          goto LABEL_141;
        }
      }
      else
      {
        if ( MostImportantVidPnPathTargetsFromSource == -1071774919 )
          goto LABEL_138;
        v100 = WdLogNewEntry5_WdAssertion(v35, v98, v36, v37);
        WdLogEvent5_WdAssertion(v100);
      }
      if ( v99 == -1071774919 )
      {
LABEL_138:
        IsVidPnSourceActive = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v127 + 2280), v95, v36, v37);
        goto LABEL_139;
      }
LABEL_141:
      if ( ++v95 >= *(_DWORD *)(*(_QWORD *)(v127 + 2280) + 80LL) )
      {
        v117 = v96;
        v13 = v110;
        goto LABEL_143;
      }
    }
  }
  v38 = 0;
  while ( 1 )
  {
    v39.Value = 0;
    v130.Value = 0;
    v40 = &v29[v38];
    v118.Value = 0;
    v41 = *(_DWORD *)(*((_QWORD *)v34 + 11) + 24LL);
    v119 = 4;
    *((_DWORD *)v132 + v38) = v41;
    v42 = *((_QWORD *)v34 + 12);
    v131 = v42;
    v43 = *(_QWORD *)(v42 + 96);
    v44 = *(_DWORD *)(*(_QWORD *)(v43 + 512) + 24LL);
    v45 = *(_QWORD *)(v42 + 104);
    v133 = v44;
    if ( v45 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v45 + 96));
      v39.Value = 0;
      v45 = *(_QWORD *)(v42 + 104);
      v130.Value = 0;
    }
    v139 = v45;
    v46 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v45 + 144);
    if ( v46 )
    {
      v39.0 = v46[33].0;
      v119 = v46[34].Value;
      v130.0 = v39.0;
      v118.0 = v39.0;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v139, 0LL);
    if ( !v21 )
    {
      v47 = *(_DWORD *)(v131 + 24);
      v40->InputFlags &= 0xFFFFFFFC;
      v40->VidPnTargetId = v47;
      v40->InputFlags ^= (v40->InputFlags ^ (4
                                           * (unsigned __int8)DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v43))) & 4;
      v48 = v40->InputFlags & 0xFFFFFFF7 | (*(_BYTE *)(v43 + 407) == 0 ? 8 : 0);
      v40->InputFlags = v48;
      v49 = v48 ^ (16 * *(_BYTE *)(v43 + 408));
      v40->SelectedWireFormat = v39;
      v40->InputFlags = v48 ^ v49 & 0x10;
      v40->OutputColorSpace = v119;
      if ( (DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v43) == 0) == (*(_BYTE *)(v43 + 409) == 0) )
      {
        if ( v44 == 13
          || (a2 & 0x4000) != 0
          || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v127 + 2280), v41) )
        {
          v40->InputFlags = v40->InputFlags & 0xFFFFFFFC | ((v44 != 13) + 1);
          v13 |= 1 << v41;
          v145 |= ~(1 << v41);
          v110 = v13;
        }
      }
      else
      {
        v115 |= 1 << v41;
        if ( v44 == 13 )
        {
          v145 |= ~(1 << v41);
          v40->InputFlags = v40->InputFlags & 0xFFFFFFFC | 1;
        }
      }
      goto LABEL_108;
    }
    v112 = (v44 != 13) + 1;
    v50 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v21, *(_DWORD *)(*((_QWORD *)v124 + 12) + 24LL));
    v51.Value = 0;
    v116 = 4;
    v125.Value = 0;
    v52 = v50;
    if ( v50 )
    {
      v53 = *((_QWORD *)v50 + 12);
      v54 = *(_QWORD *)(v53 + 104);
      if ( v54 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v54 + 96));
        v55 = *(_QWORD *)(v53 + 104);
        v51.Value = 0;
        v130.0 = v118.0;
        v125.Value = 0;
      }
      else
      {
        v55 = 0LL;
      }
      v140 = v55;
      v56 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v55 + 144);
      if ( v56 )
      {
        v51.0 = v56[33].0;
        v116 = v56[34].Value;
        v125.0 = v51.0;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v140, 0LL);
      if ( *(_DWORD *)(*((_QWORD *)v52 + 11) + 24LL) == v41 )
      {
        v57 = *(_DWORD *)(v131 + 24);
        v40->InputFlags &= 0xFFFFFFFC;
        v40->VidPnTargetId = v57;
        v40->InputFlags ^= (v40->InputFlags ^ (4
                                             * (unsigned __int8)DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v43))) & 4;
        v58 = v40->InputFlags & 0xFFFFFFF7 | (*(_BYTE *)(v43 + 407) == 0 ? 8 : 0);
        v40->InputFlags = v58;
        v59 = v58 ^ (16 * *(_BYTE *)(v43 + 408));
        v40->SelectedWireFormat = v51;
        v40->InputFlags = v58 ^ v59 & 0x10;
        v40->OutputColorSpace = v116;
        if ( *(_DWORD *)(*(_QWORD *)(v43 + 512) + 24LL) != 14 )
        {
          v13 |= 1 << v41;
          v110 = v13;
        }
        v60 = 0;
        if ( (DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v43) == 0) != (*(_BYTE *)(v43 + 409) == 0) )
          v115 |= 1 << v41;
        if ( (*(_BYTE *)(v127 + 2145) && (a2 & 0x400000) != 0 || *(_BYTE *)(*(_QWORD *)(v127 + 2280) + 133LL))
          && ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*(DXGADAPTER ***)(v127 + 2280), v41) )
        {
          v60 = 1;
        }
        if ( v133 == 13
          || (a2 & 0x4000) != 0
          || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v127 + 2280), v41) )
        {
          v62 = v124;
        }
        else
        {
          v61 = v60;
          v62 = v124;
          if ( DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v124, v52, v61) )
          {
            if ( v130.Value == v125.Value && v119 == v116 )
            {
              if ( *((_DWORD *)v124 + 29) == *((_DWORD *)v52 + 29) )
              {
                if ( *((_BYTE *)this + 456) )
                {
                  v13 |= 1 << v41;
                  v110 = v13;
                }
              }
              else
              {
                v113 |= 1 << v41;
              }
              v37 = v145;
            }
            else
            {
              v13 |= 1 << v41;
              v65 = ~(1 << v41);
              v37 = v65 | v145;
              v110 = v13;
              v145 |= v65;
            }
            v36 = v112;
            goto LABEL_69;
          }
        }
        v36 = v112;
        v40->InputFlags = v112 | v40->InputFlags & 0xFFFFFFFC;
        v13 |= 1 << v41;
        v37 = ~(1 << v41) | v145;
        v110 = v13;
        v145 |= ~(1 << v41);
LABEL_69:
        v63 = 1 << v41;
        if ( ((1 << v41) & v13) == 0
          && (*((_DWORD *)v62 + 26) != *((_DWORD *)v52 + 26) || *((_WORD *)v62 + 54) != *((_WORD *)v52 + 54)) )
        {
          v122 |= v63;
        }
        if ( *(_BYTE *)(v43 + 406) )
        {
          v37 = v63 | (unsigned int)v37;
          v123 |= v63;
          v64 = *(_DWORD *)(v43 + 80) - 10;
          *(_BYTE *)(v43 + 406) = 0;
          v145 = v37;
          if ( v64 <= 1 )
          {
            v13 |= v63;
            v110 = v13;
            v40->InputFlags = v36 | v40->InputFlags & 0xFFFFFFFC;
          }
        }
        goto LABEL_108;
      }
    }
    v66 = v112;
    v40->VidPnTargetId = *(_DWORD *)(v131 + 24);
    if ( !v52 )
      v66 = 3;
    v40->InputFlags = v66 | v40->InputFlags & 0xFFFFFFFC;
    if ( v52 )
      v67 = (unsigned __int8)DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v43);
    else
      v67 = 0;
    v40->InputFlags ^= (v40->InputFlags ^ (4 * v67)) & 4;
    v68 = v40->InputFlags & 0xFFFFFFF7 | (*(_BYTE *)(v43 + 407) == 0 ? 8 : 0);
    v40->InputFlags = v68;
    v69 = *(_BYTE *)(v43 + 408);
    v40->SelectedWireFormat = v51;
    v40->InputFlags = v68 ^ ((unsigned __int8)v68 ^ (unsigned __int8)(16 * v69)) & 0x10;
    v40->OutputColorSpace = v116;
    v145 = -1;
    if ( v52 )
    {
      v70 = *(_DWORD *)(*((_QWORD *)v52 + 11) + 24LL);
      v13 |= 1 << v70;
      *((_DWORD *)v132 + v111) = v70;
      v110 = v13;
    }
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v21, v41, &v137);
    if ( NumPathsFromSource < 0 )
    {
      if ( NumPathsFromSource == -1071774919 && !v137 )
      {
LABEL_93:
        v120 |= 1 << v41;
        goto LABEL_108;
      }
      v74 = WdLogNewEntry5_WdAssertion(v73, v72, v36, v37);
      WdLogEvent5_WdAssertion(v74);
    }
    if ( !v137 )
      goto LABEL_93;
    v12 = v128;
    v75 = v41;
    v121 |= 1 << v41;
    v13 |= 1 << v41;
    v110 = v13;
    if ( !a9 )
      goto LABEL_100;
    if ( !v128 )
      break;
LABEL_101:
    v78 = 0LL;
    v79 = 2 * v41;
    while ( v12[(unsigned int)(v78 + 8 * v79)] != -1 )
    {
      v78 = (unsigned int)(v78 + 1);
      if ( (unsigned int)v78 >= 0x10 )
        goto LABEL_106;
    }
    v75 = (unsigned int)(v78 + 8 * v79);
    v12[v75] = *(_DWORD *)(v131 + 24);
LABEL_106:
    if ( (unsigned int)v78 >= 0x10 )
    {
      v80 = WdLogNewEntry5_WdAssertion(v75, v78, v36, v37);
      WdLogEvent5_WdAssertion(v80);
    }
LABEL_108:
    v19 = v136;
    v35 = *((_QWORD *)v124 + 1);
    v34 = (DMMVIDPNPRESENTPATH *)(v35 - 8);
    if ( (DMMVIDPNTOPOLOGY *)v35 == (DMMVIDPNTOPOLOGY *)((char *)v136 + 24) )
      v34 = 0LL;
    v38 = v111 + 1;
    v124 = v34;
    ++v111;
    if ( !v34 )
      goto LABEL_113;
    v29 = P;
  }
  v128 = (unsigned int *)operator new(0x400uLL, 0x4E506456u, PagedPool);
  v12 = v128;
  if ( v128 )
  {
    v75 = 256LL;
    v77 = v128;
    while ( v75 )
    {
      *v77++ = -1;
      --v75;
    }
LABEL_100:
    if ( !v12 )
      goto LABEL_108;
    goto LABEL_101;
  }
  v11 = -1073741801;
  v33 = (_QWORD *)WdLogNewEntry5_WdLowResource(v76);
  v33[3] = *(int *)(v127 + 272);
  v33[4] = *(unsigned int *)(v127 + 268);
  v33[5] = -1073741801LL;
LABEL_26:
  WdLogEvent5_WdLowResource(v33);
LABEL_158:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
LABEL_162:
  auto_rc<DMMVIDPN const>::reset(&v138, 0LL);
  return v11;
}
