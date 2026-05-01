/*
 * XREFs of ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x1800564F8
 * Callers:
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x1800556B0 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180057394 (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 * Callees:
 *     ?GetRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@_N@Z @ 0x18002A5CC (-GetRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@_N@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180056F30 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180058298 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180058908 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800590F4 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::_HideApplication(__int64 a1, int a2)
{
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int v6; // ecx
  bool v7; // bp
  char v8; // cl
  __int64 v9; // rdx
  HWND v10; // rdx
  HWND ForegroundWindow; // rax
  HWND v12; // rdx
  HWND RootOwner; // rbx

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 496);
  v6 = v5 >> 2;
  v7 = (v5 & 2) != 0;
  v8 = v6 & 1;
  if ( v8 || v7 )
  {
    v4 = v7 + 1;
    if ( v8 )
    {
      v9 = 0LL;
      if ( a2 )
      {
        v9 = 2LL;
        if ( a2 == 2 )
          v9 = 10LL;
      }
      if ( *(_QWORD *)(a1 + 384) )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(***(_QWORD ***)(a1 + 376) + 136LL))(
          **(_QWORD **)(a1 + 376),
          v9,
          (unsigned int)v9);
      *(_BYTE *)(a1 + 408) = 0;
      CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 224));
      if ( *(_QWORD *)(a1 + 384) )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(***(_QWORD ***)(a1 + 376) + 136LL))(
          **(_QWORD **)(a1 + 376),
          0LL,
          0LL);
      v10 = *(HWND *)(a1 + 344);
      if ( v10 )
        CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
          (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 224),
          v10);
      CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
      GetSystemTimeAsFileTime((LPFILETIME)(a1 + 628));
    }
    if ( v7 )
    {
      ForegroundWindow = GetForegroundWindow();
      RootOwner = (HWND)CApplicationManagerUtility::GetRootOwner(ForegroundWindow, v12);
      if ( RootOwner == CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 224)) )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[19].Ptr);
    }
  }
  *(_DWORD *)(a1 + 584) = 0;
  return v4;
}
