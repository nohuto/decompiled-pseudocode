/*
 * XREFs of ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x180196CF4
 * Callers:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801963D8 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1800C7630 (TraceLoggingProviderEnabled.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180193928 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x1801CA964 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 */

void __fastcall CInteractionTracker::TelemetrySetPosition(CInteractionTracker *this)
{
  unsigned __int64 v2; // rdi

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 0, 0x400000000002uLL) )
  {
    v2 = 0LL;
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
      v2 = *(_QWORD *)(*((_QWORD *)this + 60) + 584LL);
    InteractionSourceManager::TelemetrySetPosition((CInteractionTracker *)((char *)this + 352), v2);
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      if ( v2 )
        *(_QWORD *)(*((_QWORD *)this + 60) + 584LL) = 0LL;
    }
  }
}
