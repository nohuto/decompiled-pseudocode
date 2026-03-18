/*
 * XREFs of MiCreateInitialSystemWsles @ 0x1408157CC
 * Callers:
 *     MiInitializeDriverImages @ 0x140814868 (MiInitializeDriverImages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x1400D7BB0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

_BOOL8 MiCreateInitialSystemWsles()
{
  char *AnyMultiplexedVm; // rax
  __int64 v1; // rsi
  LONG *SharedVm; // rbx
  KIRQL v3; // al
  _QWORD v5[18]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v5, 0, sizeof(v5));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v5[3] = -1LL;
  v1 = (__int64)AnyMultiplexedVm;
  LODWORD(v5[0]) |= 1u;
  v5[15] = MiCreatePteWsle;
  v5[1] = AnyMultiplexedVm;
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v3 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  BYTE4(v5[0]) = v3;
  LODWORD(SharedVm) = MiWalkPageTables((__int64)v5);
  MiUnlockWorkingSetExclusive(v1, BYTE4(v5[0]));
  return (_DWORD)SharedVm != 2;
}
