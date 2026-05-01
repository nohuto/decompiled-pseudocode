/*
 * XREFs of ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800F5E74
 * Callers:
 *     _lambda_271dd6204b0ad146775bb9f0699c6aeb_::operator() @ 0x1800A16CC (_lambda_271dd6204b0ad146775bb9f0699c6aeb_--operator().c)
 *     ?UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z @ 0x18026BB0C (-UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z.c)
 *     ?SetGestureState@MultitaskingViewGestureState@@UEAAXW4GestureState@@@Z @ 0x18026D060 (-SetGestureState@MultitaskingViewGestureState@@UEAAXW4GestureState@@@Z.c)
 *     ?AppLayoutChanged@TabletModeCoverWindow@@UEAAJPEAUIAppLayout@@@Z @ 0x1802E1840 (-AppLayoutChanged@TabletModeCoverWindow@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1802E1E00 (-DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x1802E2374 (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z @ 0x1802E2630 (-RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z.c)
 *     ?ShellTargetChanged@TabletModeCoverWindow@@UEAAJPEAUIApplicationView@@@Z @ 0x1802E28A0 (-ShellTargetChanged@TabletModeCoverWindow@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x1802E2900 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 */

RTL_SRWLOCK **__fastcall Microsoft::WRL::Wrappers::SRWLock::LockExclusive(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a2, a1);
  return a2;
}
