/*
 * XREFs of ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x180059BFC
 * Callers:
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180056E60 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180057050 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x1800571E0 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x180057500 (-HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BFAC (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     WPP_SF_lDqd @ 0x180052548 (WPP_SF_lDqd.c)
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x180059D7C (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005A958 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::_SetApplicationForegroundPriority(__int64 a1, unsigned int a2)
{
  _UNKNOWN **v2; // rax
  int v5; // ebx
  CApplicationManagerUtility *ApplicationWindow; // rax
  HWND v7; // rdx
  HWND v8; // r14
  __int64 v9; // r8
  __int64 v10; // r8
  signed int v11; // edi
  char *v12; // rbp
  signed int LastError; // eax
  __int64 v15; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  DWORD dwProcessId; // [rsp+80h] [rbp+8h] BYREF
  char *v18; // [rsp+90h] [rbp+18h]

  v2 = &retaddr;
  v5 = 0;
  if ( *(_BYTE *)(a1 + 744) && a2 != *(_DWORD *)(a1 + 748) )
  {
    ApplicationWindow = (CApplicationManagerUtility *)CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 264));
    v8 = (HWND)ApplicationWindow;
    if ( ApplicationWindow )
    {
      LOBYTE(v2) = CApplicationManagerUtility::IsValidWindow(ApplicationWindow, v7);
      if ( (_BYTE)v2 )
      {
        LODWORD(v2) = GetWindowThreadProcessId(v8, &dwProcessId);
        v11 = (_DWORD)v2 == 0 ? 0x80070006 : 0;
        if ( (_DWORD)v2 )
        {
          v12 = (char *)OpenProcess(0x200u, 0, dwProcessId);
          v18 = v12;
          if ( v12 )
          {
            v11 = 0;
          }
          else
          {
            LastError = GetLastError();
            v11 = (unsigned __int16)LastError | 0x80070000;
            if ( LastError <= 0 )
              v11 = LastError;
            if ( v11 >= 0 )
              v11 = -2147467259;
          }
          if ( v11 >= 0 )
            CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v12, dwProcessId, v8);
          LOBYTE(v2) = (_BYTE)v12 - 1;
          if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            LOBYTE(v2) = CloseHandle(v12);
        }
        if ( v11 < 0 && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          LOBYTE(v5) = a2 == 0;
          LODWORD(v15) = dwProcessId;
          LOBYTE(v2) = WPP_SF_lDqd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, v10, v5, v15, v8, v11);
        }
      }
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 752);
      LOBYTE(v2) = v9 - 1;
      if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        LOBYTE(v2) = CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v9, 0LL, 0LL);
    }
  }
  return (char)v2;
}
