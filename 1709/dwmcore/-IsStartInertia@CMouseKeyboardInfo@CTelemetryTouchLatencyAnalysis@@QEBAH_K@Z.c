/*
 * XREFs of ?IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18012B858
 * Callers:
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18012B77C (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_KPEAPEAUTouchUpdateInfo@1@@Z @ 0x18012CE38 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 * Callees:
 *     ?IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18012B8AC (-IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsStartInertia(
        CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo *this,
        unsigned __int64 a2)
{
  unsigned int v3; // r11d
  unsigned int v4; // ecx

  if ( (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsValid(this, a2) )
  {
    if ( *(_DWORD *)this == 257 || *(_DWORD *)this == 514 )
      return 1;
  }
  else
  {
    v4 = v3;
    if ( ((*(_DWORD *)this - 522) & 0xFFFFFFFB) == 0 )
      return 1;
    return v4;
  }
  return v3;
}
