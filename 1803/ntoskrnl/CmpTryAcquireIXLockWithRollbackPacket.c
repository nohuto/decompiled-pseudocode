/*
 * XREFs of CmpTryAcquireIXLockWithRollbackPacket @ 0x140611828
 * Callers:
 *     CmpTryAcquireKcbIXLocks @ 0x1406117BC (CmpTryAcquireKcbIXLocks.c)
 * Callees:
 *     CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x1406F9CF8 (CmpSnapshotTxOwnerArrayToRollbackPacket.c)
 */

__int64 __fastcall CmpTryAcquireIXLockWithRollbackPacket(int *a1, char a2, __int64 a3)
{
  int v3; // eax
  __int64 result; // rax
  bool v5; // al

  v3 = *a1;
  if ( a2 )
  {
    if ( !v3 )
      return 0LL;
    v5 = 0;
  }
  else
  {
    v5 = v3 >= 0;
  }
  if ( v5 )
    return 0LL;
  result = CmpSnapshotTxOwnerArrayToRollbackPacket(a1, a3);
  if ( (int)result >= 0 )
    return 3221226029LL;
  return result;
}
