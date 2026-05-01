/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x1802DEA40
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnAnimationCompleted @ 0x1802DBF20 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--OnAnimationCompleted.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnEndBatchUpdate @ 0x1802DC010 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--OnEndBatchUpdate.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc @ 0x1802DEAA0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--s_TimerWndProc.c)
 * Callees:
 *     _lambda_d996df4ae651642ba189a9f5cbef4ddb_::operator() @ 0x1802DA2D0 (_lambda_d996df4ae651642ba189a9f5cbef4ddb_--operator().c)
 *     CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CleanupTimer @ 0x1802DE894 (CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___--_CleanupTimer.c)
 */

BOOL __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback(__int64 a1)
{
  BOOL result; // eax

  if ( *(_DWORD *)(a1 + 28) != 3 )
  {
    lambda_d996df4ae651642ba189a9f5cbef4ddb_::operator()((__int64 *)(a1 + 16));
    *(_DWORD *)(a1 + 28) = 3;
    return CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CleanupTimer(a1);
  }
  return result;
}
