/*
 * XREFs of ?GetHandedness@SpatialInteractionDevice@@UEAAJPEAW4Handedness@SpatialInteractionDevices@@@Z @ 0x180074FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialInteractionDevice::GetHandedness(
        SpatialInteractionDevices **this,
        enum SpatialInteractionDevices::Handedness *a2,
        enum SpatialInteractionDevices::Handedness *a3)
{
  return SpatialInteractionDevices::GetHandedness(this[11], a2, a3);
}
