/*
 * XREFs of ??$_Resetp@UManipulationThreadTelemetryData@@@?$shared_ptr@UManipulationThreadTelemetryData@@@std@@AEAAXPEAUManipulationThreadTelemetryData@@@Z @ 0x180169018
 * Callers:
 *     ?UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x18016A210 (-UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z.c)
 *     ??$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18019F658 (--$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPE.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x18019FAC0 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::shared_ptr<ManipulationThreadTelemetryData>::_Resetp<ManipulationThreadTelemetryData>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rax

  v4 = operator new(0x18uLL);
  if ( v4 )
  {
    v4[2] = a2;
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &std::_Ref_count<TOUCH_TELEMETRY_UPDATE_INFO>::`vftable';
  }
  return std::_Ptr_base<ManipulationThreadTelemetryData>::_Reset0(a1, a2, v4);
}
