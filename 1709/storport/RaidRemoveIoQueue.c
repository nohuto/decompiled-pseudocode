/*
 * XREFs of RaidRemoveIoQueue @ 0x1C0032778
 * Callers:
 *     RaUnitFlushQueueSrb @ 0x1C003C04C (RaUnitFlushQueueSrb.c)
 *     RaidUnitCancelPendingRequests @ 0x1C003E134 (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     RaidRemovePendingDeviceQueue @ 0x1C0031D68 (RaidRemovePendingDeviceQueue.c)
 */

_BYTE *__fastcall RaidRemoveIoQueue(__int64 a1)
{
  _BYTE *v1; // rax
  _BYTE *v2; // rcx
  __int64 v3; // rdx

  v1 = RaidRemovePendingDeviceQueue(a1 + 16);
  v2 = 0LL;
  if ( v1 )
  {
    v2 = v1 - 120;
    v3 = *(_QWORD *)(*((_QWORD *)v1 + 8) + 8LL);
    if ( *(_BYTE *)(v3 + 2) != 40 )
      *(_QWORD *)(v3 + 56) = *(_QWORD *)(v3 + 40);
  }
  return v2;
}
