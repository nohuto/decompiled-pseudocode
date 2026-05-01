/*
 * XREFs of ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18007DE3C
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x180062FE8 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180063A50 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800642A0 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064B10 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x180066260 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x18007B700 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180158498 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CCortanaConversationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180159860 (-OnViewPropertiesChanging@CCortanaConversationExperienceManager@@MEAAJPEAVCSingleViewShellExperi.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801653A0 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?CalculateJumpViewPosition@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@PEAU2@@Z @ 0x18016E504 (-CalculateJumpViewPosition@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@PEAU2@@Z.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1801712A8 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x18018503C (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x18018538C (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 * Callees:
 *     InitDPI @ 0x18008F21C (InitDPI.c)
 */

int __fastcall ExperienceManagerUtils::ScaleByPerMonitorDPI(ExperienceManagerUtils *this, __int64 a2, HMONITOR a3)
{
  int v4; // esi
  int v5; // ebx
  int v7; // [rsp+38h] [rbp+10h] BYREF
  char v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = (int)this;
  InitDPI(this);
  v5 = nNumerator;
  if ( a2 && (int)GetDpiForMonitor(a2, 0LL, &v7, &v8) >= 0 )
    v5 = v7;
  return MulDiv(v4, v5, 96);
}
