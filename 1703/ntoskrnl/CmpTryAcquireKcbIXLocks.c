/*
 * XREFs of CmpTryAcquireKcbIXLocks @ 0x140585FC8
 * Callers:
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmpPrepareForSubtreeInvalidationWorker @ 0x1406660D0 (CmpPrepareForSubtreeInvalidationWorker.c)
 * Callees:
 *     CmpTryAcquireIXLockWithRollbackPacket @ 0x140586030 (CmpTryAcquireIXLockWithRollbackPacket.c)
 */

__int64 __fastcall CmpTryAcquireKcbIXLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // esi
  __int64 v7; // rdx
  __int64 result; // rax

  v6 = CmpTryAcquireIXLockWithRollbackPacket(a1 + 240, a2, a4);
  result = CmpTryAcquireIXLockWithRollbackPacket(a1 + 256, v7, a4);
  if ( v6 < 0 )
  {
    if ( v6 != -1073741267 )
      return (unsigned int)v6;
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
