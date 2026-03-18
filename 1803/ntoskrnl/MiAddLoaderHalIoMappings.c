/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x14089C610
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiAddLoaderHalIoMappings(__int64 a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rdi
  __int64 v5; // r8
  _QWORD v7[22]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v7, 0, sizeof(v7));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  LODWORD(v7[0]) = 2055;
  v7[4] = a1;
  v7[19] = MiAddLoaderHalIoPte;
  v7[5] = a2;
  v7[3] = AnyMultiplexedVm;
  BYTE4(v7[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables((int *)v7);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE4(v7[0]), v5);
}
