/*
 * XREFs of ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180166720
 * Callers:
 *     ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x180166CA4 (-Insert@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV-$shared_ptr@UTOUCH.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801913F4 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 * Callees:
 *     ??0?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAA@AEBV01@@Z @ 0x180166674 (--0-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801677D8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 *__fastcall std::shared_ptr<ManipulationThreadTelemetryData>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>(v8, a2);
  v4 = v3[1];
  v3[1] = a1[1];
  a1[1] = v4;
  v5 = *v3;
  *v3 = *a1;
  v6 = v8[1];
  *a1 = v5;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a1;
}
