/*
 * XREFs of ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EC8C
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18016B3C0 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18016E37C (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x18016E420 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x180169510 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 *     ?ReportInertiaStop@CInteraction@@QEAAJXZ @ 0x180169ED8 (-ReportInertiaStop@CInteraction@@QEAAJXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18016B210 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016B54C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E588 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016EAF0 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x180170B9C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x18019265C (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

void __fastcall CInteractionTracker::TransitionToIdle(CInteractionTracker *this)
{
  int v2; // ecx
  __int64 v3; // rcx
  CInteraction *v4; // rcx
  struct IManipulationTelemetryData *TelemetryDataNoRef; // rax
  __int64 v6; // rax
  _BYTE v7[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *((_DWORD *)this + 38) - 2;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    CInteractionTracker::StopCustomAnimations(this);
  }
  else
  {
    v3 = *((_QWORD *)this + 68);
    if ( v3 )
    {
      CManipulation::SetCaptureState_RenderThread(v3, 0LL);
      v4 = (CInteraction *)*((_QWORD *)this + 69);
      if ( v4 )
      {
        CInteraction::ReportInertiaStop(v4);
        TelemetryDataNoRef = CInteraction::GetTelemetryDataNoRef(*((CInteraction **)this + 69));
        if ( TelemetryDataNoRef )
          (*(void (__fastcall **)(struct IManipulationTelemetryData *, __int64))(*(_QWORD *)TelemetryDataNoRef + 32LL))(
            TelemetryDataNoRef,
            (*((_QWORD *)this + 68) + 64LL) & -(__int64)(*((_QWORD *)this + 68) != 0LL));
      }
    }
    v6 = CInteractionTracker::CalculateInertiaCallbackValues((CScrollAnimation **)this, (__int64)v7);
    *(_OWORD *)((char *)this + 660) = *(_OWORD *)v6;
    *(_OWORD *)((char *)this + 676) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)((char *)this + 692) = *(_OWORD *)(v6 + 32);
    *(_QWORD *)((char *)this + 708) = *(_QWORD *)(v6 + 48);
    CInteractionTracker::DestroyInteractionAnimations(this);
  }
  CChainingHelper::StartIdle((CInteractionTracker *)((char *)this + 340), this);
  CInteractionTracker::SetState((__int64)this, 0);
}
