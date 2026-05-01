/*
 * XREFs of ?SetBand@CFrameApplicationPresentation@@UEAAJW4ZBID@@@Z @ 0x180013720
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x180009150 (-SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetBand(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  HWND ForegroundWindow; // rax
  HWND v6; // rdi
  HWND v7; // rdx
  CPrivilegedPresentationOperations *Ptr; // rcx
  __int64 (__fastcall *v9)(CPrivilegedPresentationOperations *, HWND, HWND, unsigned int); // rax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  if ( a2 == 1 )
  {
    v2 = -2LL;
    ForegroundWindow = GetForegroundWindow();
    v6 = ForegroundWindow;
    if ( ForegroundWindow )
    {
      if ( *(HWND *)(a1 + 128) != ForegroundWindow && (GetWindowLongPtrW(ForegroundWindow, -20) & 8) == 0 )
        v2 = (__int64)v6;
    }
  }
  v7 = *(HWND *)(a1 + 128);
  Ptr = (CPrivilegedPresentationOperations *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr;
  v9 = *(__int64 (__fastcall **)(CPrivilegedPresentationOperations *, HWND, HWND, unsigned int))(*(_QWORD *)Ptr + 32LL);
  if ( v9 == CPrivilegedPresentationOperations::SetWindowBand )
    v10 = CPrivilegedPresentationOperations::SetWindowBand(Ptr, v7, (HWND)v2, a2);
  else
    v10 = v9(Ptr, v7, (HWND)v2, a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59E,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v10,
      v16);
    return v11;
  }
  else
  {
    if ( a2 == 1
      && ((v2 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0
      && (v14 = (*(__int64 (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr
                                                                  + 48LL))(
                  CApplicationManagerUtility::g_pIAMGlobals[19].Ptr,
                  *(_QWORD *)(a1 + 128),
                  v2),
          v14 < 0) )
    {
      v15 = 1452LL;
    }
    else
    {
      v12 = **(_QWORD **)(a1 + 104);
      if ( !v12 )
        return 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 24LL))(v12, a2);
      if ( v14 >= 0 )
        return 0LL;
      v15 = 1461LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v14,
      v16);
    return (unsigned int)v14;
  }
}
