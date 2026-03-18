/*
 * XREFs of KxTryToAcquireQueuedSpinLock @ 0x1400CAF3C
 * Callers:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400CAD48 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiGetPerfectColorHeadPage @ 0x1400CAD78 (MiGetPerfectColorHeadPage.c)
 *     KeTryToAcquireQueuedSpinLock @ 0x140204AF0 (KeTryToAcquireQueuedSpinLock.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140204B50 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140227C44 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140204DB4 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxTryToAcquireQueuedSpinLock(signed __int64 a1, _DWORD *a2)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireQueuedSpinLockInstrumented();
  _m_prefetchw(a2);
  if ( !*a2 && !_InterlockedCompareExchange64((volatile signed __int64 *)a2, a1, 0LL) )
    return 1LL;
  _mm_pause();
  return 0LL;
}
