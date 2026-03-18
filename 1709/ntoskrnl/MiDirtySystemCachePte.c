/*
 * XREFs of MiDirtySystemCachePte @ 0x14001E5F0
 * Callers:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiDirtySystemCachePte(__int64 a1, __int64 *a2, __int16 a3)
{
  __int64 SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // bp
  __int64 PteShadow; // rax
  _DWORD *v10; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (a3 & 0x42) == 0 && (a3 & 0x800) != 0 )
  {
    SharedVm = MiGetSharedVm(a1);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v8 = v6;
    PteShadow = *a2;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a2, *a2);
    if ( (PteShadow & 1) != 0 && (PteShadow & 0x42) == 0 && (PteShadow & 0x800) != 0 )
      MiWriteValidPteNewPage(a2, PteShadow | 0x62);
    LOBYTE(v7) = v8;
    MiPreUnlockWorkingSetExclusive(a1, v7);
    v10 = (_DWORD *)MiGetSharedVm(a1);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
    else
      *v10 = 0;
    __writecr8(v8);
  }
}
