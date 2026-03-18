/*
 * XREFs of ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0139E9C
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1C0139A70 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C0055DE4 (PtInRect.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z @ 0x1C0136704 (-CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z.c)
 *     ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C0136B64 (-DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z.c)
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0136D8C (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C01379F4 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0137F18 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x1C01389A8 (-FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C0138ACC (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C0138DE8 (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C0139028 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x1C0139090 (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z.c)
 *     ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x1C0139210 (-PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C0139240 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0139A88 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0139DFC (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C013AE84 (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C013AF68 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C013B3DC (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C013B5A0 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C013B6F0 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C013B928 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C013BACC (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C013C224 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 */

void __fastcall CPTPEngine::RunStateMachine(struct tagPOINT *this, struct PTPInput *a2)
{
  int v2; // r13d
  int v3; // r14d
  int v4; // r12d
  int v5; // r15d
  int v6; // edi
  struct PTPInput *v7; // rsi
  int v9; // eax
  LONG x; // eax
  __int64 v11; // rdx
  unsigned int v12; // r8d
  LONG v13; // eax
  int y; // ecx
  struct tagPOINT v15; // rax
  LONG v16; // ecx
  unsigned int v17; // eax
  char *v18; // r13
  unsigned int v19; // edx
  int v20; // r12d
  struct tagPOINT *v21; // r14
  unsigned int v22; // ecx
  int v23; // r15d
  LONG v24; // eax
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  char *v28; // r13
  unsigned int v29; // r9d
  LONG v30; // ecx
  char *v31; // r8
  __int64 v32; // rdx
  LONG v33; // ecx
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // ecx
  int GestureAndMarkGesturingContactsAsNonResting; // eax
  __int64 v38; // r8
  bool v39; // dl
  bool v40; // al
  bool v41; // zf
  int v42; // eax
  unsigned int v43; // r10d
  __int64 v44; // r9
  struct tagPOINT v45; // rcx
  int v46; // r14d
  __int64 v47; // r15
  LONG v48; // eax
  char v49; // cl
  CPTPEngine *i; // rax
  int v51; // edx
  unsigned int j; // r15d
  int v53; // r8d
  unsigned int v54; // edx
  struct tagPOINT *v55; // r14
  int v56; // ecx
  struct CContactState *v57; // rdx
  __int64 v58; // r10
  int v59; // edx
  LONG v60; // eax
  LONG v61; // r13d
  unsigned int v62; // r13d
  unsigned int v63; // r14d
  unsigned int v64; // r11d
  LONG *p_y; // r10
  __int64 v66; // r12
  struct tagPOINT *v67; // r9
  __int64 v68; // r15
  struct tagPOINT v69; // r8
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // r8
  LONG v72; // eax
  LONG v73; // eax
  LONG v74; // r8d
  int v75; // r12d
  int v76; // r13d
  int v77; // r14d
  LONG v78; // ecx
  int v79; // edx
  char v80; // al
  LONG v81; // edx
  int v82; // r8d
  int v83; // r14d
  unsigned int v84; // r10d
  char *v85; // r8
  __int64 v86; // r9
  LONG v87; // ecx
  unsigned int v88; // ecx
  int v89; // ecx
  __int64 v90; // rdx
  int v91; // edx
  unsigned int v92; // r8d
  __int64 v93; // rcx
  LONG v94; // eax
  __int128 v95; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v96; // [rsp+40h] [rbp-C0h]
  unsigned int v97; // [rsp+50h] [rbp-B0h]
  int v98; // [rsp+54h] [rbp-ACh]
  int v99; // [rsp+58h] [rbp-A8h]
  int v100; // [rsp+5Ch] [rbp-A4h]
  int v101; // [rsp+60h] [rbp-A0h]
  unsigned int v102; // [rsp+64h] [rbp-9Ch]
  int v103; // [rsp+68h] [rbp-98h] BYREF
  int v104; // [rsp+6Ch] [rbp-94h]
  int v105; // [rsp+70h] [rbp-90h] BYREF
  int v106; // [rsp+74h] [rbp-8Ch] BYREF
  int v107; // [rsp+78h] [rbp-88h] BYREF
  int v108; // [rsp+7Ch] [rbp-84h]
  int v109; // [rsp+80h] [rbp-80h]
  int v110[3]; // [rsp+84h] [rbp-7Ch] BYREF
  __int128 v111; // [rsp+90h] [rbp-70h] BYREF
  __int64 v112; // [rsp+A0h] [rbp-60h]
  unsigned int v113; // [rsp+B0h] [rbp-50h]
  int v114; // [rsp+B4h] [rbp-4Ch]
  int v115; // [rsp+B8h] [rbp-48h]
  int v116; // [rsp+BCh] [rbp-44h]
  int v117; // [rsp+C0h] [rbp-40h]
  unsigned int v118; // [rsp+C8h] [rbp-38h]
  struct CContactState *v119; // [rsp+D0h] [rbp-30h]
  __int128 v120; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v121; // [rsp+F0h] [rbp-10h]
  __int128 v122; // [rsp+100h] [rbp+0h] BYREF
  __int64 v123; // [rsp+110h] [rbp+10h]
  unsigned int v124; // [rsp+170h] [rbp+70h]
  int v126; // [rsp+180h] [rbp+80h]
  int v127; // [rsp+188h] [rbp+88h]

  v2 = *((_DWORD *)a2 + 9);
  v119 = 0LL;
  v3 = 0;
  v108 = 0;
  v4 = 0;
  v124 = 0;
  v5 = 0;
  v6 = 1;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v7 = a2;
  v103 = 0;
  v110[0] = 0;
  v99 = 0;
  v97 = 0;
  v109 = 0;
  v126 = 0;
  v98 = 0;
  v100 = 0;
  v9 = *((_DWORD *)a2 + 16) & 0x70;
  v104 = v2;
  this[375].x = v9;
  CPTPEngine::HandleButtonSuppressionAndPendingUps((CPTPEngine *)this, a2, v2);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    v95 = 0uLL;
    v96 = 0LL;
    v111 = 0uLL;
    v112 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 8LL, &v111);
  }
  x = this[412].x;
  if ( (x & 1) == 0 && (x & 2) == 0 && (x & 4) == 0 )
  {
    v11 = 0LL;
    v12 = 0;
    do
    {
      if ( v12 >= 6 )
        break;
      v13 = this[37 * v12 + 149].x;
      if ( (v13 & 1) != 0 && (v13 & 0x80u) == 0 )
        v11 = 1LL;
      ++v12;
    }
    while ( !(_DWORD)v11 );
    if ( !(_DWORD)v11 && *((_DWORD *)v7 + 12) != this[373].x + this[374].x )
    {
      CBasePTPEngine::SendInertiaOutput(this, v11);
      if ( *((_DWORD *)v7 + 10) )
        this[412].x &= 0xFEFFDFFF;
      if ( this[2].y )
        y = this[51].y;
      else
        y = 0;
      v15 = this[402];
      if ( *(_QWORD *)&v15 && *((_QWORD *)v7 + 1) > *(unsigned __int64 *)&v15 && y > 0 )
        CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)this, 1);
      this[402] = *(struct tagPOINT *)v7;
      if ( *((_QWORD *)v7 + 2) > *((_QWORD *)v7 + 1) )
      {
        *(_QWORD *)&v111 = *((_QWORD *)v7 + 2);
        v96 = v112;
        v95 = v111;
        CBasePTPEngine::SendTelemetryOutput(this, 0LL, &v95);
      }
    }
  }
  v16 = this[375].x;
  v115 = v16 & 0x10;
  v114 = v115 != 0;
  v117 = v16 & 0x40;
  v116 = v16 & 0x20;
  v17 = this[412].x & 0xFFFBFFFF;
  v118 = (this[412].x & 0x40000u) >> 18;
  v127 = this[375].y;
  this[412].x = v17;
  if ( v2 )
    goto LABEL_186;
  this[374].x = 0;
  v18 = (char *)v7 + 52;
  v102 = 0;
  if ( *((_DWORD *)v7 + 12) )
  {
    do
    {
      v19 = *((_DWORD *)v18 + 1) % this[2].x;
      *((_DWORD *)v18 + 3) &= 0xFFFFFF8F;
      v20 = *((_DWORD *)v18 + 3);
      v113 = v19;
      v21 = &this[37 * v19 + 149];
      v101 = v20;
      v22 = v21->x;
      if ( (v21->x & 1) != 0 && ((v22 & 0x8000000) == 0 || (v20 & 0x60000) == 0) )
      {
        LODWORD(v111) = 0;
        v96 = v112;
        v95 = v111;
        CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v95);
        v22 = v21->x & 0xF7FFFFFE;
        v21->x = v22;
      }
      if ( (v22 & 0x8000000) == 0 )
      {
        v22 |= 0x8000000u;
        v100 = 1;
        v21->x = v22;
        v21[9] = *(struct tagPOINT *)(v18 + 80);
        v21[2] = *(struct tagPOINT *)(v18 + 40);
        v21[18].x = *((_DWORD *)v18 + 1);
      }
      v23 = 0;
      if ( (v22 & 1) == 0 )
      {
        v23 = (*((_DWORD *)v18 + 3) >> 23) & 4;
        if ( (unsigned int)CPTPEngine::PointInsideCurtainRegion((CPTPEngine *)this, *(struct tagPOINT *)(v18 + 40))
          && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, v7, 0x40u, 0, 0) )
        {
          v23 |= 2u;
        }
        if ( (this[412].x & 0x10000000) != 0
          && (this[27].y & 2) != 0
          && !PtInRect(&this[405], *((_QWORD *)v18 + 5))
          && (*(_QWORD *)v7 - *(_QWORD *)&v21[9] >= *(_QWORD *)&this[12]
                                                  * (unsigned __int64)(unsigned int)this[22].y
                                                  / 0x3E8
           || *((_DWORD *)v7 + 12) == 1
           || !(unsigned int)CPTPEngine::FindContactToBreakSuperCurtains(
                               (CPTPEngine *)this,
                               v7,
                               (struct CContactState *)v21)) )
        {
          v23 |= 1u;
        }
        v20 = v101;
        if ( v23 || (v101 & 0x40000) != 0 )
          *((_DWORD *)v18 + 3) = 0;
      }
      v21[36].y = v23;
      if ( *((_DWORD *)v18 + 3) )
      {
        CPTPEngine::UpdateTPStateIndicator(
          (CPTPEngine *)this,
          v7,
          (struct CContactState *)v21,
          (struct PTPEnginePointerNode *)v18,
          &v103);
        if ( (v21->x & 2) != 0 )
        {
          ++v99;
          v97 = v113;
          *(_QWORD *)&v111 = *(_QWORD *)v7;
          v126 = 1;
          v121 = v112;
          v120 = v111;
          CBasePTPEngine::SendTelemetryOutput(this, 3LL, &v120);
          if ( v21[1].y < this[403].y )
          {
            v25 = CPTPEngine::PointInsideCurtainRegion((CPTPEngine *)this, v21[1]);
            v26 = v98;
            if ( !v25 )
              v26 = 1;
            v98 = v26;
          }
        }
        v27 = v124 + 1;
        if ( (*((_DWORD *)v18 + 3) & 0x40000) != 0 )
          v27 = v124;
        v124 = v27;
      }
      else if ( (v20 & 0x2000006) != 0 )
      {
        ++this[374].x;
      }
      else
      {
        v24 = v21->x;
        if ( (v21->x & 1) != 0 )
        {
          LODWORD(v111) = 0;
          v123 = v112;
          v122 = v111;
          CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v122);
          v21->x &= ~1u;
          v24 = v21->x;
        }
        v21->x = v24 & 0xF7FFFFFF;
      }
      v18 += 96;
      ++v102;
    }
    while ( v102 < *((_DWORD *)v7 + 12) );
    v3 = v103;
    v5 = v98;
    v4 = v99;
  }
  this[373].x = 0;
  v28 = (char *)v7 + 52;
  v29 = 0;
  v30 = 0;
  if ( *((_DWORD *)v7 + 12) )
  {
    v31 = (char *)v7 + 64;
    do
    {
      v32 = 37LL * (unsigned int)(*((_DWORD *)v31 - 2) % this[2].x);
      v33 = this[v32 + 149].x;
      if ( (v33 & 1) != 0 )
      {
        if ( (*(_DWORD *)v31 & 0x40000) == 0 && (v33 & 0x80u) != 0 )
          ++this[373].x;
        if ( v126 )
        {
          this[v32 + 154] = *(struct tagPOINT *)(v31 + 28);
          this[v32 + 164] = *(struct tagPOINT *)v7;
          v34 = *((_DWORD *)v7 + 6);
          this[v32 + 149].x &= ~0x20000u;
          this[v32 + 165].x = v34;
        }
      }
      v31 += 96;
      ++v29;
    }
    while ( v29 < *((_DWORD *)v7 + 12) );
    v30 = this[373].x;
  }
  v35 = v124 - v30;
  this[373].y = v124 - v30;
  if ( v124 < 2 )
    goto LABEL_94;
  v36 = this[375].y;
  if ( v36 != 3 && !this[375].x )
  {
    GestureAndMarkGesturingContactsAsNonResting = CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(
                                                    (CPTPEngine *)this,
                                                    v7);
    v36 = this[375].y;
    v109 = GestureAndMarkGesturingContactsAsNonResting;
    v35 = this[373].y;
  }
  if ( v36 != 2 )
    goto LABEL_94;
  v38 = 37LL * (unsigned int)this[371].x;
  v39 = __CFSHR__(this[v38 + 149].x, 8) && v35;
  v40 = __CFSHR__(this[v38 + 149].x, 8) && this[v38 + 152].y >= this[403].y;
  if ( v39 || v5 )
  {
    v42 = v126;
  }
  else
  {
    v41 = !v40;
    v42 = v126;
    if ( v41 || !v126 )
      goto LABEL_95;
  }
  this[375].y = 1;
  if ( v42 )
  {
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, v7);
LABEL_94:
    v42 = v126;
  }
