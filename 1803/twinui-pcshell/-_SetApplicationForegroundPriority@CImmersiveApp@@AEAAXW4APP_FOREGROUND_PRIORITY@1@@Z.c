/*
 * XREFs of ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18004829C
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180049A20 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x18012E7E0 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x18012EA70 (-HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18012EC40 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18000AC5C (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x1800481CC (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     WPP_SF_lDqd @ 0x180132B7C (WPP_SF_lDqd.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::_SetApplicationForegroundPriority(__int64 a1, int a2)
{
  _UNKNOWN **v2; // rax
  unsigned int v5; // ebx
  CTaskWindow *v6; // rcx
  __int64 (__fastcall *v7)(CTaskWindow *); // rax
  CApplicationManagerUtility *NativeWindow; // rax
  HWND v9; // rdx
  HWND v10; // rbp
  char *v11; // r8
  __int64 v12; // r8
  char *v13; // r14
  int Error; // esi
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  DWORD dwProcessId; // [rsp+80h] [rbp+8h] BYREF
  char *v18; // [rsp+90h] [rbp+18h]

  v2 = &retaddr;
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 744) || a2 == *(_DWORD *)(a1 + 748) )
    return (char)v2;
  if ( !*(_QWORD *)(a1 + 424)
    || ((v6 = **(CTaskWindow ***)(a1 + 416),
         v7 = *(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)v6 + 32LL),
         v7 != CTaskWindow::GetNativeWindow)
      ? (NativeWindow = (CApplicationManagerUtility *)((__int64 (*)(void))v7)())
      : (NativeWindow = (CApplicationManagerUtility *)CTaskWindow::GetNativeWindow(v6)),
        (v10 = (HWND)NativeWindow) == 0LL) )
  {
    v11 = *(char **)(a1 + 752);
    LOBYTE(v2) = (_BYTE)v11 - 1;
    if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      LOBYTE(v2) = CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v11, 0, 0LL);
    return (char)v2;
  }
  LOBYTE(v2) = CApplicationManagerUtility::IsValidWindow(NativeWindow, v9);
  if ( !(_BYTE)v2 )
    return (char)v2;
  LODWORD(v2) = GetWindowThreadProcessId(v10, &dwProcessId);
  if ( !(_DWORD)v2 )
  {
    Error = -2147024890;
LABEL_22:
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      LOBYTE(v5) = a2 == 0;
      LOBYTE(v2) = WPP_SF_lDqd(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, v12, v5, dwProcessId, v10, Error);
    }
    return (char)v2;
  }
  v13 = (char *)OpenProcess(0x200u, 0, dwProcessId);
  v18 = v13;
  if ( v13 )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  if ( Error >= 0 )
    CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v13, dwProcessId, (__int64)v10);
  LOBYTE(v2) = (_BYTE)v13 - 1;
  if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    LOBYTE(v2) = CloseHandle(v13);
  if ( Error < 0 )
    goto LABEL_22;
  return (char)v2;
}
