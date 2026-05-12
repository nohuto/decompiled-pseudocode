/*
 * XREFs of RaidGetQosEntryForDeviceEntry @ 0x1C0031A90
 * Callers:
 *     RaidStartIoPacket @ 0x1C0007770 (RaidStartIoPacket.c)
 *     RiNormalizeDeviceQueue @ 0x1C0009ADC (RiNormalizeDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x1C0009CFC (RiEnqueueDeviceQueue.c)
 *     StorRemoveIoGatewayItem @ 0x1C000B240 (StorRemoveIoGatewayItem.c)
 *     StorSubmitIoGatewayItem @ 0x1C000C1AC (StorSubmitIoGatewayItem.c)
 *     RaidAdapterRestartQueues @ 0x1C0010608 (RaidAdapterRestartQueues.c)
 *     RaidRemovePendingDeviceQueue @ 0x1C0031D68 (RaidRemovePendingDeviceQueue.c)
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
