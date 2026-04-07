/*
 * XREFs of ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18008EF6C
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800051A0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800063A4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180094C4C (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180095130 (-_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimatio.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096D00 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_ccaea7de34ba34ea3a568d9728ee50f3___ @ 0x18008DBE8 (CTransitionVisualController--ForEachOwnedWindow__lambda_ccaea7de34ba34ea3a568d9728ee50f3___.c)
 */

__int64 __fastcall CTransitionVisualController::GetClonableOwnedWindowCount(struct CWindowData *a1)
{
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  unsigned int *v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = &v2;
  CTransitionVisualController::ForEachOwnedWindow__lambda_ccaea7de34ba34ea3a568d9728ee50f3___((__int64)a1, &v3, 1);
  return v2;
}
