/*
 * XREFs of MiMarkPteDirty @ 0x140212530
 * Callers:
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMarkPteDirty(__int64 a1)
{
  __int64 result; // rax
  char *AnyMultiplexedVm; // rsi
  LONG *SharedVm; // rbx
  __int16 v5; // ax
  unsigned __int8 v6; // r11

  result = MI_READ_PTE_LOCK_FREE(a1);
  if ( (result & 0x42) == 0 && (result & 0x800) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v5 = MI_READ_PTE_LOCK_FREE(a1);
    if ( (v5 & 1) != 0 && (v5 & 0x42) == 0 && (v5 & 0x800) != 0 )
      MiWriteValidPteNewProtection(a1);
    return MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v6);
  }
  return result;
}
