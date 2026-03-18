/*
 * XREFs of ??0CManipulationTelemetryData@@QEAA@PEAVCComposition@@I@Z @ 0x180191964
 * Callers:
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x180191DB0 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 * Callees:
 *     <none>
 */

CManipulationTelemetryData *__fastcall CManipulationTelemetryData::CManipulationTelemetryData(
        CManipulationTelemetryData *this,
        struct CComposition *a2,
        int a3)
{
  char *v6; // rcx
  CManipulationTelemetryData *result; // rax

  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CManipulationTelemetryData::`vftable'{for `IManipulationTelemetryData'};
  *((_QWORD *)this + 1) = &CManipulationTelemetryData::`vftable'{for `CMILRefCountBase'};
  v6 = (char *)this + 72;
  *((_DWORD *)v6 + 4) = 0;
  v6[20] = 0;
  *((_QWORD *)v6 + 1) = v6;
  *(_QWORD *)v6 = v6;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v6 + 24));
  *((_QWORD *)this + 18) = a2;
  result = this;
  *((_DWORD *)this + 38) = a3;
  return result;
}
