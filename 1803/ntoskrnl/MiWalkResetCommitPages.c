/*
 * XREFs of MiWalkResetCommitPages @ 0x1402519D4
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x140251398 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiWalkResetCommitPages(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  _KPROCESS *Process; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v10[22]; // [rsp+30h] [rbp-69h] BYREF

  v9 = 0LL;
  memset(v10, 0, sizeof(v10));
  v2 = *(unsigned __int8 *)(a1 + 33);
  v3 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10[21] = &v9;
  Process = (_KPROCESS *)((char *)Process + 1280);
  v10[19] = MiWalkResetCommitPte;
  v5 = *(unsigned int *)(a1 + 24) | v3;
  LODWORD(v10[0]) = 7;
  v6 = ((*(unsigned int *)(a1 + 28) | (unsigned __int64)(v2 << 32)) << 12) | 0xFFF;
  v10[4] = v5 << 12;
  v10[5] = v6;
  v10[3] = Process;
  BYTE4(v10[0]) = MiLockWorkingSetShared((__int64)Process);
  MiWalkPageTables((int *)v10);
  MiUnlockWorkingSetShared((__int64)Process, BYTE4(v10[0]), v7);
  return v9;
}
