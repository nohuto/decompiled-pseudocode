/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67fff51ef85bdb7f782db56f669e2f17___::Run @ 0x18001B8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67fff51ef85bdb7f782db56f669e2f17___::Run(
        __int64 a1)
{
  return SetEvent(*(HANDLE *)(*(_QWORD *)(a1 + 24) + 32LL));
}
