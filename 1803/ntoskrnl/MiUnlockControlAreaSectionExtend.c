/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x14004CE20
 * Callers:
 *     MmExtendSection @ 0x1404BDFD0 (MmExtendSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     MiBuildWakeList @ 0x1400E3EDC (MiBuildWakeList.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiUnlockControlAreaSectionExtend(ULONG_PTR a1, __int64 a2)
{
  int v2; // r14d
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  volatile LONG *v7; // rcx
  _QWORD *v8; // rsi
  _QWORD *v9; // rbx
  struct _KTHREAD *CurrentThread; // rcx

  v2 = *(_DWORD *)(a2 + 8);
  KeAbPostRelease(a1);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = MiBuildWakeList(a1, *(unsigned int *)(a2 + 8));
  v7 = (volatile LONG *)(a1 + 72);
  v8 = (_QWORD *)v6;
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  __writecr8(v5);
  if ( v8 )
  {
    do
    {
      v9 = (_QWORD *)*v8;
      if ( v8 != (_QWORD *)a2 )
        KeSignalGate(v8 + 2, 1LL);
      v8 = v9;
    }
    while ( v9 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 == 16 )
    return KiLeaveGuardedRegionUnsafe(CurrentThread);
  else
    return KeLeaveCriticalRegionThread(CurrentThread);
}
