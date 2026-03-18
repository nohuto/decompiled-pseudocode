/*
 * XREFs of MiGetSharedProtosAtDpcLevel @ 0x14022DEF8
 * Callers:
 *     MiImageProtoChargedCommit @ 0x1400B5C88 (MiImageProtoChargedCommit.c)
 *     MiGetSharedProtos @ 0x14022DECC (MiGetSharedProtos.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateSessionProtosInSubsection @ 0x14022E10C (MiLocateSessionProtosInSubsection.c)
 */

__int64 __fastcall MiGetSharedProtosAtDpcLevel(__int64 a1, unsigned int a2, __int64 a3)
{
  volatile LONG *v3; // rdi
  __int64 SessionProtosInSubsection; // rbx

  v3 = (volatile LONG *)(a1 + 72);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a3, a2);
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  return SessionProtosInSubsection;
}
