/*
 * XREFs of ?OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ @ 0x180094010
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180004BC0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x1800924CC (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 */

__int64 __fastcall CDialogSwitch::OnEndTransitionRequest(CStoryboard **this)
{
  unsigned int v1; // ebx

  v1 = CStoryboard::OnEndTransitionRequest(this);
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 28), 18);
  return v1;
}
