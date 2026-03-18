/*
 * XREFs of MiGetSharedProtosAtDpcLevel @ 0x14022124C
 * Callers:
 *     MiImageProtoChargedCommit @ 0x140147260 (MiImageProtoChargedCommit.c)
 *     MiGetSharedProtos @ 0x140221220 (MiGetSharedProtos.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLocateSessionProtosInSubsection @ 0x140221454 (MiLocateSessionProtosInSubsection.c)
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
