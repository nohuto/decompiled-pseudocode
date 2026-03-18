/*
 * XREFs of MiRotateComplete @ 0x140009D20
 * Callers:
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiRotateComplete(unsigned __int64 *a1)
{
  _KPROCESS *Process; // rdx
  unsigned __int16 *v3; // rbp
  unsigned __int64 *v4; // rdi
  __int64 SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  unsigned __int64 *i; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = &Process[1].IdealNode[12];
  v4 = &Process[1].Affinity.Bitmap[9];
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  LOBYTE(v7) = v6;
  for ( i = (unsigned __int64 *)*v4; i != a1; i = (unsigned __int64 *)*i )
    v4 = i;
  *v4 = *i;
  return MiUnlockWorkingSetExclusive(v3, v7);
}
