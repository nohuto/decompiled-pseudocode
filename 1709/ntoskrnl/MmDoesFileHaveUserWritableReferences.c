/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x14001ACD0
 * Callers:
 *     <none>
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  unsigned __int8 CurrentIrql; // si
  signed __int32 v3; // edx
  _DWORD *DataSectionObject; // rbx
  ULONG v6; // edi
  bool v7; // zf
  signed __int32 v8; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140388100, CurrentIrql);
    }
    else
    {
      v10 = 0;
      if ( _interlockedbittestandset(&dword_140388100, 0x1Fu) )
        v10 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140388100, CurrentIrql);
      v3 = dword_140388100;
      while ( (v3 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v3 & 0x40000000) == 0 )
        {
          v8 = _InterlockedCompareExchange(&dword_140388100, v3 | 0x40000000, v3);
          v7 = v3 == v8;
          v3 = v8;
          if ( !v7 )
            continue;
        }
        KeYieldProcessorEx(&v10);
        v3 = dword_140388100;
      }
    }
    DataSectionObject = SectionPointer->DataSectionObject;
    if ( !SectionPointer->DataSectionObject )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388100, retaddr);
      else
        dword_140388100 = 0;
      __writecr8(CurrentIrql);
      return 0;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
    __writecr8(CurrentIrql);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388100, retaddr);
  else
    dword_140388100 = 0;
  v6 = DataSectionObject[23];
  if ( !v6 )
    v6 = *((_QWORD *)DataSectionObject + 14) > 1uLL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(DataSectionObject + 18, retaddr);
  else
    DataSectionObject[18] = 0;
  __writecr8(CurrentIrql);
  return v6;
}
