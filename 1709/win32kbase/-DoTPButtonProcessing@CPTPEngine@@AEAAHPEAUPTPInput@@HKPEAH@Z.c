/*
 * XREFs of ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0132CA4
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C013232C (-ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOIN.c)
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C01337B0 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C01345FC (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAUtagPOINT@@@Z @ 0x1C0134D94 (-IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAUtagPOINT@@@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135C24 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0136DB8 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C01370C0 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x1C0137150 (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01371DC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0137568 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C013770C (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

__int64 __fastcall CPTPEngine::DoTPButtonProcessing(
        CPTPEngine *this,
        struct tagPOINT *a2,
        int a3,
        unsigned int a4,
        int *a5)
{
  int v5; // ebx
  int v6; // esi
  struct PTPInput *v7; // r14
  int *v8; // r13
  int v9; // r10d
  struct tagPOINT v10; // r15
  int v11; // r8d
  int v12; // r12d
  int v14; // ecx
  BOOL v15; // edx
  unsigned int v16; // ebx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  int v21; // r9d
  __int64 v22; // xmm1_8
  __int128 v23; // xmm0
  int v24; // esi
  unsigned int v25; // eax
  int v26; // r15d
  int v27; // r13d
  unsigned int v28; // r11d
  _QWORD *v29; // r8
  __int64 v30; // r10
  char *v31; // rsi
  unsigned __int64 v32; // r9
  int v33; // edx
  int v34; // ecx
  __int64 v35; // rcx
  int v36; // ecx
  struct tagPOINT v37; // rbx
  unsigned int v38; // ecx
  int v39; // eax
  int v40; // eax
  struct CContactState *v41; // rbx
  int IsRCZClick; // eax
  BOOL v43; // esi
  int v44; // eax
  unsigned int v45; // r15d
  __int64 v46; // r8
  int v47; // eax
  __int64 v48; // r8
  int v49; // eax
  int v50; // eax
  struct tagPOINTER_INFO *v51; // r13
  signed int v52; // r15d
  int v53; // esi
  struct CContactState *v54; // rbx
  int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // r12d
  __int64 v58; // r11
  int *v59; // rcx
  char *v60; // r14
  struct CContactState *v61; // rdx
  int v62; // eax
  int v63; // r10d
  signed int v64; // r9d
  int v65; // ecx
  int v66; // r15d
  int v67; // eax
  int v68; // eax
  int v69; // eax
  __int64 v70; // xmm1_8
  int v71; // eax
  int v72; // ecx
  int v73; // r8d
  struct CContactState *v74; // r9
  int v75; // esi
  int v76; // ebx
  struct tagPOINT v77; // [rsp+38h] [rbp-81h] BYREF
  int v78; // [rsp+40h] [rbp-79h]
  struct CContactState *v79; // [rsp+48h] [rbp-71h]
  __int128 v80; // [rsp+58h] [rbp-61h] BYREF
  __int64 v81; // [rsp+68h] [rbp-51h]
  __int128 v82; // [rsp+78h] [rbp-41h] BYREF
  __int64 v83; // [rsp+88h] [rbp-31h]
  __int64 v84; // [rsp+98h] [rbp-21h]
  struct CContactState *v85[2]; // [rsp+A0h] [rbp-19h]
  __int64 v86; // [rsp+B0h] [rbp-9h]
  int v87; // [rsp+B8h] [rbp-1h]
  char *v88; // [rsp+C0h] [rbp+7h]
  int v89; // [rsp+118h] [rbp+5Fh]
  int *v90; // [rsp+118h] [rbp+5Fh]
  struct tagPOINT v92; // [rsp+120h] [rbp+67h]

  v5 = *((_DWORD *)this + 749);
  v6 = 0;
  v78 = 0;
  v7 = (struct PTPInput *)a2;
  v79 = 0LL;
  v8 = a5;
  v9 = a3;
  v10 = *a2;
  v11 = 0;
  v12 = v5 & 0x10;
  v89 = 0;
  v87 = v12;
  v14 = *((_DWORD *)this + 820);
  v15 = v12 != 0;
  *a5 = 0;
  v16 = v5 & 0xFFFFFFEF;
  v77 = v10;
  if ( (v14 & 1) == v15 )
    goto LABEL_11;
  v17 = *((_DWORD *)this + 750);
  if ( v17 == 3 || v17 == 6 )
  {
    if ( v12 )
    {
      v18 = v14 | 0x200;
      goto LABEL_7;
    }
  }
  else if ( v12 )
  {
    goto LABEL_8;
  }
  if ( (v14 & 0x200) != 0 )
  {
    v6 = 1;
    v18 = v14 & 0xFFFFFDFF;
LABEL_7:
    *((_DWORD *)this + 820) = v18;
  }
LABEL_8:
  v11 = 1;
  v89 = 1;
  *((_DWORD *)this + 820) = v15 | *((_DWORD *)this + 820) & 0xFFFFFFFE;
  if ( v12 )
  {
    CPTPEngine::TPAAPSetCurtainState(this, 0);
    v11 = 1;
    v9 = a3;
    *((struct tagPOINT *)this + 387) = v10;
  }
  *v8 = 1;
LABEL_11:
  v19 = *((_DWORD *)this + 750);
  if ( v19 == 3 || v19 == 6 || v6 )
    return 1LL;
  if ( v9 && v11 && v12 && !v16 )
  {
    *((_DWORD *)this + 820) |= 0x8000u;
    return 1LL;
  }
  v21 = *((_DWORD *)this + 820);
  if ( (v21 & 0x8000) == 0 )
    goto LABEL_25;
  if ( !v12 )
  {
    v22 = v86;
    LODWORD(v85[0]) = 5;
    v23 = *(_OWORD *)v85;
    *((_DWORD *)this + 820) = v21 & 0xFFFF7FFF;
    v83 = v22;
    v82 = v23;
    CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v82);
    CBasePTPEngine::SendMouseOutput(this, 1LL, *(_QWORD *)((char *)v7 + 28), 0LL);
    CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)v7 + 28), 0LL);
LABEL_25:
    v24 = v89;
    goto LABEL_26;
  }
  if ( v9 )
  {
    if ( !v16
      && *(_QWORD *)v7 - *((_QWORD *)this + 387) < *((_QWORD *)this + 12)
                                                 * (unsigned __int64)*((unsigned int *)this + 35)
                                                 / 0x3E8 )
    {
      return 1LL;
    }
    v78 = 1;
  }
  v89 = 1;
  *((_DWORD *)this + 820) = v21 & 0xFFFF7FFF;
  v24 = 1;
LABEL_26:
  v25 = *((_DWORD *)v7 + 12);
  v26 = 0;
  LODWORD(v84) = 1;
  v27 = 0;
  v88 = (char *)v7 + 52;
  if ( v25 )
  {
    v28 = *((_DWORD *)this + 4);
    v29 = (_QWORD *)((char *)v7 + 92);
    v30 = v25;
    do
    {
      v31 = (char *)this + 296 * (*((_DWORD *)v29 - 9) % v28) + 1192;
      v79 = (struct CContactState *)v31;
      if ( (*(_DWORD *)v31 & 1) != 0 )
      {
        LODWORD(v84) = 0;
        v32 = *((_QWORD *)v31 + 8);
        if ( *((_QWORD *)v31 + 12) <= v32 )
        {
          v33 = *(_QWORD *)(v31 + 4) - *v29;
          v34 = HIDWORD(*(_QWORD *)(v31 + 4)) - HIDWORD(*v29);
          if ( v33 * v33 + v34 * v34 <= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 36) * *((_DWORD *)this + 36))
            && *(_QWORD *)v7 - v32 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 35) / 0x3E8 )
          {
            ++v26;
            v35 = 2LL;
            if ( (unsigned __int64)v26 < 2 )
              v35 = v26;
            v85[v35 - 1] = (struct CContactState *)v31;
          }
        }
        if ( *((_DWORD *)v31 + 2) < *((_DWORD *)this + 805) )
          ++v27;
      }
      v29 += 12;
      --v30;
    }
    while ( v30 );
    v12 = v87;
    v24 = v89;
  }
  v36 = *((_DWORD *)this + 820);
  if ( (v36 & 0x4000) != 0 )
  {
    if ( v12 )
    {
      if ( v26 == 2 )
        return 1LL;
      v37 = v77;
      *((_DWORD *)this + 820) = v36 & 0xFFFFBFFF;
      v89 = 1;
      v78 = 1;
      goto LABEL_54;
    }
    v37 = v77;
    v38 = v36 & 0xFFFFBFFF;
    *((_DWORD *)this + 820) = v38;
    *((_DWORD *)this + 773) = *((_DWORD *)v7 + 6);
    if ( (v38 & 0x10) == 0 )
    {
      *((struct tagPOINT *)this + 406) = v37;
      CBasePTPEngine::SendMouseOutput(this, 3LL, *(_QWORD *)((char *)v7 + 28), 0LL);
      CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)v7 + 28), 0LL);
      LODWORD(v82) = 17;
      v81 = v83;
      v80 = v82;
      CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v80);
    }
  }
  else
  {
    v37 = v77;
  }
  if ( !v24 )
  {
    v45 = a4;
    goto LABEL_108;
  }
  if ( !v78 )
    CPTPEngine::ResetDragThresholds(this, v7);
LABEL_54:
  if ( !v12 )
  {
    v39 = *((_DWORD *)this + 820);
    if ( (v39 & 0x10) != 0 && (v39 & 0x100) != 0 && (v39 & 0x40) == 0 )
    {
      *((struct tagPOINT *)this + 406) = v37;
      CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)v7 + 28), 0LL);
      *((_DWORD *)this + 820) &= ~0x10u;
    }
    else if ( (v39 & 8) != 0 && (v39 & 0x80u) != 0 && (v39 & 0x20) == 0 )
    {
      *((struct tagPOINT *)this + 406) = v37;
      CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)v7 + 28), 0LL);
      *((_DWORD *)this + 820) &= ~8u;
    }
    *((_DWORD *)this + 820) &= 0xFFFFFE7F;
    goto LABEL_100;
  }
  if ( *((_DWORD *)v7 + 10) )
  {
    CBasePTPEngine::SendInertiaOutput(this, 3LL);
    if ( *((_DWORD *)v7 + 10) )
    {
      *((_DWORD *)this + 820) |= 0x200u;
      goto LABEL_100;
    }
  }
  v40 = *((_DWORD *)this + 105);
  v41 = 0LL;
  v77 = 0LL;
  v43 = 0;
  if ( (v40 & 2) != 0 && !a3 && v26 <= 1 )
  {
    IsRCZClick = CPTPEngine::IsRCZClick(this, v7, v85[0], &v77);
    v41 = (struct CContactState *)v77;
    if ( IsRCZClick )
      v43 = 1;
  }
  if ( (_DWORD)v84 && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, v7, 0x40u, 0, 0) )
    goto LABEL_100;
  if ( v26 == 2 && v27 < 2 )
  {
    *((_DWORD *)this + 820) |= 0x4000u;
    goto LABEL_100;
  }
  if ( v27 == 4 || v26 == 4 )
  {
    CBasePTPEngine::SendShellOutput(this, 1LL);
    LODWORD(v80) = 4;
    goto LABEL_99;
  }
  if ( v27 == 3 || v26 == 3 )
  {
    CBasePTPEngine::SendShellOutput(this, 0LL);
    LODWORD(v80) = 3;
LABEL_99:
    v82 = v80;
    v83 = v81;
    CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v82);
    goto LABEL_100;
  }
  if ( v43 || v27 == 2 )
  {
    v47 = *((_DWORD *)this + 820) | 0x100;
    *((_DWORD *)this + 820) = v47;
    if ( (v47 & 0x10) == 0 )
    {
      v83 = v81;
      LODWORD(v80) = !v43 + 16;
      v82 = v80;
      CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v82);
      v45 = a4;
      if ( a4 == 1 )
      {
        LODWORD(v85[0]) = 1;
        *(struct CContactState **)((char *)v85 + 4) = v41;
        v81 = v86;
        v80 = *(_OWORD *)v85;
        CBasePTPEngine::SendTelemetryOutput(this, 6LL, &v80);
      }
      v48 = *(_QWORD *)((char *)v7 + 28);
      if ( (*((_DWORD *)this + 55) & 0x200) != 0 )
        v48 = **(_QWORD **)&CPTPEngine::DoTPButtonWarpBack(this, (struct PTPInput *)&v77);
      CBasePTPEngine::SendMouseOutput(this, 3LL, v48, 0LL);
      *((_DWORD *)this + 820) |= 0x10u;
      goto LABEL_101;
    }
  }
  else if ( v27 <= 1 )
  {
    v44 = *((_DWORD *)this + 820) | 0x80;
    *((_DWORD *)this + 820) = v44;
    if ( (v44 & 8) == 0 )
    {
      LODWORD(v80) = 5;
      v83 = v81;
      v82 = v80;
      CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v82);
      v45 = a4;
      if ( a4 == 1 )
      {
        LODWORD(v85[0]) = 0;
        *(struct CContactState **)((char *)v85 + 4) = v41;
        v81 = v86;
        v80 = *(_OWORD *)v85;
        CBasePTPEngine::SendTelemetryOutput(this, 6LL, &v80);
      }
      v46 = *(_QWORD *)((char *)v7 + 28);
      if ( (*((_DWORD *)this + 55) & 0x200) != 0 )
        v46 = **(_QWORD **)&CPTPEngine::DoTPButtonWarpBack(this, (struct PTPInput *)&v77);
      CBasePTPEngine::SendMouseOutput(this, 1LL, v46, 0LL);
      *((_DWORD *)this + 820) |= 8u;
      goto LABEL_101;
    }
  }
LABEL_100:
  v45 = a4;
LABEL_101:
  if ( v12 )
  {
    v24 = v89;
  }
  else
  {
    *((_DWORD *)this + 773) = *((_DWORD *)v7 + 6);
    if ( (*((_DWORD *)this + 55) & 8) != 0 )
      *((_DWORD *)this + 820) |= 0x2000000u;
    v24 = v89;
    if ( (unsigned int)(*((_DWORD *)this + 750) - 4) <= 1 )
      *((_DWORD *)this + 750) = 1;
  }
LABEL_108:
  if ( v45 > 2 )
  {
    if ( v12 )
      return 0LL;
    v49 = *((_DWORD *)this + 820);
    if ( (v49 & 2) != 0 || (v49 & 4) != 0 || *((_DWORD *)this + 743) )
      return 0LL;
  }
  if ( v12 )
  {
    v50 = *((_DWORD *)this + 820);
    if ( (v50 & 8) == 0 && (v50 & 0x10) == 0 )
      return 0LL;
  }
  if ( a3 )
    return 1LL;
  if ( v24 && !v78 )
  {
    if ( *((_DWORD *)this + 750) == 2 && !v12 )
      *((_DWORD *)this + 820) |= 0x400000u;
    *a5 = 1;
    return 1LL;
  }
  v51 = 0LL;
  v52 = 0;
  v53 = 0;
  v54 = 0LL;
  a5 = 0LL;
  if ( v12 || (v55 = *((_DWORD *)this + 820), (v55 & 2) != 0) || (v55 & 4) != 0 || *((_DWORD *)this + 743) )
  {
    v56 = *((_DWORD *)v7 + 12);
    if ( v56 )
    {
      v57 = *((_DWORD *)this + 4);
      v58 = v56;
      v59 = a5;
      v60 = v88;
      do
      {
        v61 = (CPTPEngine *)((char *)this + 296 * (*((_DWORD *)v60 + 1) % v57) + 1192);
        v62 = *((_DWORD *)v60 + 3);
        v79 = v61;
        if ( (v62 & 0x40000) == 0 && v62 )
        {
          v63 = *(_DWORD *)v61;
          if ( (*(_DWORD *)v61 & 4) != 0 )
          {
            v51 = (struct tagPOINTER_INFO *)v60;
            HIDWORD(v90) = HIDWORD(*((_QWORD *)v60 + 5)) - *((_DWORD *)v61 + 6);
            LODWORD(v90) = *((_QWORD *)v60 + 5) - *((_DWORD *)v61 + 5);
            v61 = v79;
            v64 = abs32((int)v90) + abs32(SHIDWORD(v90));
            v54 = v79;
            if ( v64 < v52 )
              v64 = v52;
            else
              v59 = v90;
            v52 = v64;
            a5 = v59;
            if ( (v63 & 0x4000) == 0 )
              v53 = 1;
          }
          else if ( (v63 & 0x2000) != 0 )
          {
            v53 = 1;
          }
        }
        v60 += 96;
        --v58;
      }
      while ( v58 );
      v7 = (struct PTPInput *)a2;
      if ( v52 )
      {
LABEL_147:
        v65 = *((_DWORD *)this + 750);
        v66 = 0;
        if ( v65 != 5 )
        {
          if ( a4 == 2 || (v67 = *((_DWORD *)this + 820), (v67 & 2) != 0) || (v67 & 4) != 0 )
          {
            v68 = *((_DWORD *)this + 743);
            if ( (!v68 || v54) && (v65 != 2 || v54) )
            {
              *((_DWORD *)this + 750) = 5;
              if ( v68 && !v53 )
                *((_DWORD *)v61 + 34) = 0;
              LODWORD(v80) = 8;
              v66 = 1;
              v83 = v81;
              v82 = v80;
              CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v82);
            }
          }
        }
        if ( *((_DWORD *)this + 750) != 4 && a4 == 1 )
        {
          v69 = *((_DWORD *)this + 820);
          if ( (v69 & 2) == 0 && (v69 & 4) == 0 && v54 )
          {
            v70 = v81;
            *((_DWORD *)this + 750) = 4;
            *((_DWORD *)v54 + 34) = 0;
            LODWORD(v80) = 7;
            v66 = 1;
            v83 = v70;
            v82 = v80;
            CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v82);
          }
        }
        if ( v66 )
        {
          *((_DWORD *)this + 820) &= ~0x20000000u;
          *(_QWORD *)((char *)this + 3060) = 0LL;
          *(_QWORD *)((char *)this + 3068) = 0LL;
        }
        if ( a4 == 1 && (v71 = *((_DWORD *)this + 820), (v71 & 2) == 0) && (v71 & 4) == 0
          || *((_DWORD *)this + 743) && !v53 )
        {
          if ( v54 )
            *((_DWORD *)this + 820) ^= (*((_DWORD *)this + 820) ^ ((unsigned int)CPTPEngine::ApplyElasticDragModeDeltas(
                                                                                   this,
                                                                                   v54,
                                                                                   v51,
                                                                                   (struct tagPOINT *)&a5) << 17)) & 0x20000;
        }
        v72 = *((_DWORD *)this + 37);
        v73 = *((_DWORD *)this + 766) + HIDWORD(a5);
        v74 = v79;
        LODWORD(a5) = *((_DWORD *)this + 765) + (_DWORD)a5;
        HIDWORD(a5) = v73;
        v92.x = 100 * (int)a5 / v72;
        v75 = v92.x - *((_DWORD *)this + 767);
        v92.y = 100 * v73 / v72;
        v76 = v92.y - *((_DWORD *)this + 768);
        *(struct tagPOINT *)((char *)this + 3068) = v92;
        *(_QWORD *)((char *)this + 3060) = a5;
        if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(this, v7, (struct tagPOINT)__PAIR64__(v76, v75), v74)
          && (v75 || v76) )
        {
          *((_DWORD *)this + 820) |= 0x20000000u;
          CBasePTPEngine::SendMouseOutput(this, 0LL, __PAIR64__(v76, v75), 0LL);
        }
        return 1LL;
      }
    }
    else
    {
      v61 = v79;
    }
    if ( (unsigned int)(*((_DWORD *)this + 750) - 4) > 1 )
      return 1LL;
    goto LABEL_147;
  }
  return 1LL;
}
