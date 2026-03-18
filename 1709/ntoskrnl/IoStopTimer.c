/*
 * XREFs of IoStopTimer @ 0x1401F9DF0
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x1401F4E3C (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
