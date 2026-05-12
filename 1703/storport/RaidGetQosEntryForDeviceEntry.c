/*
 * XREFs of RaidGetQosEntryForDeviceEntry @ 0x1C00312D8
 * Callers:
 *     RaidStartIoPacket @ 0x1C00073D0 (RaidStartIoPacket.c)
 *     StorRemoveIoGatewayItem @ 0x1C0009840 (StorRemoveIoGatewayItem.c)
 *     RiNormalizeDeviceQueue @ 0x1C0009E90 (RiNormalizeDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x1C000A058 (RiEnqueueDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000A0E4 (StorSubmitIoGatewayItem.c)
 *     RaidAdapterRestartQueues @ 0x1C0011918 (RaidAdapterRestartQueues.c)
 *     RaidRemovePendingDeviceQueue @ 0x1C00314B8 (RaidRemovePendingDeviceQueue.c)
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
