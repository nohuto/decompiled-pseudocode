/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a730ada88cbae26163c74f230d1e84ab___::Run @ 0x18001C3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a730ada88cbae26163c74f230d1e84ab___::Run(
        __int64 a1)
{
  return LoadDataFromStateRepository(
           *(PCNZWCH *)(a1 + 16),
           (HSTRING *)((*(_QWORD *)(a1 + 24) + 8LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 24) >> 64)));
}
