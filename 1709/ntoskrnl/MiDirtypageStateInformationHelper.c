/*
 * XREFs of MiDirtypageStateInformationHelper @ 0x14021B9A8
 * Callers:
 *     MiProcessVaRangesInfoClass @ 0x140584814 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiMoveDirtyBitsToPfns @ 0x140229C98 (MiMoveDirtyBitsToPfns.c)
 */

__int64 __fastcall MiDirtypageStateInformationHelper(unsigned __int64 a1, unsigned __int64 a2)
{
  _KPROCESS *Process; // r14
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  KIRQL v7; // di
  int v8; // r9d
  int v9; // r8d
  __int64 v10; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = v6;
  LOBYTE(v8) = v6;
  MiMoveDirtyBitsToPfns((a1 >> 9) & 0xFFFFFFF8, (a2 >> 9) & 0xFFFFFFF8, v9, v8, 0);
  LOBYTE(v10) = v7;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v10);
}
