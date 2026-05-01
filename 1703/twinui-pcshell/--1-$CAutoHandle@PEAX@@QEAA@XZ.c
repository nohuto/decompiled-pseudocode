/*
 * XREFs of ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1800207A0
 * Callers:
 *     ?GetCallingProcessId@CallerIdentity@@YAJPEAK@Z @ 0x18017611C (-GetCallingProcessId@CallerIdentity@@YAJPEAK@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x180176318 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180177134 (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1801771B4 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     _CancelPendingComTaskPoolTasks_::_1_::dtor$0 @ 0x180198CCD (_CancelPendingComTaskPoolTasks_--_1_--dtor$0.c)
 *     _CAppViewManager::_ProcessNextOperation_::_1_::dtor$1 @ 0x180199F23 (_CAppViewManager--_ProcessNextOperation_--_1_--dtor$1.c)
 *     _CApplicationFrameService::_CreateFrameManager_::_1_::dtor$2 @ 0x18019A124 (_CApplicationFrameService--_CreateFrameManager_--_1_--dtor$2.c)
 *     _CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring_::_1_::dtor$0 @ 0x18019A1A8 (_CCrashDetector--_TakeOwnershipOfHandleAndStartMonitoring_--_1_--dtor$0.c)
 *     _CImmersiveApp::_SetApplicationForegroundPriority_::_1_::dtor$0 @ 0x18019A4F6 (_CImmersiveApp--_SetApplicationForegroundPriority_--_1_--dtor$0.c)
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
