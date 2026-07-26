/*
 * XREFs of NetPacketPoolInitialize @ 0x1C011B5E0
 * Callers:
 *     DriverEntry @ 0x1C011A0D0 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00C8480 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ?RebalanceExtensions@@YAXXZ @ 0x1C00C848C (-RebalanceExtensions@@YAXXZ.c)
 */

void NetPacketPoolInitialize()
{
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_1C0099EA8);
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_1C0099EB0);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  g_NetPacketStateUpdateWorkItem.Parameter = 0LL;
  g_NetPacketStateUpdateWorkItem.List.Flink = 0LL;
  g_NetPacketStateUpdateWorkItem.WorkerRoutine = NetPacketStateUpdateWorker;
  RebalanceExtensions();
}
