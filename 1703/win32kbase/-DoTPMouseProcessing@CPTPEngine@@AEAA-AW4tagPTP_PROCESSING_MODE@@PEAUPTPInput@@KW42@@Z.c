/*
 * XREFs of ?DoTPMouseProcessing@CPTPEngine@@AEAA?AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z @ 0x1C0134D64
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CheckDoubleTap@CPTPEngine@@AEAAHPEAUCContactState@@@Z @ 0x1C0133308 (-CheckDoubleTap@CPTPEngine@@AEAAHPEAUCContactState@@@Z.c)
 *     ?CrossedTPLiftWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C0133878 (-CrossedTPLiftWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C01357B8 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C01364F8 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0137D28 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@@Z @ 0x1C0137D6C (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C0137DE0 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C0137E38 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0137EFC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C0137FAC (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 *     ?SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z @ 0x1C013810C (-SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z.c)
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1C0138274 (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C01383B0 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

__int64 __fastcall CPTPEngine::DoTPMouseProcessing(__int64 a1, __int64 *a2, int a3, int a4)
{
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned int v6; // esi
  int v7; // r15d
  int v8; // r11d
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // edx
  __int64 v15; // rbx
  char v16; // cl
  char v17; // r13
  int v18; // eax
  int v19; // r8d
  char v20; // r9
  char v21; // al
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // r9
  _DWORD *v25; // r10
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rax
  unsigned __int64 v32; // r12
  __int64 v33; // r15
  __int64 v34; // rbx
  BOOL v35; // r15d
  int v36; // eax
  unsigned int v37; // edx
  struct tagPOINT v38; // r8
  __int64 v39; // rdx
  _DWORD *v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rbx
  unsigned int v44; // edx
  int v45; // eax
  __int64 v46; // r15
  int v47; // r9d
  int v48; // eax
  int v49; // eax
  __int64 v50; // xmm1_8
  int v51; // edx
  int v52; // r8d
  int v53; // ecx
  LONG x; // r12d
  int y; // r13d
  struct tagPOINT v56; // rbx
  int v57; // [rsp+38h] [rbp-69h]
  __int64 v58; // [rsp+40h] [rbp-61h]
  __int64 v59; // [rsp+48h] [rbp-59h]
  _DWORD *v60; // [rsp+50h] [rbp-51h]
  __int64 v61; // [rsp+58h] [rbp-49h]
  int v62; // [rsp+60h] [rbp-41h]
  __int64 v63; // [rsp+68h] [rbp-39h]
  int v64; // [rsp+70h] [rbp-31h] BYREF
  int v65; // [rsp+74h] [rbp-2Dh]
  __int128 v66; // [rsp+78h] [rbp-29h] BYREF
  __int64 v67; // [rsp+88h] [rbp-19h]
  __int128 v68; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v69; // [rsp+B8h] [rbp+17h]
  int v70; // [rsp+110h] [rbp+6Fh]
  struct tagPOINT v71; // [rsp+110h] [rbp+6Fh]

  v4 = *a2;
  v5 = (__int64)a2 + 52;
  v6 = 0;
  v63 = *a2;
  v7 = a4;
  v8 = a3;
  v59 = 0LL;
  v61 = 0LL;
  v60 = 0LL;
  v62 = 0;
  v57 = 0;
  v70 = 0;
  v58 = (__int64)a2 + 52;
  v65 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    return 1LL;
  while ( 1 )
  {
    v12 = *(_DWORD *)(v5 + 12);
    if ( !v12 )
      goto LABEL_41;
    v13 = *(_DWORD *)(a1 + 2932);
    v14 = *(_DWORD *)(v5 + 4) % *(_DWORD *)(a1 + 16);
    v15 = 288LL * v14 + a1 + 1168;
    if ( v13 != 2 || (v16 = 1, *(_DWORD *)(a1 + 2896) != v14) )
      v16 = 0;
    if ( v7 != 2 || (v17 = 1, *(_DWORD *)(a1 + 2896) != v14) )
      v17 = 0;
    if ( (v12 & 0x40000) == 0 && (*(_DWORD *)v15 & 4) != 0 && ((*(_DWORD *)v15 & 0x100) == 0 || v8 == 1 || v16) )
    {
      v18 = *(_DWORD *)(a1 + 3220);
      if ( (v18 & 2) == 0 && (v18 & 4) == 0 )
      {
        if ( v13 != 2 && (v18 & 0x400000) == 0 && (v18 & 0x200000) != 0 )
        {
          *(_QWORD *)(a1 + 3104) = v4;
          *(_DWORD *)(a1 + 3220) = v18 | 0x400000;
        }
        v19 = *(_DWORD *)(a1 + 3220);
        if ( (v19 & 0x200000) == 0
          || (v20 = 0,
              v4 - *(_QWORD *)(a1 + 3104) >= *(_QWORD *)(a1 + 96)
                                           * (unsigned __int64)*(unsigned int *)(a1 + 184)
                                           / 0x3E8) )
        {
          v20 = 1;
        }
        if ( (v19 & 0x8000000) == 0 && (v19 & 0x4000000) != 0 && v8 == 1 )
        {
          *(_QWORD *)(a1 + 3120) = v4;
          *(_DWORD *)(a1 + 3220) = v19 | 0x8000000;
        }
        if ( (*(_DWORD *)(a1 + 3220) & 0x4000000) == 0
          || (v21 = 0,
              v4 - *(_QWORD *)(a1 + 3120) >= *(_QWORD *)(a1 + 96)
                                           * (unsigned __int64)*(unsigned int *)(a1 + 364)
                                           / 0x3E8) )
        {
          v21 = 1;
        }
        if ( v20 && v21 )
        {
          v64 = 0;
          if ( (unsigned int)CPTPEngine::TPAAPShouldAllowMoveNow(
                               (CPTPEngine *)a1,
                               (struct PTPInput *)a2,
                               (struct CContactState *)v15,
                               &v64) )
          {
            v22 = v58;
            v23 = 1;
            v8 = a3;
            v24 = v58;
            v57 = 1;
            v25 = (_DWORD *)v15;
            v59 = v58;
            v60 = (_DWORD *)v15;
LABEL_42:
            v26 = v70;
            v27 = v61;
            goto LABEL_43;
          }
          if ( v64 )
          {
            if ( (*(_DWORD *)v15 & 2) == 0 )
            {
              *(_QWORD *)(v15 + 4) = *(_QWORD *)(v15 + 20);
              CPTPEngine::SetupDragRectsForContact((CPTPEngine *)a1, (struct CContactState *)v15);
            }
            *(_DWORD *)v15 &= ~4u;
            *(_DWORD *)(a1 + 2932) = 1;
          }
          v8 = a3;
        }
LABEL_41:
        v25 = v60;
        v23 = v57;
        v24 = v59;
        v22 = v58;
        goto LABEL_42;
      }
    }
    v29 = *(_DWORD *)(a1 + 3220);
    if ( (v29 & 0x100000) != 0
      || v13 == 2
      || (v12 & 0x48000) != 0x40000
      || (v30 = *(_DWORD *)v15, (*(_DWORD *)v15 & 0x20) == 0)
      || (v30 & 0x10) != 0
      || (v30 & 0x800000) != 0 && (v30 & 4) != 0 && (!v17 || (v29 & 0x40000000) != 0)
      || (v30 & 0x20000000) == 0
      || (v30 & 8) != 0 && (!v17 || (v29 & 0x40000000) != 0) )
    {
      if ( (v12 & 0x48000) == 0x40000 && (*(_DWORD *)(a1 + 220) & 0x100) != 0 )
      {
        v31 = *(_QWORD *)(v15 + 112);
        if ( v31 != *(_QWORD *)(v15 + 72) )
        {
          v32 = *(_QWORD *)(a1 + 96);
          v33 = v63 - v31;
          if ( v63 - v31 < v32 * *(unsigned int *)(a1 + 108) / 0x3E8 )
          {
            if ( !CPTPEngine::CrossedTPLiftWarpBackThreshold(
                    (CPTPEngine *)a1,
                    (struct CContactState *)v15,
                    *(struct tagPOINT *)(v15 + 20))
              && v17
              && (*((_DWORD *)a2 + 7) != *(_DWORD *)(v15 + 60) || *((_DWORD *)a2 + 8) != *(_DWORD *)(v15 + 64)) )
            {
              CBasePTPEngine::SendWarpbackTelemetry(
                a1,
                14LL,
                *(__int64 *)((char *)a2 + 28),
                *(_QWORD *)(v15 + 60),
                1000 * v33 / v32);
              CBasePTPEngine::SendMouseOutput(a1, 5LL, *(_QWORD *)(v15 + 60), *((unsigned int *)a2 + 6));
            }
            v8 = a3;
          }
          v4 = v63;
          v7 = a4;
        }
      }
      goto LABEL_41;
    }
    v22 = v58;
    v26 = 1;
    v24 = v59;
    v27 = v58;
    v23 = v57;
    v25 = v60;
    v70 = 1;
    v61 = v58;
LABEL_43:
    v28 = v22 + 96;
    v58 = v28;
    if ( (unsigned int)++v65 >= *((_DWORD *)a2 + 12) )
      break;
    v5 = v28;
  }
  if ( v23 )
  {
    if ( v26 )
    {
      if ( (*v25 & 0x100) == 0 && (*v25 & 0x10) != 0 )
        v26 = 0;
      if ( v26 )
        goto LABEL_76;
    }
    v43 = *(_QWORD *)(v24 + 40);
    v44 = *(_DWORD *)(v24 + 4) % *(_DWORD *)(a1 + 16);
    v45 = *(_DWORD *)(a1 + 3220);
    v46 = 288LL * v44 + a1 + 1168;
    if ( (v45 & 0x8000000) != 0 )
      *(_DWORD *)(a1 + 3220) = v45 & 0xF3FFFFFF;
    if ( *(_DWORD *)(a1 + 2932) == 2 )
    {
      v47 = 0;
    }
    else
    {
      v47 = 1;
      v48 = *(_DWORD *)(a1 + 3220) | 0x80000;
      *(_DWORD *)(a1 + 2932) = 2;
      *(_DWORD *)(a1 + 2896) = v44;
      *(_DWORD *)(a1 + 3220) = v48 & 0xFF9FFFFF;
      *(_QWORD *)(v46 + 104) = v4;
      v62 = 1;
    }
    v49 = *(_DWORD *)(a1 + 3220);
    if ( (v49 & 0x800000) != 0 )
    {
      v47 = 1;
      *(_DWORD *)(a1 + 3220) = v49 & 0xFF7FFFFF;
    }
    else
    {
      if ( !v47 )
      {
        v51 = v43 - *(_DWORD *)(a1 + 2984);
        v52 = HIDWORD(v43) - *(_DWORD *)(a1 + 2988);
LABEL_123:
        v53 = *(_DWORD *)(a1 + 148);
        v71.x = 100 * v51 / v53;
        x = v71.x;
        v71.y = 100 * v52 / v53;
        y = v71.y;
        v56 = v71;
        if ( !v47 )
        {
          x = v71.x - *(_DWORD *)(a1 + 2992);
          y = v71.y - *(_DWORD *)(a1 + 2996);
          v56 = (struct tagPOINT)__PAIR64__(y, x);
        }
        *(struct tagPOINT *)(a1 + 2992) = v71;
        if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                              (CPTPEngine *)a1,
                              (struct PTPInput *)a2,
                              v56,
                              (struct CContactState *)v46)
          && (x || y) )
        {
          if ( (*(_DWORD *)(a1 + 3220) & 0x40000000) == 0 )
          {
            LODWORD(v68) = 10;
            v67 = v69;
            v66 = v68;
            CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v66);
          }
          *(_DWORD *)(a1 + 3220) |= 0x40000000u;
          v38 = v56;
          v39 = 0LL;
LABEL_131:
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(
            a1,
            v39,
            v38,
            *((unsigned int *)a2 + 6));
        }
        return 2LL;
      }
      v50 = v67;
      LODWORD(v66) = 1;
      *(_DWORD *)(a1 + 3220) = v49 & 0xBFFFFFFF;
      *(_QWORD *)((char *)&v66 + 4) = v4 - *(_QWORD *)(v46 + 72);
      v69 = v50;
      v68 = v66;
      CBasePTPEngine::SendTelemetryOutput(a1, 5LL, &v68);
      v47 = v62;
    }
    if ( (*(_DWORD *)v46 & 2) != 0 )
    {
      v51 = 0;
      v52 = 0;
    }
    else
    {
      v51 = v43 - *(_DWORD *)(v46 + 20);
      v52 = HIDWORD(v43) - *(_DWORD *)(v46 + 24);
    }
    *(_QWORD *)(a1 + 2984) = *(_QWORD *)(v46 + 20);
    goto LABEL_123;
  }
  if ( !v26 )
    return 1LL;
LABEL_76:
  v34 = 288LL * (unsigned int)(*(_DWORD *)(v27 + 4) % *(_DWORD *)(a1 + 16)) + a1 + 1168;
  if ( *(_DWORD *)(a1 + 3032) <= *(_DWORD *)(v34 + 136)
    && (unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)a1, (struct PTPInput *)a2, 0xAu, 1, 1) )
  {
    if ( (*(_DWORD *)(a1 + 392) & 0x400) != 0
      && (unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)a1, (struct PTPInput *)a2, 0) )
    {
      return 2LL;
    }
    if ( (*(_DWORD *)(a1 + 392) & 0x200) == 0 )
      return 1LL;
    v35 = CPTPEngine::CheckDoubleTap((CPTPEngine *)a1, (struct CContactState *)v34);
    if ( !v35 )
    {
      *(_QWORD *)(a1 + 2968) = *(__int64 *)((char *)a2 + 28);
      *(_QWORD *)(a1 + 2976) = *(_QWORD *)(v34 + 4);
      *(_DWORD *)(a1 + 3028) = *((_DWORD *)a2 + 6);
    }
    if ( *((_DWORD *)a2 + 10) )
    {
      CBasePTPEngine::SendInertiaOutput(a1, 3LL);
      if ( *((_DWORD *)a2 + 10) )
        return 2LL;
    }
    LODWORD(v66) = 1;
    v69 = v67;
    v68 = v66;
    CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v68);
    LODWORD(v66) = 0;
    *(_QWORD *)((char *)&v66 + 4) = v4 - *(_QWORD *)(v34 + 80);
    v69 = v67;
    v68 = v66;
    CBasePTPEngine::SendTelemetryOutput(a1, 5LL, &v68);
    *(_QWORD *)(a1 + 3176) = v4;
    v36 = *(_DWORD *)(a1 + 2904);
    if ( v36 == 4 )
    {
      *(_DWORD *)(a1 + 3220) &= ~8u;
    }
    else if ( v36 == 16 )
    {
      *(_DWORD *)(a1 + 3220) &= ~0x10u;
    }
    CPTPEngine::SendMouseUpIfPending((CPTPEngine *)a1, (unsigned int *)(a1 + 2904), *(_DWORD *)(a1 + 3028));
    if ( (*(_DWORD *)(a1 + 3220) & 8) == 0 )
    {
      if ( v35 )
      {
        *(_DWORD *)(a1 + 3028) = 0;
        CBasePTPEngine::SendMouseOutput(a1, 1LL, *(__int64 *)((char *)a2 + 28), *(unsigned int *)(v34 + 136));
        v38 = *(struct tagPOINT *)((char *)a2 + 28);
        v39 = 2LL;
        goto LABEL_131;
      }
      if ( (*(_DWORD *)v34 & 4) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 220) & 0x400) != 0
          && !*(_DWORD *)(a1 + 2920)
          && (*(_DWORD *)(v34 + 60) != *((_DWORD *)a2 + 7) || *(_DWORD *)(v34 + 64) != *((_DWORD *)a2 + 8)) )
        {
          CBasePTPEngine::SendWarpbackTelemetry(
            a1,
            15LL,
            *(__int64 *)((char *)a2 + 28),
            *(_QWORD *)(v34 + 60),
            (unsigned __int64)(1000 * (v4 - *(_QWORD *)(v34 + 80))) / *(_QWORD *)(a1 + 96));
          CBasePTPEngine::SendMouseOutput(a1, 5LL, *(_QWORD *)(v34 + 60), *(unsigned int *)(v34 + 136));
        }
        CPTPEngine::SendMouseDownAtPoint(
          (CPTPEngine *)a1,
          v37,
          *(_DWORD *)(v34 + 136),
          *(_DWORD *)(a1 + 3028),
          *(struct tagPOINT *)(v34 + 60));
        *(_DWORD *)v34 &= ~4u;
      }
      else
      {
        CPTPEngine::SendMouseDownAtPoint(
          (CPTPEngine *)a1,
          v37,
          *(_DWORD *)(v34 + 136),
          *(_DWORD *)(a1 + 3028),
          *(struct tagPOINT *)((char *)a2 + 28));
      }
      *(_DWORD *)(a1 + 3220) |= 8u;
      if ( *((_DWORD *)a2 + 12) )
      {
        v40 = a2 + 7;
        do
        {
          v41 = (unsigned int)(*v40 % *(_DWORD *)(a1 + 16));
          v42 = 288 * v41 + a1 + 1168;
          if ( (*(_DWORD *)v42 & 1) != 0 )
          {
            if ( (*(_DWORD *)v42 & 2) == 0 )
            {
              *(_QWORD *)(v42 + 4) = *(_QWORD *)(v42 + 20);
              CPTPEngine::SetupDragRectsForContact((CPTPEngine *)a1, (struct CContactState *)(288 * v41 + a1 + 1168));
            }
            *(_DWORD *)v42 &= ~4u;
          }
          v40 += 24;
          ++v6;
        }
        while ( v6 < *((_DWORD *)a2 + 12) );
      }
      return 2LL;
    }
  }
  return 1LL;
}
