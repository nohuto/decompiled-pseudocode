/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x140122914
 * Callers:
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MiDeleteRotateAndStopFaults(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int8 v9; // si
  __int64 v10; // r9
  _BYTE v12[32]; // [rsp+30h] [rbp-38h] BYREF

  memset(v12, 0, sizeof(v12));
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  *a3 = Process[1].Affinity.Bitmap[9];
  LOBYTE(v10) = v8;
  Process[1].Affinity.Bitmap[9] = (unsigned __int64)a3;
  MiDeleteVirtualAddresses(a1, a2, 0, v10, (__int64)v12);
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v9);
}
