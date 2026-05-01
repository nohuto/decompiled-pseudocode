/*
 * XREFs of ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800F20F0
 * Callers:
 *     ?SetCancelRotationDelayHintWindow@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@@Z @ 0x1800F21C0 (-SetCancelRotationDelayHintWindow@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z @ 0x1800F2250 (-SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z.c)
 *     ?ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ @ 0x1800F22E0 (-ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ.c)
 *     ?SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1800F2360 (-SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z @ 0x1800F2400 (-SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z.c)
 *     ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1800F24A0 (-SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilege.c)
 *     ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x1800F2590 (-SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z.c)
 *     ?SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1800F2620 (-SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001@@_K_J@Z @ 0x1800F26D0 (-NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_.c)
 *     ?SetWindowArrangement@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEBUtagRECT@@PEAU3@K@Z @ 0x1800F2820 (-SetWindowArrangement@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEBUtagRECT@@PEAU3@K@Z.c)
 *     ?RegisterWindowArrangementCallout@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1800F28C0 (-RegisterWindowArrangementCallout@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z @ 0x1800F2960 (-MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?InsertAfterWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1800F2A00 (-InsertAfterWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@0@Z.c)
 *     ?UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z @ 0x1800F2AB0 (-UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z.c)
 *     ?AllowSetForegroundWindow@CPrivilegedForegroundOperations@@EEAAJXZ @ 0x1800F2B50 (-AllowSetForegroundWindow@CPrivilegedForegroundOperations@@EEAAJXZ.c)
 *     ?EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z @ 0x1800F2BD0 (-EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z.c)
 *     ?SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z @ 0x1800F2C60 (-SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z.c)
 *     ?QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z @ 0x1800F2D00 (-QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1800F2E94 (-SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z @ 0x1800F2F90 (-RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE.c)
 *     _PrivilegedHotkeyOperations::RequestPrivilegedHotkeys_::_1_::dtor$3 @ 0x1801ED044 (_PrivilegedHotkeyOperations--RequestPrivilegedHotkeys_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IamAccess::SyncIamAccess::~SyncIamAccess(RTL_SRWLOCK **this)
{
  volatile signed __int32 *v2; // rcx

  EnableIAMAccess((*this)[6].Ptr, 0LL);
  ReleaseSRWLockExclusive(*this + 7);
  v2 = (volatile signed __int32 *)*this;
  if ( *this )
  {
    *this = 0LL;
    if ( _InterlockedExchangeAdd(v2 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
