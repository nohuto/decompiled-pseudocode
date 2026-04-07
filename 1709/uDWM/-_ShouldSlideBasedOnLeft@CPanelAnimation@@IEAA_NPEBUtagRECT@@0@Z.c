/*
 * XREFs of ?_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z @ 0x180096494
 * Callers:
 *     ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098EB0 (-_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180099400 (-_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18000BDB8 (-IsRTL@CStoryboard@@SA_NXZ.c)
 */

bool __fastcall CPanelAnimation::_ShouldSlideBasedOnLeft(
        CPanelAnimation *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  return a2->right == a3->right || a2->left != a3->left && CStoryboard::IsRTL() == 0;
}
