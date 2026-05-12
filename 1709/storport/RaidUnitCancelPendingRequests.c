/*
 * XREFs of RaidUnitCancelPendingRequests @ 0x1C003E134
 * Callers:
 *     RaUnitDisableDeviceIrp @ 0x1C003BFE8 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0068D2C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidZoneWriteGroupListPurge @ 0x1C0031ED4 (RaidZoneWriteGroupListPurge.c)
 *     RaidRemoveIoQueue @ 0x1C0032778 (RaidRemoveIoQueue.c)
 *     RaidCancelIrp @ 0x1C003AF04 (RaidCancelIrp.c)
 */

__int64 __fastcall RaidUnitCancelPendingRequests(__int64 a1)
{
  __int64 v2; // rdi
  _BYTE *v3; // rax

  v2 = a1 + 384;
  while ( 1 )
  {
    v3 = RaidRemoveIoQueue(v2);
    if ( !v3 )
      break;
    RaidCancelIrp(a1, 8, (__int64)v3);
  }
  RaidZoneWriteGroupListPurge(a1 + 400);
  return 0LL;
}
