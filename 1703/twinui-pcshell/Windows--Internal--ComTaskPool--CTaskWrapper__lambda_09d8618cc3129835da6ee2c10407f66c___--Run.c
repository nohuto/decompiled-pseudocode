/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09d8618cc3129835da6ee2c10407f66c___::Run @ 0x1801008D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09d8618cc3129835da6ee2c10407f66c___::Run(
        __int64 a1)
{
  return ViewEventDispatcher::RemovePendingActivation(
           (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 16LL),
           *(_QWORD *)(a1 + 32));
}
