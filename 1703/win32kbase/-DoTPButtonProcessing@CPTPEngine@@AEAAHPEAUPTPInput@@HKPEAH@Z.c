/*
 * XREFs of ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0133988
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C0132C0C (-ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOIN.c)
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C0134450 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C01357B8 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?IsTPRightClick@CPTPEngine@@AEAAHPEAUPTPInput@@HPEAUtagPOINT@@@Z @ 0x1C0136230 (-IsTPRightClick@CPTPEngine@@AEAAHPEAUPTPInput@@HPEAUtagPOINT@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0137D28 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C0137DE0 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0137EFC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z @ 0x1C013810C (-SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0138208 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C01383B0 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

__int64 __fastcall CPTPEngine::DoTPButtonProcessing(
        struct tagPOINT *this,
        struct PTPInput *a2,
        int a3,
        unsigned int a4,
        int *a5)
{
  LONG x; // r10d
  int v6; // esi
  unsigned int v7; // r14d
  struct PTPInput *v8; // rdi
  int *v9; // r15
  LONG v10; // r10d
  BOOL v11; // edx
  struct tagPOINT v12; // r13
  LONG y; // ecx
  LONG v15; // eax
  unsigned int v16; // ecx
  LONG v17; // eax
  unsigned int v18; // r12d
  char *v19; // rax
  int v20; // r15d
  unsigned int v21; // esi
  _QWORD *v22; // r9
  __int64 v23; // r11
  struct CContactState *v24; // r14
  bool v25; // cl
  __int64 v26; // rax
  LONG v27; // r9d
  unsigned int v28; // r14d
  unsigned int v29; // r13d
  _QWORD *v30; // r11
  struct tagPOINT *v31; // rcx
  int v32; // r14d
  unsigned int v33; // r9d
  int v34; // ecx
  LONG v35; // eax
  int v36; // r12d
  int IsTPRightClick; // r14d
  LONG v38; // r9d
  int v39; // eax
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // r8
  unsigned int v43; // r9d
  LONG v44; // eax
  _DWORD *v46; // r15
  __int64 v47; // rdx
  struct tagPOINT *v48; // rsi
  LONG v49; // r12d
  LONG v50; // r15d
  int v51; // r13d
  struct CContactState *v52; // r14
  LONG v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // r15d
  __int64 v56; // r11
  struct tagPOINT v57; // rcx
  signed int v58; // edi
  struct tagPOINT v59; // r12
  struct CContactState *v60; // rdx
  int v61; // eax
  int v62; // r10d
  __int64 v63; // rax
  LONG v64; // r8d
  struct CContactState *v65; // r8
  signed int v66; // r9d
  LONG v67; // edx
  int v68; // eax
  LONG v69; // ecx
  LONG v70; // ecx
  int v71; // r8d
  unsigned int v72; // ecx
  LONG v73; // ecx
  __int64 v74; // xmm1_8
  LONG v75; // eax
  int v76; // eax
  LONG v77; // ecx
  int v78; // r12d
  struct CContactState *v79; // r9
  int v80; // esi
  int v81; // r14d
  int v82; // [rsp+38h] [rbp-71h]
  int v83; // [rsp+3Ch] [rbp-6Dh]
  struct tagPOINT v84; // [rsp+40h] [rbp-69h] BYREF
  struct CContactState *v85; // [rsp+48h] [rbp-61h]
  __int64 v86; // [rsp+50h] [rbp-59h]
  __int128 v87; // [rsp+58h] [rbp-51h] BYREF
  __int64 v88; // [rsp+68h] [rbp-41h]
  struct tagPOINT v89; // [rsp+78h] [rbp-31h]
  __int128 v90; // [rsp+88h] [rbp-21h] BYREF
  __int64 v91; // [rsp+98h] [rbp-11h]
  char *v92; // [rsp+A8h] [rbp-1h]
  struct tagPOINT v93; // [rsp+108h] [rbp+5Fh] BYREF
  struct PTPInput *v94; // [rsp+110h] [rbp+67h]
  int v95; // [rsp+118h] [rbp+6Fh]
  unsigned int v96; // [rsp+120h] [rbp+77h]

  v96 = a4;
  v95 = a3;
  v94 = a2;
  x = this[366].x;
  v6 = 0;
  v83 = 0;
  v7 = 0;
  v85 = 0LL;
  v8 = a2;
  v9 = a5;
  v10 = x & 0x10;
  v82 = 0;
  v11 = v10 != 0;
  v93.x = v10;
  v12 = *(struct tagPOINT *)v8;
  *a5 = 0;
  y = this[402].y;
  v84 = v12;
  if ( (y & 1) == v11 )
    goto LABEL_11;
  v15 = this[366].y;
  if ( v15 == 3 || v15 == 6 )
  {
    if ( v10 )
    {
      v16 = y | 0x200;
      goto LABEL_7;
    }
  }
  else if ( v10 )
  {
    goto LABEL_8;
  }
  if ( (y & 0x200) != 0 )
  {
    v6 = 1;
    v16 = y & 0xFFFFFDFF;
LABEL_7:
    this[402].y = v16;
  }
LABEL_8:
  v83 = 1;
  this[402].y = v11 | this[402].y & 0xFFFFFFFE;
  if ( v10 )
  {
    CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)this, 0);
    v10 = v93.x;
    this[379].y = *((_DWORD *)v8 + 6);
    this[380] = v12;
  }
  *v9 = 1;
LABEL_11:
  v17 = this[366].y;
  if ( v17 == 3 || v17 == 6 || v6 )
    return 1LL;
  v18 = *((_DWORD *)v8 + 12);
  v19 = (char *)v8 + 52;
  v20 = 0;
  v89.x = 1;
  v92 = (char *)v8 + 52;
  if ( v18 )
  {
    v21 = this[2].x;
    v22 = (_QWORD *)((char *)v8 + 92);
    v23 = v18;
    do
    {
      v24 = (struct CContactState *)&this[36 * (*((_DWORD *)v22 - 9) % v21) + 146];
      v85 = v24;
      if ( (*(_DWORD *)v24 & 1) != 0 )
      {
        v25 = (int)HIDWORD(*v22) >= this[393].y
           && *(_QWORD *)v8 - *((_QWORD *)v24 + 9) >= *(_QWORD *)&this[12]
                                                    * (unsigned __int64)(unsigned int)this[17].y
                                                    / 0x3E8;
        if ( (*((_DWORD *)v22 - 7) & 0x40000) == 0 )
        {
          v89.x = 0;
          if ( !v25 )
          {
            v26 = ++v20;
            if ( (unsigned int)v20 >= 2 )
              v26 = 2LL;
            *(&v86 + v26) = (__int64)v24;
          }
        }
      }
      v22 += 12;
      --v23;
    }
    while ( v23 );
    v7 = 0;
    v19 = (char *)v8 + 52;
  }
  v27 = this[402].y;
  if ( (v27 & 0x8000) == 0 )
  {
    v34 = v83;
    if ( !v83 )
    {
      v36 = v95;
LABEL_94:
      v43 = v96;
      if ( v96 > 2 )
      {
        if ( v10 )
          return 0LL;
        v44 = this[402].y;
        if ( (v44 & 2) != 0 || (v44 & 4) != 0 || this[363].x )
          return 0LL;
      }
      if ( v36 )
        return 1LL;
      if ( v34 && !v7 )
      {
        if ( *((_DWORD *)v8 + 12) )
        {
          v46 = (_DWORD *)((char *)v8 + 56);
          do
          {
            v47 = (unsigned int)(*v46 % this[2].x);
            v48 = &this[36 * v47 + 146];
            if ( (v48->x & 1) != 0 )
            {
              if ( (v48->x & 2) == 0 )
              {
                *(struct tagPOINT *)&v48->y = *(struct tagPOINT *)((char *)v48 + 20);
                CPTPEngine::SetupDragRectsForContact((CPTPEngine *)this, (struct CContactState *)&this[36 * v47 + 146]);
              }
              v48->x &= ~4u;
            }
            v46 += 24;
            ++v7;
          }
          while ( v7 < *((_DWORD *)v8 + 12) );
          v10 = v93.x;
        }
        if ( this[366].y == 2 && !v10 )
          this[402].y |= 0x800000u;
        *a5 = 1;
        return 1LL;
      }
      v84 = 0LL;
      v49 = 0;
      LODWORD(a5) = 0;
      v50 = 0;
      v89 = 0LL;
      v51 = 0;
      v52 = 0LL;
      v93 = 0LL;
      if ( !v10 )
      {
        v53 = this[402].y;
        if ( (v53 & 2) == 0 && (v53 & 4) == 0 && !this[363].x )
          return 1LL;
      }
      v54 = *((_DWORD *)v8 + 12);
      if ( !v54 )
      {
        v65 = v85;
LABEL_137:
        v67 = this[366].y;
        v68 = 0;
        if ( v67 != 5 )
        {
          if ( v43 == 2 || (v69 = this[402].y, (v69 & 2) != 0) || (v69 & 4) != 0 )
          {
            v70 = this[363].x;
            if ( (!v70 || v52) && (v67 != 2 || v52) )
            {
              this[366].y = 5;
              if ( v70 && !v51 )
                *((_DWORD *)v65 + 35) = 0;
              LODWORD(v90) = 8;
              LODWORD(a5) = 1;
              v88 = v91;
              v87 = v90;
              CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v87);
              v68 = (int)a5;
            }
          }
        }
        v71 = 1;
        v72 = v96;
        if ( this[366].y != 4 && v96 == 1 )
        {
          v73 = this[402].y;
          if ( (v73 & 2) == 0 && (v73 & 4) == 0 && v52 )
          {
            v74 = v91;
            this[366].y = 4;
            *((_DWORD *)v52 + 35) = 0;
            LODWORD(a5) = 1;
            LODWORD(v90) = 7;
            v88 = v74;
            v87 = v90;
            CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v87);
            v68 = (int)a5;
            v71 = (int)a5;
          }
          v72 = v96;
        }
        if ( v68 )
        {
          this[402].y &= ~0x40000000u;
          this[375] = 0LL;
          this[376] = 0LL;
        }
        if ( v72 == v71 && (v75 = this[402].y, (v75 & 2) == 0) && (v75 & 4) == 0 || this[363].x && !v51 )
        {
          if ( v52 )
          {
            v76 = CPTPEngine::ApplyElasticDragModeDeltas(
                    (CPTPEngine *)this,
                    v52,
                    *(struct tagPOINTER_INFO **)&v84,
                    &v93);
            v49 = v93.y;
            v50 = v93.x;
            this[402].y ^= (this[402].y ^ (v76 << 17)) & 0x20000;
          }
        }
        v77 = this[18].y;
        v78 = this[375].y + v49;
        v79 = v85;
        v93 = (struct tagPOINT)__PAIR64__(v78, this[375].x + v50);
        LODWORD(a5) = 100 * v93.x / v77;
        v80 = (_DWORD)a5 - this[376].x;
        HIDWORD(a5) = 100 * v78 / v77;
        v81 = HIDWORD(a5) - this[376].y;
        this[376] = (struct tagPOINT)a5;
        this[375] = v93;
        a5 = (int *)__PAIR64__(v81, v80);
        if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                              (CPTPEngine *)this,
                              v8,
                              (struct tagPOINT)__PAIR64__(v81, v80),
                              v79)
          && (v80 || v81) )
        {
          this[402].y |= 0x40000000u;
          CBasePTPEngine::SendMouseOutput(this, 0LL, a5, *((unsigned int *)v8 + 6));
        }
        return 1LL;
      }
      v55 = this[2].x;
      v56 = v54;
      v57 = v93;
      v58 = (int)a5;
      v59 = (struct tagPOINT)v92;
      while ( 1 )
      {
        v60 = (struct CContactState *)&this[36 * (*(_DWORD *)(*(_QWORD *)&v59 + 4LL) % v55) + 146];
        v61 = *(_DWORD *)(*(_QWORD *)&v59 + 12LL);
        v85 = v60;
        if ( (v61 & 0x40000) == 0 && v61 )
        {
          v62 = *(_DWORD *)v60;
          if ( (*(_DWORD *)v60 & 4) != 0 )
          {
            v63 = *(_QWORD *)(*(_QWORD *)&v59 + 40LL);
            v84 = v59;
            v64 = v63 - *((_DWORD *)v60 + 5);
            v89.y = HIDWORD(v63) - *((_DWORD *)v60 + 6);
            v89.x = v64;
            LODWORD(v63) = v64;
            v65 = v85;
            v52 = v85;
            v66 = abs32(v63) + abs32(v89.y);
            if ( v66 < v58 )
              v66 = v58;
            else
              v57 = v89;
            v93 = v57;
            v58 = v66;
            if ( (v62 & 0x8000) == 0 )
              v51 = 1;
            goto LABEL_134;
          }
          if ( (v62 & 0x4000) != 0 )
            v51 = 1;
        }
        v65 = v60;
LABEL_134:
        *(_QWORD *)&v59 += 96LL;
        if ( !--v56 )
        {
          v49 = v93.y;
          v50 = v93.x;
          v8 = v94;
          v43 = v96;
          goto LABEL_137;
        }
      }
    }
LABEL_51:
    if ( !v10 )
    {
      v35 = this[402].y;
      if ( (v35 & 0x10) != 0 && (v35 & 0x100) != 0 && (v35 & 0x40) == 0 )
      {
        this[397] = v12;
        CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)v8 + 28), *((unsigned int *)v8 + 6));
        this[402].y &= ~0x10u;
      }
      else
      {
        if ( (v35 & 8) == 0 || (v35 & 0x80u) == 0 || (v35 & 0x20) != 0 )
          goto LABEL_61;
        this[397] = v12;
        CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)v8 + 28), *((unsigned int *)v8 + 6));
        this[402].y &= ~8u;
      }
      v10 = v93.x;
LABEL_61:
      this[402].y &= 0xFFFFFE7F;
LABEL_65:
      v36 = v95;
      goto LABEL_87;
    }
    if ( *((_DWORD *)v8 + 10) )
    {
      CBasePTPEngine::SendInertiaOutput(this, 3LL);
      v10 = v93.x;
      if ( *((_DWORD *)v8 + 10) )
      {
        this[402].y |= 0x200u;
        goto LABEL_65;
      }
    }
    v36 = v95;
    IsTPRightClick = CPTPEngine::IsTPRightClick((CPTPEngine *)this, v8, v95, &v84);
    if ( v89.x && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, v8, 0x40u, 0, 0) || v20 > 2 )
    {
LABEL_86:
      v10 = v93.x;
LABEL_87:
      if ( v10 )
      {
        v7 = v82;
        v34 = v83;
      }
      else
      {
        this[379].x = *((_DWORD *)v8 + 6);
        if ( (this[27].y & 8) != 0 )
          this[402].y |= 0x4000000u;
        v7 = v82;
        v34 = v83;
        if ( (unsigned int)(this[366].y - 4) <= 1 )
          this[366].y = 1;
      }
      goto LABEL_94;
    }
    if ( v20 != 2 || (v38 = this[402].y, (v38 & 0x80000) != 0) )
    {
      if ( v82 )
        goto LABEL_80;
    }
    else
    {
      if ( v82 )
        goto LABEL_80;
      if ( (int)((HIDWORD(*(_QWORD *)(v87 + 20)) - HIDWORD(*(_QWORD *)(*((_QWORD *)&v87 + 1) + 20LL)))
               * (HIDWORD(*(_QWORD *)(v87 + 20)) - HIDWORD(*(_QWORD *)(*((_QWORD *)&v87 + 1) + 20LL)))
               + (*(_QWORD *)(v87 + 20) - *(_QWORD *)(*((_QWORD *)&v87 + 1) + 20LL))
               * (*(_QWORD *)(v87 + 20) - *(_QWORD *)(*((_QWORD *)&v87 + 1) + 20LL))) <= (unsigned __int64)(unsigned int)this[37].x )
      {
        this[402].y = v38 | 0x8000;
        goto LABEL_86;
      }
    }
    if ( IsTPRightClick )
    {
      v39 = this[402].y | 0x100;
      this[402].y = v39;
      if ( (v39 & 0x10) == 0 )
      {
        LODWORD(v90) = 16;
        v88 = v91;
        v87 = v90;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v87);
        v91 = v88;
        LODWORD(v87) = 1;
        *(struct tagPOINT *)((char *)&v87 + 4) = v84;
        v90 = v87;
        CBasePTPEngine::SendTelemetryOutput(this, 6LL, &v90);
        v40 = *(_QWORD *)((char *)v8 + 28);
        if ( (this[27].y & 0x200) != 0 )
          v40 = **(_QWORD **)&CPTPEngine::DoTPButtonWarpBack((CPTPEngine *)this, (struct PTPInput *)&v84);
        CBasePTPEngine::SendMouseOutput(this, 3LL, v40, *((unsigned int *)v8 + 6));
        this[402].y |= 0x10u;
      }
      goto LABEL_86;
    }
LABEL_80:
    v41 = this[402].y | 0x80;
    this[402].y = v41;
    if ( (v41 & 8) == 0 )
    {
      LODWORD(v90) = 5;
      v88 = v91;
      v87 = v90;
      CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v87);
      if ( v96 == 1 )
      {
        *(struct tagPOINT *)((char *)&v87 + 4) = v84;
        LODWORD(v87) = 0;
        v91 = v88;
        v90 = v87;
        CBasePTPEngine::SendTelemetryOutput(this, 6LL, &v90);
      }
      v42 = *(_QWORD *)((char *)v8 + 28);
      if ( (this[27].y & 0x200) != 0 )
        v42 = **(_QWORD **)&CPTPEngine::DoTPButtonWarpBack((CPTPEngine *)this, (struct PTPInput *)&v84);
      CBasePTPEngine::SendMouseOutput(this, 1LL, v42, *((unsigned int *)v8 + 6));
      this[402].y |= 8u;
    }
    goto LABEL_86;
  }
  if ( v10 )
  {
    if ( v20 != 2 )
      v7 = 1;
    v82 = v7;
  }
  v28 = 0;
  if ( v18 )
  {
    v29 = this[2].x;
    v30 = v19 + 40;
    while ( 1 )
    {
      v31 = &this[36 * (*((_DWORD *)v30 - 9) % v29) + 146];
      v85 = (struct CContactState *)v31;
      if ( (v31->x & 1) != 0
        && (int)((HIDWORD(*(_QWORD *)&v31->y) - HIDWORD(*v30)) * (HIDWORD(*(_QWORD *)&v31->y) - HIDWORD(*v30))
               + (*(_QWORD *)&v31->y - *v30) * (*(_QWORD *)&v31->y - *v30)) > (unsigned __int64)(unsigned int)(this[18].x * this[18].x) )
      {
        break;
      }
      if ( (unsigned int)(*((_DWORD *)v8 + 6) - this[379].y) > this[17].y )
        break;
      ++v28;
      v30 += 12;
      if ( v28 >= v18 )
      {
        v12 = v84;
        goto LABEL_42;
      }
    }
    v12 = v84;
    v32 = 1;
    v82 = 1;
  }
  else
  {
LABEL_42:
    v32 = v82;
  }
  if ( v32 )
  {
    v83 = 1;
    this[402].y = v27 & 0xFFFF7FFF;
    goto LABEL_51;
  }
  if ( !v83 || v10 )
    return 1LL;
  v33 = v27 & 0xFFFF7FFF;
  this[402].y = v33;
  this[379].x = *((_DWORD *)v8 + 6);
  if ( (v33 & 0x10) == 0 )
  {
    this[397] = v12;
    CBasePTPEngine::SendMouseOutput(this, 3LL, *(_QWORD *)((char *)v8 + 28), *((unsigned int *)v8 + 6));
    CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)v8 + 28), *((unsigned int *)v8 + 6));
    LODWORD(v87) = 2;
    v91 = v88;
    v90 = v87;
    CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v90);
  }
  return 1LL;
}
