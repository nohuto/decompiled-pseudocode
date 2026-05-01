/*
 * XREFs of CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::OnEndBatchUpdate @ 0x1802DC040
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_InvokeCallback @ 0x1802DEA70 (CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___--_InvokeCallback.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::OnEndBatchUpdate(
        __int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  v1 = (*(_DWORD *)(a1 + 40))-- == 1;
  if ( v1 )
  {
    v1 = *(_DWORD *)(a1 + 24) == 0;
    *(_DWORD *)(a1 + 28) = 2;
    if ( v1 || !*(_QWORD *)(a1 + 32) )
      return CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_InvokeCallback();
  }
  return result;
}
