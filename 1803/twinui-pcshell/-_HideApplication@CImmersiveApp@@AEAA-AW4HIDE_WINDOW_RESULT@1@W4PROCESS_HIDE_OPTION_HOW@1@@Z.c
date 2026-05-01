/*
 * XREFs of ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180131B94
 * Callers:
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x18012DCC0 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180132004 (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 * Callees:
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800483C4 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005DC44 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1801125B4 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ?HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2@@Z @ 0x18012EDF4 (-HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2.c)
 */

__int64 __fastcall CImmersiveApp::_HideApplication(__int64 a1, int a2)
{
  unsigned int v3; // ebp
  int v4; // ecx
  int v5; // ebx
  int v6; // ecx
  HWND ForegroundWindow; // rax
  HWND VisibleRootOwner; // rbx

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 536);
  v5 = v4 & 2;
  v6 = v4 & 4;
  if ( v6 || v5 )
  {
    if ( v6 )
    {
      CImmersiveApp::CImmersiveWindowCollection::HideVisibleAppWindow(a1 + 264, a2);
      CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
      GetSystemTimeAsFileTime((LPFILETIME)(a1 + 668));
    }
    v3 = (v5 != 0) + 1;
    if ( v5 )
    {
      ForegroundWindow = GetForegroundWindow();
      VisibleRootOwner = (HWND)CApplicationManagerUtility::GetVisibleRootOwner(ForegroundWindow, 0);
      if ( VisibleRootOwner == CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 264)) )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
    }
  }
  *(_DWORD *)(a1 + 624) = 0;
  return v3;
}
