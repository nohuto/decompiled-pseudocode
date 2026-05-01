/*
 * XREFs of ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x180021460
 * Callers:
 *     ?GetCallingProcessId@CallerIdentity@@YAJPEAK@Z @ 0x1801C19C4 (-GetCallingProcessId@CallerIdentity@@YAJPEAK@Z.c)
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x1801C1A14 (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1801C1C7C (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x1801C1DA8 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x1801C2DE0 (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1801C2E60 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     _CAppViewManager::_ProcessNextOperation_::_1_::dtor$1 @ 0x1801E88E5 (_CAppViewManager--_ProcessNextOperation_--_1_--dtor$1.c)
 *     _CApplicationFrameService::_CreateFrameManager_::_1_::dtor$2 @ 0x1801E8B17 (_CApplicationFrameService--_CreateFrameManager_--_1_--dtor$2.c)
 *     _CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring_::_1_::dtor$0 @ 0x1801E8C0A (_CCrashDetector--_TakeOwnershipOfHandleAndStartMonitoring_--_1_--dtor$0.c)
 *     _CImmersiveApp::_SetApplicationForegroundPriority_::_1_::dtor$0 @ 0x1801E8FA8 (_CImmersiveApp--_SetApplicationForegroundPriority_--_1_--dtor$0.c)
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
