/*
 * XREFs of MiDirtySystemCachePte @ 0x14002A408
 * Callers:
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiDirtySystemCachePte(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 SharedVm; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // r11

  if ( (a3 & 0x42) == 0 && (a3 & 0x800) != 0 )
  {
    SharedVm = MiGetSharedVm(a1);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v6 = MI_READ_PTE_LOCK_FREE(a2);
    if ( (v6 & 1) != 0 && (v6 & 0x42) == 0 && (v6 & 0x800) != 0 )
      MiWriteValidPteNewProtection(a2, v6 | 0x62);
    LOBYTE(v7) = v8;
    MiUnlockWorkingSetExclusive(a1, v7);
  }
}
