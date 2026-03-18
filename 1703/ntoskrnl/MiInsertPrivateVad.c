/*
 * XREFs of MiInsertPrivateVad @ 0x140099410
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiAllocateEnclaveVad @ 0x1406BA9FC (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     MiInsertVad @ 0x1400C1CF0 (MiInsertVad.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x14021C4A4 (MiCreatePageTablesForPhysicalRange.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAweViewInserter @ 0x1406B8510 (MiAweViewInserter.c)
 */

__int64 __fastcall MiInsertPrivateVad(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r12
  LONG *v7; // r14
  LONG *v8; // rbp
  unsigned __int8 CurrentIrql; // si
  int v10; // edx
  __int64 result; // rax
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
  v7 = &dword_14036D4C0;
  if ( (*(_BYTE *)(a3 + 1472) & 7) == 2 )
    v8 = &dword_14036D4C0;
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
  result = v10 & 7;
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
  {
    if ( (v10 & 0x40000) == 0 )
      MiAweViewInserter(a3, a2);
    return MiUnlockVad((__int64)CurrentThread, a1);
  }
  return result;
}
