/*
 * XREFs of ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1C01358C0 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C005DDC8 (PtInRect.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z @ 0x1C01326C8 (-CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z.c)
 *     ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C0132A68 (-DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z.c)
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0132CA4 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C01338B4 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0133D7C (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x1C013477C (-FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C0134880 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C0134C50 (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C0134EA0 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0134F08 (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x1C0135060 (-PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C0135090 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C01358D8 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135C24 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0136CD4 (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0136DB8 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C0137118 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01371DC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C013732C (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0137568 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C013770C (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0137E8C (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 */

void __fastcall CPTPEngine::RunStateMachine(CPTPEngine *this, struct PTPInput *a2)
{
  int v2; // r13d
  int v3; // esi
  int v4; // r12d
  int v5; // r14d
  int v6; // edi
  struct PTPInput *v7; // r15
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // r8d
  int v13; // eax
  int v14; // ecx
  unsigned __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // eax
  char *v18; // r13
  unsigned int v19; // edx
  int v20; // r12d
  char *v21; // rsi
  int v22; // eax
  int v23; // r14d
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  char *v27; // r13
  unsigned int v28; // r9d
  char *v29; // r8
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // eax
  __int64 v33; // r8
  bool v34; // dl
  bool v35; // al
  bool v36; // zf
  int v37; // eax
  unsigned int v38; // r14d
  int v39; // ecx
  int v40; // r8d
  int v41; // esi
  int v42; // eax
  int v43; // eax
  CPTPEngine *v44; // rax
  char v45; // dl
  int v46; // ecx
  unsigned int i; // r14d
  unsigned int v48; // edx
  int v49; // ecx
  __int64 v50; // rsi
  int v51; // eax
  struct CContactState *v52; // rdx
  __int64 v53; // r10
  int v54; // ecx
  int v55; // eax
  unsigned int v56; // r13d
  unsigned int v57; // r13d
  unsigned int v58; // esi
  unsigned int v59; // r11d
  _DWORD *v60; // r10
  __int64 v61; // r12
  char *v62; // r9
  __int64 v63; // r14
  __int64 v64; // r8
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // r8
  int v67; // eax
  int v68; // eax
  BOOL v69; // r14d
  int v70; // r13d
  int v71; // eax
  int v72; // edx
  int v73; // r12d
  int v74; // ecx
  int v75; // r8d
  char v76; // al
  bool v77; // si
  int v78; // edx
  int v79; // r8d
  int v80; // esi
  unsigned int v81; // r9d
  char *v82; // rcx
  __int64 v83; // r8
  int v84; // ecx
  __int64 v85; // rdx
  int v86; // edx
  unsigned int v87; // r8d
  int v88; // eax
  int v89; // ecx
  unsigned int v90; // eax
  unsigned int v91; // eax
  __int64 v92; // rcx
  int v93; // eax
  __int128 v94; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v95; // [rsp+40h] [rbp-C0h]
  unsigned int v96; // [rsp+50h] [rbp-B0h]
  int v97; // [rsp+54h] [rbp-ACh]
  int v98; // [rsp+58h] [rbp-A8h]
  int v99; // [rsp+5Ch] [rbp-A4h]
  unsigned int v100; // [rsp+64h] [rbp-9Ch]
  int v101; // [rsp+68h] [rbp-98h] BYREF
  int v102; // [rsp+6Ch] [rbp-94h]
  int v103; // [rsp+70h] [rbp-90h] BYREF
  int v104; // [rsp+74h] [rbp-8Ch] BYREF
  int v105; // [rsp+78h] [rbp-88h] BYREF
  int v106; // [rsp+7Ch] [rbp-84h]
  int v107; // [rsp+80h] [rbp-80h]
  int GestureAndMarkGesturingContactsAsNonResting; // [rsp+84h] [rbp-7Ch]
  int v109; // [rsp+88h] [rbp-78h] BYREF
  __int128 v110; // [rsp+90h] [rbp-70h] BYREF
  __int64 v111; // [rsp+A0h] [rbp-60h]
  unsigned int v112; // [rsp+B0h] [rbp-50h]
  int v113; // [rsp+B4h] [rbp-4Ch]
  int v114; // [rsp+B8h] [rbp-48h]
  int v115; // [rsp+BCh] [rbp-44h]
  int v116; // [rsp+C0h] [rbp-40h]
  unsigned int v117; // [rsp+C8h] [rbp-38h]
  __int128 v118; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v119; // [rsp+E0h] [rbp-20h]
  __int128 v120; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v121; // [rsp+100h] [rbp+0h]
  unsigned int v122; // [rsp+160h] [rbp+60h]
  int v124; // [rsp+170h] [rbp+70h]
  int v125; // [rsp+178h] [rbp+78h]

  v2 = *((_DWORD *)a2 + 9);
  v106 = 0;
  v3 = 0;
  v107 = 0;
  v4 = 0;
  v122 = 0;
  v5 = 0;
  v6 = 1;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v7 = a2;
  v101 = 0;
  v109 = 0;
  v98 = 0;
  v96 = 0;
  GestureAndMarkGesturingContactsAsNonResting = 0;
  v124 = 0;
  v97 = 0;
  v99 = 0;
  v9 = *((_DWORD *)a2 + 16) & 0x70;
  v102 = v2;
  *((_DWORD *)this + 749) = v9;
  CPTPEngine::HandleButtonSuppressionAndPendingUps(this, a2, v2);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive(this) )
  {
    v94 = 0uLL;
    v95 = 0LL;
    v110 = 0uLL;
    v111 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 8LL, &v110);
  }
  v10 = *((_DWORD *)this + 820);
  if ( (v10 & 1) == 0 && (v10 & 2) == 0 && (v10 & 4) == 0 )
  {
    v11 = 0LL;
    v12 = 0;
    do
    {
      if ( v12 >= 6 )
        break;
      v13 = *((_DWORD *)this + 74 * v12 + 298);
      if ( (v13 & 1) != 0 && (v13 & 0x80u) == 0 )
        v11 = 1LL;
      ++v12;
    }
    while ( !(_DWORD)v11 );
    if ( !(_DWORD)v11 && *((_DWORD *)v7 + 12) != *((_DWORD *)this + 746) + *((_DWORD *)this + 748) )
    {
      CBasePTPEngine::SendInertiaOutput(this, v11);
      if ( *((_DWORD *)v7 + 10) )
        *((_DWORD *)this + 820) &= 0xFF7FDFFF;
      if ( *((_DWORD *)this + 5) )
        v14 = *((_DWORD *)this + 102);
      else
        v14 = 0;
      v15 = *((_QWORD *)this + 401);
      if ( v15 && *((_QWORD *)v7 + 1) > v15 && v14 > 0 )
        CPTPEngine::TPAAPSetCurtainState(this, 1);
      *((_QWORD *)this + 401) = *(_QWORD *)v7;
      if ( *((_QWORD *)v7 + 2) > *((_QWORD *)v7 + 1) )
      {
        *(_QWORD *)&v110 = *((_QWORD *)v7 + 2);
        v95 = v111;
        v94 = v110;
        CBasePTPEngine::SendTelemetryOutput(this, 0LL, &v94);
      }
    }
  }
  v16 = *((_DWORD *)this + 749);
  v114 = v16 & 0x10;
  v113 = v114 != 0;
  v116 = v16 & 0x40;
  v115 = v16 & 0x20;
  v17 = *((_DWORD *)this + 820) & 0xFFFDFFFF;
  v117 = (*((_DWORD *)this + 820) & 0x20000u) >> 17;
  v125 = *((_DWORD *)this + 750);
  *((_DWORD *)this + 820) = v17;
  if ( v2 )
    goto LABEL_198;
  *((_DWORD *)this + 748) = 0;
  v18 = (char *)v7 + 52;
  v100 = 0;
  if ( *((_DWORD *)v7 + 12) )
  {
    do
    {
      v19 = *((_DWORD *)v18 + 1) % *((_DWORD *)this + 4);
      *((_DWORD *)v18 + 3) &= 0xFFFFFF8F;
      v20 = *((_DWORD *)v18 + 3);
      v112 = v19;
      v21 = (char *)this + 296 * v19 + 1192;
      if ( (*(_DWORD *)v21 & 1) != 0 && ((*(_DWORD *)v21 & 0x8000000) == 0 || (v20 & 0x60000) == 0) )
      {
        LODWORD(v110) = 0;
        v95 = v111;
        v94 = v110;
        CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v94);
        *(_DWORD *)v21 &= 0xF7FFFFFE;
      }
      v22 = *(_DWORD *)v21;
      if ( (*(_DWORD *)v21 & 0x8000000) == 0 )
      {
        v99 = 1;
        *(_DWORD *)v21 = v22 | 0x8000000;
        *((_QWORD *)v21 + 9) = *((_QWORD *)v18 + 10);
        *(_QWORD *)(v21 + 12) = *((_QWORD *)v18 + 5);
        *((_DWORD *)v21 + 36) = *((_DWORD *)v18 + 1);
      }
      v23 = 0;
      if ( (*(_DWORD *)v21 & 1) == 0 )
      {
        v23 = (*((_DWORD *)v18 + 3) >> 23) & 4;
        if ( (unsigned int)CPTPEngine::PointInsideCurtainRegion(this, *(struct tagPOINT *)(v18 + 40))
          && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, v7, 0x40u, 0, 0) )
        {
          v23 |= 2u;
        }
        if ( (*((_DWORD *)this + 820) & 0x8000000) != 0
          && (*((_DWORD *)this + 55) & 2) != 0
          && !PtInRect((_DWORD *)this + 808, *((_QWORD *)v18 + 5))
          && (*(_QWORD *)v7 - *((_QWORD *)v21 + 9) >= *((_QWORD *)this + 12)
                                                    * (unsigned __int64)*((unsigned int *)this + 45)
                                                    / 0x3E8
           || *((_DWORD *)v7 + 12) == 1
           || !(unsigned int)CPTPEngine::FindContactToBreakSuperCurtains(this, v7, (struct CContactState *)v21)) )
        {
          v23 |= 1u;
        }
        if ( v23 || (v20 & 0x40000) != 0 )
          *((_DWORD *)v18 + 3) = 0;
      }
      *((_DWORD *)v21 + 73) = v23;
      if ( *((_DWORD *)v18 + 3) )
      {
        CPTPEngine::UpdateTPStateIndicator(
          this,
          v7,
          (struct CContactState *)v21,
          (struct PTPEnginePointerNode *)v18,
          &v101);
        if ( (*(_DWORD *)v21 & 2) != 0 )
        {
          ++v98;
          v96 = v112;
          *(_QWORD *)&v110 = *(_QWORD *)v7;
          v124 = 1;
          v119 = v111;
          v118 = v110;
          CBasePTPEngine::SendTelemetryOutput(this, 3LL, &v118);
          if ( *((_DWORD *)v21 + 2) < *((_DWORD *)this + 805) )
          {
            v24 = CPTPEngine::PointInsideCurtainRegion(this, *(struct tagPOINT *)(v21 + 4));
            v25 = v97;
            if ( !v24 )
              v25 = 1;
            v97 = v25;
          }
        }
        v26 = v122 + 1;
        if ( (*((_DWORD *)v18 + 3) & 0x40000) != 0 )
          v26 = v122;
        v122 = v26;
      }
      else if ( (v20 & 0x2000006) != 0 )
      {
        ++*((_DWORD *)this + 748);
      }
      else
      {
        if ( (*(_DWORD *)v21 & 1) != 0 )
        {
          LODWORD(v110) = 0;
          v121 = v111;
          v120 = v110;
          CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v120);
          *(_DWORD *)v21 &= ~1u;
        }
        *(_DWORD *)v21 &= ~0x8000000u;
      }
      v18 += 96;
      ++v100;
    }
    while ( v100 < *((_DWORD *)v7 + 12) );
    v3 = v101;
    v5 = v97;
    v4 = v98;
  }
  *((_DWORD *)this + 746) = 0;
  v27 = (char *)v7 + 52;
  v28 = 0;
  if ( *((_DWORD *)v7 + 12) )
  {
    v29 = (char *)v7 + 64;
    do
    {
      v30 = 296LL * (unsigned int)(*((_DWORD *)v29 - 2) % *((_DWORD *)this + 4));
      v31 = *(_DWORD *)((char *)this + v30 + 1192);
      if ( (v31 & 1) != 0 )
      {
        if ( (*(_DWORD *)v29 & 0x40000) == 0 && (v31 & 0x80u) != 0 )
          ++*((_DWORD *)this + 746);
        if ( v124 )
        {
          *(_QWORD *)((char *)this + v30 + 1228) = *(_QWORD *)(v29 + 28);
          *(_QWORD *)((char *)this + v30 + 1312) = *(_QWORD *)v7;
          v32 = *((_DWORD *)v7 + 6);
          *(_DWORD *)((char *)this + v30 + 1192) &= ~0x20000u;
          *(_DWORD *)((char *)this + v30 + 1320) = v32;
        }
      }
      v29 += 96;
      ++v28;
    }
    while ( v28 < *((_DWORD *)v7 + 12) );
  }
  *((_DWORD *)this + 747) = v122 - *((_DWORD *)this + 746);
  if ( v122 < 2 )
    goto LABEL_93;
  if ( *((_DWORD *)this + 750) != 3 && !*((_DWORD *)this + 749) )
    GestureAndMarkGesturingContactsAsNonResting = CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(this, v7);
  if ( *((_DWORD *)this + 750) != 2 )
    goto LABEL_93;
  v33 = 296LL * *((unsigned int *)this + 742);
  v34 = __CFSHR__(*(_DWORD *)((char *)this + v33 + 1192), 8) && *((_DWORD *)this + 747);
  v35 = __CFSHR__(*(_DWORD *)((char *)this + v33 + 1192), 8)
     && *(_DWORD *)((char *)this + v33 + 1216) >= *((_DWORD *)this + 805);
  if ( v34 || v5 )
  {
    v37 = v124;
  }
  else
  {
    v36 = !v35;
    v37 = v124;
    if ( v36 || !v124 )
      goto LABEL_94;
  }
  *((_DWORD *)this + 750) = 1;
  if ( v37 )
  {
    CPTPEngine::ResetDragThresholds(this, v7);
LABEL_93:
    v37 = v124;
  }
