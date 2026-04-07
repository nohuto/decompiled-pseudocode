/*
 * XREFs of ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800484E8
 * Callers:
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x1800482AC (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009F000 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CCrossFade@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A0D70 (-_WindowEnumCallback@CCrossFade@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1100 (-_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1650 (-_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1930 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1F20 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x18000A7DC (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 */

bool __fastcall CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(CWindowPropertyTracker *this, HWND a2, char a3)
{
  char v4; // bl
  bool v6; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  if ( (int)CWindowPropertyTracker::GetWindowEndCloak(this, a2, &v6) >= 0 )
    return a3 == v6;
  return v4;
}
