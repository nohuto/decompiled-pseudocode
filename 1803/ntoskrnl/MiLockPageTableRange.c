/*
 * XREFs of MiLockPageTableRange @ 0x1400C6CEC
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x1405749A8 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTablePage @ 0x1400211A0 (MiLockPageTablePage.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableRange @ 0x1400CE14C (MiUnlockPageTableRange.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int16 *v3; // r14
  unsigned __int64 v4; // r12
  ULONG_PTR v5; // rsi
  unsigned __int64 v6; // rbp
  __int64 v7; // r8
  unsigned __int8 v8; // r15
  unsigned __int64 v9; // rax
  int v10; // ebx

  v3 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = v4;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = MiLockWorkingSetShared((__int64)v3);
  if ( v4 > v6 )
  {
LABEL_4:
    MiUnlockWorkingSetShared((__int64)v3, v8, v7);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid(v5, 0);
      v9 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v10 = MiLockPageTablePage(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2);
      MiUnlockPageTableInternal(v3, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( !v10 )
        break;
      v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      if ( v5 > v6 )
        goto LABEL_4;
    }
    MiUnlockWorkingSetShared((__int64)v3, v8, v7);
    if ( v5 != v4 )
      MiUnlockPageTableRange(a1, (__int64)((v5 - 8) << 25) >> 16);
    return 3221225626LL;
  }
}
