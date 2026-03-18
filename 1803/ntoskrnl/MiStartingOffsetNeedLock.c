/*
 * XREFs of MiStartingOffsetNeedLock @ 0x1401289A0
 * Callers:
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 */

__int64 __fastcall MiStartingOffsetNeedLock(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // r8
  KIRQL v5; // di
  volatile LONG *v6; // rbx
  __int64 v7; // rsi

  v2 = *a1;
  if ( (*(_DWORD *)(*a1 + 56LL) & 0x20) != 0 || !*(_QWORD *)(v2 + 64) )
  {
    v5 = 17;
    v6 = (volatile LONG *)(v2 + 72);
  }
  else
  {
    v6 = (volatile LONG *)(v2 + 72);
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 72));
  }
  v7 = MiStartingOffset(a1, a1[1], a2);
  if ( v5 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v6);
    __writecr8(v5);
  }
  return v7;
}
