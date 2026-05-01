/*
 * XREFs of ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x180055E30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800582C4 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0001@@W4GHOST_STATUS@@@Z @ 0x180058584 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180058678 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800587A4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180058B34 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 */

__int64 __fastcall CImmersiveApp::IncrementGhostAnimationWaitCountInternal(CImmersiveApp *this)
{
  CImmersiveApp::CImmersiveWindowCollection *v1; // rbx
  bool v2; // dl

  v1 = (CImmersiveApp *)((char *)this + 136);
  if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 136)) )
    CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(v1, 0LL, 4LL);
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v1) )
  {
    if ( (*((_BYTE *)v1 + 196) & 4) != 0 )
      CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(v1);
    if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(v1) )
      CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(v1, v2);
  }
  return 2147947423LL;
}
