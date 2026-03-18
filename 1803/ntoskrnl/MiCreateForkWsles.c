/*
 * XREFs of MiCreateForkWsles @ 0x1401427C8
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiCreateForkWsle @ 0x1401428A4 (MiCreateForkWsle.c)
 */

void MiCreateForkWsles()
{
  unsigned __int16 *v0; // rbp
  unsigned __int64 v1; // r14
  __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  int v6; // edx
  unsigned __int8 v7; // di

  v0 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v1 = 0xFFFFF68000000000uLL;
  v2 = 3LL;
  v3 = 0xFFFFF6BFFFFFFFF8uLL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v2;
  }
  while ( v2 );
  SharedVm = MiGetSharedVm((__int64)v0);
  v5 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  LOBYTE(v6) = v5;
  v7 = v5;
  MiCreateForkWsle((_DWORD)v0, v6, v1, v3, 3);
  MiUnlockWorkingSetExclusive((__int64)v0, v7);
}
