/*
 * XREFs of CmpTryAcquireKcbIXLocks @ 0x1406117BC
 * Callers:
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpPrepareForSubtreeInvalidationWorker @ 0x1405EDFE0 (CmpPrepareForSubtreeInvalidationWorker.c)
 *     CmpSaveBootControlSet @ 0x1406EB510 (CmpSaveBootControlSet.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 * Callees:
 *     CmpTryAcquireIXLockWithRollbackPacket @ 0x140611828 (CmpTryAcquireIXLockWithRollbackPacket.c)
 */

__int64 __fastcall CmpTryAcquireKcbIXLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // rdx
  int v8; // esi
  __int64 result; // rax

  v6 = CmpTryAcquireIXLockWithRollbackPacket(a1 + 240, a2, a4);
  LOBYTE(v7) = 1;
  v8 = v6;
  result = CmpTryAcquireIXLockWithRollbackPacket(a1 + 256, v7, a4);
  if ( v8 < 0 )
  {
    if ( v8 != -1073741267 )
      return (unsigned int)v8;
    if ( (int)result >= 0 )
      return 3221226029LL;
  }
  else if ( (int)result >= 0 )
  {
    return 0LL;
  }
  if ( (_DWORD)result == -1073741267 )
    return 3221226029LL;
  return result;
}
