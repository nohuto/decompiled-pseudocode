/*
 * XREFs of ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x1800432A0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021FE8 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180043D10 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180013454 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

void __fastcall CDesktopManager::SetupDPIValues(CDesktopManager *this)
{
  *((_QWORD *)this + 49) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 50) = 0x3FF0000000000000LL;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(1u) )
  {
    *((double *)this + 49) = (double)(int)GetDpiForSystem() / 96.0;
    *((double *)this + 50) = (double)(int)GetDpiForSystem() / 96.0;
  }
}
