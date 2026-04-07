/*
 * XREFs of ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18003B448
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016C9C (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003C138 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18003583C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

void __fastcall CDesktopManager::SetupDPIValues(CDesktopManager *this)
{
  *((_QWORD *)this + 55) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 56) = 0x3FF0000000000000LL;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(1u) )
  {
    *((double *)this + 55) = (double)(int)GetDpiForSystem() / 96.0;
    *((double *)this + 56) = (double)(int)GetDpiForSystem() / 96.0;
  }
}
