/*
 * XREFs of ?IsControllerDevice@ControllerProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18003DE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::IsControllerDevice(const struct DeviceInfo *a1)
{
  return (*((_DWORD *)a1 + 1) >> 6) & 1;
}
