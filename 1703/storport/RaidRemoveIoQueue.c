/*
 * XREFs of RaidRemoveIoQueue @ 0x1C0031B38
 * Callers:
 *     RaUnitDisableDeviceIrp @ 0x1C003A298 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C003A320 (RaUnitFlushQueueSrb.c)
 *     RaidUnitCancelPendingRequests @ 0x1C003C82C (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     RaidRemovePendingDeviceQueue @ 0x1C00314B8 (RaidRemovePendingDeviceQueue.c)
 */

__int64 *__fastcall RaidRemoveIoQueue(__int64 a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rcx
  __int64 v3; // rdx

  v1 = RaidRemovePendingDeviceQueue(a1 + 16);
  v2 = 0LL;
  if ( v1 )
  {
    v2 = v1 - 15;
    v3 = *(_QWORD *)(v1[8] + 8);
    if ( *(_BYTE *)(v3 + 2) != 40 )
      *(_QWORD *)(v3 + 56) = *(_QWORD *)(v3 + 40);
  }
  return v2;
}
