/*
 * XREFs of ?GetHidHandle@SpatialInteractionDevice@@UEAAJPEAPEAUHID_HANDLE@SpatialInteractionDevices@@@Z @ 0x1800752F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialInteractionDevice::GetHidHandle(
        SpatialInteractionDevice *this,
        struct SpatialInteractionDevices::HID_HANDLE **a2)
{
  *a2 = (struct SpatialInteractionDevices::HID_HANDLE *)*((_QWORD *)this + 9);
  return 0LL;
}
