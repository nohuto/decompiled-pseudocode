/*
 * XREFs of ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x180192340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x180191DB0 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x1801D5208 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 */

__int64 __fastcall CInteraction::ProcessHandledInteractions(
        CInteraction *a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned int *a5,
        _DWORD *a6)
{
  unsigned int v6; // ebx
  struct IManipulationTelemetryData *TelemetryDataNoRef; // rax
  __int64 v12; // r9
  struct IManipulationTelemetryData *v13; // r14

  v6 = 0;
  if ( a6 )
    *a6 = 1;
  if ( *((_QWORD *)a1 + 33) )
  {
    TelemetryDataNoRef = CInteraction::GetTelemetryDataNoRef(a1);
    v13 = TelemetryDataNoRef;
    if ( a3 && TelemetryDataNoRef )
    {
      a5[11] = (*(__int64 (__fastcall **)(CInteraction *, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, *a5);
      (*(void (__fastcall **)(struct IManipulationTelemetryData *, unsigned int *))(*(_QWORD *)v13 + 40LL))(v13, a5);
    }
    LOBYTE(v12) = a3;
    return (unsigned int)CInteractionProcessor::ProcessHandledInteractions(
                           (char *)a1 + 344,
                           (*((_QWORD *)a1 + 33) + 64LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)a1 + 33) >> 64),
                           a2,
                           v12,
                           a4,
                           v13,
                           a6);
  }
  return v6;
}
