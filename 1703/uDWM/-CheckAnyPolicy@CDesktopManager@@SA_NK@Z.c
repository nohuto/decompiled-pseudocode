/*
 * XREFs of ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x1800171E8
 * Callers:
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x18000E2E0 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18003329C (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x180043878 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18004A6B8 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x180083AD4 (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::CheckAnyPolicy(unsigned int a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 56LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
           a1);
}