LABEL_94:
  if ( (v99 || v37) && *((_DWORD *)this + 750) == 1 )
    CPTPEngine::ResetDragThresholds(this, v7);
  if ( v3 && *((_DWORD *)v7 + 12) == 1 )
    CBasePTPEngine::SendInertiaOutput(this, 2LL);
  if ( !*((_DWORD *)this + 815) || !v4 )
    goto LABEL_114;
  if ( v4 == 1 && (*((_DWORD *)this + 105) & 4) != 0 )
  {
    v38 = v96;
    v39 = *(_QWORD *)((char *)this + 3036) - *(_QWORD *)((char *)this + 296 * v96 + 1196);
    v40 = HIDWORD(*(_QWORD *)((char *)this + 3036)) - HIDWORD(*(_QWORD *)((char *)this + 296 * v96 + 1196));
    if ( v40 * v40 + v39 * v39 <= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 48) * *((_DWORD *)this + 48)) )
    {
      v41 = 1;
      goto LABEL_109;
    }
  }
  else
  {
    v38 = v96;
  }
  v41 = 0;
LABEL_109:
  if ( *((_DWORD *)this + 816) && !v41 )
    *((_DWORD *)this + 820) &= ~8u;
  CPTPEngine::CancelMouseUpTimer(this, *((_DWORD *)v7 + 6) - *((_DWORD *)this + 817), v41 ^ 1);
  if ( v41 )
  {
    v42 = *((_DWORD *)this + 816);
    *((_DWORD *)this + 816) = 0;
    *((_DWORD *)this + 743) = v42;
    *((_DWORD *)this + 74 * v38 + 298) |= 0x4000u;
  }
