/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eaf4aa4ef6c2d6c3d4158ecad1bd325c___::Run @ 0x1801CCE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eaf4aa4ef6c2d6c3d4158ecad1bd325c___::Run(
        __int64 a1)
{
  return ViewEventDispatcher::RemovePendingActivation(
           (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 16LL),
           *(_QWORD *)(a1 + 32));
}
