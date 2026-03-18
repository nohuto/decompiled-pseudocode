/*
 * XREFs of MiCreateForkWsles @ 0x140001690
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiCreateForkWsle @ 0x14000176C (MiCreateForkWsle.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 */

__int64 MiCreateForkWsles()
{
  unsigned __int16 *v0; // rbp
  unsigned __int64 v1; // r14
  __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  __int64 SharedVm; // rbx
  KIRQL v5; // al
  int v6; // edx
  KIRQL v7; // di
  __int64 v8; // rdx

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
  SharedVm = MiGetSharedVm(v0);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  LOBYTE(v6) = v5;
  v7 = v5;
  MiCreateForkWsle((_DWORD)v0, v6, v1, v3, 3);
  LOBYTE(v8) = v7;
  return MiUnlockWorkingSetExclusive(v0, v8);
}
