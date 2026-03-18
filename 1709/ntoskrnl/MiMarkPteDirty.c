/*
 * XREFs of MiMarkPteDirty @ 0x140117FA4
 * Callers:
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMarkPteDirty(unsigned __int64 *a1)
{
  __int64 result; // rax
  char *AnyMultiplexedVm; // rbp
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  unsigned __int8 v6; // si
  __int64 PteShadow; // rax
  LONG *v8; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  result = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    result = MiReadPteShadow(a1, *a1);
  if ( (result & 0x42) == 0 && (result & 0x800) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v5 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v6 = v5;
    PteShadow = *a1;
    if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a1, *a1);
    if ( (PteShadow & 1) != 0 && (PteShadow & 0x42) == 0 && (PteShadow & 0x800) != 0 )
      MiWriteValidPteNewPage(a1, PteShadow | 0x62);
    MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v6);
    v8 = MiGetSharedVm((__int64)AnyMultiplexedVm);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
    else
      *v8 = 0;
    result = v6;
    __writecr8(v6);
  }
  return result;
}