LABEL_114:
  if ( *((_DWORD *)this + 750) == 1 )
  {
    v43 = *((_DWORD *)this + 743);
    if ( v43 )
    {
      if ( *((_DWORD *)this + 747) > 1u )
      {
        if ( v43 == 4 )
        {
          *((_DWORD *)this + 820) &= ~8u;
        }
        else if ( v43 == 16 )
        {
          *((_DWORD *)this + 820) &= ~0x10u;
        }
        CPTPEngine::SendMouseUpIfPending(
          this,
          (unsigned int *)this + 743,
          *((_DWORD *)v7 + 6) - *((_DWORD *)this + 772));
      }
    }
  }
  if ( *((_DWORD *)this + 815) )
  {
    v44 = (CPTPEngine *)((char *)this + 1192);
    v45 = 0;
    while ( v44 != (CPTPEngine *)((char *)this + 2968) )
    {
      v46 = *(_DWORD *)v44;
      if ( (*(_DWORD *)v44 & 1) != 0 && (v46 & 0x80u) != 0 && (v46 & 4) != 0 )
        v45 = 1;
      v44 = (CPTPEngine *)((char *)v44 + 296);
    }
    if ( *((_DWORD *)this + 747) || v45 )
    {
      if ( *((_DWORD *)this + 816) )
        *((_DWORD *)this + 820) &= ~8u;
      CPTPEngine::CancelMouseUpTimer(this, *((_DWORD *)v7 + 6) - *((_DWORD *)this + 817), 1);
    }
  }
  if ( *((_DWORD *)this + 747) > 2u )
    *((_DWORD *)this + 820) |= 0x80000u;
  for ( i = 0; i < *((_DWORD *)v7 + 12); v27 += 96 )
  {
    v48 = *((_DWORD *)v27 + 1) % *((_DWORD *)this + 4);
    v49 = *((_DWORD *)v27 + 3);
    v50 = 296LL * v48;
    if ( v49 )
    {
      v51 = *(_DWORD *)((char *)this + v50 + 1192);
      if ( (v51 & 0x20000) != 0 && (*((_DWORD *)this + 750) != 2 || v48 != *((_DWORD *)this + 742)) )
        v106 = 1;
      if ( (v51 & 4) != 0 && (*((_DWORD *)this + 750) != 2 || v48 != *((_DWORD *)this + 742)) )
        v107 = 1;
      if ( *((_DWORD *)this + 750) == 2 && v48 == *((_DWORD *)this + 742) && (v49 & 0x40000) != 0 )
      {
        *((_DWORD *)this + 820) &= ~0x1000000u;
        *((_DWORD *)this + 750) = 1;
        if ( v122 )
        {
          CPTPEngine::ResetDragThresholds(this, v7);
          v52 = (CPTPEngine *)((char *)this + 1192);
          v53 = 6LL;
          do
          {
            if ( (*(_DWORD *)v52 & 1) != 0 )
            {
              CPTPEngine::SetContactRestingState(this, v52, 1);
              *(_DWORD *)v52 &= ~0x40000000u;
            }
            v52 = (struct CContactState *)((char *)v52 + 296);
            --v53;
          }
          while ( v53 );
        }
      }
      v54 = *((_DWORD *)this + 743);
      if ( v54 )
      {
        if ( *((_DWORD *)this + 750) == 5 && (*((_DWORD *)v27 + 3) & 0x40000) == 0 && v122 == 1 )
        {
          v55 = *(_DWORD *)((char *)this + v50 + 1192);
          if ( (v55 & 0x80u) != 0 && (v55 & 4) == 0 && (v55 & 0x2000) == 0 && (v55 & 0x4000) == 0 )
          {
            *((_DWORD *)this + 750) = 1;
            if ( v54 == 4 )
            {
              *((_DWORD *)this + 820) &= ~8u;
            }
            else if ( v54 == 16 )
            {
              *((_DWORD *)this + 820) &= ~0x10u;
            }
            CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 743, 0);
          }
        }
      }
      if ( *((_DWORD *)this + 750) == 2 )
        *((_DWORD *)this + 820) |= 0x1000000u;
    }
    ++i;
  }
  v56 = v122;
  if ( (unsigned int)CPTPEngine::ProcessTapsFor3orMoreContacts(this, v7, v122) )
    goto LABEL_254;
  v57 = *((_DWORD *)this + 748) + v122;
  if ( v57 > 1 && (*((_DWORD *)this + 820) & 0x100000) == 0 && (v124 || v99) )
  {
    v58 = *((_DWORD *)this + 4);
    if ( v58 )
    {
      v59 = 1;
      v60 = (_DWORD *)((char *)this + 1484);
      v61 = v58;
      do
      {
        if ( (*(v60 - 73) & 0x8000000) != 0 && (*v60 & 0xFFFFFFFB) == 0 && v59 < v58 )
        {
          v62 = (char *)this + 296 * v59 + 1264;
          v63 = v58 - v59;
          do
          {
            if ( (*((_DWORD *)v62 - 18) & 0x8000000) != 0 && (*((_DWORD *)v62 + 55) & 0xFFFFFFFB) == 0 )
            {
              v64 = *(_QWORD *)v62;
              v65 = *(_QWORD *)(v60 - 55);
              v66 = *(_QWORD *)v62 <= v65 ? v65 - v64 : v64 - v65;
              if ( v66 <= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 45) / 0x3E8 )
                *((_DWORD *)this + 820) |= 0x100000u;
            }
            v62 += 296;
            --v63;
          }
          while ( v63 );
        }
        v60 += 74;
        ++v59;
        --v61;
      }
      while ( v61 );
      v7 = a2;
    }
  }
  v67 = *((_DWORD *)this + 820);
  if ( (v67 & 0x100000) != 0 && v57 == 1 )
    *((_DWORD *)this + 820) = v67 & 0xFFCFFFFF;
  if ( (*((_DWORD *)this + 820) & 0x2000) != 0 && (unsigned int)CPTPEngine::Process2FingerTap(this, v7, v113) )
  {
LABEL_253:
    v56 = v122;
LABEL_254:
    v80 = v125;
    goto LABEL_255;
  }
  v2 = v102;
