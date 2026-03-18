/*
 * XREFs of ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EA58
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18016C64C (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18016E1BC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x18016E268 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x180166A40 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 *     ?ReportInertiaStop@CInteraction@@QEAAJXZ @ 0x180167264 (-ReportInertiaStop@CInteraction@@QEAAJXZ.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801680CC (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18016C49C (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016C7BC (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E3E0 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016E97C (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x180188978 (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

void __fastcall CInteractionTracker::TransitionToIdle(CInteractionTracker *this)
{
  int v2; // ecx
  CManipulation *v3; // rcx
  CInteraction *v4; // rcx
  struct IManipulationTelemetryData *TelemetryDataNoRef; // rax
  __int64 v6; // rax
  _BYTE v7[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *((_DWORD *)this + 35) - 2;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    CInteractionTracker::StopCustomAnimations(this);
  }
  else
  {
    v3 = (CManipulation *)*((_QWORD *)this + 64);
    if ( v3 )
    {
      CManipulation::SetCaptureState_RenderThread(v3);
      v4 = (CInteraction *)*((_QWORD *)this + 65);
      if ( v4 )
      {
        CInteraction::ReportInertiaStop(v4);
        TelemetryDataNoRef = CInteraction::GetTelemetryDataNoRef(*((struct CComposition ***)this + 65));
        if ( TelemetryDataNoRef )
          (*(void (__fastcall **)(struct IManipulationTelemetryData *, _QWORD))(*(_QWORD *)TelemetryDataNoRef + 32LL))(
            TelemetryDataNoRef,
            *((_QWORD *)this + 64));
      }
    }
    v6 = CInteractionTracker::CalculateInertiaCallbackValues((CScrollAnimation **)this, (__int64)v7);
    *(_OWORD *)((char *)this + 632) = *(_OWORD *)v6;
    *(_OWORD *)((char *)this + 648) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)((char *)this + 664) = *(_OWORD *)(v6 + 32);
    *((_QWORD *)this + 85) = *(_QWORD *)(v6 + 48);
    CInteractionTracker::DestroyInteractionAnimations(this);
  }
  CChainingHelper::StartIdle((CInteractionTracker *)((char *)this + 328), this);
  CInteractionTracker::SetState((__int64)this, 0);
}
