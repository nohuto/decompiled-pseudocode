/*
 * XREFs of ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180058B04
 * Callers:
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x180057B80 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180059A00 (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 * Callees:
 *     ?GetRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@_N@Z @ 0x18002BEC4 (-GetRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@_N@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18005953C (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005A958 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x18005AFC4 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005B94C (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::_HideApplication(__int64 a1, int a2)
{
  unsigned int v4; // ebp
  bool v5; // si
  __int64 v6; // rdx
  __int64 v7; // rbx
  HWND v8; // rdx
  HWND ForegroundWindow; // rax
  HWND v10; // rdx
  HWND RootOwner; // rbx

  v4 = 0;
  v5 = (*(_DWORD *)(a1 + 536) & 2) != 0;
  if ( (*(_DWORD *)(a1 + 536) & 4) != 0 || (*(_DWORD *)(a1 + 536) & 2) != 0 )
  {
    v4 = v5 + 1;
    if ( (*(_DWORD *)(a1 + 536) & 4) != 0 )
    {
      v6 = 0LL;
      v7 = a1 + 264;
      if ( a2 )
      {
        v6 = 2LL;
        if ( a2 == 2 )
          v6 = 10LL;
      }
      if ( *(_QWORD *)(a1 + 424) )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(***(_QWORD ***)(a1 + 416) + 136LL))(
          **(_QWORD **)(a1 + 416),
          v6,
          (unsigned int)v6);
      *(_BYTE *)(v7 + 184) = 0;
      CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)v7);
      if ( *(_QWORD *)(v7 + 160) )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(***(_QWORD ***)(v7 + 152) + 136LL))(
          **(_QWORD **)(v7 + 152),
          0LL,
          0LL);
      v8 = *(HWND *)(v7 + 120);
      if ( v8 )
        CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
          (CImmersiveApp::CImmersiveWindowCollection *)v7,
          v8);
      CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
      GetSystemTimeAsFileTime((LPFILETIME)(a1 + 668));
    }
    if ( v5 )
    {
      ForegroundWindow = GetForegroundWindow();
      RootOwner = (HWND)CApplicationManagerUtility::GetRootOwner(ForegroundWindow, v10);
      if ( RootOwner == CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 264)) )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[19].Ptr);
    }
  }
  *(_DWORD *)(a1 + 624) = 0;
  return v4;
}
