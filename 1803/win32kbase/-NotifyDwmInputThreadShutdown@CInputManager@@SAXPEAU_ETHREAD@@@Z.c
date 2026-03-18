/*
 * XREFs of ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C015FB20
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C015F66C (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 */

void __fastcall CInputManager::NotifyDwmInputThreadShutdown(struct _ETHREAD *a1)
{
  CInputManager *v1; // rcx

  v1 = g_pInputManager;
  if ( g_pInputManager )
  {
    *((_DWORD *)g_pInputManager + 18) = 0;
    CInputManager::CleanupDwmInputThread(v1);
  }
}
