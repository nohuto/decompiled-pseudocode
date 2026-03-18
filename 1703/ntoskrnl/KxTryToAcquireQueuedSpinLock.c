/*
 * XREFs of KxTryToAcquireQueuedSpinLock @ 0x14007651C
 * Callers:
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400764EC (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiRemoveAnyPage @ 0x1400B91F0 (MiRemoveAnyPage.c)
 *     KeTryToAcquireQueuedSpinLock @ 0x1401FE7F0 (KeTryToAcquireQueuedSpinLock.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1401FE850 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14021B390 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     <none>
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
