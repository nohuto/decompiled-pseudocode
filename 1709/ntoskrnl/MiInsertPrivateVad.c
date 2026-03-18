/*
 * XREFs of MiInsertPrivateVad @ 0x14010C710
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14056A41C (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateEnclaveVad @ 0x1406E77E0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiInsertVad @ 0x14003ECC0 (MiInsertVad.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1402290E4 (MiCreatePageTablesForPhysicalRange.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAweViewInserter @ 0x1406E51E0 (MiAweViewInserter.c)
 */

_QWORD *__fastcall MiInsertPrivateVad(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r12
  LONG *v7; // r14
  LONG *v8; // rbp
  unsigned __int8 CurrentIrql; // si
  int v10; // edx
  _QWORD *result; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(a1 + 48) & 0x100000) != 0 )
    ++*(_QWORD *)(*(_QWORD *)(a3 + 1296) + 256LL);
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
  v7 = &dword_140389780;
  if ( (*(_BYTE *)(a3 + 1472) & 7) == 2 )
    v8 = &dword_140389780;
  else
    v8 = (LONG *)(a3 + 1480);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v8, CurrentIrql);
  v8[1] = 0;
  MiInsertVad(a1, a3);
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
    MiCreatePageTablesForPhysicalRange(a1, CurrentIrql);
  MiPreUnlockWorkingSetExclusive(a3 + 1280, CurrentIrql);
  if ( (*(_BYTE *)(a3 + 1472) & 7) != 2 )
    v7 = (LONG *)(a3 + 1480);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
  else
    *v7 = 0;
  __writecr8(CurrentIrql);
  v10 = *(_DWORD *)(a1 + 48);
  result = (_QWORD *)(v10 & 7);
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
  {
    if ( (v10 & 0x40000) == 0 )
      MiAweViewInserter(a3, a2);
    return MiUnlockVad((__int64)CurrentThread, a1);
  }
  return result;
}
