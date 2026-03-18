/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x140099790
 * Callers:
 *     MiDereferenceFailedControlArea @ 0x14045ED34 (MiDereferenceFailedControlArea.c)
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 *     MiSectionDelete @ 0x140512600 (MiSectionDelete.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDereferenceControlAreaBySection(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // di

  v3 = a2;
  v4 = a1 + 72;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v4, CurrentIrql);
  --*(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 48) -= v3;
  return MiCheckControlArea(a1, CurrentIrql);
}
