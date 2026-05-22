/*
 * XREFs of ?SupportsAnalogTrigger@SpatialInteractionDevice@@UEAAJPEA_N@Z @ 0x180074FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialInteractionDevice::SupportsAnalogTrigger(
        SpatialInteractionDevices **this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        bool *a3)
{
  return SpatialInteractionDevices::SupportsAnalogTrigger(this[11], a2, a3);
}
