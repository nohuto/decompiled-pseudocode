/*
 * XREFs of ?SetInputDeviceRepeatParameters@KeyboardDeviceCollection@@QEAAJKI@Z @ 0x180088DC4
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180088920 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 */

__int64 __fastcall KeyboardDeviceCollection::SetInputDeviceRepeatParameters(
        KeyboardDeviceCollection *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v5; // ebx
  int DeviceId; // eax
  __int64 v7; // rcx
  __int16 v8; // r11
  unsigned int v9; // edi
  __int64 v10; // rcx
  struct RIMDevice *v12; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+90h] [rbp+18h] BYREF
  int v14; // [rsp+98h] [rbp+20h] BYREF
  __int16 v15; // [rsp+9Ch] [rbp+24h]

  v12 = 0LL;
  v13 = 0;
  v5 = HIWORD(a3);
  v14 = 0;
  v15 = 0;
  if ( !HIWORD(a3) )
    LOWORD(v5) = 250;
  if ( (unsigned __int16)v5 < 0xFAu )
    LOWORD(v5) = 250;
  if ( (unsigned __int16)v5 > 0x3E8u )
    LOWORD(v5) = 1000;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v12, a4);
  v9 = DeviceId;
  if ( DeviceId >= 0 )
  {
    v10 = *((_QWORD *)this + 10);
    HIWORD(v14) = v8;
    v15 = v5;
    RIMDeviceIoControl(v10, *((_QWORD *)v12 + 2), 720900LL, &v14, 6, 0LL, 0, &v13, 0);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 254, DeviceId);
  }
  return v9;
}
