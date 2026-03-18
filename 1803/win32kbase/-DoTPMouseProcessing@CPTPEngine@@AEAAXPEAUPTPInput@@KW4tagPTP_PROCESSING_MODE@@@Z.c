/*
 * XREFs of ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0137F18
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0139E9C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C0136A4C (-CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C0138808 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?FindNearbyContact@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@PEAUCContactState@@UtagPOINT@@K@Z @ 0x1C0138C58 (-FindNearbyContact@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@PEAUCContactState@@Ut.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C0139240 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0139DFC (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C013AF68 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@HK@Z @ 0x1C013B2D4 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@HK@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C013B384 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C013B3DC (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C013B5A0 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C013B650 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1C013B994 (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C013BACC (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

void __fastcall CPTPEngine::DoTPMouseProcessing(__int64 a1, __int64 *a2, int a3, int a4)
{
  __int64 v4; // r15
  struct tagPOINT *v5; // r14
  int v6; // r11d
  int v7; // r9d
  int v10; // r13d
  LONG y; // r8d
  int v12; // r10d
  unsigned int v13; // edx
  __int64 v14; // rbx
  bool v15; // cl
  bool v16; // r12
  int v17; // eax
  int v18; // eax
  int v19; // r9d
  __int64 v20; // r10
  bool v21; // r11
  int v22; // eax
  bool v23; // r8
  int v24; // eax
  struct tagPOINT *v25; // r9
  _DWORD *v26; // rcx
  int v27; // ecx
  int v28; // eax
  struct tagPOINT *v29; // r12
  __int64 v30; // rax
  unsigned __int64 v31; // r14
  __int64 v32; // rbx
  struct CContactState *v33; // r12
  __int64 v34; // rbx
  int v35; // r14d
  struct tagPOINT v36; // rbx
  unsigned int v37; // edx
  int v38; // eax
  __int64 v39; // r14
  int v40; // r13d
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // xmm1_8
  int v44; // edx
  int v45; // r8d
  int v46; // ecx
  LONG x; // r15d
  struct tagPOINT v48; // rbx
  unsigned __int64 v49; // r12
  int v50; // eax
  struct tagPOINT *v51; // [rsp+48h] [rbp-69h]
  struct tagPOINT *v52; // [rsp+50h] [rbp-61h]
  _DWORD *v53; // [rsp+58h] [rbp-59h]
  int v54[2]; // [rsp+60h] [rbp-51h] BYREF
  int v55; // [rsp+68h] [rbp-49h]
  __int128 v56; // [rsp+78h] [rbp-39h] BYREF
  __int64 v57; // [rsp+88h] [rbp-29h]
  int v58; // [rsp+98h] [rbp-19h]
  int v59; // [rsp+9Ch] [rbp-15h]
  __int128 v60; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v61; // [rsp+B8h] [rbp+7h]
  struct CContactState *v62; // [rsp+C8h] [rbp+17h]
  int v63; // [rsp+120h] [rbp+6Fh]
  struct tagPOINT v64; // [rsp+120h] [rbp+6Fh]

  v4 = *a2;
  v5 = (struct tagPOINT *)((char *)a2 + 52);
  *(_QWORD *)v54 = (char *)a2 + 52;
  v6 = a4;
  v7 = a3;
  v52 = 0LL;
  v10 = 0;
  v51 = 0LL;
  v53 = 0LL;
  v58 = 0;
  v59 = 0;
  v63 = 0;
  v55 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    return;
  while ( 1 )
  {
    y = v5[1].y;
    if ( !y )
      goto LABEL_70;
    v12 = *(_DWORD *)(a1 + 3004);
    v13 = v5->y % *(_DWORD *)(a1 + 16);
    v14 = 296LL * v13 + a1 + 1192;
    v62 = (struct CContactState *)v14;
    v15 = v12 == 2 && *(_DWORD *)(a1 + 2968) == v13;
    v16 = v6 == 2 && *(_DWORD *)(a1 + 2968) == v13;
    if ( (y & 0x40000) != 0
      || (v17 = *(_DWORD *)v14, (*(_DWORD *)v14 & 4) == 0)
      || v17 >= 0
      || (v17 & 0x80u) != 0 && v7 != 1 && !v15
      || (v18 = *(_DWORD *)(a1 + 3296), (v18 & 2) != 0)
      || (v18 & 4) != 0 )
    {
      v27 = *(_DWORD *)(a1 + 3296);
      if ( (v27 & 0x100000) == 0 && v12 != 2 && (y & 0x48000) == 0x40000 )
      {
        v28 = *(_DWORD *)v14;
        if ( (*(_DWORD *)v14 & 0x20) != 0
          && (v28 & 0x10) == 0
          && ((v28 & 0x400000) == 0 || (v28 & 4) == 0 || v16 && (v27 & 0x40000000) == 0)
          && (v28 & 0x10000000) != 0
          && ((v28 & 8) == 0 || v16 && (v27 & 0x40000000) == 0) )
        {
          v24 = v63;
          v10 = 1;
          v25 = v52;
          v29 = v5;
          v26 = v53;
          v51 = v5;
          goto LABEL_72;
        }
      }
      if ( (y & 0x48000) == 0x40000 && (*(_DWORD *)(a1 + 220) & 0x100) != 0 )
      {
        v30 = *(_QWORD *)(v14 + 104);
        if ( v30 != *(_QWORD *)(v14 + 64) )
        {
          v31 = *(_QWORD *)(a1 + 96);
          v32 = v4 - v30;
          if ( v4 - v30 >= v31 * *(unsigned int *)(a1 + 268) / 0x3E8 )
          {
            v5 = *(struct tagPOINT **)v54;
          }
          else
          {
            if ( CPTPEngine::CrossedTPMoveFilteringThreshold(
                   (CPTPEngine *)a1,
                   v62,
                   *(struct tagPOINT *)((char *)v62 + 24))
              || !v16
              || (v33 = v62, *((_DWORD *)a2 + 7) == *((_DWORD *)v62 + 14))
              && *((_DWORD *)a2 + 8) == *((_DWORD *)v62 + 15) )
            {
              v5 = *(struct tagPOINT **)v54;
              goto LABEL_68;
            }
            CBasePTPEngine::SendWarpbackTelemetry(
              a1,
              14LL,
              *(__int64 *)((char *)a2 + 28),
              *((_QWORD *)v62 + 7),
              1000 * v32 / v31);
            CBasePTPEngine::SendMouseOutput(a1, 5LL, *((_QWORD *)v33 + 7));
            v5 = *(struct tagPOINT **)v54;
LABEL_44:
            v6 = a4;
          }
        }
      }
LABEL_70:
      v24 = v63;
      v25 = v52;
      v26 = v53;
      goto LABEL_71;
    }
    v19 = *(_DWORD *)(a1 + 3296);
    if ( v12 != 2 && (v18 & 0x400000) == 0 && (v18 & 0x200000) != 0 )
    {
      v19 = v18 | 0x400000;
      *(_QWORD *)(a1 + 3176) = v4;
      *(_DWORD *)(a1 + 3296) = v18 | 0x400000;
    }
    v20 = *(_QWORD *)(a1 + 96);
    v21 = (v19 & 0x200000) == 0
       || v4 - *(_QWORD *)(a1 + 3176) >= v20 * (unsigned __int64)*(unsigned int *)(a1 + 184) / 0x3E8;
    v22 = v19;
    if ( (v19 & 0x8000000) == 0 && (v19 & 0x4000000) != 0 && a3 == 1 )
    {
      v22 = v19 | 0x8000000;
      *(_QWORD *)(a1 + 3192) = v4;
      *(_DWORD *)(a1 + 3296) = v19 | 0x8000000;
    }
    v23 = (v22 & 0x4000000) == 0
       || v4 - *(_QWORD *)(a1 + 3192) >= v20 * (unsigned __int64)*(unsigned int *)(a1 + 364) / 0x3E8;
    if ( !v21 || !v23 || v4 - *(_QWORD *)(v14 + 72) < v20 * (unsigned __int64)*(unsigned int *)(a1 + 528) / 0x3E8 )
      goto LABEL_68;
    v54[0] = 0;
    if ( !(unsigned int)CPTPEngine::TPAAPShouldAllowMoveNow(
                          (CPTPEngine *)a1,
                          (struct PTPInput *)a2,
                          (struct CContactState *)v14,
                          v54) )
    {
      if ( v54[0] )
      {
        CPTPEngine::ResetDragThresholds((CPTPEngine *)a1, (struct PTPInput *)a2);
        *(_DWORD *)(a1 + 3004) = 1;
        goto LABEL_44;
      }
LABEL_68:
      v6 = a4;
      goto LABEL_70;
    }
    v6 = a4;
    v24 = 1;
    v63 = 1;
    v25 = v5;
    v52 = v5;
    v26 = (_DWORD *)v14;
    v53 = (_DWORD *)v14;
LABEL_71:
    v29 = v51;
LABEL_72:
    v5 += 12;
    *(_QWORD *)v54 = v5;
    if ( (unsigned int)++v55 >= *((_DWORD *)a2 + 12) )
      break;
    v7 = a3;
  }
  if ( v24 )
  {
    if ( v10 )
    {
      if ( (*v26 & 0x80u) == 0 && (*v26 & 0x10) != 0 )
        v10 = 0;
      v24 = v63;
LABEL_81:
      if ( v10 )
      {
        v34 = 296LL * (unsigned int)(v29->y % *(_DWORD *)(a1 + 16)) + a1 + 1192;
        if ( *(_DWORD *)(a1 + 3096) <= *(_DWORD *)(v34 + 132) )
        {
          if ( (unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)a1, (struct PTPInput *)a2, 0xAu, 1, 1) )
          {
            if ( !(unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)a1, (struct PTPInput *)a2, 0)
              && !CPTPEngine::FindNearbyContact(
                    (CPTPEngine *)a1,
                    (struct PTPInput *)a2,
                    (struct CContactState *)v34,
                    v29[5],
                    *(_DWORD *)(a1 + 396))
              && (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
            {
              v35 = *(_DWORD *)(a1 + 3092);
              *(_QWORD *)(a1 + 3032) = *(__int64 *)((char *)a2 + 28);
              *(_QWORD *)(a1 + 3040) = *(_QWORD *)(v34 + 8);
              *(_DWORD *)(a1 + 3092) = *((_DWORD *)a2 + 6);
              if ( !*((_DWORD *)a2 + 10) || (CBasePTPEngine::SendInertiaOutput(a1, 3LL), !*((_DWORD *)a2 + 10)) )
              {
                LODWORD(v56) = 1;
                v61 = v57;
                v60 = v56;
                CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v60);
                LODWORD(v56) = 0;
                *(_QWORD *)((char *)&v56 + 4) = v4 - *(_QWORD *)(v34 + 72);
                v61 = v57;
                v60 = v56;
                CBasePTPEngine::SendTelemetryOutput(a1, 5LL, &v60);
                *(_QWORD *)(a1 + 3256) = v4;
                CPTPEngine::SendMouseUpIfPending(
                  (CPTPEngine *)a1,
                  (unsigned int *)(a1 + 2972),
                  *((_DWORD *)a2 + 6) - v35);
                if ( (*(_DWORD *)(a1 + 3296) & 8) == 0 )
                {
                  if ( (*(_DWORD *)v34 & 4) != 0 )
                  {
                    if ( (*(_DWORD *)(a1 + 220) & 0x400) != 0
                      && !*(_DWORD *)(a1 + 2988)
                      && (*(_DWORD *)(v34 + 56) != *((_DWORD *)a2 + 7) || *(_DWORD *)(v34 + 60) != *((_DWORD *)a2 + 8)) )
                    {
                      CBasePTPEngine::SendWarpbackTelemetry(
                        a1,
                        15LL,
                        *(__int64 *)((char *)a2 + 28),
                        *(_QWORD *)(v34 + 56),
                        (unsigned __int64)(1000 * (v4 - *(_QWORD *)(v34 + 72))) / *(_QWORD *)(a1 + 96));
                      CBasePTPEngine::SendMouseOutput(a1, 5LL, *(_QWORD *)(v34 + 56));
                    }
                    CPTPEngine::SendMouseDownAtPoint(
                      (CPTPEngine *)a1,
                      2u,
                      *((_DWORD *)a2 + 6) - *(_DWORD *)(v34 + 132),
                      *(_DWORD *)(a1 + 3092),
                      *(struct tagPOINT *)(v34 + 56),
                      -__CFSHR__(*(_DWORD *)(a1 + 424), 3),
                      *(_DWORD *)(a1 + 188));
                    *(_DWORD *)v34 &= ~4u;
                  }
                  else
                  {
                    CPTPEngine::SendMouseDownAtPoint(
                      (CPTPEngine *)a1,
                      2u,
                      *((_DWORD *)a2 + 6) - *(_DWORD *)(v34 + 132),
                      *(_DWORD *)(a1 + 3092),
                      *(struct tagPOINT *)((char *)a2 + 28),
                      -__CFSHR__(*(_DWORD *)(a1 + 424), 3),
                      *(_DWORD *)(a1 + 188));
                  }
                  *(_DWORD *)(a1 + 3296) |= 8u;
                  CPTPEngine::ResetDragThresholds((CPTPEngine *)a1, (struct PTPInput *)a2);
                }
              }
            }
          }
        }
        return;
      }
    }
    if ( !v24 )
      return;
    v36 = v25[5];
    v37 = v25->y % *(_DWORD *)(a1 + 16);
    v38 = *(_DWORD *)(a1 + 3296);
    v39 = 296LL * v37 + a1 + 1192;
    if ( (v38 & 0x8000000) != 0 )
    {
      v38 &= 0xF3FFFFFF;
      *(_DWORD *)(a1 + 3296) = v38;
    }
    if ( *(_DWORD *)(a1 + 3004) == 2 )
    {
      v40 = v58;
    }
    else
    {
      *(_DWORD *)(a1 + 3004) = 2;
      *(_DWORD *)(a1 + 3296) = v38 & 0xFF9FFFFF;
      v40 = 1;
      v41 = a1 + 1192;
      *(_DWORD *)(a1 + 2968) = v37;
      while ( v41 != a1 + 2968 )
      {
        *(_QWORD *)(v41 + 96) = 0LL;
        v41 += 296LL;
      }
      *(_QWORD *)(v39 + 96) = v4;
    }
    v42 = *(_DWORD *)(a1 + 3296);
    if ( (v42 & 0x800000) != 0 )
    {
      v40 = 1;
      *(_DWORD *)(a1 + 3296) = v42 & 0xFF7FFFFF;
    }
    else
    {
      if ( !v40 )
      {
        v44 = v36.x - *(_DWORD *)(a1 + 3048);
        v45 = v36.y - *(_DWORD *)(a1 + 3052);
LABEL_117:
        v46 = *(_DWORD *)(a1 + 148);
        v64.x = 100 * v44 / v46;
        x = v64.x;
        v64.y = 100 * v45 / v46;
        v48 = v64;
        v49 = HIDWORD(*(unsigned __int64 *)&v64);
        if ( !v40 )
        {
          x = v64.x - *(_DWORD *)(a1 + 3056);
          LODWORD(v49) = 100 * v45 / v46 - *(_DWORD *)(a1 + 3060);
          v48 = (struct tagPOINT)__PAIR64__(v49, x);
        }
        *(struct tagPOINT *)(a1 + 3056) = v64;
        if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                              (CPTPEngine *)a1,
                              (struct PTPInput *)a2,
                              v48,
                              (struct CContactState *)v39)
          && (x || (_DWORD)v49) )
        {
          v50 = *(_DWORD *)(a1 + 3296);
          if ( (v50 & 0x40000000) == 0 )
          {
            LODWORD(v60) = 10;
            v57 = v61;
            v56 = v60;
            CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v56);
            v50 = *(_DWORD *)(a1 + 3296);
          }
          *(_DWORD *)(a1 + 3296) = v50 | 0x40000000;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(a1, 0LL, v48);
        }
        return;
      }
      v43 = v57;
      LODWORD(v56) = 1;
      *(_DWORD *)(a1 + 3296) = v42 & 0xBFFFFFFF;
      *(_QWORD *)((char *)&v56 + 4) = v4 - *(_QWORD *)(v39 + 64);
      v61 = v43;
      v60 = v56;
      CBasePTPEngine::SendTelemetryOutput(a1, 5LL, &v60);
    }
    if ( (*(_DWORD *)v39 & 2) != 0 )
    {
      v44 = v59;
      v45 = v59;
    }
    else
    {
      v44 = v36.x - *(_DWORD *)(v39 + 24);
      v45 = v36.y - *(_DWORD *)(v39 + 28);
    }
    *(_QWORD *)(a1 + 3048) = *(_QWORD *)(v39 + 24);
    *(_DWORD *)v39 &= ~0x1000000u;
    goto LABEL_117;
  }
  if ( v10 )
    goto LABEL_81;
}
