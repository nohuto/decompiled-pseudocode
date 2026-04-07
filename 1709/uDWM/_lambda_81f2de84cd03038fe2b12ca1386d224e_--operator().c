/*
 * XREFs of _lambda_81f2de84cd03038fe2b12ca1386d224e_::operator() @ 0x1800929C0
 * Callers:
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098480 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18002EF3C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 */

void __fastcall lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()(__int64 a1, CAnimatedTransitionVisual **a2)
{
  CAnimatedTransitionVisual::SetBeginAlpha(a2[5], *(float *)(a1 + 8));
  *((_BYTE *)a2[5] + 971) = 1;
  *((_BYTE *)a2[5] + 984) = 1;
  CGroupingStoryboard::_SetUnifiedCenter(*(CGroupingStoryboard **)a1, (struct CAnimationComponent *)a2);
}
