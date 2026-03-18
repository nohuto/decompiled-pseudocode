/*
 * XREFs of ?MonitorInterfaceCallback@CMonitorPDO@@CAJPEAX0@Z @ 0x1C00EDB20
 * Callers:
 *     <none>
 * Callees:
 *     ?MonitorInterfaceCallbackInternal@CMonitorPDO@@AEAAJPEBU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x1C00EDB40 (-MonitorInterfaceCallbackInternal@CMonitorPDO@@AEAAJPEBU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@.c)
 */

__int64 __fastcall CMonitorPDO::MonitorInterfaceCallback(
        const struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION *NotificationStructure,
        CMonitorPDO *Context)
{
  return CMonitorPDO::MonitorInterfaceCallbackInternal(Context, NotificationStructure);
}
