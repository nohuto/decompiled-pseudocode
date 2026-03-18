/*
 * XREFs of MiQueueControlAreaDelete @ 0x14024FCB0
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x14004B034 (MiDereferenceControlAreaProbe.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

LONG __fastcall MiQueueControlAreaDelete(__int64 a1)
{
  __int64 v2; // rbp
  KIRQL v3; // al
  unsigned __int64 v4; // rbx

  v2 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  *(_QWORD *)a1 = 0LL;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1280));
  *(_QWORD *)a1 = *(_QWORD *)(v2 + 1704);
  *(_QWORD *)(v2 + 1704) = a1;
  v4 = v3;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
  __writecr8(v4);
  return KeSetEvent((PRKEVENT)(v2 + 1680), 0, 0);
}