LABEL_198:
  if ( !(unsigned int)CPTPEngine::DoTPButtonProcessing(this, (struct tagPOINT *)v7, v2, v122, &v103)
    || !(unsigned int)CPTPEngine::DoTPDiscreteButtonProcessing(this, v7, &v104, &v105) )
  {
    goto LABEL_253;
  }
  if ( v2 )
    goto LABEL_296;
  if ( v103 || v104 || v105 )
  {
    v68 = *((_DWORD *)this + 750);
    if ( v68 != 3 && v68 != 6 )
      goto LABEL_253;
  }
  v69 = *((_DWORD *)this + 743) && *((_DWORD *)this + 750) != 1;
  v70 = v114;
  if ( v114 || v115 || v116 )
  {
    v71 = 1;
  }
  else
  {
    v71 = 0;
    if ( !v69 && v106 )
    {
      v72 = 1;
      goto LABEL_219;
    }
  }
  v72 = 0;
  if ( v71 || v69 )
    goto LABEL_221;
LABEL_219:
  if ( !v107 )
  {
LABEL_221:
    v73 = 0;
    goto LABEL_222;
  }
  v73 = 1;
LABEL_222:
  v74 = *((_DWORD *)this + 747);
  if ( v74 == 2
    && *((_DWORD *)this + 750) != 3
    && (*((_DWORD *)this + 820) & 0x1000000) == 0
    && v72
    && GestureAndMarkGesturingContactsAsNonResting )
  {
    v75 = 1;
  }
  else
  {
    v75 = 0;
    v76 = 0;
    if ( v74 != 2 )
      goto LABEL_232;
  }
  if ( v72 || (v76 = 0, *((_DWORD *)v7 + 10)) )
    v76 = 1;
