/*
 * XREFs of MiInsertVadEvent @ 0x140099800
 * Callers:
 *     MiWaitForVadDeletion @ 0x1402238D8 (MiWaitForVadDeletion.c)
 *     MiCreateRotateView @ 0x14045D458 (MiCreateRotateView.c)
 *     MiAllocateUserStack @ 0x1404A434C (MiAllocateUserStack.c)
 *     MiCreateVadEventBitmap @ 0x1404C8910 (MiCreateVadEventBitmap.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiAddSecureEntry @ 0x1405127E0 (MiAddSecureEntry.c)
 *     MiCreateLargePageVad @ 0x1406BE7A4 (MiCreateLargePageVad.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertVadEvent(__int64 a1, _QWORD *a2, int a3)
{
  LONG *v5; // rsi
  unsigned __int16 *v6; // rbx
  LONG *v7; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v5 = &dword_14036D4C0;
  if ( a3 == 1 )
  {
    v6 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    if ( (v6[96] & 7) == 2 )
      v7 = &dword_14036D4C0;
    else
      v7 = (LONG *)(v6 + 100);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(v7, CurrentIrql);
    v7[1] = 0;
  }
  else
  {
    CurrentIrql = 17;
    v6 = 0LL;
  }
  result = *(_QWORD *)(a1 + 56);
  *a2 = result;
  *(_QWORD *)(a1 + 56) = a2;
  if ( CurrentIrql != 17 )
  {
    MiPreUnlockWorkingSetExclusive(v6, CurrentIrql);
    if ( (v6[96] & 7) != 2 )
      v5 = (LONG *)(v6 + 100);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
    else
      *v5 = 0;
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
