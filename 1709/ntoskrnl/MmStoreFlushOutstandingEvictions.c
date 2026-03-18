/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x14022D948
 * Callers:
 *     SmStoreCompressionStart @ 0x140738EE0 (SmStoreCompressionStart.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

NTSTATUS MmStoreFlushOutstandingEvictions()
{
  KIRQL v0; // bl

  v0 = ExAcquireSpinLockExclusive(&dword_14038A550);
  if ( !dword_14038A540 )
    KeResetEvent(&stru_14038A590);
  ++dword_14038A540;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14038A550);
  __writecr8(v0);
  KeSetEvent(&stru_14038A560, 0, 0);
  return KeWaitForSingleObject(&stru_14038A590, WrKernel, 0, 0, 0LL);
}
