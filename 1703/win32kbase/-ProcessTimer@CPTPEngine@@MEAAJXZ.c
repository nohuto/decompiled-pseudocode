/*
 * XREFs of ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C0136C30
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C01332A0 (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C0136344 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0137EFC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CPTPEngine::ProcessTimer(CPTPEngine *this)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  *((_DWORD *)this + 800) = 0;
  *((_DWORD *)this + 805) &= ~8u;
  CPTPEngine::CancelMouseUpTimer(this, 1);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive(this) )
  {
    v4 = 0uLL;
    v5 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(v2, 9LL, &v4);
  }
  return 0LL;
}
