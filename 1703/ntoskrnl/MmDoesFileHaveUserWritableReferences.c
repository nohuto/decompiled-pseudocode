/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x14009AD50
 * Callers:
 *     <none>
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  unsigned __int8 CurrentIrql; // si
  char *DataSectionObject; // rbx
  ULONG v4; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14036BE00, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(&dword_14036BE00, CurrentIrql);
    DataSectionObject = (char *)SectionPointer->DataSectionObject;
    if ( !SectionPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
      __writecr8(CurrentIrql);
      return 0;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)DataSectionObject + 18) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
    __writecr8(CurrentIrql);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14036BE00, retaddr);
  else
    dword_14036BE00 = 0;
  v4 = *((_DWORD *)DataSectionObject + 23);
  if ( !v4 )
    v4 = *((_QWORD *)DataSectionObject + 14) > 1uLL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(DataSectionObject + 72, retaddr);
  else
    *((_DWORD *)DataSectionObject + 18) = 0;
  __writecr8(CurrentIrql);
  return v4;
}
