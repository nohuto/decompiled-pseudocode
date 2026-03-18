/*
 * XREFs of MiCreateInitialSystemWsles @ 0x1408AD704
 * Callers:
 *     MiInitializeDriverImages @ 0x1408AC7B8 (MiInitializeDriverImages.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

_BOOL8 MiCreateInitialSystemWsles()
{
  char *AnyMultiplexedVm; // rax
  __int64 v1; // rsi
  int v2; // edx
  LONG *SharedVm; // rbx
  KIRQL v4; // al
  _QWORD v6[22]; // [rsp+20h] [rbp-1E8h] BYREF
  _BYTE v7[288]; // [rsp+D0h] [rbp-138h] BYREF

  memset(v6, 0, sizeof(v6));
  memset(v7, 0, 0x118uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v6[5] = -1LL;
  v1 = (__int64)AnyMultiplexedVm;
  v6[3] = AnyMultiplexedVm;
  v6[21] = v7;
  LODWORD(v6[0]) = v2;
  v6[19] = MiCreatePteWsle;
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  BYTE4(v6[0]) = v4;
  LODWORD(SharedVm) = MiWalkPageTables((int *)v6);
  MiUnlockWorkingSetExclusive(v1, BYTE4(v6[0]));
  return (_DWORD)SharedVm != 4;
}