LABEL_232:
  v77 = 0;
  if ( *((_DWORD *)this + 750) != 3 && (v75 || v76) )
  {
    CPTPEngine::MarkRecentlyTrackedContactsAsNonResting(this, v7);
    v74 = *((_DWORD *)this + 747);
    v77 = v74 == 2;
  }
  v78 = *((_DWORD *)this + 750);
  if ( v78 == 3 || v77 )
  {
    *((_DWORD *)this + 820) &= ~0x1000000u;
    v79 = 3;
  }
  else
  {
    v79 = 1;
  }
  if ( (unsigned int)(v74 - 3) <= 1 && v79 != 3 && v73 || v78 == 6 )
  {
    CPTPEngine::MarkRecentlyTrackedContactsAsNonResting(this, v7);
    v79 = 6;
  }
  if ( v79 == 3 || v79 == 6 )
  {
    CPTPEngine::DoGestureProcessing(this, v7, &v109);
    goto LABEL_253;
  }
  if ( *((_DWORD *)this + 747) >= 2u )
  {
    *((_DWORD *)this + 750) = 1;
    goto LABEL_253;
  }
  v80 = v125;
  v36 = v70 == 0;
  v56 = v122;
  if ( v36 && !v69 )
    CPTPEngine::DoTPMouseProcessing((__int64)this, (__int64 *)v7, v122, v125);
