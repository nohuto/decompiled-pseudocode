/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3bd6e62926fdb44f17182f5492fdd21c___::Run @ 0x180144B50
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_ @ 0x180144794 (_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_--_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_.c)
 *     CreationThreadDispatcher::RunSync__lambda_6b10e70171ff618d2ed46f6369068d10___ @ 0x180144878 (CreationThreadDispatcher--RunSync__lambda_6b10e70171ff618d2ed46f6369068d10___.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3bd6e62926fdb44f17182f5492fdd21c___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 16;
  v2 = lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_(v4, (__int64 *)(a1 + 16));
  return CreationThreadDispatcher::RunSync__lambda_6b10e70171ff618d2ed46f6369068d10___(*(_QWORD *)(v1 + 24), v2);
}
