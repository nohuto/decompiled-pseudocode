/*
 * XREFs of ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18006C910 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18006CCA0 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x18006D070 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x18007124C (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCControllerDeviceInfo@@@Z @ 0x1800716E0 (-SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCControllerDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180072970 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x180072D90 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073330 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800735C0 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073B60 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073FD0 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x180074170 (-OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@CameraControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074450 (-OnDeviceAttach@CameraControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@CameraControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800745C0 (-OnInputReport@CameraControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074F90 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800752C0 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDeviceCollection::FindDeviceId(
        RIMDeviceCollection *this,
        int a2,
        struct RIMDevice **a3,
        unsigned int *a4)
{
  __int64 result; // rax
  __int64 *v5; // r10
  unsigned int v6; // r9d
  __int64 v7; // rcx

  result = 0LL;
  v5 = (__int64 *)((char *)this + 624);
  v6 = 0;
  while ( 1 )
  {
    v7 = *v5;
    if ( *v5 )
    {
      if ( !*(_QWORD *)(v7 + 16) || *(_DWORD *)(v7 + 40) == a2 )
        break;
    }
    ++v6;
    ++v5;
    if ( v6 >= 0x100 )
      return 2147943568LL;
  }
  if ( a3 )
    *a3 = (struct RIMDevice *)v7;
  return result;
}
