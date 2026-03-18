/*
 * XREFs of ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C0135BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z @ 0x1C01326C8 (-CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z.c)
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C0134EA0 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01371DC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CPTPEngine::ProcessTimer(CPTPEngine *this)
{
  unsigned int v1; // edx
  __int128 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  v1 = *((_DWORD *)this + 47);
  *((_DWORD *)this + 815) = 0;
  *((_DWORD *)this + 820) &= ~8u;
  CPTPEngine::CancelMouseUpTimer(this, v1, 1);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive(this) )
  {
    *((_DWORD *)this + 820) |= 0x80000000;
    v4 = 0uLL;
    v5 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 9LL, &v4);
  }
  return 0LL;
}
