/*
 * XREFs of ?_Reset0@?$_Ptr_base@UManipulationThreadTelemetryData@@@std@@QEAAXPEAUManipulationThreadTelemetryData@@PEAV_Ref_count_base@2@@Z @ 0x18016A4AC
 * Callers:
 *     ??$_Resetp@UManipulationThreadTelemetryData@@@?$shared_ptr@UManipulationThreadTelemetryData@@@std@@AEAAXPEAUManipulationThreadTelemetryData@@@Z @ 0x180169018 (--$_Resetp@UManipulationThreadTelemetryData@@@-$shared_ptr@UManipulationThreadTelemetryData@@@st.c)
 *     ??0?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAA@AEBV01@@Z @ 0x180169068 (--0-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18016A458 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ptr_base<ManipulationThreadTelemetryData>::_Reset0(_QWORD *a1, __int64 a2, __int64 a3)
{
  std::_Ref_count_base *v5; // rcx

  v5 = (std::_Ref_count_base *)a1[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *a1 = a2;
  a1[1] = a3;
}
