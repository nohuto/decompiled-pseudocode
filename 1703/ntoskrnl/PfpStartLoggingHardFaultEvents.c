/*
 * XREFs of PfpStartLoggingHardFaultEvents @ 0x140409CB8
 * Callers:
 *     PfPowerActionNotify @ 0x140409780 (PfPowerActionNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_14036DEC8);
    *(_DWORD *)(v2 + 164) = ++dword_14036DED4;
    _InterlockedOr(&dword_140382C14, 1u);
    KxReleaseSpinLock(&qword_14036DEC8);
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
