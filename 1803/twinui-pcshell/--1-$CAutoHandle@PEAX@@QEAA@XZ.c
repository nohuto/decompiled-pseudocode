/*
 * XREFs of ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x18008EE04
 * Callers:
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x18008ED98 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     _CAppViewManager::_ProcessNextOperation_::_1_::dtor$2 @ 0x1800B0EDC (_CAppViewManager--_ProcessNextOperation_--_1_--dtor$2.c)
 *     _CImmersiveApp::_SetApplicationForegroundPriority_::_1_::dtor$0 @ 0x1800B40A8 (_CImmersiveApp--_SetApplicationForegroundPriority_--_1_--dtor$0.c)
 *     _CApplicationFrameService::_CreateFrameManager_::_1_::dtor$2 @ 0x18012BA6A (_CApplicationFrameService--_CreateFrameManager_--_1_--dtor$2.c)
 *     ?TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ @ 0x18018A4C0 (-TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x180266DB0 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x1802FD59C (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x1802FD624 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x1802FE39C (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1802FE404 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ @ 0x180316C20 (-v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<void *>::~CAutoHandle<void *>(void **a1)
{
  char *v1; // rdx
  int result; // eax

  v1 = (char *)*a1;
  *a1 = 0LL;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
