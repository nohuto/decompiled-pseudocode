/*
 * XREFs of IoStopTimer @ 0x140236F70
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x14023236C (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
