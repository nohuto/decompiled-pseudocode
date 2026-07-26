/*
 * XREFs of ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C0111008
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00A8CE8 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

void ndisInitializeWatchdogSubsystem(void)
{
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_ndisWatchdogLock);
  qword_1C00927D0 = (__int64)&g_ndisWatchdogList;
  g_ndisWatchdogList.Flink = &g_ndisWatchdogList;
}
