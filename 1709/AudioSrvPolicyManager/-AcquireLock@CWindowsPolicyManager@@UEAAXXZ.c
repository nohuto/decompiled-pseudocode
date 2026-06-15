/*
 * XREFs of ?AcquireLock@CWindowsPolicyManager@@UEAAXXZ @ 0x180005BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowsPolicyManager::AcquireLock(CWindowsPolicyManager *this)
{
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
}
