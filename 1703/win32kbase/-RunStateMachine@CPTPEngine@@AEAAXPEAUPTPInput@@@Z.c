/*
 * XREFs of ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1C0136970 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C007268C (PtInRect.c)
 *     ?CacheGestureState@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0133098 (-CacheGestureState@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C01332A0 (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?CleanupGestureState@CPTPEngine@@AEAAXXZ @ 0x1C0133368 (-CleanupGestureState@CPTPEngine@@AEAAXXZ.c)
 *     ?CreateShellGestureFrame@CPTPEngine@@AEAAXPEBUPTPInput@@@Z @ 0x1C01333CC (-CreateShellGestureFrame@CPTPEngine@@AEAAXPEBUPTPInput@@@Z.c)
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0133988 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C0134558 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C0134A2C (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAA?AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z @ 0x1C0134D64 (-DoTPMouseProcessing@CPTPEngine@@AEAA-AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z.c)
 *     ?DoTPShellProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KPEAH@Z @ 0x1C0135618 (-DoTPShellProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KPEAH@Z.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C01358D8 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C01360D0 (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?HasTrackedContacts@CPTPEngine@@AEAAHXZ @ 0x1C01361F8 (-HasTrackedContacts@CPTPEngine@@AEAAHXZ.c)
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C0136344 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136380 (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x1C01364C8 (-PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C01364F8 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0136988 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0137C48 (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0137D28 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C0137E38 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0137EFC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0138208 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C01383B0 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 *     ?UpdateTPContactState@CPTPEngine@@AEAAXIPEAUPTPEnginePointerNode@@@Z @ 0x1C0138AF4 (-UpdateTPContactState@CPTPEngine@@AEAAXIPEAUPTPEnginePointerNode@@@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0138BE4 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 */

