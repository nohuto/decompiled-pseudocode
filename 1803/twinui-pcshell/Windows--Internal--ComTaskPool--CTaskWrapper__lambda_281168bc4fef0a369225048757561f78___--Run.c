/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_281168bc4fef0a369225048757561f78___::Run @ 0x1801D84A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_281168bc4fef0a369225048757561f78___::Run(
        __int64 a1)
{
  return WindowEventDispatcher::RemovePendingActivation(
           (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 24LL),
           *(_QWORD *)(a1 + 32));
}