LABEL_255:
  v81 = 0;
  if ( *((_DWORD *)v7 + 12) )
  {
    v82 = (char *)v7 + 64;
    do
    {
      v83 = 296LL * (unsigned int)(*((_DWORD *)v82 - 2) % *((_DWORD *)this + 4));
      if ( (*(_DWORD *)((_BYTE *)this + v83 + 1192) & 1) != 0 && *(_DWORD *)v82 )
      {
        if ( (*(_DWORD *)v82 & 0x40000) != 0 )
        {
          if ( *((_DWORD *)this + 750) == 2 && *((_DWORD *)v82 - 2) % *((_DWORD *)this + 4) == *((_DWORD *)this + 742) )
            *((_DWORD *)this + 820) &= ~0x1000000u;
          *(_DWORD *)((char *)this + v83 + 1192) &= ~1u;
          if ( (*(_DWORD *)v82 & 0x2000000) != 0 )
            ++*((_DWORD *)this + 748);
          else
            *(_DWORD *)((char *)this + v83 + 1192) &= ~0x8000000u;
        }
        else
        {
          *(_QWORD *)((char *)this + v83 + 1272) = *(_QWORD *)(v82 + 68);
          *(_QWORD *)((char *)this + v83 + 1212) = *(_QWORD *)(v82 + 28);
        }
      }
      v82 += 96;
      ++v81;
    }
    while ( v81 < *((_DWORD *)v7 + 12) );
  }
  v84 = -__CFSHR__(*((_DWORD *)this + 820), 18);
  if ( __CFSHR__(*((_DWORD *)this + 820), 18) != v117 )
  {
    v94 = 0uLL;
    LODWORD(v95) = 0;
    if ( v84 )
      v85 = 2LL;
    else
      v85 = 3LL;
    CBasePTPEngine::SendEtwOutput(this, v85, &v94);
  }
  if ( *((_DWORD *)this + 750) != 2 )
    *((_DWORD *)this + 820) &= ~0x400000u;
  v86 = 0;
  v87 = 0;
  do
  {
    if ( v87 >= 6 )
      break;
    if ( (*((_BYTE *)this + 296 * v87 + 1192) & 1) != 0 )
      v86 = 1;
    ++v87;
  }
  while ( !v86 );
  if ( v86 )
    goto LABEL_293;
  v88 = *((_DWORD *)this + 820);
  v89 = *((_DWORD *)this + 743);
  *((_DWORD *)this + 750) = 1;
  v90 = v88 & 0xEBC7FFFF;
  *((_DWORD *)this + 820) = v90;
  if ( v89 )
  {
    if ( v89 == 4 )
    {
      v91 = v90 & 0xFFFFFFF7;
    }
    else
    {
      if ( v89 != 16 )
      {
LABEL_287:
        CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 743, 0);
        goto LABEL_288;
      }
      v91 = v90 & 0xFFFFFFEF;
    }
    *((_DWORD *)this + 820) = v91;
    goto LABEL_287;
  }
