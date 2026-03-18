/*
 * XREFs of ?IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18012B818
 * Callers:
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18012B77C (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_KPEAPEAUTouchUpdateInfo@1@@Z @ 0x18012CE38 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 * Callees:
 *     ?IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18012B8AC (-IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsNewInteraction(
        CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo *this,
        unsigned __int64 a2)
{
  unsigned int v3; // r11d

  if ( (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsValid(this, a2)
    && (*(_DWORD *)this == 256 || *(_DWORD *)this == 513 || *(_DWORD *)this == 522 || *(_DWORD *)this == 526) )
  {
    return 1;
  }
  return v3;
}
