/*
 * XREFs of ??1?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ @ 0x1801D8770
 * Callers:
 *     ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x1801D8F40 (-UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180192D8C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801D8B84 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 */

void __fastcall CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::~CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  bool v4; // di
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  do
  {
    CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove(a1, &v5, a3, 0LL);
    v4 = v5 != 0;
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  while ( v4 );
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}
