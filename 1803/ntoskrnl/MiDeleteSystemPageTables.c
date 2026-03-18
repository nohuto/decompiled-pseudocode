/*
 * XREFs of MiDeleteSystemPageTables @ 0x14004975C
 * Callers:
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiDeleteSystemPageTables(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v10; // r8
  _QWORD v12[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v13[22]; // [rsp+40h] [rbp-C0h] BYREF

  v12[1] = 0LL;
  memset(v13, 0, sizeof(v13));
  BYTE2(v13[1]) = a5;
  v13[19] = MiDeleteSystemPageTable;
  v13[20] = MiDeleteSystemPageTableTail;
  v13[21] = v12;
  v12[0] = a2;
  v12[2] = a6;
  LODWORD(v13[0]) = 2055;
  v13[4] = a3;
  v13[5] = a4;
  v13[3] = a1;
  BYTE4(v13[0]) = MiLockWorkingSetShared(a1);
  MiWalkPageTables((int *)v13);
  return MiUnlockWorkingSetShared(a1, BYTE4(v13[0]), v10);
}
