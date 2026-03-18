/*
 * XREFs of MiGetControlAreaPtes @ 0x1400E5F38
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiFindLastSubsection @ 0x14004CFC0 (MiFindLastSubsection.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

unsigned __int64 __fastcall MiGetControlAreaPtes(__int64 a1)
{
  int v1; // eax
  volatile LONG *v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 LastSubsection; // rax
  unsigned __int64 v7; // rbx

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 || !*(_QWORD *)(a1 + 64) || (v1 & 0x400) != 0 )
    return *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
  v4 = (volatile LONG *)(a1 + 72);
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  LastSubsection = MiFindLastSubsection(a1, 1);
  v7 = *(unsigned int *)(LastSubsection + 44)
     + (*(unsigned int *)(LastSubsection + 36) | ((unsigned __int64)(*(_WORD *)(LastSubsection + 32) & 0xFFC0) << 26))
     - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF);
  ExReleaseSpinLockSharedFromDpcLevel(v4);
  __writecr8(v5);
  return v7;
}
