/*
 * XREFs of MiReleaseImageSection @ 0x1400B798C
 * Callers:
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 */

__int64 __fastcall MiReleaseImageSection(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  KIRQL v4; // al
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx

  v2 = *(_QWORD *)(a1 + 40);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  v5 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_DWORD *)(a2 + 56) &= ~2u;
  v6 = v4;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  __writecr8(v6);
  KeAbPostRelease(v2 + 16);
  return v5;
}
