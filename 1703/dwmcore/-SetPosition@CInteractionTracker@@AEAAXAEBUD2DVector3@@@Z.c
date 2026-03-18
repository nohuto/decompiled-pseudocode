/*
 * XREFs of ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DF54
 * Callers:
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x18016C2F8 (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18016CA00 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18016CA6C (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18016E100 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18016E1BC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18016E2C4 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x180166A40 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016C43C (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 */

void __fastcall CInteractionTracker::SetPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  unsigned __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  struct CComposition **v6; // rcx
  struct IManipulationTelemetryData *TelemetryDataNoRef; // rax

  v3 = *((_QWORD *)this + 8) - *(_QWORD *)a2;
  if ( !v3 )
    v3 = *((unsigned int *)this + 18) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 8) = *(_QWORD *)a2;
    v4 = *((_DWORD *)a2 + 2);
    *((_BYTE *)this + 592) |= 1u;
    *((_DWORD *)this + 18) = v4;
    CResource::InvalidateAnimationSources(this, 1LL);
    CResource::InvalidateAnimationSources(this, 52LL);
    if ( dword_18023D7F0 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
      {
        v5 = 0LL;
        if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
          v5 = *(_QWORD *)(*((_QWORD *)this + 46) + 560LL);
        if ( *((_QWORD *)this + 64) )
        {
          v6 = (struct CComposition **)*((_QWORD *)this + 65);
          if ( v6 )
          {
            if ( v5 )
            {
              TelemetryDataNoRef = CInteraction::GetTelemetryDataNoRef(v6);
              if ( TelemetryDataNoRef )
                (*(void (__fastcall **)(struct IManipulationTelemetryData *, _QWORD, _QWORD, __int64))(*(_QWORD *)TelemetryDataNoRef + 24LL))(
                  TelemetryDataNoRef,
                  *((_QWORD *)this + 64),
                  *((unsigned int *)this + 35),
                  v5);
              *(_QWORD *)(*((_QWORD *)this + 46) + 560LL) = 0LL;
            }
          }
        }
      }
    }
  }
}
