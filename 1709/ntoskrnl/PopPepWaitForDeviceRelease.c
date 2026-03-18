/*
 * XREFs of PopPepWaitForDeviceRelease @ 0x140243588
 * Callers:
 *     PopPepUnregisterDevice @ 0x1406FEF48 (PopPepUnregisterDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
