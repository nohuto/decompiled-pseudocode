/*
 * XREFs of ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007E680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::OnDeviceAttach(DWMInputRouter *this, struct DeviceInfo *a2)
{
  return DWMInputRouter::OnDeviceChange(this, a2, 1);
}
