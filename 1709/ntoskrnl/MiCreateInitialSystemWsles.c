/*
 * XREFs of MiCreateInitialSystemWsles @ 0x140857248
 * Callers:
 *     MiInitializeDriverImages @ 0x14082EE90 (MiInitializeDriverImages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiWalkPageTables @ 0x14009CD60 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

_BOOL8 MiCreateInitialSystemWsles()
{
  char *AnyMultiplexedVm; // rax
  __int64 v1; // rsi
  LONG *SharedVm; // rbx
  KIRQL v3; // al
  int v4; // eax
  __int64 v5; // rdx
  _QWORD v7[20]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v7, 0, 0x98uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v7[3] = -1LL;
  v1 = (__int64)AnyMultiplexedVm;
  LODWORD(v7[0]) |= 1u;
  v7[16] = MiCreatePteWsle;
  v7[1] = AnyMultiplexedVm;
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v3 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  BYTE4(v7[0]) = v3;
  v4 = MiWalkPageTables((__int64)v7);
  LOBYTE(v5) = BYTE4(v7[0]);
  LODWORD(SharedVm) = v4;
  MiUnlockWorkingSetExclusive(v1, v5);
  return (_DWORD)SharedVm != 2;
}
