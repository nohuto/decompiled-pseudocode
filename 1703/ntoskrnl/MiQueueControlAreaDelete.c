/*
 * XREFs of MiQueueControlAreaDelete @ 0x14020ABBC
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x140118FA8 (MiDereferenceControlAreaProbe.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

LONG __fastcall MiQueueControlAreaDelete(__int64 a1)
{
  __int64 v2; // rbp
  KIRQL v3; // al
  unsigned __int64 v4; // rbx

  v2 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  *(_QWORD *)a1 = 0LL;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1344));
  *(_QWORD *)a1 = *(_QWORD *)(v2 + 1632);
  *(_QWORD *)(v2 + 1632) = a1;
  v4 = v3;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  __writecr8(v4);
  return KeSetEvent((PRKEVENT)(v2 + 1608), 0, 0);
}
