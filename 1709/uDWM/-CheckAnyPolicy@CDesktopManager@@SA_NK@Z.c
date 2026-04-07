/*
 * XREFs of ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x180036998
 * Callers:
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x18000C0D0 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180025AAC (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180038E34 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18003BC70 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x18007B5B0 (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::CheckAnyPolicy(unsigned int a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 56LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
           a1);
}
