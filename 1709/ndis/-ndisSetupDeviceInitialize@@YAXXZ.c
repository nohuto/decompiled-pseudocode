/*
 * XREFs of ?ndisSetupDeviceInitialize@@YAXXZ @ 0x1C011A0A8
 * Callers:
 *     DriverEntry @ 0x1C011A0D0 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00C8480 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

void ndisSetupDeviceInitialize(void)
{
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&ndisSetupDeviceListLock);
}
