/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x14005E290
 * Callers:
 *     MmExtendSection @ 0x140492D14 (MmExtendSection.c)
 * Callees:
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140096DC4 (MiBuildWakeList.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
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
        KeSignalGate((__int64)(v8 + 2), 1);
      v8 = v9;
    }
    while ( v9 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 == 16 )
    return KiLeaveGuardedRegionUnsafe(CurrentThread);
  else
    return KiLeaveCriticalRegionUnsafe(CurrentThread);
}
