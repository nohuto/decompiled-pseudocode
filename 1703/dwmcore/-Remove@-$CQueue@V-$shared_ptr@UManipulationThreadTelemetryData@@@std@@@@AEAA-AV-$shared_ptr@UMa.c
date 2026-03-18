/*
 * XREFs of ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801913F4
 * Callers:
 *     ??_ECManipulationTelemetryData@@UEAAPEAXI@Z @ 0x180166768 (--_ECManipulationTelemetryData@@UEAAPEAXI@Z.c)
 *     ??1?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ @ 0x180190FC0 (--1-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ.c)
 *     ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x1801917C0 (-UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180166720 (--4-$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801677D8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Resetp@UManipulationThreadTelemetryData@@@?$shared_ptr@UManipulationThreadTelemetryData@@@std@@AEAAXPEAUManipulationThreadTelemetryData@@@Z @ 0x180190F2C (--$_Resetp@UManipulationThreadTelemetryData@@@-$shared_ptr@UManipulationThreadTelemetryData@@@st.c)
 */

__int64 *__fastcall CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 *v7; // rsi
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rcx

  *a2 = 0LL;
  a2[1] = 0LL;
  std::shared_ptr<ManipulationThreadTelemetryData>::_Resetp<ManipulationThreadTelemetryData>(a2, 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 3));
  v7 = (__int64 *)*a1;
  v8 = *(_QWORD *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || *(__int64 **)(v8 + 8) != v7 )
    __fastfail(3u);
  *a1 = v8;
  *(_QWORD *)(v8 + 8) = a1;
  if ( v7 != a1 )
  {
    std::shared_ptr<ManipulationThreadTelemetryData>::operator=(a2, v7 + 2);
    v9 = (std::_Ref_count_base *)v7[3];
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    WPF::ProcessHeapImpl::Free(v7);
    --*((_DWORD *)a1 + 4);
  }
  if ( a4 )
    *a4 = *((_DWORD *)a1 + 4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 3));
  return a2;
}
