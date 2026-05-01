/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6d9923a1ae258a03f662b6b89cb315c5___::Run @ 0x18017B580
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f4b46c9c4eb1558b25bb27c2a9448747_::_lambda_f4b46c9c4eb1558b25bb27c2a9448747_ @ 0x18017977C (_lambda_f4b46c9c4eb1558b25bb27c2a9448747_--_lambda_f4b46c9c4eb1558b25bb27c2a9448747_.c)
 *     CreationThreadDispatcher::RunSync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___ @ 0x18017AFA0 (CreationThreadDispatcher--RunSync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6d9923a1ae258a03f662b6b89cb315c5___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 16;
  v2 = lambda_f4b46c9c4eb1558b25bb27c2a9448747_::_lambda_f4b46c9c4eb1558b25bb27c2a9448747_(v4, (__int64 *)(a1 + 16));
  return CreationThreadDispatcher::RunSync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___(*(_QWORD *)(v1 + 24), v2);
}
