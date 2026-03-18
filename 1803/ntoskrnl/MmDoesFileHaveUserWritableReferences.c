/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x1401258A0
 * Callers:
 *     <none>
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  unsigned __int8 CurrentIrql; // bl
  PVOID DataSectionObject; // rdi
  unsigned __int64 v4; // rbp
  ULONG result; // eax
  int v6; // ebx
  ULONG v7; // ebx

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1403CB280, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(&dword_1403CB280, CurrentIrql);
    DataSectionObject = SectionPointer->DataSectionObject;
    v4 = CurrentIrql;
    if ( !SectionPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
      result = 0;
      goto LABEL_5;
    }
    v6 = ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)DataSectionObject + 18);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
    if ( v6 )
      break;
    __writecr8(v4);
  }
  v7 = *((_DWORD *)DataSectionObject + 23);
  if ( !v7 )
    v7 = *((_QWORD *)DataSectionObject + 14) > 1uLL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)DataSectionObject + 18);
  result = v7;
LABEL_5:
  __writecr8(v4);
  return result;
}