LABEL_288:
  if ( v80 == 2 )
  {
    v92 = 296LL * *((unsigned int *)this + 742);
    if ( (*(_DWORD *)((_BYTE *)this + v92 + 1192) & 0x800) != 0
      && (__int64)((unsigned __int64)(1000LL
                                    * (*(_QWORD *)((char *)this + v92 + 1272) - *(_QWORD *)((char *)this + v92 + 1288)))
                 / *((_QWORD *)this + 12)) >= *((unsigned int *)this + 130) )
    {
      *((_QWORD *)this + 406) = *(_QWORD *)((char *)this + v92 + 1272);
    }
  }
  *(_QWORD *)&v118 = *(_QWORD *)v7;
  v121 = v119;
  v120 = v118;
  CBasePTPEngine::SendTelemetryOutput(this, 1LL, &v120);
LABEL_293:
  if ( v109 )
  {
    *((_DWORD *)this + 820) &= 0xFFCFFFFF;
    *((_DWORD *)this + 750) = 1;
    *((_QWORD *)this + 400) = *(_QWORD *)v7;
  }
  *((_DWORD *)this + 744) = v56;
LABEL_296:
  if ( (unsigned int)CPTPEngine::IsTouchpadActive(this) )
  {
    v93 = *((_DWORD *)this + 820);
    if ( (v93 & 1) != 0 || (v93 & 2) != 0 || (v93 & 4) != 0 || *((_DWORD *)this + 815) || *((_DWORD *)this + 750) != 1 )
    {
      v6 = 0;
    }
    else if ( v93 >= 0 )
    {
      v94 = 0uLL;
      v95 = 0LL;
      v118 = 0uLL;
      v119 = 0LL;
      CBasePTPEngine::SendTelemetryOutput(this, 10LL, &v118);
      *((_DWORD *)this + 820) = *((_DWORD *)this + 820) & 0xABC7FFFF | 0x40000000;
    }
    *((_DWORD *)this + 820) = *((_DWORD *)this + 820) & 0x7FFFFFFF | (v6 << 31);
  }
  else
  {
    *((_DWORD *)this + 820) |= 0x80000000;
    v94 = 0uLL;
    v95 = 0LL;
    v118 = 0uLL;
    v119 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 9LL, &v118);
  }
}
