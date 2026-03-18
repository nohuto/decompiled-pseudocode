/*
 * XREFs of PfpStartLoggingHardFaultEvents @ 0x140471260
 * Callers:
 *     PfPowerActionNotify @ 0x140471F34 (PfPowerActionNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 PfpStartLoggingHardFaultEvents()
{
  _DWORD *PoolWithTag; // rax
  unsigned int v1; // edi
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x44506650u);
  v1 = 0;
  v2 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[40] = 0;
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_1403CD748);
    *(_DWORD *)(v2 + 164) = ++dword_1403CD754;
    _InterlockedOr(&dword_1403E27D4, 1u);
    KxReleaseSpinLock(&qword_1403CD748);
    __writecr8(v3);
    KeInitializeTimerEx((PKTIMER)(v2 + 64), NotificationTimer);
    KeInitializeDpc((PRKDPC)v2, (PKDEFERRED_ROUTINE)PfpPowerActionDpcRoutine, (PVOID)v2);
    KiSetTimerEx(v2 + 64, -200000000LL, 0, 0, v2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
