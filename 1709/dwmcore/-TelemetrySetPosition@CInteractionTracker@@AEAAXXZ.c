/*
 * XREFs of ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x18016EB1C
 * Callers:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016E19C (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1800016A0 (TraceLoggingProviderEnabled.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x180169510 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 */

void __fastcall CInteractionTracker::TelemetrySetPosition(CInteractionTracker *this)
{
  __int64 v2; // rdi
  CInteraction *v3; // rcx
  struct IManipulationTelemetryData *TelemetryDataNoRef; // rax

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_18026D7F0, 0, 0x400000000002uLL) )
  {
    v2 = 0LL;
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
      v2 = *(_QWORD *)(*((_QWORD *)this + 48) + 568LL);
    if ( *((_QWORD *)this + 68) )
    {
      v3 = (CInteraction *)*((_QWORD *)this + 69);
      if ( v3 )
      {
        if ( v2 )
        {
          TelemetryDataNoRef = CInteraction::GetTelemetryDataNoRef(v3);
          if ( TelemetryDataNoRef )
            (*(void (__fastcall **)(struct IManipulationTelemetryData *, __int64, _QWORD, __int64))(*(_QWORD *)TelemetryDataNoRef
                                                                                                  + 24LL))(
              TelemetryDataNoRef,
              (*((_QWORD *)this + 68) + 64LL) & -(__int64)(*((_QWORD *)this + 68) != 0LL),
              *((unsigned int *)this + 38),
              v2);
          *(_QWORD *)(*((_QWORD *)this + 48) + 568LL) = 0LL;
        }
      }
    }
  }
}
