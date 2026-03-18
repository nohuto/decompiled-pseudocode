/*
 * XREFs of ?DoTPShellProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KPEAH@Z @ 0x1C0135618
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?FindOrAssignPrimary@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@@Z @ 0x1C0135A74 (-FindOrAssignPrimary@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@@Z.c)
 *     ?GestureContactProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@HPEAH@Z @ 0x1C0135DD0 (-GestureContactProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@HPEAH@Z.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C0137CA4 (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0137D28 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0137EFC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

void __fastcall CPTPEngine::DoTPShellProcessing(CPTPEngine *this, struct PTPInput *a2, int a3, int *a4)
{
  struct PTPEnginePointerNode *v4; // rdi
  unsigned int *v6; // rcx
  unsigned int *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned int *v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  __int128 v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  __int128 v19; // [rsp+50h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-18h]

  v4 = 0LL;
  v6 = (unsigned int *)((char *)this + 1168);
  v10 = v6 + 432;
  while ( v6 != v10 )
  {
    v11 = *v6;
    if ( (*v6 & 1) != 0 )
    {
      if ( (v11 & 0x100) != 0 )
      {
        v12 = v11 | 0x800;
        --a3;
      }
      else
      {
        v12 = v11 & 0xFFFFF7FF;
      }
      *v6 = v12;
    }
    v6 += 72;
  }
  if ( *((_DWORD *)this + 733) != 6 )
  {
    *((_DWORD *)this + 733) = 6;
    CBasePTPEngine::SendInertiaOutput(this, 1LL);
    v20 = v18;
    LODWORD(v17) = (a3 != 3) + 11;
    v19 = v17;
    CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v19);
    *((_QWORD *)this + 391) = *(_QWORD *)a2;
    if ( *((_QWORD *)this + 399) )
    {
      v13 = 0;
      if ( *((_DWORD *)a2 + 12) )
      {
        v14 = (unsigned int *)((char *)a2 + 64);
        do
        {
          v15 = 288LL * (*(v14 - 2) % *((_DWORD *)this + 4));
          v16 = *(_DWORD *)((char *)this + v15 + 1168);
          if ( (v16 & 1) != 0 && (v16 & 0x800) == 0 && (*v14 & 0x10000) != 0 )
          {
            *v14 = *v14 & 0xFFFCFFFF | 0x20000;
            *(_DWORD *)((char *)this + v15 + 1168) &= ~2u;
          }
          v14 += 24;
          ++v13;
        }
        while ( v13 < *((_DWORD *)a2 + 12) );
      }
      CBasePTPEngine::SendGestureOutput(this, 2LL, 1LL, 0LL, 0LL);
      *((_QWORD *)this + 399) = 0LL;
    }
    else
    {
      v4 = CPTPEngine::FindOrAssignPrimary(this, a2);
      if ( !v4 )
        return;
      if ( (*((_DWORD *)this + 805) & 0x2000) != 0 )
        *((_DWORD *)v4 + 3) |= 0x2000u;
    }
  }
  CPTPEngine::GestureContactProcessing(this, a2, v4, 1, a4);
}
