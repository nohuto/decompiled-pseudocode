/*
 * XREFs of ?ReleaseLock@CWindowsPolicyManager@@UEAAXXZ @ 0x1800099A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowsPolicyManager::ReleaseLock(CWindowsPolicyManager *this)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
}
