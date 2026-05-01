/*
 * XREFs of ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x18000B794
 * Callers:
 *     ?SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z @ 0x18000B710 (-SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z.c)
 *     ?QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z @ 0x18000B7F0 (-QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?AllowSetForegroundWindow@CPrivilegedForegroundOperations@@EEAAJXZ @ 0x18019E410 (-AllowSetForegroundWindow@CPrivilegedForegroundOperations@@EEAAJXZ.c)
 *     ?ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ @ 0x18019E550 (-ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ.c)
 *     ?CreateWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJPEAK@Z @ 0x18019E650 (-CreateWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJPEAK@Z.c)
 *     ?DeleteWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJK@Z @ 0x18019E6E0 (-DeleteWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJK@Z.c)
 *     ?EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z @ 0x18019E770 (-EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z.c)
 *     ?EnableWindowGroupPolicy@PrivilegedWindowGroupingOperations@@EEAAJKKK@Z @ 0x18019E800 (-EnableWindowGroupPolicy@PrivilegedWindowGroupingOperations@@EEAAJKKK@Z.c)
 *     ?InsertAfterWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@0@Z @ 0x18019F540 (-InsertAfterWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@0@Z.c)
 *     ?MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z @ 0x18019F660 (-MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?RegisterWindowArrangementCallout@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1801A01B0 (-RegisterWindowArrangementCallout@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z @ 0x1801A0400 (-RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE.c)
 *     _PrivilegedHotkeyOperations::RequestPrivilegedHotkeys_::_1_::dtor$3 @ 0x1801A05CF (_PrivilegedHotkeyOperations--RequestPrivilegedHotkeys_--_1_--dtor$3.c)
 *     ?SetBridgeWindowChild@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1801A0730 (-SetBridgeWindowChild@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 *     ?SetCancelRotationDelayHintWindow@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@@Z @ 0x1801A07D0 (-SetCancelRotationDelayHintWindow@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z @ 0x1801A0860 (-SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z.c)
 *     ?SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1801A0900 (-SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?SetWindowArrangement@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEBUtagRECT@@PEAU3@K@Z @ 0x1801A09B0 (-SetWindowArrangement@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEBUtagRECT@@PEAU3@K@Z.c)
 *     ?SetWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJKPEAUHWND__@@KK@Z @ 0x1801A0A50 (-SetWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJKPEAUHWND__@@KK@Z.c)
 *     ?SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z @ 0x1801A0BF0 (-SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z.c)
 *     ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1801A0C8C (-SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z @ 0x1801A1520 (-UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall IamAccess::SyncIamAccess::~SyncIamAccess(RTL_SRWLOCK **this)
{
  EnableIAMAccess((*this)[5].Ptr, 0LL);
  ReleaseSRWLockExclusive(*this + 6);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(this);
}