LABEL_95:
  if ( (v100 || v42) && this[375].y == 1 )
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, v7);
  if ( v3 && *((_DWORD *)v7 + 12) == 1 )
    CBasePTPEngine::SendInertiaOutput(this, 2LL);
  if ( !this[408].y || !v4 )
    goto LABEL_115;
  if ( v4 == 1 && (this[53].x & 4) != 0 )
  {
    v43 = v97;
    v44 = v97;
    v45 = this[37 * v97 + 150];
    if ( (int)((HIDWORD(*(_QWORD *)&this[380]) - v45.y) * (HIDWORD(*(_QWORD *)&this[380]) - v45.y)
             + (*(_QWORD *)&this[380] - v45.x) * (*(_QWORD *)&this[380] - v45.x)) <= (unsigned __int64)(unsigned int)(this[24].x * this[24].x) )
    {
      v46 = 1;
      goto LABEL_110;
    }
  }
  else
  {
    v43 = v97;
  }
  v46 = 0;
  v44 = v43;
LABEL_110:
  v47 = v44;
  if ( this[409].y && !v46 )
    this[412].x &= ~8u;
  CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, *((_DWORD *)v7 + 6) - this[410].x, v46 ^ 1);
  if ( v46 )
  {
    v48 = this[409].y;
    this[409].y = 0;
    this[371].y = v48;
    this[37 * v47 + 149].x |= 0x4000u;
  }
