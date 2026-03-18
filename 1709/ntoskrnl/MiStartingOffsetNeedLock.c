/*
 * XREFs of MiStartingOffsetNeedLock @ 0x14002B1C0
 * Callers:
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiStartingOffsetNeedLock(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx
  KIRQL v5; // di
  __int64 v6; // rsi

  v2 = *a1;
  if ( (*(_DWORD *)(*a1 + 56LL) & 0x20) != 0 || !*(_QWORD *)(v2 + 64) )
    v5 = 17;
  else
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 72));
  v6 = MiStartingOffset(a1, a1[1], a2);
  if ( v5 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    __writecr8(v5);
  }
  return v6;
}
