/*
 * XREFs of ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C011C078
 * Callers:
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00AC490 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

void ndisInitializeWatchdogSubsystem(void)
{
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_ndisWatchdogLock);
  qword_1C0099840 = (__int64)&g_ndisWatchdogList;
  g_ndisWatchdogList.Flink = &g_ndisWatchdogList;
}
