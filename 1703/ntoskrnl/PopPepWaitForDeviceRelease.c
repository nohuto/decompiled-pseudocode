/*
 * XREFs of PopPepWaitForDeviceRelease @ 0x14022F390
 * Callers:
 *     PopPepUnregisterDevice @ 0x1406CAFC8 (PopPepUnregisterDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall PopPepWaitForDeviceRelease(__int64 a1)
{
  volatile LONG *v1; // rdi
  unsigned __int64 v2; // rbx

  v1 = (volatile LONG *)(a1 + 64);
  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  __writecr8(v2);
}
