/*
 * XREFs of MiUnlockPageTableRange @ 0x140017450
 * Callers:
 *     MiLockPageTableRange @ 0x140035428 (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x140430BB4 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x14001769C (MiUnlockPageTableCharges.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  _KPROCESS *Process; // rbp
  unsigned __int64 v4; // rsi
  __int64 SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // r14
  unsigned __int64 i; // rdi
  __int64 v10; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v8 = v6;
  for ( i = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL; i <= v4; i += 8LL )
  {
    v10 = MI_GET_PAGE_FRAME_FROM_PTE(i);
    MiUnlockPageTableCharges(48 * v10 - 0x58000000000LL);
  }
  LOBYTE(v7) = v8;
  return MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v7);
}
