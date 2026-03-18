/*
 * XREFs of ??_ECManipulationTelemetryData@@UEAAPEAXI@Z @ 0x180191A4C
 * Callers:
 *     ??_ECManipulationTelemetryData@@W7EAAPEAXI@Z @ 0x1800DDC80 (--_ECManipulationTelemetryData@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180192D8C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801D8B84 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 */

CManipulationTelemetryData *__fastcall CManipulationTelemetryData::`vector deleting destructor'(
        CManipulationTelemetryData *this,
        char a2,
        __int64 a3)
{
  bool v5; // bp
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  do
  {
    CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove((char *)this + 72, &v7, a3, 0LL);
    v5 = v7 != 0;
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  while ( v5 );
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
