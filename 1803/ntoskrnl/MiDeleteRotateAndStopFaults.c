/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x1400D0A74
 * Callers:
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiDeleteVirtualAddresses @ 0x140072630 (MiDeleteVirtualAddresses.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

signed __int64 __fastcall MiDeleteRotateAndStopFaults(int a1, int a2, _QWORD *a3)
{
  _KPROCESS *Process; // rdi
  __int64 SharedVm; // rbx
  KIRQL v8; // al
  __int64 v9; // rdx
  _BYTE v11[32]; // [rsp+20h] [rbp-58h] BYREF

  memset(v11, 0, sizeof(v11));
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  LOBYTE(v9) = v8;
  *a3 = Process[1].Affinity.Bitmap[9];
  Process[1].Affinity.Bitmap[9] = (unsigned __int64)a3;
  MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v9);
  return MiDeleteVirtualAddresses(a1, a2, 0, (__int64)v11);
}
