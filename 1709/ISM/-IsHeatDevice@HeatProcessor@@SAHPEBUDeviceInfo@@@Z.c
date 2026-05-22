/*
 * XREFs of ?IsHeatDevice@HeatProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x180047E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HeatProcessor::IsHeatDevice(const struct DeviceInfo *a1)
{
  return *((_DWORD *)a1 + 1) == 2048;
}
