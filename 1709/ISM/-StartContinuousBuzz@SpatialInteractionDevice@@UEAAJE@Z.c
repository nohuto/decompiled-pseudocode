/*
 * XREFs of ?StartContinuousBuzz@SpatialInteractionDevice@@UEAAJE@Z @ 0x180074F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialInteractionDevice::StartContinuousBuzz(
        SpatialInteractionDevices **this,
        char a2,
        unsigned __int16 a3,
        unsigned __int8 a4)
{
  LOBYTE(a3) = a2;
  return SpatialInteractionDevices::SetHapticsWaveForm(
           this[11],
           (struct SpatialInteractionDevices::HID_HANDLE *)*((unsigned __int16 *)this + 48),
           a3,
           a4);
}
