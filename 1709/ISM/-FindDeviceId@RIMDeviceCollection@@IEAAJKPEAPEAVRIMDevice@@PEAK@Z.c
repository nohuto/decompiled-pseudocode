/*
 * XREFs of ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60
 * Callers:
 *     ?SetInputDeviceRepeatParameters@KeyboardDeviceCollection@@QEAAJKI@Z @ 0x180088DC4 (-SetInputDeviceRepeatParameters@KeyboardDeviceCollection@@QEAAJKI@Z.c)
 *     ?SetInputDeviceIndicatorState@KeyboardDeviceCollection@@QEAAJKG@Z @ 0x180088EF0 (-SetInputDeviceIndicatorState@KeyboardDeviceCollection@@QEAAJKG@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008A448 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@PTPDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008A800 (-OnDeviceAttach@PTPDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@TouchDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008B010 (-OnDeviceAttach@TouchDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008BE30 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008C1B0 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?DoDeviceAttach@SpatialInputControllerCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180092FFC (-DoDeviceAttach@SpatialInputControllerCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180099840 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x180099BF0 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009A5F0 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009A950 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B100 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x18009B370 (-SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B740 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009BA70 (-OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x18009BD84 (-SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z.c)
 *     ?UpdateCalibrationInfo@GazeDeviceCollection@@IEAAJPEAUDeviceInfo@@@Z @ 0x18009BFD0 (-UpdateCalibrationInfo@GazeDeviceCollection@@IEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009C9F0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x18009CE20 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
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
