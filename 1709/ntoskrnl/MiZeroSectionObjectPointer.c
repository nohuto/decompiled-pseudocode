/*
 * XREFs of MiZeroSectionObjectPointer @ 0x140131294
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 */

__int64 __fastcall MiZeroSectionObjectPointer(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r14
  KIRQL v5; // al
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx

  v3 = *(_QWORD **)(a1 + 40);
  if ( (a3 & 0x1000000) != 0 )
    v3 += 2;
  KeAbPostRelease((ULONG_PTR)v3);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  v6 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = 0LL;
  v7 = v5;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140388100);
  *v3 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
  *(_DWORD *)(a2 + 56) |= 0xC0000u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  __writecr8(v7);
  return v6;
}