void __fastcall CPTPEngine::RunStateMachine(struct tagPOINT *this, struct PTPInput *a2)
{
  int v2; // esi
  int v3; // eax
  int v6; // r14d
  int v7; // r13d
  unsigned int v8; // r12d
  __int64 v9; // rcx
  LONG y; // eax
  int v11; // r9d
  __int64 v12; // rdx
  unsigned int v13; // r8d
  LONG x; // eax
  int v15; // ecx
  struct tagPOINT v16; // rax
  LONG v17; // r15d
  int v18; // eax
  int v19; // r15d
  LONG v20; // eax
  char *v21; // rsi
  unsigned int v22; // r15d
  __int64 v23; // rdx
  int v24; // r12d
  unsigned int v25; // r13d
  struct tagPOINT *v26; // r14
  int v27; // r15d
  int v28; // eax
  bool v29; // r8
  char v30; // al
  bool v31; // zf
  __int64 v32; // xmm1_8
  int v33; // eax
  int v34; // ecx
  unsigned int v35; // r9d
  int v36; // esi
  __int64 v37; // r10
  char *v38; // r13
  char *v39; // r8
  __int64 v40; // rdx
  LONG v41; // ecx
  struct tagPOINT v42; // rax
  int v43; // eax
  unsigned int v44; // r14d
  __int64 v45; // rax
  LONG v46; // eax
  CPTPEngine *v47; // rax
  char v48; // cl
  int v49; // edx
  unsigned int v50; // r14d
  __int64 v51; // rdx
  int v52; // ecx
  __int64 v53; // rsi
  LONG v54; // eax
  LONG v55; // ecx
  LONG v56; // eax
  unsigned int v57; // r11d
  unsigned int v58; // r9d
  struct tagPOINT *v59; // rsi
  __int64 v60; // r15
  struct tagPOINT *v61; // r10
  __int64 v62; // r14
  struct tagPOINT v63; // r8
  struct tagPOINT v64; // rax
  unsigned __int64 v65; // r8
  LONG v66; // eax
  LONG v67; // eax
  LONG v68; // eax
  BOOL v69; // r14d
  int v70; // r13d
  int v71; // eax
  int v72; // ecx
  int v73; // r15d
  LONG v74; // r8d
  BOOL v75; // edx
  char v76; // al
  bool v77; // si
  int v78; // ecx
  int v79; // r15d
  unsigned int v80; // r14d
  char *i; // rsi
  unsigned int v82; // edx
  LONG v83; // eax
  __int64 v84; // rcx
  int v85; // ecx
  __int64 v86; // rdx
  LONG v87; // eax
  int v88; // eax
  int v89; // edx
  __int64 v90; // r8
  LONG v91; // ecx
  unsigned int v92; // eax
  unsigned int v93; // eax
  unsigned int v94; // eax
  __int64 v95; // rcx
  __int64 v96; // rcx
  LONG v97; // eax
  __int64 v98; // rdx
  __int128 v99; // [rsp+30h] [rbp-89h] BYREF
  __int64 v100; // [rsp+40h] [rbp-79h]
  unsigned int v101; // [rsp+50h] [rbp-69h]
  unsigned int v102; // [rsp+54h] [rbp-65h]
  int v103; // [rsp+58h] [rbp-61h]
  int v104; // [rsp+5Ch] [rbp-5Dh]
  int v105; // [rsp+60h] [rbp-59h] BYREF
  int v106; // [rsp+64h] [rbp-55h] BYREF
  int v107; // [rsp+68h] [rbp-51h]
  int v108; // [rsp+6Ch] [rbp-4Dh]
  int v109; // [rsp+70h] [rbp-49h]
  int v110; // [rsp+74h] [rbp-45h] BYREF
  int v111; // [rsp+78h] [rbp-41h] BYREF
  int v112; // [rsp+7Ch] [rbp-3Dh] BYREF
  int v113; // [rsp+80h] [rbp-39h]
  int v114; // [rsp+84h] [rbp-35h]
  int GestureAndMarkGesturingContactsAsNonResting; // [rsp+88h] [rbp-31h]
  __int128 v116; // [rsp+90h] [rbp-29h] BYREF
  __int64 v117; // [rsp+A0h] [rbp-19h]
  int v118; // [rsp+B0h] [rbp-9h]
  int v119; // [rsp+B4h] [rbp-5h]
  int v120; // [rsp+B8h] [rbp-1h]
  int v121; // [rsp+BCh] [rbp+3h]
  unsigned int v122; // [rsp+C0h] [rbp+7h]
  int v123; // [rsp+120h] [rbp+67h]
  unsigned int v124; // [rsp+128h] [rbp+6Fh]
  int v125; // [rsp+130h] [rbp+77h]
  int v126; // [rsp+138h] [rbp+7Fh]

  v2 = *((_DWORD *)a2 + 9);
  v3 = *((_DWORD *)a2 + 16) & 0x70;
  v113 = 0;
  this[366].x = v3;
  v114 = 0;
  v121 = 1;
  v6 = 0;
  v124 = 0;
  v7 = 0;
  v110 = 0;
  v8 = 0;
  v111 = 0;
  v112 = 0;
  v104 = 0;
  v106 = 0;
  v105 = 0;
  v103 = 0;
  v101 = 0;
  v108 = v2;
  GestureAndMarkGesturingContactsAsNonResting = 0;
  v107 = 0;
  v125 = 0;
  v126 = 0;
  CPTPEngine::HandleButtonSuppressionAndPendingUps((CPTPEngine *)this, a2, v2);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    v99 = 0uLL;
    v100 = 0LL;
    v116 = 0uLL;
    v117 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(v9, 8LL, &v116);
  }
  y = this[402].y;
  v11 = 1;
  if ( (y & 1) == 0 && (y & 2) == 0 && (y & 4) == 0 )
  {
    v12 = 0LL;
    v13 = 0;
    do
    {
      if ( v13 >= 6 )
        break;
      x = this[36 * v13 + 146].x;
      if ( (x & 1) != 0 && (x & 0x100) == 0 )
        v12 = 1LL;
      ++v13;
    }
    while ( !(_DWORD)v12 );
    if ( !(_DWORD)v12 && *((_DWORD *)a2 + 12) != this[364].y + this[365].y )
    {
      CBasePTPEngine::SendInertiaOutput(this, v12);
      if ( *((_DWORD *)a2 + 10) )
        this[402].y &= 0xFEFFBFFF;
      v15 = 0;
      if ( this[2].y )
        v15 = this[48].y;
      v16 = this[392];
      if ( *(_QWORD *)&v16 && *((_QWORD *)a2 + 1) > *(unsigned __int64 *)&v16 && v15 > 0 )
        CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)this, 1);
      this[392] = *(struct tagPOINT *)a2;
      if ( *((_QWORD *)a2 + 2) > *((_QWORD *)a2 + 1) )
      {
        *(_QWORD *)&v116 = *((_QWORD *)a2 + 2);
        v100 = v117;
        v99 = v116;
        CBasePTPEngine::SendTelemetryOutput(this, 0LL, &v99);
      }
      v11 = 1;
    }
  }
  v17 = this[366].x;
  v119 = v17 & 0x10;
  v118 = v119 != 0;
  v18 = v17 & 0x20;
  v19 = v17 & 0x40;
  v120 = v18;
  v20 = this[402].y;
  v109 = v19;
  v122 = (v20 & 0x20000u) >> 17;
  v123 = this[366].y;
  this[402].y = v20 & 0xFFFDFFFF;
  if ( v2 )
    goto LABEL_188;
  this[365].y = 0;
  v21 = (char *)a2 + 52;
  v22 = 0;
  v102 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    do
    {
      v23 = (unsigned int)(*((_DWORD *)v21 + 1) % this[2].x);
      *((_DWORD *)v21 + 3) &= 0xFFFFFF8F;
      v24 = *((_DWORD *)v21 + 3);
      v25 = v23;
      v26 = &this[32 * v23 + 146 + 4 * (unsigned int)v23];
      if ( (v26->x & 0x10000000) == 0 )
      {
        v26->x |= 0x10000000u;
        v26[10] = *(struct tagPOINT *)(v21 + 80);
        *(struct tagPOINT *)((char *)v26 + 12) = *(struct tagPOINT *)(v21 + 40);
      }
      if ( ((unsigned __int8)v26->x & (unsigned __int8)v11) == 0 )
      {
        v27 = *((_DWORD *)v21 + 3) & 0x2000000;
        v29 = 0;
        if ( (unsigned int)CPTPEngine::PointInsideCurtainRegion((CPTPEngine *)this, *(struct tagPOINT *)(v21 + 40)) )
        {
          v28 = CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0, 0);
          v11 = 1;
          if ( !v28 )
            v29 = 1;
        }
        if ( (*((_DWORD *)a2 + 12) < 3u
           || *(_QWORD *)a2 - *(_QWORD *)&v26[10] >= *(_QWORD *)&this[12]
                                                   * (unsigned __int64)(unsigned int)this[22].y
                                                   / 0x3E8)
          && (this[402].y & 0x10000000) != 0
          && (this[27].y & 2) != 0
          && !PtInRect(&this[395], *((_QWORD *)v21 + 5)) )
        {
          v30 = v11;
        }
        else
        {
          v30 = 0;
        }
        if ( v27 || v29 || v30 )
          *((_DWORD *)v21 + 3) = 0;
        v22 = v102;
      }
      if ( *((_DWORD *)v21 + 3) )
      {
        CPTPEngine::UpdateTPStateIndicator(
          (CPTPEngine *)this,
          a2,
          (struct CContactState *)v26,
          (struct PTPEnginePointerNode *)v21,
          &v106);
        if ( (v26->x & 2) == 0 )
          goto LABEL_55;
        v32 = v117;
        v101 = v25;
        ++v103;
        v107 = 1;
        v26[18].y = *((_DWORD *)a2 + 11);
        *(_QWORD *)&v116 = *(_QWORD *)a2;
        v100 = v32;
        v99 = v116;
        CBasePTPEngine::SendTelemetryOutput(this, 3LL, &v99);
        if ( v26[1].x < this[393].y )
        {
          v33 = CPTPEngine::PointInsideCurtainRegion((CPTPEngine *)this, *(struct tagPOINT *)&v26->y);
          v34 = v126;
          v11 = 1;
          if ( !v33 )
            v34 = 1;
          v126 = v34;
        }
        else
        {
LABEL_55:
          v11 = 1;
        }
        if ( (*((_DWORD *)v21 + 3) & 0x40000) != 0 )
        {
          v8 = 1;
          v125 = 1;
        }
        else
        {
          ++v124;
          v8 = v125;
        }
      }
      else
      {
        v31 = (v24 & 0x2000006) == 0;
        v8 = v125;
        if ( v31 )
          v26->x &= ~0x10000000u;
        else
          this[365].y += v11;
      }
      v22 += v11;
      v21 += 96;
      v102 = v22;
    }
    while ( v22 < *((_DWORD *)a2 + 12) );
    v6 = v106;
    v7 = v107;
  }
  this[364].y = 0;
  v35 = 0;
  v36 = 1;
  if ( *((_DWORD *)a2 + 12) )
  {
    v37 = v7;
    v38 = (char *)a2 + 52;
    v39 = (char *)a2 + 64;
    do
    {
      v40 = 36LL * (unsigned int)(*((_DWORD *)v39 - 2) % this[2].x);
      v41 = this[v40 + 146].x;
      if ( (v41 & 1) != 0 )
      {
        if ( (*(_DWORD *)v39 & 0x40000) == 0 && (v41 & 0x100) != 0 )
          ++this[364].y;
        if ( v37 || v8 )
        {
          *(struct tagPOINT *)&this[v40 + 151].y = *(struct tagPOINT *)(v39 + 28);
          v42 = *(struct tagPOINT *)a2;
          this[v40 + 146].x &= ~0x80000u;
          this[v40 + 162] = v42;
        }
      }
      v39 += 96;
      ++v35;
    }
    while ( v35 < *((_DWORD *)a2 + 12) );
  }
  else
  {
    v38 = (char *)a2 + 52;
  }
  v8 = v124;
  this[365].x = v124 - this[364].y;
  if ( v124 >= 2 )
  {
    if ( this[366].y != 3 )
      GestureAndMarkGesturingContactsAsNonResting = CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(
                                                      (CPTPEngine *)this,
                                                      a2);
    if ( this[366].y == 2 )
    {
      if ( (this[36 * (unsigned int)this[362].x + 146].x & 0x100) != 0 && this[365].x )
      {
        v43 = v126;
      }
      else
      {
        v43 = v126;
        if ( !v126 )
          goto LABEL_84;
      }
      this[366].y = 1;
      if ( v43 )
        this[402].y |= 0x200000u;
    }
  }
