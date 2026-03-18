/*
 * XREFs of MiZeroSectionObjectPointer @ 0x1400D24CC
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiZeroSectionObjectPointer(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v4; // r14
  KIRQL v5; // al
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx

  v4 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL);
  if ( (a3 & 0x1000000) == 0 )
    v4 = *(_QWORD **)(a1 + 40);
  KeAbPostRelease((ULONG_PTR)v4);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  v6 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = 0LL;
  v7 = v5;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1403CB280);
  *v4 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
  *(_DWORD *)(a2 + 56) |= 0xC0000u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  __writecr8(v7);
  return v6;
}
