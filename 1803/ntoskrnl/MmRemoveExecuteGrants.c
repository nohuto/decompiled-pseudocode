/*
 * XREFs of MmRemoveExecuteGrants @ 0x1400D10BC
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 MmRemoveExecuteGrants()
{
  _KPROCESS *Process; // rbx
  __int64 v1; // r8
  _QWORD v3[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v4[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v4, 0, 0xB8uLL);
  memset(v3, 0, sizeof(v3));
  Process = KeGetCurrentThread()->ApcState.Process;
  v3[21] = v4;
  Process = (_KPROCESS *)((char *)Process + 1280);
  LODWORD(v3[0]) = 6;
  v3[19] = MiRevokeExecutePte;
  v3[3] = Process;
  v3[20] = PsGetHostSilo;
  v3[5] = 0xFFFF7FFFFFFFFFFFuLL;
  WORD2(v4[0]) = 0;
  v4[2] = 0LL;
  v4[3] = 0LL;
  v4[1] = 20LL;
  LODWORD(v4[0]) = 1;
  BYTE4(v3[0]) = MiLockWorkingSetShared((__int64)Process);
  MiWalkPageTables((int *)v3);
  MiUnlockWorkingSetShared((__int64)Process, BYTE4(v3[0]), v1);
  return MiFlushTbList(v4);
}
