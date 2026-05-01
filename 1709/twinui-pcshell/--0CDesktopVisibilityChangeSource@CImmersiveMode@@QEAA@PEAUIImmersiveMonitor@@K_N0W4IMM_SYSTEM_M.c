/*
 * XREFs of ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x180031820
 * Callers:
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18003308C (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180031970 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CImmersiveMode::CDesktopVisibilityChangeSource::CDesktopVisibilityChangeSource(
        _QWORD *a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        char a4,
        __int64 (__fastcall ***a5)(_QWORD, GUID *, __int64 *),
        unsigned int a6)
{
  __int64 v10; // rax
  HWND v11; // rdi
  int X[4]; // [rsp+50h] [rbp-38h] BYREF

  *a1 = a2;
  if ( a2 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a2)[1])(a2);
  *((_DWORD *)a1 + 2) = a3;
  *((_BYTE *)a1 + 12) = a4;
  *((_BYTE *)a1 + 14) = 0;
  v10 = SHCreateWorkerWindowW(
          CImmersiveMode::CDesktopVisibilityChangeSource::s_ActivationFilterWndProc,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
  v11 = (HWND)v10;
  if ( v10
    && (*(int (__fastcall **)(PVOID, __int64, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr
                                                              + 32LL))(
         CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
         v10,
         0LL,
         12LL) < 0 )
  {
    DestroyWindow(v11);
    v11 = 0LL;
  }
  a1[2] = v11;
  *((_BYTE *)a1 + 13) = (unsigned int)SHIsSameObject(a2, a5) != 0;
  if ( (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a1 + 72LL))(*a1, X) >= 0 )
    SetWindowPos((HWND)a1[2], 0LL, X[0], X[1], 0, 0, 0x14u);
  CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(a1, a6);
  return a1;
}
