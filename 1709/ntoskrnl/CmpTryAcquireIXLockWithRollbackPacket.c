/*
 * XREFs of CmpTryAcquireIXLockWithRollbackPacket @ 0x1405A6FA0
 * Callers:
 *     CmpTryAcquireKcbIXLocks @ 0x1405A6F34 (CmpTryAcquireKcbIXLocks.c)
 * Callees:
 *     CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x140696288 (CmpSnapshotTxOwnerArrayToRollbackPacket.c)
 */

__int64 __fastcall CmpTryAcquireIXLockWithRollbackPacket(_DWORD *a1, char a2, __int64 a3)
{
  __int64 result; // rax
  bool v4; // al

  if ( a2 )
  {
    if ( !*a1 )
      return 0LL;
    v4 = 0;
  }
  else
  {
    v4 = *a1 >= 0;
  }
  if ( v4 )
    return 0LL;
  result = CmpSnapshotTxOwnerArrayToRollbackPacket(a1, a3);
  if ( (int)result >= 0 )
    return 3221226029LL;
  return result;
}
