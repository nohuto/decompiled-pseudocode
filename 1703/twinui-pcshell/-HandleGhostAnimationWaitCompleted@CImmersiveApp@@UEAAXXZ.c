/*
 * XREFs of ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x180054E00
 * Callers:
 *     <none>
 * Callees:
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800587A4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 */

void __fastcall CImmersiveApp::HandleGhostAnimationWaitCompleted(CImmersiveApp *this)
{
  char *v2; // rcx

  v2 = (char *)this + 136;
  if ( (v2[196] & 4) != 0 )
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(v2);
  CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)((char *)this - 88));
}
