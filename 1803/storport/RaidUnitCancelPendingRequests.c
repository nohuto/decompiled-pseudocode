/*
 * XREFs of RaidUnitCancelPendingRequests @ 0x1C0015D84
 * Callers:
 *     RaUnitDisableDeviceIrp @ 0x1C003A754 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C005FD60 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidZoneWriteGroupListPurge @ 0x1C0015DC8 (RaidZoneWriteGroupListPurge.c)
 *     RaidRemoveIoQueue @ 0x1C0015DF8 (RaidRemoveIoQueue.c)
 *     RaidCancelIrp @ 0x1C00395C4 (RaidCancelIrp.c)
 */

__int64 __fastcall RaidUnitCancelPendingRequests(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax

  v2 = a1 + 384;
  while ( 1 )
  {
    v3 = RaidRemoveIoQueue(v2);
    if ( !v3 )
      break;
    RaidCancelIrp(a1, 8LL, v3);
  }
  RaidZoneWriteGroupListPurge(a1 + 400);
  return 0LL;
}
