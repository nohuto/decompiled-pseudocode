/*
 * XREFs of ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18016A458
 * Callers:
 *     ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180169160 (--4-$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??_ECManipulationTelemetryData@@UEAAPEAXI@Z @ 0x1801691A8 (--_ECManipulationTelemetryData@@UEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1801697B0 (-Insert@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV-$shared_ptr@UTOUCH.c)
 *     ?UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x18016A210 (-UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z.c)
 *     ?_Reset0@?$_Ptr_base@UManipulationThreadTelemetryData@@@std@@QEAAXPEAUManipulationThreadTelemetryData@@PEAV_Ref_count_base@2@@Z @ 0x18016A4AC (-_Reset0@-$_Ptr_base@UManipulationThreadTelemetryData@@@std@@QEAAXPEAUManipulationThreadTelemetr.c)
 *     ??$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18019F658 (--$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPE.c)
 *     ??1?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ @ 0x18019F69C (--1-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ.c)
 *     ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x18019FA7C (-InsertTail@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV-$shared_ptr@UTOU.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x18019FAC0 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 *     ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x18019FE70 (-UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_base::_Decref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(std::_Ref_count_base *))this)(this);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
  }
}
