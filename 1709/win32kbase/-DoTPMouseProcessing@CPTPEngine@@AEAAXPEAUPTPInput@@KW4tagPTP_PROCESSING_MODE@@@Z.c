/*
 * XREFs of ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0133D7C
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C0132968 (-CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C01345FC (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?FindNearbyContact@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@PEAUCContactState@@UtagPOINT@@K@Z @ 0x1C0134A0C (-FindNearbyContact@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@PEAUCContactState@@Ut.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C0135090 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135C24 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0136DB8 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@@Z @ 0x1C013704C (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C01370C0 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C0137118 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01371DC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C013728C (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1C01375D4 (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C013770C (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

void __fastcall CPTPEngine::DoTPMouseProcessing(__int64 a1, __int64 *a2, int a3, int a4)
{
  __int64 v4; // r15
  char v5; // r12
  int v6; // ebx
  int v7; // r11d
  struct tagPOINT *v10; // r13
  LONG y; // r8d
  int v12; // r9d
  unsigned int v13; // edx
  __int64 v14; // r10
  char v15; // cl
  int v16; // eax
  int v17; // eax
  int v18; // r8d
  char v19; // r9
  char v20; // r8
  _DWORD *v21; // rdx
  int v22; // eax
  struct tagPOINT *v23; // r9
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  struct tagPOINT *v27; // r14
  __int64 v28; // rax
  unsigned __int64 v29; // r14
  __int64 v30; // rbx
  __int64 v31; // r12
  int v32; // r13d
  __int64 v33; // rbx
  int v34; // eax
  unsigned int v35; // edx
  struct tagPOINT v36; // rbx
  unsigned int v37; // edx
  int v38; // eax
  __int64 v39; // r14
  int v40; // r9d
  int v41; // eax
  __int64 v42; // xmm1_8
  int v43; // r8d
  int v44; // ecx
  LONG x; // r15d
  int v46; // r12d
  struct tagPOINT v47; // rbx
  int v48; // [rsp+38h] [rbp-69h]
  struct tagPOINT *v49; // [rsp+40h] [rbp-61h]
  struct tagPOINT *v50; // [rsp+48h] [rbp-59h]
  _DWORD *v51; // [rsp+50h] [rbp-51h]
  int v52; // [rsp+58h] [rbp-49h]
  int v53; // [rsp+5Ch] [rbp-45h] BYREF
  unsigned int v54; // [rsp+60h] [rbp-41h]
  __int128 v55; // [rsp+68h] [rbp-39h] BYREF
  __int64 v56; // [rsp+78h] [rbp-29h]
  int v57; // [rsp+88h] [rbp-19h]
  __int128 v58; // [rsp+98h] [rbp-9h] BYREF
  __int64 v59; // [rsp+A8h] [rbp+7h]
  __int64 v60; // [rsp+B8h] [rbp+17h]
  int v61; // [rsp+110h] [rbp+6Fh]
  struct tagPOINT v62; // [rsp+110h] [rbp+6Fh]

  v4 = *a2;
  v5 = 0;
  v6 = a4;
  v7 = a3;
  v50 = 0LL;
  v49 = 0LL;
  v51 = 0LL;
  v52 = 0;
  v57 = 0;
  v61 = 0;
  v48 = 0;
  v54 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    return;
  v10 = (struct tagPOINT *)((char *)a2 + 52);
  do
  {
    y = v10[1].y;
    if ( !y )
      goto LABEL_66;
    v12 = *(_DWORD *)(a1 + 3000);
    v13 = v10->y % *(_DWORD *)(a1 + 16);
    v14 = 296LL * v13 + a1 + 1192;
    v60 = v14;
    if ( v12 != 2 || (v15 = 1, *(_DWORD *)(a1 + 2968) != v13) )
      v15 = 0;
    if ( v6 == 2 && *(_DWORD *)(a1 + 2968) == v13 )
      v5 = 1;
    if ( (y & 0x40000) != 0
      || (v16 = *(_DWORD *)v14, (*(_DWORD *)v14 & 4) == 0)
      || v16 >= 0
      || (v16 & 0x80u) != 0 && v7 != 1 && !v15
      || (v17 = *(_DWORD *)(a1 + 3280), (v17 & 2) != 0)
      || (v17 & 4) != 0 )
    {
      v24 = *(_DWORD *)(a1 + 3280);
      if ( (v24 & 0x80000) == 0 && v12 != 2 && (y & 0x48000) == 0x40000 )
      {
        v25 = *(_DWORD *)v14;
        if ( (*(_DWORD *)v14 & 0x20) != 0
          && (v25 & 0x10) == 0
          && ((v25 & 0x400000) == 0 || (v25 & 4) == 0 || v5 && (v24 & 0x20000000) == 0)
          && (v25 & 0x10000000) != 0
          && ((v25 & 8) == 0 || v5 && (v24 & 0x20000000) == 0) )
        {
          v22 = v61;
          v26 = 1;
          v23 = v50;
          v27 = v10;
          v21 = v51;
          v5 = 0;
          v48 = 1;
          v49 = v10;
          goto LABEL_68;
        }
      }
      if ( (y & 0x48000) == 0x40000 && (*(_DWORD *)(a1 + 220) & 0x100) != 0 )
      {
        v28 = *(_QWORD *)(v14 + 104);
        if ( v28 != *(_QWORD *)(v14 + 64) )
        {
          v29 = *(_QWORD *)(a1 + 96);
          v30 = v4 - v28;
          if ( v4 - v28 < v29 * *(unsigned int *)(a1 + 268) / 0x3E8 )
          {
            if ( !CPTPEngine::CrossedTPMoveFilteringThreshold(
                    (CPTPEngine *)a1,
                    (struct CContactState *)v14,
                    *(struct tagPOINT *)(v14 + 20)) )
            {
              if ( v5 )
              {
                v31 = v60;
                if ( *((_DWORD *)a2 + 7) != *(_DWORD *)(v60 + 52) || *((_DWORD *)a2 + 8) != *(_DWORD *)(v60 + 56) )
                {
                  CBasePTPEngine::SendWarpbackTelemetry(
                    a1,
                    14LL,
                    *(__int64 *)((char *)a2 + 28),
                    *(_QWORD *)(v60 + 52),
                    1000 * v30 / v29);
                  CBasePTPEngine::SendMouseOutput(a1, 5LL, *(_QWORD *)(v31 + 52), 0LL);
                }
              }
            }
            v7 = a3;
          }
          v6 = a4;
        }
      }
      v5 = 0;
      goto LABEL_66;
    }
    if ( v12 != 2 && (v17 & 0x200000) == 0 && (v17 & 0x100000) != 0 )
    {
      *(_QWORD *)(a1 + 3168) = v4;
      *(_DWORD *)(a1 + 3280) = v17 | 0x200000;
    }
    v18 = *(_DWORD *)(a1 + 3280);
    if ( (v18 & 0x100000) != 0
      && v4 - *(_QWORD *)(a1 + 3168) < *(_QWORD *)(a1 + 96) * (unsigned __int64)*(unsigned int *)(a1 + 184) / 0x3E8 )
    {
      v5 = 0;
      v19 = 0;
    }
    else
    {
      v19 = 1;
      v5 = 0;
    }
    if ( (v18 & 0x4000000) == 0 && (v18 & 0x2000000) != 0 && v7 == 1 )
    {
      *(_QWORD *)(a1 + 3184) = v4;
      *(_DWORD *)(a1 + 3280) = v18 | 0x4000000;
    }
    if ( (*(_DWORD *)(a1 + 3280) & 0x2000000) == 0
      || (v20 = 0,
          v4 - *(_QWORD *)(a1 + 3184) >= *(_QWORD *)(a1 + 96) * (unsigned __int64)*(unsigned int *)(a1 + 364) / 0x3E8) )
    {
      v20 = 1;
    }
    if ( !v19
      || !v20
      || v4 - *(_QWORD *)(v14 + 72) < *(_QWORD *)(a1 + 96) * (unsigned __int64)*(unsigned int *)(a1 + 524) / 0x3E8 )
    {
      goto LABEL_66;
    }
    v53 = 0;
    if ( !(unsigned int)CPTPEngine::TPAAPShouldAllowMoveNow(
                          (CPTPEngine *)a1,
                          (struct PTPInput *)a2,
                          (struct CContactState *)v14,
                          &v53) )
    {
      if ( v53 )
      {
        CPTPEngine::ResetDragThresholds((CPTPEngine *)a1, (struct PTPInput *)a2);
        *(_DWORD *)(a1 + 3000) = 1;
      }
      v7 = a3;
LABEL_66:
      v22 = v61;
      v23 = v50;
      v21 = v51;
      goto LABEL_67;
    }
    v21 = (_DWORD *)v60;
    v22 = 1;
    v7 = a3;
    v23 = v10;
    v61 = 1;
    v5 = 0;
    v51 = (_DWORD *)v60;
    v50 = v10;
LABEL_67:
    v27 = v49;
    v26 = v48;
LABEL_68:
    v10 += 12;
    ++v54;
  }
  while ( v54 < *((_DWORD *)a2 + 12) );
  v32 = v57;
  if ( v22 )
  {
    if ( v26 )
    {
      if ( (*v21 & 0x80u) == 0 && (*v21 & 0x10) != 0 )
        v26 = 0;
      v22 = v61;
LABEL_77:
      if ( v26 )
      {
        v33 = 296LL * (unsigned int)(v27->y % *(_DWORD *)(a1 + 16)) + a1 + 1192;
        if ( *(_DWORD *)(a1 + 3092) <= *(_DWORD *)(v33 + 132) )
        {
          if ( (unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)a1, (struct PTPInput *)a2, 0xAu, 1, 1) )
          {
            if ( !(unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)a1, (struct PTPInput *)a2, 0)
              && !CPTPEngine::FindNearbyContact(
                    (CPTPEngine *)a1,
                    (struct PTPInput *)a2,
                    (struct CContactState *)v33,
                    v27[5],
                    *(_DWORD *)(a1 + 396))
              && (*(_DWORD *)(a1 + 412) & 0x200) != 0 )
            {
              *(_QWORD *)(a1 + 3028) = *(__int64 *)((char *)a2 + 28);
              *(_QWORD *)(a1 + 3036) = *(_QWORD *)(v33 + 4);
              *(_DWORD *)(a1 + 3088) = *((_DWORD *)a2 + 6);
              if ( !*((_DWORD *)a2 + 10) || (CBasePTPEngine::SendInertiaOutput(a1, 3LL), !*((_DWORD *)a2 + 10)) )
              {
                LODWORD(v55) = 1;
                v59 = v56;
                v58 = v55;
                CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v58);
                LODWORD(v55) = 0;
                *(_QWORD *)((char *)&v55 + 4) = v4 - *(_QWORD *)(v33 + 72);
                v59 = v56;
                v58 = v55;
                CBasePTPEngine::SendTelemetryOutput(a1, 5LL, &v58);
                *(_QWORD *)(a1 + 3248) = v4;
                v34 = *(_DWORD *)(a1 + 2972);
                if ( v34 == 4 )
                {
                  *(_DWORD *)(a1 + 3280) &= ~8u;
                }
                else if ( v34 == 16 )
                {
                  *(_DWORD *)(a1 + 3280) &= ~0x10u;
                }
                CPTPEngine::SendMouseUpIfPending(
                  (CPTPEngine *)a1,
                  (unsigned int *)(a1 + 2972),
                  *((_DWORD *)a2 + 6) - *(_DWORD *)(a1 + 3088));
                if ( (*(_DWORD *)(a1 + 3280) & 8) == 0 )
                {
                  if ( (*(_DWORD *)v33 & 4) != 0 )
                  {
                    if ( (*(_DWORD *)(a1 + 220) & 0x400) != 0
                      && !*(_DWORD *)(a1 + 2988)
                      && (*(_DWORD *)(v33 + 52) != *((_DWORD *)a2 + 7) || *(_DWORD *)(v33 + 56) != *((_DWORD *)a2 + 8)) )
                    {
                      CBasePTPEngine::SendWarpbackTelemetry(
                        a1,
                        15LL,
                        *(__int64 *)((char *)a2 + 28),
                        *(_QWORD *)(v33 + 52),
                        (unsigned __int64)(1000 * (v4 - *(_QWORD *)(v33 + 72))) / *(_QWORD *)(a1 + 96));
                      CBasePTPEngine::SendMouseOutput(
                        a1,
                        5LL,
                        *(_QWORD *)(v33 + 52),
                        (unsigned int)(*((_DWORD *)a2 + 6) - *(_DWORD *)(v33 + 132)));
                    }
                    CPTPEngine::SendMouseDownAtPoint(
                      (CPTPEngine *)a1,
                      v35,
                      *((_DWORD *)a2 + 6) - *(_DWORD *)(v33 + 132),
                      *(_DWORD *)(a1 + 3088),
                      *(struct tagPOINT *)(v33 + 52));
                    *(_DWORD *)v33 &= ~4u;
                  }
                  else
                  {
                    CPTPEngine::SendMouseDownAtPoint(
                      (CPTPEngine *)a1,
                      v35,
                      *((_DWORD *)a2 + 6) - *(_DWORD *)(v33 + 132),
                      *(_DWORD *)(a1 + 3088),
                      *(struct tagPOINT *)((char *)a2 + 28));
                  }
                  *(_DWORD *)(a1 + 3280) |= 8u;
                  CPTPEngine::ResetDragThresholds((CPTPEngine *)a1, (struct PTPInput *)a2);
                }
              }
            }
          }
        }
        return;
      }
    }
    if ( !v22 )
      return;
    v36 = v23[5];
    v37 = v23->y % *(_DWORD *)(a1 + 16);
    v38 = *(_DWORD *)(a1 + 3280);
    v39 = 296LL * v37 + a1 + 1192;
    if ( (v38 & 0x4000000) != 0 )
      *(_DWORD *)(a1 + 3280) = v38 & 0xF9FFFFFF;
    if ( *(_DWORD *)(a1 + 3000) == 2 )
    {
      v40 = v32;
    }
    else
    {
      *(_DWORD *)(a1 + 3280) &= 0xFFCFFFFF;
      v40 = 1;
      *(_DWORD *)(a1 + 3000) = 2;
      *(_DWORD *)(a1 + 2968) = v37;
      *(_QWORD *)(v39 + 96) = v4;
      v52 = 1;
    }
    v41 = *(_DWORD *)(a1 + 3280);
    if ( (v41 & 0x400000) != 0 )
    {
      v40 = 1;
      *(_DWORD *)(a1 + 3280) = v41 & 0xFFBFFFFF;
    }
    else
    {
      if ( !v40 )
      {
        v32 = v36.x - *(_DWORD *)(a1 + 3044);
        v43 = v36.y - *(_DWORD *)(a1 + 3048);
LABEL_114:
        v44 = *(_DWORD *)(a1 + 148);
        v62.x = 100 * v32 / v44;
        x = v62.x;
        v62.y = 100 * v43 / v44;
        v46 = v62.y;
        v47 = v62;
        if ( !v40 )
        {
          x = v62.x - *(_DWORD *)(a1 + 3052);
          v46 = v62.y - *(_DWORD *)(a1 + 3056);
          v47 = (struct tagPOINT)__PAIR64__(v46, x);
        }
        *(struct tagPOINT *)(a1 + 3052) = v62;
        if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                              (CPTPEngine *)a1,
                              (struct PTPInput *)a2,
                              v47,
                              (struct CContactState *)v39)
          && (x || v46) )
        {
          if ( (*(_DWORD *)(a1 + 3280) & 0x20000000) == 0 )
          {
            LODWORD(v58) = 10;
            v56 = v59;
            v55 = v58;
            CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v55);
          }
          *(_DWORD *)(a1 + 3280) |= 0x20000000u;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(a1, 0LL, v47, 0LL);
        }
        return;
      }
      v42 = v56;
      LODWORD(v55) = 1;
      *(_DWORD *)(a1 + 3280) = v41 & 0xDFFFFFFF;
      *(_QWORD *)((char *)&v55 + 4) = v4 - *(_QWORD *)(v39 + 64);
      v59 = v42;
      v58 = v55;
      CBasePTPEngine::SendTelemetryOutput(a1, 5LL, &v58);
      v40 = v52;
    }
    if ( (*(_DWORD *)v39 & 2) != 0 )
    {
      v43 = v32;
    }
    else
    {
      v32 = v36.x - *(_DWORD *)(v39 + 20);
      v43 = v36.y - *(_DWORD *)(v39 + 24);
    }
    *(_QWORD *)(a1 + 3044) = *(_QWORD *)(v39 + 20);
    *(_DWORD *)v39 &= ~0x1000000u;
    goto LABEL_114;
  }
  if ( v26 )
    goto LABEL_77;
}