LABEL_84:
  if ( v6 && v124 == 1 )
    CBasePTPEngine::SendInertiaOutput(this, 2LL);
  if ( !this[400].x || !v103 )
    goto LABEL_100;
  if ( v103 != 1 || (this[50].x & 4) == 0 )
  {
    v44 = v101;
    goto LABEL_94;
  }
  v44 = v101;
  v45 = *(_QWORD *)&this[36 * v101 + 146].y;
  if ( (int)((*(_QWORD *)&this[372] - v45) * (*(_QWORD *)&this[372] - v45)
           + (HIDWORD(*(_QWORD *)&this[372]) - HIDWORD(v45)) * (HIDWORD(*(_QWORD *)&this[372]) - HIDWORD(v45))) > (unsigned __int64)(unsigned int)(this[24].x * this[24].x) )
LABEL_94:
    v36 = 0;
  if ( this[400].y && !v36 )
    this[402].y &= ~8u;
  CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, v36 ^ 1);
  if ( v36 )
  {
    this[363].x = this[400].y;
    this[400].y = 0;
    this[36 * v44 + 146].x |= 0x8000u;
  }
LABEL_100:
  if ( this[366].y == 1 )
  {
    v46 = this[363].x;
    if ( v46 )
    {
      if ( this[365].x > 1u )
      {
        if ( v46 == 4 )
        {
          this[402].y &= ~8u;
        }
        else if ( v46 == 16 )
        {
          this[402].y &= ~0x10u;
        }
        CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[363], this[378].y);
      }
    }
  }
  if ( this[400].x )
  {
    v47 = (CPTPEngine *)&this[146];
    v48 = 0;
    while ( v47 != (CPTPEngine *)&this[362] )
    {
      v49 = *(_DWORD *)v47;
      if ( (*(_DWORD *)v47 & 1) != 0 && (v49 & 0x100) != 0 && (v49 & 4) != 0 )
        v48 = 1;
      v47 = (CPTPEngine *)((char *)v47 + 288);
    }
    if ( this[365].x || v48 )
    {
      if ( this[400].y )
        this[402].y &= ~8u;
      CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, 1);
    }
  }
  if ( this[365].x > 2u )
    this[402].y |= 0x100000u;
  v50 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    while ( 1 )
    {
      v51 = (unsigned int)(*((_DWORD *)v38 + 1) % this[2].x);
      v52 = *((_DWORD *)v38 + 3);
      v53 = 36 * v51;
      if ( v52 )
      {
        v54 = this[v53 + 146].x;
        if ( (v54 & 0x80000) != 0 && (this[366].y != 2 || (_DWORD)v51 != this[362].x) )
          v113 = 1;
        if ( (v54 & 4) != 0 && (this[366].y != 2 || (_DWORD)v51 != this[362].x) )
          v114 = 1;
        if ( this[366].y == 2 && (_DWORD)v51 == this[362].x && (v52 & 0x40000) != 0 )
        {
          this[402].y &= ~0x2000000u;
          this[366].y = 1;
        }
        v55 = this[363].x;
        if ( v55 )
        {
          if ( this[366].y == 5 && (*((_DWORD *)v38 + 3) & 0x40000) == 0 && v124 == 1 )
          {
            v56 = this[v53 + 146].x;
            if ( (v56 & 0x100) != 0 && (v56 & 4) == 0 && (v56 & 0x4000) == 0 && (v56 & 0x8000) == 0 )
            {
              this[366].y = 1;
              if ( v55 == 4 )
              {
                this[402].y &= ~8u;
              }
              else if ( v55 == 16 )
              {
                this[402].y &= ~0x10u;
              }
              CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[363], *((_DWORD *)a2 + 6));
            }
          }
        }
        if ( (this[v53 + 146].x & 0x80u) != 0 && v123 != 3LL && (*((_DWORD *)v38 + 3) & 0x40000) != 0 )
          goto LABEL_155;
        if ( this[366].y == 2 )
          break;
      }
