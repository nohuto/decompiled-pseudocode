/*
 * XREFs of MiForceSectionClosed @ 0x1402111D8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAttemptSectionDelete @ 0x14010A778 (MiAttemptSectionDelete.c)
 */

char __fastcall MiForceSectionClosed(_QWORD *a1, char a2)
{
  KIRQL v4; // di
  __int64 v5; // rbx

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140388100);
    v5 = a2 ? *a1 : a1[2];
    if ( !v5 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v5 + 72)) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
      return MiAttemptSectionDelete(v5, v4, 0);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
    __writecr8(v4);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
  __writecr8(v4);
  return 1;
}
