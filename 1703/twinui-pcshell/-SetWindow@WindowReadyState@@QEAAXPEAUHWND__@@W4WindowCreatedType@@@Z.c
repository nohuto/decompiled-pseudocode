/*
 * XREFs of ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18011B9B4
 * Callers:
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1801137F0 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180113990 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18011BCCC (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x18011BD34 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowReadyState::SetWindow(__int64 a1, HWND a2, int a3)
{
  char v6; // di
  char v7; // r14
  int *v8; // rsi
  bool v9; // al
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
    v9 = (unsigned int)GetPropW(a2, L"CoreWindowResizeManager_ShouldWaitForLayoutCompletion") == 1;
    *(_BYTE *)(a1 + 24) = v9;
    if ( v9 && a3 != 1 )
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
