/*
 * XREFs of ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0136D8C
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0139E9C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C013634C (-ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOIN.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C0138808 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x1C0138F00 (-IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0139DFC (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C013AF68 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C013B1F0 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@HK@Z @ 0x1C013B2D4 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@HK@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C013B384 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C013B430 (-SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x1C013B514 (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C013B5A0 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C013B6F0 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C013B928 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C013BACC (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

__int64 __fastcall CPTPEngine::DoTPButtonProcessing(
        struct tagPOINT *this,
        struct PTPInput *a2,
        int a3,
        unsigned int a4,
        int *a5)
{
  LONG x; // esi
  int *v6; // r13
  int v7; // r14d
  int v9; // r10d
  unsigned int v11; // ecx
  struct tagPOINT v12; // r12
  int v13; // r8d
  int v14; // r15d
  BOOL v15; // edx
  unsigned int v16; // esi
  LONG y; // eax
  int v18; // ecx
  unsigned int v19; // eax
  LONG v20; // eax
  LONG v22; // r9d
  __int64 v23; // xmm1_8
  __int128 v24; // xmm0
  __int64 v25; // r13
  int v26; // esi
  int v27; // r14d
  unsigned int v28; // r12d
  char *v29; // r11
  struct tagPOINT *v30; // r9
  unsigned __int64 v31; // r8
  unsigned __int8 v32; // r10
  __int64 v33; // rcx
  LONG v34; // eax
  unsigned int v35; // r9d
  __int128 *v36; // r8
  __int64 v37; // r11
  int v38; // r14d
  int v39; // r12d
  struct CContactState *v40; // rdx
  __int64 v41; // r10
  LONG v42; // eax
  bool v43; // zf
  LONG v44; // ecx
  unsigned int v45; // ecx
  BOOL v46; // eax
  LONG v47; // r9d
  unsigned int v48; // r9d
  int v49; // edx
  __int64 v50; // r9
  LONG v51; // eax
  LONG v52; // eax
  signed int v53; // r13d
  int v54; // esi
  struct tagPOINT *v55; // r14
  LONG v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // r12d
  __int64 v59; // r11
  int *v60; // rcx
  struct tagPOINT *v61; // rdi
  struct tagPOINT *v62; // r15
  LONG v63; // eax
  LONG v64; // r10d
  struct tagPOINT *v65; // rax
  signed int v66; // edx
  struct PTPInput *v67; // rdi
  int v68; // r15d
  LONG v69; // eax
  LONG v70; // eax
  __int64 v71; // xmm1_8
  LONG v72; // eax
  LONG v73; // ecx
  int v74; // r8d
  int v75; // esi
  int v76; // r15d
  int *v77; // rax
  int v78; // [rsp+48h] [rbp-71h]
  struct tagPOINT *v79; // [rsp+50h] [rbp-69h] BYREF
  __int128 v80; // [rsp+58h] [rbp-61h] BYREF
  __int64 v81; // [rsp+68h] [rbp-51h]
  __int128 v82; // [rsp+78h] [rbp-41h] BYREF
  __int64 v83; // [rsp+88h] [rbp-31h]
  struct tagPOINT v84; // [rsp+98h] [rbp-21h]
  __int64 v85; // [rsp+A0h] [rbp-19h]
  __int128 v86; // [rsp+A8h] [rbp-11h]
  __int64 v87; // [rsp+B8h] [rbp-1h]
  struct tagPOINT *v88; // [rsp+C0h] [rbp+7h]
  int v89; // [rsp+118h] [rbp+5Fh]
  int *v90; // [rsp+118h] [rbp+5Fh]
  struct tagPOINT v92; // [rsp+120h] [rbp+67h]

  x = this[375].x;
  v6 = a5;
  v7 = 0;
  v78 = 0;
  v9 = a3;
  v11 = this[412].x;
  v12 = *(struct tagPOINT *)a2;
  v13 = 0;
  v14 = x & 0x10;
  v89 = 0;
  LODWORD(v85) = v14;
  v15 = v14 != 0;
  v84 = v12;
  v79 = 0LL;
  v16 = x & 0xFFFFFFEF;
  *a5 = 0;
  if ( (v11 & 1) != v15 )
  {
    y = this[375].y;
    if ( (y == 3 || y == 6) && v14 )
    {
      v18 = v11 | 0x200;
      this[412].x = v18;
      v19 = v18;
    }
    else
    {
      v19 = v11;
      if ( !v14 && (v11 & 0x200) != 0 )
      {
        v19 = v11 & 0xFFFFFDFF;
        v7 = 1;
        this[412].x = v11 & 0xFFFFFDFF;
      }
    }
    v89 = 1;
    v13 = 1;
    this[412].x = v15 | v19 & 0xFFFFFFFE;
    if ( v14 )
    {
      CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)this, 0);
      v13 = 1;
      v9 = a3;
      this[388] = v12;
      this[387].y = *((_DWORD *)a2 + 6);
    }
    *v6 = 1;
  }
  v20 = this[375].y;
  if ( v20 == 3 || v20 == 6 || v7 )
    return 1LL;
  if ( v9 && v13 && v14 && !v16 )
  {
    this[412].x |= 0x10000u;
    return 1LL;
  }
  v22 = this[412].x;
  if ( (v22 & 0x10000) != 0 )
  {
    if ( v14 )
    {
      if ( v9 )
      {
        if ( !v16
          && *(_QWORD *)a2 - *(_QWORD *)&this[388] < *(_QWORD *)&this[12]
                                                   * (unsigned __int64)(unsigned int)this[17].y
                                                   / 0x3E8 )
        {
          return 1LL;
        }
        v78 = 1;
      }
      v22 &= ~0x10000u;
      v89 = 1;
      this[412].x = v22;
    }
    else
    {
      v23 = v87;
      LODWORD(v86) = 25;
      v24 = v86;
      this[412].x = v22 & 0xFFFEFFFF;
      v81 = v23;
      v80 = v24;
      CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v80);
      CPTPEngine::SendMouseDownAtPoint(
        (CPTPEngine *)this,
        2u,
        *((_DWORD *)a2 + 6) - this[387].y,
        *((_DWORD *)a2 + 6),
        *(struct tagPOINT *)((char *)a2 + 28),
        0,
        this[50].x);
      v22 = this[412].x;
    }
  }
  v25 = 0LL;
  v26 = 0;
  v86 = 0uLL;
  v88 = (struct tagPOINT *)((char *)a2 + 52);
  v27 = -__CFSHR__(v22, 15);
  v28 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_50;
  v29 = (char *)a2 + 64;
  do
  {
    v30 = &this[37 * (unsigned int)(*((_DWORD *)v29 - 2) % this[2].x) + 149];
    if ( (v30->x & 1) == 0 || (*(_DWORD *)v29 & 0x40000) != 0 )
      goto LABEL_48;
    v31 = (unsigned __int64)v30[8];
    v32 = 0;
    if ( v27 )
    {
      if ( v31 > *(_QWORD *)&this[388] )
      {
        this[412].x &= ~0x4000u;
        goto LABEL_44;
      }
      if ( (v30->y & 1) != 0 )
      {
        if ( (int)((HIDWORD(*(_QWORD *)&v30[1]) - HIDWORD(*(_QWORD *)(v29 + 28)))
                 * (HIDWORD(*(_QWORD *)&v30[1]) - HIDWORD(*(_QWORD *)(v29 + 28)))
                 + (*(_QWORD *)&v30[1] - *(_QWORD *)(v29 + 28)) * (*(_QWORD *)&v30[1] - *(_QWORD *)(v29 + 28))) > (unsigned __int64)(unsigned int)(this[18].x * this[18].x) )
        {
          this[412].x &= ~0x4000u;
          if ( this[374].y == 2 )
          {
            v89 = 1;
            v78 = 1;
          }
          goto LABEL_44;
        }
LABEL_42:
        v32 = 1;
      }
    }
    else
    {
      if ( *(_QWORD *)a2 - v31 < *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[17].y / 0x3E8
        && *(_QWORD *)&v30[12] <= v31 )
      {
        goto LABEL_42;
      }
      v32 = 0;
    }
LABEL_44:
    v30->y = v32 | v30->y & 0xFFFFFFFE;
    if ( v32 )
    {
      ++v26;
      v33 = 2LL;
      if ( (unsigned __int64)v26 < 2 )
        v33 = v26;
      *(&v85 + v33) = (__int64)v30;
    }
LABEL_48:
    ++v28;
    v29 += 96;
  }
  while ( v28 < *((_DWORD *)a2 + 12) );
  v22 = this[412].x;
  v25 = v86;
  v14 = v85;
LABEL_50:
  if ( (v22 & 0x4000) == 0 )
    goto LABEL_57;
  if ( !v14 )
  {
    v34 = this[374].y;
    v35 = v22 & 0xFFFFBFFF;
    this[412].x = v35;
    switch ( v34 )
    {
      case 2:
        if ( (v35 & 0x8000) != 0 )
        {
          if ( (v35 & 0x10) == 0 )
          {
            this[407] = v84;
            CPTPEngine::SendMouseDownAtPoint(
              (CPTPEngine *)this,
              8u,
              *((_DWORD *)a2 + 6) - this[387].y,
              *((_DWORD *)a2 + 6),
              *(struct tagPOINT *)((char *)a2 + 28),
              0,
              this[50].x);
            v36 = &v82;
            LODWORD(v80) = 17;
            v83 = v81;
            v82 = v80;
            goto LABEL_56;
          }
          goto LABEL_57;
        }
        if ( (v35 & 8) != 0 )
          goto LABEL_57;
        this[407] = v84;
        CPTPEngine::SendMouseDownAtPoint(
          (CPTPEngine *)this,
          2u,
          *((_DWORD *)a2 + 6) - this[387].y,
          *((_DWORD *)a2 + 6),
          *(struct tagPOINT *)((char *)a2 + 28),
          0,
          this[50].x);
        LODWORD(v82) = 20;
        break;
      case 3:
        CBasePTPEngine::SendShellOutput(this, 0LL);
        LODWORD(v82) = 23;
        break;
      case 4:
        CBasePTPEngine::SendShellOutput(this, 1LL);
        LODWORD(v82) = 24;
        break;
      default:
        goto LABEL_57;
    }
    v36 = &v80;
    v80 = v82;
    v81 = v83;
LABEL_56:
    CBasePTPEngine::SendTelemetryOutput(this, 4LL, v36);
LABEL_57:
    LODWORD(v37) = 1;
LABEL_58:
    v38 = v89;
    v39 = v78;
    goto LABEL_59;
  }
  if ( *(_QWORD *)a2 - *(_QWORD *)&this[388] < *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[17].y / 0x3E8 )
    return 1LL;
  LODWORD(v37) = 1;
  v43 = this[374].y == 2;
  this[412].x = v22 & 0xFFFFBFFF;
  if ( !v43 )
    goto LABEL_58;
  v38 = 1;
  v39 = 1;
LABEL_59:
  if ( !v38 )
    goto LABEL_112;
  if ( !v39 )
  {
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, a2);
    v40 = (struct CContactState *)&this[149];
    v41 = 6LL;
    v37 = 1LL;
    do
    {
      if ( ((unsigned __int8)*(_DWORD *)v40 & (unsigned __int8)v37) != 0 )
        CPTPEngine::SetContactRestingState((CPTPEngine *)this, v40, v37);
      v40 = (struct CContactState *)((char *)v40 + 296);
      v41 -= v37;
    }
    while ( v41 );
  }
  if ( v14 )
  {
    if ( *((_DWORD *)a2 + 10) )
    {
      CBasePTPEngine::SendInertiaOutput(this, 3LL);
      if ( *((_DWORD *)a2 + 10) )
      {
        this[412].x |= 0x200u;
        goto LABEL_112;
      }
    }
    if ( a4 || (unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0, 0) )
    {
      v46 = !a3
         && v26 <= 1
         && (unsigned int)CPTPEngine::IsRCZClick((CPTPEngine *)this, a2, (struct CContactState *)v25, &v79);
      if ( v26 < 2 || v39 )
      {
        if ( v46 )
        {
          CPTPEngine::SendRightDownFromPhysical(this, a2, v79, v39 != 0 ? 22 : 16);
        }
        else if ( v26 <= 2 )
        {
          v50 = 18LL;
          if ( a3 )
          {
            v50 = 25LL;
          }
          else if ( v39 )
          {
            v50 = 19LL;
            if ( v26 == 2 )
              v50 = 21LL;
          }
          CPTPEngine::SendLeftDownFromPhysical(this, a2, v79, v50);
        }
      }
      else
      {
        v47 = this[412].x;
        this[374].y = v26;
        v48 = v47 & 0xFFFF3FFF | 0x4000;
        this[412].x = v48;
        if ( v26 == 2 )
        {
          v49 = HIDWORD(*(_QWORD *)(v25 + 8)) - HIDWORD(*(_QWORD *)(*((_QWORD *)&v86 + 1) + 8LL));
          this[412].x = v48 | ((unsigned int)this[37].x >= (unsigned __int64)(int)(v49 * v49
                                                                                 + (*(_QWORD *)(v25 + 8)
                                                                                  - *(_QWORD *)(*((_QWORD *)&v86 + 1)
                                                                                              + 8LL))
                                                                                 * (*(_QWORD *)(v25 + 8)
                                                                                  - *(_QWORD *)(*((_QWORD *)&v86 + 1)
                                                                                              + 8LL)))
                             ? 0x8000
                             : 0);
        }
      }
      goto LABEL_112;
    }
  }
  else
  {
    v42 = this[412].x;
    if ( (v42 & 0x10) != 0 && (v42 & 0x100) != 0 && (v42 & 0x40) == 0 )
    {
      this[407] = v84;
      CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
      this[412].x &= ~0x10u;
      goto LABEL_84;
    }
    v44 = this[412].x;
    if ( (v42 & 8) != 0 && (v42 & 0x80u) != 0 && (v42 & 0x20) == 0 )
    {
      this[407] = v84;
      CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
      this[412].x &= ~8u;
LABEL_84:
      v44 = this[412].x;
      LODWORD(v37) = 1;
    }
    v45 = v44 & 0xFFFFFE7F;
    this[412].x = v45;
    this[387].x = *((_DWORD *)a2 + 6);
    if ( (this[27].y & 8) != 0 )
      this[412].x = v45 | 0x4000000;
    if ( this[375].y - 4 <= (unsigned int)v37 )
      this[375].y = v37;
LABEL_112:
    if ( a4 > 2 )
    {
      if ( v14 )
        return 0LL;
      v51 = this[412].x;
      if ( (v51 & 2) != 0 || (v51 & 4) != 0 || this[371].y )
        return 0LL;
LABEL_121:
      if ( !a3 )
      {
        if ( v38 && !v39 )
        {
          if ( this[375].y == 2 && !v14 )
            this[412].x |= 0x800000u;
          *a5 = 1;
          return 1LL;
        }
        v53 = 0;
        v54 = 0;
        v55 = 0LL;
        a5 = 0LL;
        v79 = 0LL;
        if ( v14 || (v56 = this[412].x, (v56 & 2) != 0) || (v56 & 4) != 0 || this[371].y )
        {
          v57 = *((_DWORD *)a2 + 12);
          if ( v57 )
          {
            v58 = this[2].x;
            v59 = v57;
            v60 = a5;
            v61 = v88;
            do
            {
              v62 = &this[37 * (v61->y % v58) + 149];
              v63 = v61[1].y;
              if ( (v63 & 0x40000) == 0 && v63 )
              {
                v64 = v62->x;
                if ( (v62->x & 4) != 0 )
                {
                  HIDWORD(v90) = HIDWORD(*(_QWORD *)&v61[5]) - v62[3].y;
                  LODWORD(v90) = *(_QWORD *)&v61[5] - v62[3].x;
                  v65 = v61;
                  v66 = abs32(SHIDWORD(v90)) + abs32((int)v90);
                  if ( v66 < v53 )
                  {
                    v66 = v53;
                    v65 = v79;
                    v62 = v55;
                  }
                  else
                  {
                    v60 = v90;
                  }
                  a5 = v60;
                  v79 = v65;
                  v55 = v62;
                  if ( (v64 & 0x4000) == 0 )
                    v54 = 1;
                  v53 = v66;
                }
                else if ( (v64 & 0x2000) != 0 )
                {
                  v54 = 1;
                }
              }
              v61 += 12;
              --v59;
            }
            while ( v59 );
            v67 = a2;
            if ( v55 )
            {
              v68 = 0;
              if ( this[375].y != 5 )
              {
                if ( a4 == 2 || (v69 = this[412].x, (v69 & 2) != 0) || (v69 & 4) != 0 )
                {
                  this[375].y = 5;
                  if ( this[371].y && !v54 )
                    v55[17].x = 0;
                  v68 = 1;
                  LODWORD(v82) = 8;
                  v81 = v83;
                  v80 = v82;
                  CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v80);
                }
              }
              if ( this[375].y != 4 && a4 == 1 )
              {
                v70 = this[412].x;
                if ( (v70 & 2) == 0 && (v70 & 4) == 0 )
                {
                  v71 = v83;
                  this[375].y = 4;
                  v55[17].x = 0;
                  v68 = 1;
                  LODWORD(v82) = 7;
                  v81 = v71;
                  v80 = v82;
                  CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v80);
                }
              }
              if ( v68 )
              {
                this[412].x &= ~0x40000000u;
                this[383] = 0LL;
                this[384] = 0LL;
              }
              if ( a4 == 1 && (v72 = this[412].x, (v72 & 2) == 0) && (v72 & 4) == 0 || this[371].y && !v54 )
                this[412].x ^= (this[412].x ^ ((unsigned int)CPTPEngine::ApplyElasticDragModeDeltas(
                                                               (CPTPEngine *)this,
                                                               (struct CContactState *)v55,
                                                               (struct tagPOINTER_INFO *)v79,
                                                               (struct tagPOINT *)&a5) << 18)) & 0x40000;
              v73 = this[18].y;
              v74 = this[383].y + HIDWORD(a5);
              LODWORD(a5) = this[383].x + (_DWORD)a5;
              HIDWORD(a5) = v74;
              v92.x = 100 * (int)a5 / v73;
              v92.y = 100 * v74 / v73;
              v75 = v92.y - this[384].y;
              v76 = v92.x - this[384].x;
              v77 = a5;
              this[384] = v92;
              this[383] = (struct tagPOINT)v77;
              if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                                    (CPTPEngine *)this,
                                    v67,
                                    (struct tagPOINT)__PAIR64__(v75, v76),
                                    (struct CContactState *)v55)
                && (v76 || v75) )
              {
                this[412].x |= 0x40000000u;
                CBasePTPEngine::SendMouseOutput(this, 0LL, __PAIR64__(v75, v76));
              }
            }
          }
        }
      }
      return 1LL;
    }
  }
  if ( !v14 )
    goto LABEL_121;
  v52 = this[412].x;
  if ( (v52 & 8) != 0 || (v52 & 0x10) != 0 )
    goto LABEL_121;
  return 0LL;
}
