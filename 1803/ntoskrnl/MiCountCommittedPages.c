/*
 * XREFs of MiCountCommittedPages @ 0x140263AB4
 * Callers:
 *     MiLoadSectionIntoVsmEnclave @ 0x140752530 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiComputePageCommitment @ 0x14003D030 (MiComputePageCommitment.c)
 */

__int64 __fastcall MiCountCommittedPages(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // di
  __int64 v9; // rbx
  __int64 v10; // r8

  v8 = MiLockWorkingSetShared(a4);
  v9 = MiComputePageCommitment(a1, a2, a3, v8, 0, 0LL);
  MiUnlockWorkingSetShared(a4, v8, v10);
  return v9;
}
