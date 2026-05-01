/*
 * XREFs of ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005DC44
 * Callers:
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x18004817C (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x1800481CC (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 *     ?GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18012E160 (-GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetOrientationPreferences@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18012E2D0 (-GetOrientationPreferences@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?GetPIDForRotation@CImmersiveApp@@UEAAKXZ @ 0x18012E320 (-GetPIDForRotation@CImmersiveApp@@UEAAKXZ.c)
 *     ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x18012EA70 (-HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1801303A0 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180131B94 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180131DE8 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 * Callees:
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 */

HWND __fastcall CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  HWND result; // rax
  CTaskWindow *v2; // rcx
  __int64 (*v3)(void); // rax

  result = 0LL;
  if ( *((_QWORD *)this + 20) )
  {
    v2 = (CTaskWindow *)**((_QWORD **)this + 19);
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 32LL);
    if ( (char *)v3 == (char *)CTaskWindow::GetNativeWindow )
      return (HWND)CTaskWindow::GetNativeWindow(v2);
    else
      return (HWND)v3();
  }
  return result;
}
