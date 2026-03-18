/*
 * XREFs of ??$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180190F7C
 * Callers:
 *     ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x1801917C0 (-UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801677D8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Resetp@UManipulationThreadTelemetryData@@@?$shared_ptr@UManipulationThreadTelemetryData@@@std@@AEAAXPEAUManipulationThreadTelemetryData@@@Z @ 0x180190F2C (--$_Resetp@UManipulationThreadTelemetryData@@@-$shared_ptr@UManipulationThreadTelemetryData@@@st.c)
 */

void __fastcall std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>(
        __int64 a1,
        __int64 a2)
{
  std::_Ref_count_base *v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  std::shared_ptr<ManipulationThreadTelemetryData>::_Resetp<ManipulationThreadTelemetryData>(&v4, a2);
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  *(_OWORD *)a1 = v4;
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
