/*
 * XREFs of ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x1C015F7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C015F5F8 (--_GCInputManager@@IEAAPEAXI@Z.c)
 */

void CInputManager::DestroySessionGlobal(void)
{
  if ( g_pInputManager )
  {
    CInputManager::`scalar deleting destructor'(g_pInputManager);
    g_pInputManager = 0LL;
  }
}
