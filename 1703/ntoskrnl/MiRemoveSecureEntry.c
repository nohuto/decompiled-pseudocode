/*
 * XREFs of MiRemoveSecureEntry @ 0x140099290
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x140511FC0 (MmUnsecureVirtualMemory.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140441870 (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, __int64 *BugCheckParameter3)
{
  __int64 **v2; // r15
  unsigned int v3; // ebx
  LONG *v4; // r13
  ULONG_PTR v6; // r14
  _KPROCESS *Process; // rbp
  LONG *p_ProfileListHead; // rsi
  unsigned __int8 CurrentIrql; // r12
  __int64 *v10; // rcx
  int v11; // r14d
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v14; // [rsp+80h] [rbp+18h]

  v2 = (__int64 **)(BugCheckParameter2 + 56);
  v3 = 0;
  v4 = &dword_14036D4C0;
  v14 = 0;
  v6 = BugCheckParameter2;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( ((__int64)Process[2].Header.WaitListHead.Blink & 7) == 2 )
    p_ProfileListHead = &dword_14036D4C0;
  else
    p_ProfileListHead = (LONG *)&Process[2].ProfileListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_ProfileListHead, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(p_ProfileListHead, CurrentIrql);
  p_ProfileListHead[1] = 0;
  v10 = *v2;
  if ( *v2 )
  {
    v11 = 0;
    do
    {
      if ( *((_DWORD *)v10 + 16) == 2 && v3 <= 1 )
        ++v3;
      if ( v10 == BugCheckParameter3 )
      {
        v11 = 1;
        *v2 = (__int64 *)*v10;
      }
      if ( v3 > 1 && v11 == 1 )
        break;
      v2 = (__int64 **)v10;
      v10 = (__int64 *)*v10;
    }
    while ( v10 );
    v14 = v11;
    v6 = BugCheckParameter2;
  }
  MiPreUnlockWorkingSetExclusive(&Process[1].IdealNode[12], CurrentIrql);
  if ( ((__int64)Process[2].Header.WaitListHead.Blink & 7) != 2 )
    v4 = (LONG *)&Process[2].ProfileListHead;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
  else
    *v4 = 0;
  __writecr8(CurrentIrql);
  if ( !v14 )
    KeBugCheckEx(0x1Au, 0x15001uLL, v6, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[1] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(v6, BugCheckParameter3[1], BugCheckParameter3[2]);
  if ( v3 == 1 )
    *(_DWORD *)(v6 + 48) &= ~0x4000u;
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
