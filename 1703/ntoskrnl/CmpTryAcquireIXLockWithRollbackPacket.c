/*
 * XREFs of CmpTryAcquireIXLockWithRollbackPacket @ 0x140586030
 * Callers:
 *     CmpTryAcquireKcbIXLocks @ 0x140585FC8 (CmpTryAcquireKcbIXLocks.c)
 * Callees:
 *     CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x14066BC1C (CmpSnapshotTxOwnerArrayToRollbackPacket.c)
 */

__int64 __fastcall CmpTryAcquireIXLockWithRollbackPacket(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // eax

  v3 = 0;
  if ( *a1 )
  {
    v5 = CmpSnapshotTxOwnerArrayToRollbackPacket(a1, a3);
    if ( v5 >= 0 )
      return (unsigned int)-1073741267;
    return (unsigned int)v5;
  }
  return v3;
}
