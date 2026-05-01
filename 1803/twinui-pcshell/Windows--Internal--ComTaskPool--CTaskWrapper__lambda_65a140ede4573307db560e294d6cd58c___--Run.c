/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65a140ede4573307db560e294d6cd58c___::Run @ 0x1800887F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65a140ede4573307db560e294d6cd58c___::Run(
        __int64 a1)
{
  return LoadDataFromStateRepository(
           *(PCWSTR *)(a1 + 16),
           (HSTRING *)((*(_QWORD *)(a1 + 24) + 8LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 24) >> 64)));
}
