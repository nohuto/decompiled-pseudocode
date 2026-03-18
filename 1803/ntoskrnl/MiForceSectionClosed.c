/*
 * XREFs of MiForceSectionClosed @ 0x1400BCDCC
 * Callers:
 *     MmForceSectionClosed @ 0x1400BCD90 (MmForceSectionClosed.c)
 *     MmForceSectionClosedEx @ 0x1402500F0 (MmForceSectionClosedEx.c)
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiAttemptSectionDelete @ 0x1400BCE70 (MiAttemptSectionDelete.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiForceSectionClosed(_QWORD *a1, char a2)
{
  int v3; // r14d
  KIRQL v5; // bp
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8

  v3 = a2 & 1;
  while ( 1 )
  {
    v5 = ExAcquireSpinLockExclusive(&dword_1403CB280);
    v6 = v3 ? *a1 : a1[2];
    if ( !v6 )
      break;
    v7 = ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v6 + 72));
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
    if ( v7 )
    {
      LOBYTE(v8) = v5;
      LOBYTE(v9) = (a2 & 4) != 0;
      return 2 - (unsigned int)((unsigned __int8)MiAttemptSectionDelete(v6, v8, v9) != 0);
    }
    __writecr8(v5);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
  __writecr8(v5);
  return 0LL;
}
