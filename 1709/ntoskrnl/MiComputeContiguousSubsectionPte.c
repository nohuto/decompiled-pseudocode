/*
 * XREFs of MiComputeContiguousSubsectionPte @ 0x1400A1AE0
 * Callers:
 *     MiAdvanceVadView @ 0x140112B84 (MiAdvanceVadView.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiComputeContiguousSubsectionPte(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int32 *v3; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int32 *)(*(_QWORD *)a1 + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v3, CurrentIrql);
  v6 = *(unsigned int *)(a1 + 44);
  if ( a2 >= v6 )
    v7 = *(_QWORD *)(a1 + 8) + 8LL * ((*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu) + (_DWORD)v6 - 1);
  else
    v7 = *(_QWORD *)(a1 + 8) + 8 * a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  __writecr8(CurrentIrql);
  return v7;
}
