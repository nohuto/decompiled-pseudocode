/*
 * XREFs of ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0138208
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0133988 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C0134558 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x1C0136940 (-ProcessInitialization@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0138BE4 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0137C48 (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 */

void __fastcall CPTPEngine::TPAAPSetCurtainState(CPTPEngine *this, int a2)
{
  int v2; // r9d
  __int128 v3; // [rsp+20h] [rbp-48h]
  int v4; // [rsp+30h] [rbp-38h]
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp-18h]

  v2 = *((_DWORD *)this + 805);
  if ( (v2 & 0x10000u) >> 16 != (a2 != 0) )
  {
    LODWORD(v3) = a2;
    v5 = v3;
    *((_DWORD *)this + 805) = v2 ^ (v2 ^ (a2 << 16)) & 0x10000;
    v6 = v4;
    CBasePTPEngine::SendEtwOutput((__int64)this, 1, (__int64)&v5);
  }
}
