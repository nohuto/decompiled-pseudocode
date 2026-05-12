/*
 * XREFs of RaidGetQosEntryForDeviceEntry @ 0x1C002D6B0
 * Callers:
 *     RaidStartIoPacket @ 0x1C0008A60 (RaidStartIoPacket.c)
 *     StorRemoveIoGatewayItem @ 0x1C000C170 (StorRemoveIoGatewayItem.c)
 *     RiNormalizeDeviceQueue @ 0x1C000C9F4 (RiNormalizeDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x1C000CC0C (RiEnqueueDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000CCE8 (StorSubmitIoGatewayItem.c)
 *     RaidAdapterRestartQueues @ 0x1C000EF18 (RaidAdapterRestartQueues.c)
 *     RaidRemoveIoQueue @ 0x1C0015DF8 (RaidRemoveIoQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetQosEntryForDeviceEntry(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  if ( *(_BYTE *)(v1 + 2) == 40 )
    v2 = *(_QWORD *)(v1 + 96);
  else
    v2 = *(_QWORD *)(v1 + 48);
  return v2 + 24;
}
