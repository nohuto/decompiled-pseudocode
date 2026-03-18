/*
 * XREFs of ??_ECManipulationTelemetryData@@UEAAPEAXI@Z @ 0x180166768
 * Callers:
 *     ??_ECManipulationTelemetryData@@W7EAAPEAXI@Z @ 0x1800D5E60 (--_ECManipulationTelemetryData@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801677D8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801913F4 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 */

CManipulationTelemetryData *__fastcall CManipulationTelemetryData::`vector deleting destructor'(
        CManipulationTelemetryData *this,
        char a2,
        __int64 a3)
{
  int v5; // edi
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  do
  {
    CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove((char *)this + 72, &v7, a3, 0LL);
    v5 = (v7 != 0) - 1;
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  while ( v5 != -1 );
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
