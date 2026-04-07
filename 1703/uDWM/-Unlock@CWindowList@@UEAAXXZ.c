/*
 * XREFs of ?Unlock@CWindowList@@UEAAXXZ @ 0x1800859A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::Unlock(CWindowList *this)
{
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