LABEL_158:
      ++v50;
      v38 += 96;
      if ( v50 >= *((_DWORD *)a2 + 12) )
        goto LABEL_159;
    }
    if ( this[399] )
LABEL_155:
      CPTPEngine::CleanupGestureState((CPTPEngine *)this);
    if ( this[366].y == 2 )
      this[402].y |= 0x2000000u;
    goto LABEL_158;
  }
LABEL_159:
  if ( (unsigned int)CPTPEngine::ProcessTapsFor3orMoreContacts((CPTPEngine *)this, a2, v124) )
    goto LABEL_245;
  if ( v124 > 1 && (this[402].y & 0x200000) == 0 )
  {
    v57 = this[2].x;
    if ( v57 )
    {
      v58 = 1;
      v59 = this + 146;
      v60 = v57;
      do
      {
        if ( (v59->x & 1) != 0 && v58 < v57 )
        {
          v61 = &this[36 * v58 + 155];
          v62 = v57 - v58;
          do
          {
            if ( (v61[-9].x & 1) != 0 )
            {
              v63 = *v61;
              v64 = v59[9];
              v65 = *(_QWORD *)v61 <= *(unsigned __int64 *)&v64
                  ? *(_QWORD *)&v64 - *(_QWORD *)&v63
                  : *(_QWORD *)&v63 - *(_QWORD *)&v64;
              if ( v65 <= *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[22].y / 0x3E8 )
                this[402].y |= 0x200000u;
            }
            v61 += 36;
            --v62;
          }
          while ( v62 );
        }
        v59 += 36;
        ++v58;
        --v60;
      }
      while ( v60 );
      v8 = v124;
    }
  }
  v66 = this[402].y;
  if ( (v66 & 0x200000) != 0 && v8 == 1 )
    this[402].y = v66 & 0xFF9FFFFF;
  v67 = this[366].y;
  if ( v67 != 3 && v67 != 6 && !*(_QWORD *)&this[399] && v8 >= 2 && (this[402].y & 0x2000000) == 0 )
  {
    CPTPEngine::CacheGestureState((CPTPEngine *)this, a2);
    v104 = 1;
  }
  if ( (this[402].y & 0x4000) != 0 && (unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)this, a2, v118) )
    goto LABEL_245;
  v19 = v109;
  v2 = v108;
