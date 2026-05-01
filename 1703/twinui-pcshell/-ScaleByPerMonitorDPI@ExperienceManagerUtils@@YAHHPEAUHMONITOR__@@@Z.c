/*
 * XREFs of ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18018C37C
 * Callers:
 *     ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180093DE0 (-OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x1800A53AC (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1800A7970 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x1800C2BF0 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C47E8 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800C5DA4 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800C5F30 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@00_N1PEAUHMONITOR__@@@Z @ 0x1800C6820 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@00_N1PEAUHMONITOR__@@@Z.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1800C7088 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800C727C (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     InitDPI @ 0x18017C7F8 (InitDPI.c)
 */

int __fastcall ExperienceManagerUtils::ScaleByPerMonitorDPI(ExperienceManagerUtils *this, __int64 a2, HMONITOR a3)
{
  int v4; // esi
  int v5; // ebx
  int v7; // [rsp+38h] [rbp+10h] BYREF
  char v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = (int)this;
  InitDPI();
  v5 = dword_1802439C8;
  if ( a2 && (int)GetDpiForMonitor(a2, 0LL, &v7, &v8) >= 0 )
    v5 = v7;
  return MulDiv(v4, v5, 96);
}
