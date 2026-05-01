/*
 * XREFs of ?FullScreenVisibilityChanged@CFullScreenManager@@UEAAJH@Z @ 0x180150320
 * Callers:
 *     <none>
 * Callees:
 *     ?_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z @ 0x1801528AC (-_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z.c)
 */

__int64 __fastcall CFullScreenManager::FullScreenVisibilityChanged(CFullScreenManager *this, int a2)
{
  if ( *((_DWORD *)this + 19) )
    CFullScreenManager::_FireFullScreenModeChangedEvent((CFullScreenManager *)((char *)this - 112), a2);
  return 0LL;
}