LABEL_188:
  if ( !(unsigned int)CPTPEngine::DoTPDiscreteButtonProcessing((CPTPEngine *)this, a2, &v111, &v112)
    || !(unsigned int)CPTPEngine::DoTPButtonProcessing(this, a2, v2, v8, &v110) )
  {
    goto LABEL_245;
  }
  if ( v2 )
    goto LABEL_295;
  if ( v110 || v111 || v112 )
  {
    v68 = this[366].y;
    if ( v68 != 3 && v68 != 6 )
      goto LABEL_245;
  }
  v69 = this[363].x && this[366].y != 1;
  v70 = v119;
  if ( v119 || v120 || v19 )
  {
    v71 = 1;
  }
  else
  {
    v71 = 0;
    if ( !v69 && v113 )
    {
      v72 = 1;
      goto LABEL_210;
    }
  }
  v72 = 0;
  if ( v71 || v69 )
    goto LABEL_212;
LABEL_210:
  if ( !v114 )
  {
LABEL_212:
    v73 = 0;
    goto LABEL_213;
  }
  v73 = 1;
LABEL_213:
  v74 = this[365].x;
  v75 = v74 == 2
     && this[366].y != 3
     && (this[402].y & 0x2000000) == 0
     && v72
     && GestureAndMarkGesturingContactsAsNonResting;
  v76 = 0;
  if ( v74 == 2 && (v72 || *((_DWORD *)a2 + 10)) )
    v76 = 1;
  v77 = 0;
  if ( this[366].y == 3 )
    goto LABEL_230;
  if ( v75 || v76 )
  {
    CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, a2);
    v77 = this[365].x == 2;
  }
  if ( this[366].y == 3 || v77 )
  {
LABEL_230:
    if ( (this[402].y & 0x2000000) != 0 )
    {
      CPTPEngine::CacheGestureState((CPTPEngine *)this, a2);
      this[402].y &= ~0x2000000u;
      v104 = 1;
    }
    v78 = 3;
  }
  else
  {
    v78 = v121;
  }
  if ( (unsigned int)(this[365].x - 3) <= 1 && v78 != 3 && v73 || this[366].y == 6 )
  {
    CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, a2);
    if ( this[366].y == 1 )
      CPTPEngine::CreateShellGestureFrame((CPTPEngine *)this, a2);
    v78 = 6;
  }
  if ( v78 == 3 )
  {
    CPTPEngine::DoTPGestureProcessing((CPTPEngine *)this, a2, v104, &v105);
    goto LABEL_245;
  }
  if ( v78 == 6 )
  {
    CPTPEngine::DoTPShellProcessing((CPTPEngine *)this, a2, v8, &v105);
    goto LABEL_245;
  }
  if ( this[365].x >= 2u )
  {
    this[366].y = 1;
LABEL_245:
    v79 = v123;
    goto LABEL_246;
  }
  v79 = v123;
  if ( !v70 && !v69 )
    CPTPEngine::DoTPMouseProcessing((__int64)this, (__int64 *)a2, v8, v123);
