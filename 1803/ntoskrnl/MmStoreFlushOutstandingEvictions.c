/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x1400837DC
 * Callers:
 *     SmStoreCompressionStart @ 0x14052D268 (SmStoreCompressionStart.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

NTSTATUS MmStoreFlushOutstandingEvictions()
{
  KIRQL v0; // bl

  v0 = ExAcquireSpinLockExclusive(&dword_1403CE3D0);
  if ( !dword_1403CE3C0 )
    KeResetEvent(&Object);
  ++dword_1403CE3C0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CE3D0);
  __writecr8(v0);
  KeSetEvent(&stru_1403CE3E0, 0, 0);
  return KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
}
