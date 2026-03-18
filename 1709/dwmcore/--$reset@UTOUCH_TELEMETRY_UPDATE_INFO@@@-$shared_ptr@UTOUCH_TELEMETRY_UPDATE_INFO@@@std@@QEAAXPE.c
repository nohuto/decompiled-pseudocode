/*
 * XREFs of ??$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18019F658
 * Callers:
 *     ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x18019FE70 (-UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K.c)
 * Callees:
 *     ??$_Resetp@UManipulationThreadTelemetryData@@@?$shared_ptr@UManipulationThreadTelemetryData@@@std@@AEAAXPEAUManipulationThreadTelemetryData@@@Z @ 0x180169018 (--$_Resetp@UManipulationThreadTelemetryData@@@-$shared_ptr@UManipulationThreadTelemetryData@@@st.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18016A458 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>(
        __int64 a1,
        __int64 a2)
{
  std::_Ref_count_base *v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  std::shared_ptr<ManipulationThreadTelemetryData>::_Resetp<ManipulationThreadTelemetryData>((__int64)&v4, a2);
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  *(_OWORD *)a1 = v4;
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
