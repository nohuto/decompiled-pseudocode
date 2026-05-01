/*
 * XREFs of ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005A958
 * Callers:
 *     ?GetOrientationPreferences@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1800551E0 (-GetOrientationPreferences@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x180057500 (-HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180057780 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?GetPIDForRotation@CImmersiveApp@@UEAAKXZ @ 0x180057B40 (-GetPIDForRotation@CImmersiveApp@@UEAAKXZ.c)
 *     ?GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800580E0 (-GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetNativeWindow@CImmersiveApp@@UEBAPEAUHWND__@@XZ @ 0x1800582D0 (-GetNativeWindow@CImmersiveApp@@UEBAPEAUHWND__@@XZ.c)
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180058410 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x1800588F4 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180058B04 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?_AddNotificationsAndResolve@CImmersiveApp@@AEAAJQEBUAPP_CHANGE_INFO@@_KPEAPEAU2@PEA_K@Z @ 0x180059230 (-_AddNotificationsAndResolve@CImmersiveApp@@AEAAJQEBUAPP_CHANGE_INFO@@_KPEAPEAU2@PEA_K@Z.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x180059BFC (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x180059D7C (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x180059E90 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56___::Invoke @ 0x18005E640 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56___--Invoke.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

HWND __fastcall CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  HWND result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 20) )
    return (HWND)(*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 19) + 32LL))(**((_QWORD **)this + 19));
  return result;
}
