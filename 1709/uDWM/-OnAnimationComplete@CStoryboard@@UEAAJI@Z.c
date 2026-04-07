/*
 * XREFs of ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x1800042B0
 * Callers:
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x180003D00 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 * Callees:
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x1800044FC (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180004BFC (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::OnAnimationComplete(CStoryboard *this, int a2)
{
  CStoryboard *v2; // rbx

  if ( *((_DWORD *)this + 3) == a2 )
  {
    v2 = (CStoryboard *)((char *)this - 16);
    CStoryboard::_NotifyStoryboardState((char *)this - 16, 4LL);
    CStoryboard::_Cleanup(v2);
  }
  return 0LL;
}
