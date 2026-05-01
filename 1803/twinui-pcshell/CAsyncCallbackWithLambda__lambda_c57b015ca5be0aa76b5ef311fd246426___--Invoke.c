/*
 * XREFs of CAsyncCallbackWithLambda__lambda_c57b015ca5be0aa76b5ef311fd246426___::Invoke @ 0x18008FC60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967___::Run @ 0x1800165A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967___--Run.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_c57b015ca5be0aa76b5ef311fd246426___::Invoke(__int64 a1)
{
  SetEvent(*(HANDLE *)(*(_QWORD *)(a1 + 48) + 40LL));
  return 0LL;
}
