/*
 * XREFs of ?ndisSetupDeviceInitialize@@YAXXZ @ 0x1C0111038
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void ndisSetupDeviceInitialize(void)
{
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&ndisSetupDeviceListLock);
}
