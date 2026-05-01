/*
 * XREFs of ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180145CB4
 * Callers:
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18013DA90 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x18013DC40 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180145FCC (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x180146034 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowReadyState::SetWindow(__int64 a1, HWND a2, int a3)
{
  char v6; // di
  char v7; // r14
  int *v8; // rsi
  unsigned int PropW; // eax
  int v10; // eax
  __int64 v11; // rcx
  char v12[8]; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+28h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-20h] BYREF

  v6 = 1;
  v7 = *(_QWORD *)a1 && !*(_DWORD *)(a1 + 8);
  v8 = (int *)(a1 + 8);
  *(_QWORD *)a1 = a2;
  v13 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v13 & 0xFFFFFFF1;
  ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
    a1,
    &v13);
  if ( a2 )
  {
    PropW = (unsigned int)GetPropW(a2, L"CoreWindowResizeManager_ShouldWaitForLayoutCompletion");
    *(_BYTE *)(a1 + 24) = PropW == 1;
    if ( PropW == 1 && a3 != 1 )
    {
      v13 = *v8;
      *v8 = v13 | 2;
      ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
        a1,
        &v13);
    }
    Rect = 0LL;
    GetWindowRect(a2, &Rect);
    v10 = Rect.right - Rect.left;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 28) = v10;
    *(_DWORD *)(a1 + 32) = Rect.bottom - Rect.top;
    WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)a1);
  }
  if ( !*(_QWORD *)a1 || *v8 )
    v6 = 0;
  if ( v6 != v7 )
  {
    v11 = *(_QWORD *)(a1 + 96);
    v12[0] = v6;
    if ( !v11 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 16LL))(v11, v12);
  }
}
