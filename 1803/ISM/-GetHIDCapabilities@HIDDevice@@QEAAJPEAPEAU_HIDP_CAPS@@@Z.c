/*
 * XREFs of ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18007548C
 * Callers:
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x18006D070 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180072970 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x180072D90 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800735C0 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x180074170 (-OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@CameraControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800745C0 (-OnInputReport@CameraControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x18007558C (-RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HIDDevice::GetHIDCapabilities(HIDDevice *this, struct _HIDP_CAPS **a2)
{
  unsigned int v2; // ebx
  struct _HIDP_CAPS *v3; // rdi
  NTSTATUS Caps; // eax

  v2 = 0;
  v3 = (struct _HIDP_CAPS *)((char *)this + 60);
  if ( *((_WORD *)this + 31) || (Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)this + 6), v3), Caps >= 0) )
    *a2 = v3;
  else
    return Caps | 0x10000000u;
  return v2;
}
