/*
 * XREFs of NetPacketPoolInitialize @ 0x1C0112980
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00A8CE8 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

void NetPacketPoolInitialize()
{
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_1C0093D90);
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_1C0093D98);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  g_NetPacketStateUpdateWorkItem.Parameter = 0LL;
  g_NetPacketStateUpdateWorkItem.List.Flink = 0LL;
  g_NetPacketStateUpdateWorkItem.WorkerRoutine = NetPacketStateUpdateWorker;
  RebalanceExtensions();
}
