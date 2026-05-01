/*
 * XREFs of ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800FCB28
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800FBCDC (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x1800FC25C (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x180153514 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x180157068 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x18015B03C (--1CortanaSharedExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x1801620EC (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x18016AC54 (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x180175A70 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x18022DD24 (--1XamlLauncherState@@UEAA@XZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180306D10 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(PTP_TIMER pti)
{
  SetThreadpoolTimer(pti, 0LL, 0, 0);
  WaitForThreadpoolTimerCallbacks(pti, 1);
  CloseThreadpoolTimer(pti);
}
