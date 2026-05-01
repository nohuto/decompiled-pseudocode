/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc @ 0x1802DEAA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CleanupTimer @ 0x1802DE894 (CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___--_CleanupTimer.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x1802DEA40 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InvokeCallback.c)
 */

LRESULT __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LPARAM lParam)
{
  __int64 v8; // rdi
  LONG_PTR WindowLongPtrW; // rax
  __int64 v10; // rbx

  v8 = 0LL;
  WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
  v10 = WindowLongPtrW;
  if ( !WindowLongPtrW )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  if ( Msg == 2 )
  {
    KillTimer(hWnd, 0x64uLL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    SetWindowLongPtrW(hWnd, 0, 0LL);
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  }
  if ( Msg != 275 )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)WindowLongPtrW + 8LL))(WindowLongPtrW);
  if ( *(_QWORD *)(v10 + 32) )
  {
    CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CleanupTimer(v10);
    if ( *(_DWORD *)(v10 + 28) == 2 )
      CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback(v10);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v8;
}
