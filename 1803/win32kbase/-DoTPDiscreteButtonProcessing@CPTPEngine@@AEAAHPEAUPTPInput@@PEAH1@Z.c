/*
 * XREFs of ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C01379F4
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0139E9C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C013AF68 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C013B384 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C013B5A0 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C013B928 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 */

__int64 __fastcall CPTPEngine::DoTPDiscreteButtonProcessing(CPTPEngine *this, struct PTPInput *a2, int *a3, int *a4)
{
  int v4; // r9d
  int v5; // r13d
  int v6; // r12d
  int v9; // r8d
  unsigned int v11; // ecx
  int v12; // esi
  int v13; // edx
  int v14; // r9d
  int v15; // r15d
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // edx
  int v22; // r14d
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // ecx
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  __int128 v39; // [rsp+30h] [rbp-40h] BYREF
  __int64 v40; // [rsp+40h] [rbp-30h]
  __int128 v41; // [rsp+50h] [rbp-20h] BYREF
  __int64 v42; // [rsp+60h] [rbp-10h]
  int v43; // [rsp+B0h] [rbp+40h]
  int v44; // [rsp+B8h] [rbp+48h]

  v4 = *((_DWORD *)this + 750);
  v5 = 0;
  v6 = 0;
  v9 = 0;
  v11 = *((_DWORD *)this + 824);
  v12 = v4 & 0x20;
  v43 = 0;
  v13 = v12 != 0;
  v14 = v4 & 0x40;
  v44 = v14;
  v15 = v14 != 0;
  if ( (unsigned __int8)(v11 & 2) >> 1 != v13 )
  {
    v16 = *((_DWORD *)this + 751);
    if ( (v16 == 3 || v16 == 6) && v12 )
    {
      v17 = v11 | 0x400;
      *((_DWORD *)this + 824) = v17;
      v18 = v17;
    }
    else
    {
      v18 = v11;
      if ( !v12 && (v11 & 0x400) != 0 )
      {
        v18 = v11 & 0xFFFFFBFF;
        v5 = 1;
        *((_DWORD *)this + 824) = v11 & 0xFFFFFBFF;
      }
    }
    v6 = 1;
    v11 = (2 * v13) | v18 & 0xFFFFFFFD;
    *((_DWORD *)this + 824) = v11;
    if ( v12 )
    {
      CPTPEngine::TPAAPSetCurtainState(this, 0);
      v11 = *((_DWORD *)this + 824);
      v9 = 0;
      v14 = v44;
      *((_QWORD *)this + 388) = *(_QWORD *)a2;
      *((_DWORD *)this + 775) = *((_DWORD *)a2 + 6);
    }
    *a3 = 1;
  }
  if ( (unsigned __int8)(v11 & 4) >> 2 == v15 )
  {
    v22 = 0;
  }
  else
  {
    v19 = *((_DWORD *)this + 751);
    if ( (v19 == 3 || v19 == 6) && v14 )
    {
      v20 = v11 | 0x800;
      *((_DWORD *)this + 824) = v20;
      v21 = v20;
    }
    else
    {
      v21 = v11;
      if ( !v14 && (v11 & 0x800) != 0 )
      {
        v21 = v11 & 0xFFFFF7FF;
        v43 = 1;
        *((_DWORD *)this + 824) = v11 & 0xFFFFF7FF;
        v9 = 1;
      }
    }
    v22 = 1;
    *((_DWORD *)this + 824) = v21 & 0xFFFFFFFB | (4 * v15);
    if ( v14 )
    {
      CPTPEngine::TPAAPSetCurtainState(this, 0);
      v9 = v43;
      *((_QWORD *)this + 388) = *(_QWORD *)a2;
      *((_DWORD *)this + 775) = *((_DWORD *)a2 + 6);
    }
    *a4 = 1;
  }
  v23 = *((_DWORD *)this + 751);
  if ( v23 != 3 && v23 != 6 && !v5 && !v9 )
  {
    if ( v6 )
    {
      if ( v12 )
      {
        if ( *((_DWORD *)this + 743) && (*((_DWORD *)this + 824) & 0x80000) == 0 )
          *((_DWORD *)this + 743) = 0;
        v27 = *((_DWORD *)a2 + 10);
        if ( v27 )
        {
          CBasePTPEngine::SendInertiaOutput(this, 3LL);
          v27 = *((_DWORD *)a2 + 10);
        }
        v28 = *((_DWORD *)this + 824);
        if ( v27 )
        {
          *((_DWORD *)this + 824) = v28 | 0x400;
        }
        else if ( (v28 & 0x80000) != 0 )
        {
          v29 = v28 | 0x40;
          *((_DWORD *)this + 824) = v29;
          if ( (v29 & 0x10) == 0 )
          {
            LODWORD(v39) = 6;
            v42 = v40;
            v41 = v39;
            CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v41);
            CBasePTPEngine::SendMouseOutput(this, 3LL, *(_QWORD *)((char *)a2 + 28));
            *((_DWORD *)this + 824) |= 0x10u;
          }
        }
        else
        {
          v30 = v28 | 0x20;
          *((_DWORD *)this + 824) = v30;
          if ( (v30 & 8) == 0 )
          {
            LODWORD(v41) = 5;
            v40 = v42;
            v39 = v41;
            CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v39);
            CBasePTPEngine::SendMouseOutput(this, 1LL, *(_QWORD *)((char *)a2 + 28));
            *((_DWORD *)this + 824) |= 8u;
          }
        }
      }
      else
      {
        v24 = *((_DWORD *)this + 824);
        v25 = v24;
        if ( (v24 & 0x80000) != 0 )
        {
          if ( (v24 & 0x10) != 0 && (v24 & 0x40) != 0 && (v24 & 0x100) == 0 )
          {
            *((_QWORD *)this + 407) = *(_QWORD *)a2;
            CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
            *((_DWORD *)this + 824) &= ~0x10u;
            v25 = *((_DWORD *)this + 824);
          }
          v26 = v25 & 0xFFFFFFBF;
        }
        else
        {
          if ( (v24 & 8) != 0 && (v24 & 0x20) != 0 && (v24 & 0x80u) == 0 )
          {
            *((_QWORD *)this + 407) = *(_QWORD *)a2;
            CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
            *((_DWORD *)this + 824) &= ~8u;
            v25 = *((_DWORD *)this + 824);
          }
          v26 = v25 & 0xFFFFFFDF;
        }
        *((_DWORD *)this + 824) = v26;
      }
    }
    if ( !v22 )
      return 1LL;
    if ( v44 )
    {
      if ( *((_DWORD *)this + 743) && (*((_DWORD *)this + 824) & 0x80000) != 0 )
        *((_DWORD *)this + 743) = 0;
      v34 = *((_DWORD *)a2 + 10);
      if ( v34 )
      {
        CBasePTPEngine::SendInertiaOutput(this, 3LL);
        v34 = *((_DWORD *)a2 + 10);
      }
      v35 = *((_DWORD *)this + 824);
      if ( !v34 )
      {
        if ( (v35 & 0x80000) != 0 )
        {
          v36 = v35 | 0x20;
          *((_DWORD *)this + 824) = v36;
          if ( (v36 & 8) == 0 )
          {
            LODWORD(v41) = 5;
            v40 = v42;
            v39 = v41;
            CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v39);
            CBasePTPEngine::SendMouseOutput(this, 1LL, *(_QWORD *)((char *)a2 + 28));
            *((_DWORD *)this + 824) |= 8u;
          }
        }
        else
        {
          v37 = v35 | 0x40;
          *((_DWORD *)this + 824) = v37;
          if ( (v37 & 0x10) == 0 )
          {
            LODWORD(v41) = 6;
            v40 = v42;
            v39 = v41;
            CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v39);
            CBasePTPEngine::SendMouseOutput(this, 3LL, *(_QWORD *)((char *)a2 + 28));
            *((_DWORD *)this + 824) |= 0x10u;
          }
        }
        return 1LL;
      }
      v33 = v35 | 0x800;
    }
    else
    {
      v31 = *((_DWORD *)this + 824);
      v32 = v31;
      if ( (v31 & 0x80000) != 0 )
      {
        if ( (v31 & 8) != 0 && (v31 & 0x20) != 0 && (v31 & 0x80u) == 0 )
        {
          *((_QWORD *)this + 407) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
          *((_DWORD *)this + 824) &= ~8u;
          v32 = *((_DWORD *)this + 824);
        }
        v33 = v32 & 0xFFFFFFDF;
      }
      else
      {
        if ( (v31 & 0x10) != 0 && (v31 & 0x40) != 0 && (v31 & 0x100) == 0 )
        {
          *((_QWORD *)this + 407) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
          *((_DWORD *)this + 824) &= ~0x10u;
          v32 = *((_DWORD *)this + 824);
        }
        v33 = v32 & 0xFFFFFFBF;
      }
    }
    *((_DWORD *)this + 824) = v33;
    return 1LL;
  }
  return 1LL;
}
