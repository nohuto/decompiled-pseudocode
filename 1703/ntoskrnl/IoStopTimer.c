/*
 * XREFs of IoStopTimer @ 0x1401F4280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