LABEL_115:
  if ( this[375].y == 1 && this[371].y && this[373].y > 1u )
    CPTPEngine::SendMouseUpIfPending(
      (CPTPEngine *)this,
      (unsigned int *)&this[371].y,
      *((_DWORD *)v7 + 6) - this[386].y);
  if ( this[408].y )
  {
    v49 = 0;
    for ( i = (CPTPEngine *)&this[149]; i != (CPTPEngine *)&this[371]; i = (CPTPEngine *)((char *)i + 296) )
    {
      v51 = *(_DWORD *)i;
      if ( (*(_DWORD *)i & 1) != 0 && (v51 & 0x80u) != 0 && (v51 & 4) != 0 )
        v49 = 1;
    }
    if ( this[373].y || v49 )
      CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, *((_DWORD *)v7 + 6) - this[410].x, 1);
  }
  if ( this[373].y > 2u )
    this[412].x |= 0x100000u;
  for ( j = 0; j < *((_DWORD *)v7 + 12); v28 += 96 )
  {
    v53 = *((_DWORD *)v28 + 3);
    v54 = *((_DWORD *)v28 + 1) % this[2].x;
    v55 = &this[37 * v54 + 149];
    if ( v53 )
    {
      if ( (v55->x & 0x20000) != 0 && (this[375].y != 2 || v54 != this[371].x) )
      {
        v108 = 1;
        v119 = (struct CContactState *)&this[37 * v54 + 149];
      }
      v56 = this[375].y;
      if ( v56 == 2 && v54 == this[371].x && (v53 & 0x40000) != 0 )
      {
        this[412].x &= ~0x2000000u;
        v56 = 1;
        this[375].y = 1;
        if ( v124 )
        {
          CPTPEngine::ResetDragThresholds((CPTPEngine *)this, v7);
          v57 = (struct CContactState *)&this[149];
          v58 = 6LL;
          do
          {
            if ( (*(_DWORD *)v57 & 1) != 0 )
            {
              CPTPEngine::SetContactRestingState((CPTPEngine *)this, v57, 1);
              *(_DWORD *)v57 &= ~0x40000000u;
            }
            v57 = (struct CContactState *)((char *)v57 + 296);
            --v58;
          }
          while ( v58 );
          v56 = this[375].y;
        }
      }
      v59 = v56;
      if ( this[371].y )
      {
        if ( v56 == 5 && (*((_DWORD *)v28 + 3) & 0x40000) == 0 && v124 == 1 )
        {
          v60 = v55->x;
          if ( (v55->x & 0x80u) != 0 && (v60 & 4) == 0 && (v60 & 0x2000) == 0 && (v60 & 0x4000) == 0 )
          {
            this[375].y = 1;
            CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[371].y, 0);
            v59 = this[375].y;
          }
        }
      }
      if ( v59 == 2 )
        this[412].x |= 0x2000000u;
    }
    ++j;
  }
  v61 = v124;
  LOBYTE(v5) = 0;
  if ( (unsigned int)CPTPEngine::ProcessTapsFor3orMoreContacts((CPTPEngine *)this, v7, v124) )
    goto LABEL_236;
  v62 = this[374].x + v124;
  if ( v62 > 1 && (this[412].x & 0x200000) == 0 && (v126 || v100) )
  {
    v63 = this[2].x;
    if ( v63 )
    {
      v64 = 1;
      p_y = &this[185].y;
      v66 = v63;
      do
      {
        if ( (*(p_y - 73) & 0x8000000) != 0 && (*p_y & 0xFFFFFFFB) == 0 && v64 < v63 )
        {
          v67 = &this[37 * v64 + 158];
          v68 = v63 - v64;
          do
          {
            if ( (v67[-9].x & 0x8000000) != 0 && (v67[27].y & 0xFFFFFFFB) == 0 )
            {
              v69 = *v67;
              v70 = *(_QWORD *)(p_y - 55);
              v71 = *(_QWORD *)v67 <= v70 ? v70 - *(_QWORD *)&v69 : *(_QWORD *)&v69 - v70;
              if ( v71 <= *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[22].y / 0x3E8 )
                this[412].x |= 0x200000u;
            }
            v67 += 37;
            --v68;
          }
          while ( v68 );
        }
        p_y += 74;
        ++v64;
        --v66;
      }
      while ( v66 );
      v7 = a2;
      LOBYTE(v5) = 0;
    }
  }
  v72 = this[412].x;
  if ( (v72 & 0x200000) != 0 && v62 == 1 )
  {
    v72 &= 0xFF9FFFFF;
    this[412].x = v72;
  }
  if ( (v72 & 0x2000) != 0 && (unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)this, v7, v114) )
    goto LABEL_235;
  v2 = v104;
