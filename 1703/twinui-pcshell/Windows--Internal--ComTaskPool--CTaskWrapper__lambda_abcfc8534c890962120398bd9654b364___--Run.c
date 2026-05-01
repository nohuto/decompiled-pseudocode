/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_abcfc8534c890962120398bd9654b364___::Run @ 0x180146530
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_ @ 0x180144794 (_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_--_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_.c)
 *     CreationThreadDispatcher::RunSync__lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa___ @ 0x180145E50 (CreationThreadDispatcher--RunSync__lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa___.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_abcfc8534c890962120398bd9654b364___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 16;
  v2 = lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_(v4, (__int64 *)(a1 + 16));
  return CreationThreadDispatcher::RunSync__lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa___(*(_QWORD *)(v1 + 24), v2);
}