LABEL_246:
  v80 = 0;
  for ( i = (char *)a2 + 52; v80 < *((_DWORD *)a2 + 12); ++v80 )
  {
    v82 = *((_DWORD *)i + 1) % this[2].x;
    if ( (this[36 * v82 + 146].x & 1) != 0 )
      CPTPEngine::UpdateTPContactState((CPTPEngine *)this, v82, (struct PTPEnginePointerNode *)i);
    i += 96;
  }
  v83 = this[402].y;
  if ( (v83 & 1) == 0
    && (v83 & 2) == 0
    && (v83 & 4) == 0
    && !(unsigned int)CPTPEngine::HasTrackedContacts((CPTPEngine *)this) )
  {
    CBasePTPEngine::SendInertiaOutput(v84, 2LL);
  }
  v85 = -__CFSHR__(this[402].y, 18);
  if ( __CFSHR__(this[402].y, 18) != v122 )
  {
    v99 = 0uLL;
    LODWORD(v100) = 0;
    v86 = 2LL;
    if ( !v85 )
      v86 = 3LL;
    CBasePTPEngine::SendEtwOutput(this, v86, &v99);
  }
  v87 = this[366].y;
  if ( v87 != 2 )
    this[402].y &= ~0x800000u;
  if ( this[365].x || v87 != 1 )
  {
    this[402].y &= ~0x80000000;
  }
  else
  {
    v88 = this[402].y;
    if ( v88 >= 0 )
      this[402].y = v88 & 0x5787FFFF | 0x80000000;
  }
  v89 = 0;
  v90 = 0LL;
  do
  {
    if ( (unsigned int)v90 >= 6 )
      break;
    if ( (this[36 * v90 + 146].x & 1) != 0 )
      v89 = 1;
    v90 = (unsigned int)(v90 + 1);
  }
  while ( !v89 );
  if ( v89 )
    goto LABEL_292;
  v91 = this[363].x;
  v92 = this[402].y & 0xFFE7FFFF;
  this[366].y = 1;
  v93 = v92 & 0xD79FFFFF;
  this[402].y = v93;
  if ( v91 )
  {
    if ( v91 == 4 )
    {
      v94 = v93 & 0xFFFFFFF7;
    }
    else
    {
      if ( v91 != 16 )
      {
LABEL_284:
        CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[363], *((_DWORD *)a2 + 6));
        goto LABEL_285;
      }
      v94 = v93 & 0xFFFFFFEF;
    }
    this[402].y = v94;
    goto LABEL_284;
  }