LABEL_186:
  if ( (unsigned int)CPTPEngine::DoTPButtonProcessing(this, v7, v2, v124, &v105)
    && (unsigned int)CPTPEngine::DoTPDiscreteButtonProcessing((CPTPEngine *)this, v7, &v106, &v107) )
  {
    if ( v2 )
      goto LABEL_273;
    if ( !v105 && !v106 && !v107 || (v73 = this[375].y, v73 == 3) || v73 == 6 )
    {
      v74 = this[375].y;
      if ( !this[371].y || (v75 = 1, v74 == 1) )
        v75 = 0;
      v76 = v115;
      if ( v115 || v116 || v117 || v75 || (v77 = 1, !v108) )
        v77 = 0;
      v78 = this[373].y;
      if ( v78 == 2 && v74 != 3 && (this[412].x & 0x2000000) == 0 && v77 && v109 )
      {
        v79 = 1;
      }
      else
      {
        v79 = 0;
        v80 = 0;
        if ( v78 != 2 )
          goto LABEL_213;
      }
      if ( v77 || (v80 = 0, *((_DWORD *)v7 + 10)) )
        v80 = 1;
LABEL_213:
      if ( v74 != 3 && (v79 || v80) )
      {
        CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, v7, v119);
        v78 = this[373].y;
        if ( v78 == 2 )
          LOBYTE(v5) = 1;
      }
      v81 = this[375].y;
      if ( v81 == 3 || (_BYTE)v5 )
      {
        this[412].x &= ~0x2000000u;
        v82 = 3;
      }
      else
      {
        v82 = 1;
      }
      if ( (unsigned int)(v78 - 3) <= 1 && v82 != 3 && v77 || v81 == 6 )
      {
        CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, v7, v119);
        v82 = 6;
      }
      if ( v82 == 3 || v82 == 6 )
      {
        CPTPEngine::DoGestureProcessing((CPTPEngine *)this, v7, v110);
      }
      else
      {
        if ( this[373].y < 2u )
        {
          v83 = v127;
          v41 = v76 == 0;
          v61 = v124;
          if ( v41 && !v75 )
            CPTPEngine::DoTPMouseProcessing((__int64)this, (__int64 *)v7, v124, v127);
          goto LABEL_237;
        }
        this[375].y = 1;
      }
    }
  }
