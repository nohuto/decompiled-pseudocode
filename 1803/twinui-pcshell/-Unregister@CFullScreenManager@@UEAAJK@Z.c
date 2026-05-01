/*
 * XREFs of ?Unregister@CFullScreenManager@@UEAAJK@Z @ 0x180152500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFullScreenManager::Unregister(CFullScreenManager *this, unsigned int a2)
{
  return CGITRegistrationList::Unregister((CFullScreenManager *)((char *)this + 32), a2);
}
