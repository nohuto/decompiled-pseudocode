/*
 * XREFs of CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CleanupTimer @ 0x1802DE894
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x1802DEA40 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InvokeCallback.c)
 *     CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_InvokeCallback @ 0x1802DEA70 (CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___--_InvokeCallback.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc @ 0x1802DEAA0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--s_TimerWndProc.c)
 *     CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::s_TimerWndProc @ 0x1802DEB80 (CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___--s_TimerWndProc.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CleanupTimer(__int64 a1)
{
  HWND v1; // rbx
  BOOL result; // eax

  v1 = *(HWND *)(a1 + 32);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    KillTimer(v1, 0x64uLL);
    return DestroyWindow(v1);
  }
  return result;
}
