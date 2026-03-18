/*
 * XREFs of ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016EB34
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18016D390 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18004D364 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x180166A40 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801680CC (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 *     ??4?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulation@@@Z @ 0x18016BEF4 (--4-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulation@@@Z.c)
 *     ?ClearActiveManipulation@CInteractionTracker@@AEAAXXZ @ 0x18016C770 (-ClearActiveManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18016C830 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E3E0 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016E97C (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::TransitionToInContact(CInteractionTracker *this, struct CManipulation *a2)
{
  int v2; // eax
  unsigned int v5; // ecx
  int v6; // edi
  struct IManipulationTelemetryData *TelemetryDataNoRef; // rax

  v2 = *((_DWORD *)this + 35);
  if ( !v2 || (unsigned int)(v2 - 2) <= 1 )
  {
    v5 = *((_DWORD *)this + 126);
    v6 = 0;
    if ( v5 )
    {
      while ( *(struct CManipulation **)(*((_QWORD *)this + 61) + 8LL * v6) != a2 )
      {
        if ( ++v6 >= v5 )
          return;
      }
      CInteractionTracker::ClearActiveManipulation(this);
      Microsoft::WRL::ComPtr<CManipulation>::operator=((__int64 *)this + 64, (__int64)a2);
      Microsoft::WRL::ComPtr<CInteraction>::operator=(
        (CArrayBasedCoverageSet **)this + 65,
        *(CArrayBasedCoverageSet **)(*((_QWORD *)this + 62) + 8LL * v6));
      CManipulation::SetCaptureState_RenderThread(*((CManipulation **)this + 64));
      CInteractionTracker::StopCustomAnimations(this);
      *((_DWORD *)this + 37) = 0;
      CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)this);
      if ( !*((_DWORD *)this + 35) )
      {
        TelemetryDataNoRef = CInteraction::GetTelemetryDataNoRef(*((struct CComposition ***)this + 65));
        if ( TelemetryDataNoRef )
          (*(void (__fastcall **)(struct IManipulationTelemetryData *, _QWORD))(*(_QWORD *)TelemetryDataNoRef + 16LL))(
            TelemetryDataNoRef,
            *((_QWORD *)this + 64));
      }
      *((_DWORD *)this + 144) = *((_DWORD *)this + 28);
      CInteractionTracker::SetState((__int64)this, 1);
    }
  }
}
