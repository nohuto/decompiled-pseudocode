/*
 * XREFs of KxTryToAcquireQueuedSpinLock @ 0x1400D508C
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400D4DC8 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiGetPerfectColorHeadPage @ 0x1400D4EA0 (MiGetPerfectColorHeadPage.c)
 *     KeTryToAcquireQueuedSpinLock @ 0x1402422D0 (KeTryToAcquireQueuedSpinLock.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140242330 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140242594 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxTryToAcquireQueuedSpinLock(signed __int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // rdi
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v6; // ebx

  v3 = a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    return (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(a1, a2, a3);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = 1;
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    _m_prefetchw(v3);
    if ( *v3 || _InterlockedCompareExchange64((volatile signed __int64 *)v3, a1, 0LL) )
    {
      v6 = 0;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      _mm_pause();
    }
  }
  return v6;
}
