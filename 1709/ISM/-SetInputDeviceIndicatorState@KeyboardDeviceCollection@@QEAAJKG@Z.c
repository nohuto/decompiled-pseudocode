/*
 * XREFs of ?SetInputDeviceIndicatorState@KeyboardDeviceCollection@@QEAAJKG@Z @ 0x180088EF0
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180088920 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 */

__int64 __fastcall KeyboardDeviceCollection::SetInputDeviceIndicatorState(
        KeyboardDeviceCollection *this,
        unsigned int a2,
        __int16 a3,
        unsigned int *a4)
{
  int DeviceId; // eax
  __int64 v5; // rcx
  __int64 v6; // r11
  unsigned int v7; // ebx
  struct RIMDevice *v9; // [rsp+50h] [rbp-18h] BYREF
  __int16 v10; // [rsp+80h] [rbp+18h] BYREF
  __int16 v11; // [rsp+82h] [rbp+1Ah]
  int v12; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0;
  v11 = a3;
  v9 = 0LL;
  v12 = 0;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v9, a4);
  v7 = DeviceId;
  if ( DeviceId >= 0 )
  {
    RIMDeviceIoControl(*(_QWORD *)(v6 + 80), *((_QWORD *)v9 + 2), 720904LL, &v10, 4, 0LL, 0, &v12, 0);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 291, DeviceId);
  }
  return v7;
}
