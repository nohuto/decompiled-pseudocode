/*
 * XREFs of ?UpgradeToWriteLock@?$CMrowReader@USharedBufferDataFlipChain@@@@MEAAHXZ @ 0x1801360E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CMrowReader<SharedBufferDataFlipChain>::UpgradeToWriteLock(__int64 a1)
{
  return _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 28LL), 0x80000000, 1) == 1;
}