LABEL_285:
  if ( v79 == 3 )
    CPTPEngine::CleanupGestureState((CPTPEngine *)this);
  if ( v79 == 2 )
  {
    v95 = 36LL * (unsigned int)this[362].x;
    if ( (this[v95 + 146].x & 0x1000) != 0
      && (__int64)((unsigned __int64)(1000LL * (*(_QWORD *)&this[v95 + 157] - *(_QWORD *)&this[v95 + 159]))
                 / *(_QWORD *)&this[12]) >= (unsigned int)this[62].y )
    {
      this[397] = this[v95 + 157];
    }
  }
  *(_QWORD *)&v116 = *(_QWORD *)a2;
  v100 = v117;
  v99 = v116;
  CBasePTPEngine::SendTelemetryOutput(this, 1LL, &v99);
LABEL_292:
  if ( v105 )
  {
    CBasePTPEngine::SendInertiaOutput(this, 2LL);
    this[402].y &= 0xFF9FFFFF;
    this[366].y = 1;
  }
  this[363].y = v8;
LABEL_295:
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    v98 = 9LL;
    goto LABEL_304;
  }
  v97 = this[402].y;
  if ( (v97 & 1) == 0 && (v97 & 2) == 0 && (v97 & 4) == 0 && !this[400].x && this[366].y == 1 && v123 != 1 )
  {
    v98 = 10LL;
LABEL_304:
    v99 = 0uLL;
    v100 = 0LL;
    v116 = 0uLL;
    v117 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(v96, v98, &v116);
  }
}
