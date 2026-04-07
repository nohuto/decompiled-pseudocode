/*
 * XREFs of ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180041F4C
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180024928 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x18002BE34 (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003F568 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x1800395D0 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 */

void __fastcall CDesktopManager::SetWindowAnimation(char a1)
{
  char v2; // al
  char v3; // cl

  v2 = CDesktopManager::CheckAnyPolicy(1u);
  v3 = a1;
  if ( v2 )
    v3 = 0;
  *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) = v3;
}
