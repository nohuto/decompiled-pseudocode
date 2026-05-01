/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f972278ece14cb52f7272136f7cbede___::Run @ 0x180179D60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f4b46c9c4eb1558b25bb27c2a9448747_::_lambda_f4b46c9c4eb1558b25bb27c2a9448747_ @ 0x18017977C (_lambda_f4b46c9c4eb1558b25bb27c2a9448747_--_lambda_f4b46c9c4eb1558b25bb27c2a9448747_.c)
 *     CreationThreadDispatcher::RunSync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___ @ 0x180179A9C (CreationThreadDispatcher--RunSync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f972278ece14cb52f7272136f7cbede___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 16;
  v2 = lambda_f4b46c9c4eb1558b25bb27c2a9448747_::_lambda_f4b46c9c4eb1558b25bb27c2a9448747_(v4, (__int64 *)(a1 + 16));
  return CreationThreadDispatcher::RunSync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___(*(_QWORD *)(v1 + 24), v2);
}
