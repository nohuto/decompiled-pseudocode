/*
 * XREFs of MiUnlockPageTableRange @ 0x1400CE14C
 * Callers:
 *     MiLockPageTableRange @ 0x1400C6CEC (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x14057DF34 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableCharges @ 0x14004ECC4 (MiUnlockPageTableCharges.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int16 *v3; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int8 v5; // bp
  __int64 v6; // r8
  unsigned __int64 i; // rbx
  unsigned __int64 v8; // rax

  v3 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = MiLockWorkingSetShared((__int64)v3);
  for ( i = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL; i <= v4; i += 8LL )
  {
    MiLockPageTableInternal(v3, i, 0LL);
    v8 = MI_READ_PTE_LOCK_FREE(i);
    MiUnlockPageTableCharges(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2);
    MiUnlockPageTableInternal(v3, i);
  }
  return MiUnlockWorkingSetShared((__int64)v3, v5, v6);
}
