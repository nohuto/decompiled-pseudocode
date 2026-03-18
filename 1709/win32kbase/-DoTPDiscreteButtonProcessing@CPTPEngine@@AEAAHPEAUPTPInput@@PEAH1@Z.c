/*
 * XREFs of ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C01338B4
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0136DB8 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C01370C0 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01371DC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0137568 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 */

__int64 __fastcall CPTPEngine::DoTPDiscreteButtonProcessing(CPTPEngine *this, struct PTPInput *a2, int *a3, int *a4)
{
  int v4; // r13d
  int v5; // r15d
  int v8; // r8d
  int v9; // esi
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  int v14; // r12d
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // r14d
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int128 v31; // [rsp+30h] [rbp-40h] BYREF
  __int64 v32; // [rsp+40h] [rbp-30h]
  __int128 v33; // [rsp+50h] [rbp-20h] BYREF
  __int64 v34; // [rsp+60h] [rbp-10h]
  int v35; // [rsp+B0h] [rbp+40h]
  int v36; // [rsp+B8h] [rbp+48h]

  v35 = 0;
  v4 = 0;
  v5 = 0;
  v8 = *((_DWORD *)this + 749);
  v9 = v8 & 0x20;
  v11 = *((_DWORD *)this + 820);
  v12 = v9 != 0;
  v13 = v8 & 0x40;
  v36 = v13;
  v14 = v13 != 0;
  if ( (unsigned __int8)(v11 & 2) >> 1 == v12 )
    goto LABEL_11;
  v15 = *((_DWORD *)this + 750);
  if ( v15 == 3 || v15 == 6 )
  {
    if ( v9 )
    {
      v16 = v11 | 0x400;
      goto LABEL_7;
    }
  }
  else if ( v9 )
  {
    goto LABEL_8;
  }
  if ( (v11 & 0x400) != 0 )
  {
    v35 = 1;
    v16 = v11 & 0xFFFFFBFF;
LABEL_7:
    *((_DWORD *)this + 820) = v16;
  }
LABEL_8:
  v5 = 1;
  *((_DWORD *)this + 820) = *((_DWORD *)this + 820) & 0xFFFFFFFD | (2 * v12);
  if ( v9 )
  {
    CPTPEngine::TPAAPSetCurtainState(this, 0);
    v13 = v36;
  }
  *a3 = 1;
LABEL_11:
  v17 = *((_DWORD *)this + 820);
  if ( (unsigned __int8)(v17 & 4) >> 2 == v14 )
  {
    v20 = 0;
    goto LABEL_26;
  }
  v18 = *((_DWORD *)this + 750);
  if ( v18 == 3 || v18 == 6 )
  {
    if ( v13 )
    {
      v19 = v17 | 0x800;
LABEL_21:
      *((_DWORD *)this + 820) = v19;
      goto LABEL_22;
    }
  }
  else if ( v13 )
  {
    goto LABEL_22;
  }
  if ( (v17 & 0x800) != 0 )
  {
    v4 = 1;
    v19 = v17 & 0xFFFFF7FF;
    goto LABEL_21;
  }
LABEL_22:
  v20 = 1;
  *((_DWORD *)this + 820) = (4 * v14) | *((_DWORD *)this + 820) & 0xFFFFFFFB;
  if ( v13 )
    CPTPEngine::TPAAPSetCurtainState(this, 0);
  *a4 = 1;
LABEL_26:
  v21 = *((_DWORD *)this + 750);
  if ( v21 == 3 || v21 == 6 || v35 || v4 )
    return 1LL;
  if ( v5 )
  {
    if ( v9 )
    {
      if ( *((_DWORD *)this + 743) && (*((_DWORD *)this + 820) & 0x40000) == 0 )
        *((_DWORD *)this + 743) = 0;
      if ( *((_DWORD *)a2 + 10) && (CBasePTPEngine::SendInertiaOutput(this, 3LL), *((_DWORD *)a2 + 10)) )
      {
        *((_DWORD *)this + 820) |= 0x400u;
      }
      else
      {
        v23 = *((_DWORD *)this + 820);
        if ( (v23 & 0x40000) != 0 )
        {
          v24 = v23 | 0x40;
          *((_DWORD *)this + 820) = v24;
          if ( (v24 & 0x10) == 0 )
          {
            LODWORD(v31) = 6;
            v34 = v32;
            v33 = v31;
            CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v33);
            CBasePTPEngine::SendMouseOutput(this, 3LL, *(_QWORD *)((char *)a2 + 28), 0LL);
            *((_DWORD *)this + 820) |= 0x10u;
          }
        }
        else
        {
          v25 = v23 | 0x20;
          *((_DWORD *)this + 820) = v25;
          if ( (v25 & 8) == 0 )
          {
            LODWORD(v33) = 5;
            v32 = v34;
            v31 = v33;
            CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v31);
            CBasePTPEngine::SendMouseOutput(this, 1LL, *(_QWORD *)((char *)a2 + 28), 0LL);
            *((_DWORD *)this + 820) |= 8u;
          }
        }
      }
    }
    else
    {
      v22 = *((_DWORD *)this + 820);
      if ( (v22 & 0x40000) != 0 )
      {
        if ( (v22 & 0x10) != 0 && (v22 & 0x40) != 0 && (v22 & 0x100) == 0 )
        {
          *((_QWORD *)this + 406) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28), 0LL);
          *((_DWORD *)this + 820) &= ~0x10u;
        }
        *((_DWORD *)this + 820) &= ~0x40u;
      }
      else
      {
        if ( (v22 & 8) != 0 && (v22 & 0x20) != 0 && (v22 & 0x80u) == 0 )
        {
          *((_QWORD *)this + 406) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28), 0LL);
          *((_DWORD *)this + 820) &= ~8u;
        }
        *((_DWORD *)this + 820) &= ~0x20u;
      }
    }
  }
  if ( v20 )
  {
    if ( v36 )
    {
      if ( *((_DWORD *)this + 743) && (*((_DWORD *)this + 820) & 0x40000) != 0 )
        *((_DWORD *)this + 743) = 0;
      if ( *((_DWORD *)a2 + 10) && (CBasePTPEngine::SendInertiaOutput(this, 3LL), *((_DWORD *)a2 + 10)) )
      {
        *((_DWORD *)this + 820) |= 0x800u;
      }
      else
      {
        v27 = *((_DWORD *)this + 820);
        if ( (v27 & 0x40000) != 0 )
        {
          v28 = v27 | 0x20;
          *((_DWORD *)this + 820) = v28;
          if ( (v28 & 8) == 0 )
          {
            LODWORD(v33) = 5;
            v32 = v34;
            v31 = v33;
            CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v31);
            CBasePTPEngine::SendMouseOutput(this, 1LL, *(_QWORD *)((char *)a2 + 28), 0LL);
            *((_DWORD *)this + 820) |= 8u;
          }
        }
        else
        {
          v29 = v27 | 0x40;
          *((_DWORD *)this + 820) = v29;
          if ( (v29 & 0x10) == 0 )
          {
            LODWORD(v33) = 6;
            v32 = v34;
            v31 = v33;
            CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v31);
            CBasePTPEngine::SendMouseOutput(this, 3LL, *(_QWORD *)((char *)a2 + 28), 0LL);
            *((_DWORD *)this + 820) |= 0x10u;
          }
        }
      }
    }
    else
    {
      v26 = *((_DWORD *)this + 820);
      if ( (v26 & 0x40000) != 0 )
      {
        if ( (v26 & 8) != 0 && (v26 & 0x20) != 0 && (v26 & 0x80u) == 0 )
        {
          *((_QWORD *)this + 406) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28), 0LL);
          *((_DWORD *)this + 820) &= ~8u;
        }
        *((_DWORD *)this + 820) &= ~0x20u;
      }
      else
      {
        if ( (v26 & 0x10) != 0 && (v26 & 0x40) != 0 && (v26 & 0x100) == 0 )
        {
          *((_QWORD *)this + 406) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28), 0LL);
          *((_DWORD *)this + 820) &= ~0x10u;
        }
        *((_DWORD *)this + 820) &= ~0x40u;
      }
    }
  }
  return 1LL;
}
