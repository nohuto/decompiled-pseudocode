/*
 * XREFs of ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18007ABD0
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180065100 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180066C30 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180077510 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18015FF60 (-OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 *     ?OnEventQueued@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180160E40 (-OnEventQueued@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18016C230 (-OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRI.c)
 *     ?OnEventQueued@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18016EBF0 (-OnEventQueued@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHST.c)
 *     ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016F240 (-OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801773A0 (-OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 *     ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180177A90 (-OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnEventQueued@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18017C460 (-OnEventQueued@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnViewUncloaking@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017CFD0 (-OnViewUncloaking@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
        Microsoft::WRL::Wrappers::Details *this,
        HSTRING a2,
        HSTRING a3)
{
  HRESULT v3; // eax
  INT32 result; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  v3 = WindowsCompareStringOrdinal((HSTRING)this, a2, &result);
  if ( v3 < 0 )
  {
    RaiseException(v3, 1u, 0, 0LL);
    JUMPOUT(0x1800E5B48LL);
  }
  return (unsigned int)result;
}
