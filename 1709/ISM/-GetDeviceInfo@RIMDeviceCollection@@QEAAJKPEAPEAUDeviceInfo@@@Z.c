/*
 * XREFs of ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008A448
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180088920 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     ?OnInputReport@KeyboardDeviceCollection@@MEAAJKPEAXK@Z @ 0x180088C60 (-OnInputReport@KeyboardDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@MouseDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008A610 (-OnInputReport@MouseDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008AA10 (-OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008B200 (-OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008B880 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?SendDeviceUpdate@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x180093E7C (-SendDeviceUpdate@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@Spatia.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x180099BF0 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009A950 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::GetDeviceInfo(
        RIMDeviceCollection *this,
        int a2,
        struct DeviceInfo **a3,
        unsigned int *a4)
{
  int DeviceId; // eax
  __int64 v5; // rcx
  _QWORD *v6; // r11
  unsigned int v7; // ebx
  struct RIMDevice *v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v9, a4);
  v7 = DeviceId;
  if ( DeviceId >= 0 )
  {
    *v6 = *((_QWORD *)v9 + 4);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 2, 1216, DeviceId);
  }
  return v7;
}
