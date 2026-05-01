/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VDummyWindow@CExperienceManagerAnimationHelper@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1801DB450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CWRLImpWndProc<CExperienceManagerAnimationHelper::DummyWindow>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR v8; // rbx
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v11; // rbx
  __int64 v12; // rsi

  if ( Msg == 129 )
  {
    v8 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v8 + 24) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v8);
      return (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v8 + 16))(
               v8 + 16,
               hWnd,
               Msg,
               wParam,
               lParam);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
    v11 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    _InterlockedIncrement((volatile signed __int32 *)(WindowLongPtrW + 12));
    v12 = (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(WindowLongPtrW + 16))(
            WindowLongPtrW + 16,
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v11 + 24) = 0LL;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(LONG_PTR, __int64))(*(_QWORD *)v11 + 40LL))(v11, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    return v12;
  }
}