LABEL_235:
  v61 = v124;
LABEL_236:
  v83 = v127;
LABEL_237:
  v84 = 0;
  if ( *((_DWORD *)v7 + 12) )
  {
    v85 = (char *)v7 + 64;
    do
    {
      v86 = 37LL * (unsigned int)(*((_DWORD *)v85 - 2) % this[2].x);
      v87 = this[v86 + 149].x;
      if ( (v87 & 1) != 0 && *(_DWORD *)v85 )
      {
        if ( (*(_DWORD *)v85 & 0x40000) != 0 )
        {
          if ( this[375].y == 2 && *((_DWORD *)v85 - 2) % this[2].x == this[371].x )
          {
            this[412].x &= ~0x2000000u;
            v87 = this[v86 + 149].x;
          }
          v88 = v87 & 0xFFFFFFFE;
          this[v86 + 149].x = v88;
          if ( (*(_DWORD *)v85 & 0x2000000) != 0 )
            ++this[374].x;
          else
            this[v86 + 149].x = v88 & 0xF7FFFFFF;
        }
        else
        {
          this[v86 + 159] = *(struct tagPOINT *)(v85 + 68);
          this[v86 + 152] = *(struct tagPOINT *)(v85 + 28);
        }
      }
      v85 += 96;
      ++v84;
    }
    while ( v84 < *((_DWORD *)v7 + 12) );
  }
  v89 = -__CFSHR__(this[412].x, 19);
  if ( __CFSHR__(this[412].x, 19) != v118 )
  {
    v95 = 0uLL;
    LODWORD(v96) = 0;
    if ( v89 )
      v90 = 2LL;
    else
      v90 = 3LL;
    CBasePTPEngine::SendEtwOutput(this, v90, &v95);
  }
  if ( this[375].y != 2 )
    this[412].x &= ~0x800000u;
  v91 = 0;
  v92 = 0;
  do
  {
    if ( v92 >= 6 )
      break;
    if ( (this[37 * v92 + 149].x & 1) != 0 )
      v91 = 1;
    ++v92;
  }
  while ( !v91 );
  if ( !v91 )
  {
    this[412].x &= 0xD78FFFFF;
    this[375].y = 1;
    if ( this[371].y )
      CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[371].y, 0);
    if ( v83 == 2 )
    {
      v93 = 37LL * (unsigned int)this[371].x;
      if ( (this[v93 + 149].x & 0x800) != 0
        && (__int64)((unsigned __int64)(1000LL * (*(_QWORD *)&this[v93 + 159] - *(_QWORD *)&this[v93 + 161]))
                   / *(_QWORD *)&this[12]) >= (unsigned int)this[65].y )
      {
        this[407] = this[v93 + 159];
      }
    }
    *(_QWORD *)&v120 = *(_QWORD *)v7;
    v123 = v121;
    v122 = v120;
    CBasePTPEngine::SendTelemetryOutput(this, 1LL, &v122);
  }
  if ( v110[0] )
  {
    this[412].x &= 0xFF9FFFFF;
    this[375].y = 1;
    this[401] = *(struct tagPOINT *)v7;
  }
  this[372].x = v61;
LABEL_273:
  if ( (unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    v94 = this[412].x;
    if ( (v94 & 1) != 0 || (v94 & 2) != 0 || (v94 & 4) != 0 || this[408].y || this[375].y != 1 )
    {
      v6 = 0;
    }
    else if ( (this[412].y & 1) == 0 )
    {
      v95 = 0uLL;
      v96 = 0LL;
      v120 = 0uLL;
      v121 = 0LL;
      CBasePTPEngine::SendTelemetryOutput(this, 10LL, &v120);
      this[412].x = this[412].x & 0x578FFFFF | 0x80000000;
    }
    this[412].y = v6 | this[412].y & 0xFFFFFFFE;
  }
  else
  {
    this[412].y |= 1u;
    v95 = 0uLL;
    v96 = 0LL;
    v120 = 0uLL;
    v121 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 9LL, &v120);
  }
}
