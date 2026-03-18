/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x140004CEC
 * Callers:
 *     SmStoreCompressionStart @ 0x1404CA430 (SmStoreCompressionStart.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

NTSTATUS MmStoreFlushOutstandingEvictions()
{
  KIRQL v0; // al
  int v1; // edx
  KIRQL v2; // bl

  v0 = ExAcquireSpinLockExclusive(&SpinLock);
  v1 = dword_1403806B0;
  v2 = v0;
  if ( !dword_1403806B0 )
  {
    KeResetEvent(&Object);
    v1 = dword_1403806B0;
  }
  dword_1403806B0 = v1 + 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
  __writecr8(v2);
  KeSetEvent(&stru_1403806C8, 0, 0);
  return KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
}
