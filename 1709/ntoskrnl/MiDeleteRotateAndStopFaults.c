/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x140009FDC
 * Callers:
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiDeleteRotateAndStopFaults(int a1, int a2, _QWORD *a3)
{
  _KPROCESS *Process; // rdi
  __int64 SharedVm; // rbx
  KIRQL v8; // al
  KIRQL v9; // si
  int v10; // r9d
  __int64 v11; // rdx
  _BYTE v13[32]; // [rsp+30h] [rbp-38h] BYREF

  memset(v13, 0, sizeof(v13));
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v9 = v8;
  *a3 = Process[1].Affinity.Bitmap[9];
  LOBYTE(v10) = v8;
  Process[1].Affinity.Bitmap[9] = (unsigned __int64)a3;
  MiDeleteVirtualAddresses(a1, a2, 0, v10, (__int64)v13);
  LOBYTE(v11) = v9;
  return MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v11);
}
