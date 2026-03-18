/*
 * XREFs of ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016ED74
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18016C330 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulation@@@Z @ 0x180169114 (--4-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulation@@@Z.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x180169510 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18016AA60 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ClearActiveManipulation@CInteractionTracker@@AEAAXXZ @ 0x18016B4E4 (-ClearActiveManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18016B5C0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E588 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016EAF0 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x180170B9C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 */

void __fastcall CInteractionTracker::TransitionToInContact(CInteractionTracker *this, struct CManipulation *a2)
{
  int v2; // eax
  unsigned int v5; // ecx
  int v6; // eax
  __int64 v7; // rdi
  struct IManipulationTelemetryData *TelemetryDataNoRef; // rax

  v2 = *((_DWORD *)this + 38);
  if ( !v2 || (unsigned int)(v2 - 2) <= 1 )
  {
    v5 = *((_DWORD *)this + 134);
    v6 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        v7 = v6;
        if ( *(struct CManipulation **)(*((_QWORD *)this + 65) + 8LL * v6) == a2 )
          break;
        if ( ++v6 >= v5 )
          return;
      }
      CInteractionTracker::ClearActiveManipulation(this);
      Microsoft::WRL::ComPtr<CManipulation>::operator=((__int64 *)this + 68, (__int64)a2);
      Microsoft::WRL::ComPtr<CInteraction>::operator=(
        (CArrayBasedCoverageSet **)this + 69,
        (CArrayBasedCoverageSet **)(*((_QWORD *)this + 66) + 8 * v7));
      CManipulation::SetCaptureState_RenderThread(*((_QWORD *)this + 68), 2LL);
      CInteractionTracker::StopCustomAnimations(this);
      *((_DWORD *)this + 40) = 0;
      CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)this);
      if ( !*((_DWORD *)this + 38) )
      {
        TelemetryDataNoRef = CInteraction::GetTelemetryDataNoRef(*((CInteraction **)this + 69));
        if ( TelemetryDataNoRef )
          (*(void (__fastcall **)(struct IManipulationTelemetryData *, __int64, _QWORD))(*(_QWORD *)TelemetryDataNoRef
                                                                                       + 16LL))(
            TelemetryDataNoRef,
            (*((_QWORD *)this + 68) + 64LL) & -(__int64)(*((_QWORD *)this + 68) != 0LL),
            -*((_QWORD *)this + 68));
      }
      *((_DWORD *)this + 152) = *((_DWORD *)this + 28);
      CInteractionTracker::SetState((__int64)this, 1);
    }
  }
}
