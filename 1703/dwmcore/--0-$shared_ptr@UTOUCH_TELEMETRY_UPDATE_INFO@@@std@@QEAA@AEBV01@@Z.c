/*
 * XREFs of ??0?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAA@AEBV01@@Z @ 0x180166674
 * Callers:
 *     ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180166720 (--4-$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x180167590 (-UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z.c)
 *     ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1801913B0 (-InsertTail@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV-$shared_ptr@UTOU.c)
 *     ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x1801917C0 (-UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K.c)
 * Callees:
 *     ?_Reset0@?$_Ptr_base@UManipulationThreadTelemetryData@@@std@@QEAAXPEAUManipulationThreadTelemetryData@@PEAV_Ref_count_base@2@@Z @ 0x18016782C (-_Reset0@-$_Ptr_base@UManipulationThreadTelemetryData@@@std@@QEAAXPEAUManipulationThreadTelemetr.c)
 */

_QWORD *__fastcall std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = a2[1];
  v4 = *a2;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  std::_Ptr_base<ManipulationThreadTelemetryData>::_Reset0(a1, v4);
  return a1;
}
