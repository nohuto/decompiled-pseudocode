/*
 * XREFs of NetPacketPoolInitialize @ 0x1C011C1B0
 * Callers:
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00AC490 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ?RebalanceExtensions@@YAXXZ @ 0x1C00B497C (-RebalanceExtensions@@YAXXZ.c)
 */

void NetPacketPoolInitialize()
{
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_1C009ACF8);
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_1C009AD00);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  qword_1C009ACD8 = 0LL;
  g_NetPacketStateUpdateWorkItem.List.Flink = 0LL;
  qword_1C009ACD0 = (__int64)NetPacketStateUpdateWorker;
  RebalanceExtensions();
}
