/*
 * XREFs of ReadTestOverrideValue @ 0x1C00597B8
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0059DFC (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     MyRegOpenKeyForRead @ 0x1C0059F7C (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x1C005A140 (MyRegQueryUlong.c)
 */

__int64 __fastcall ReadTestOverrideValue(int *a1)
{
  int Ulong; // eax
  unsigned int v3; // ebx
  unsigned __int16 v4; // r9
  unsigned __int8 v5; // dl
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+28h] [rbp-10h]
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  Ulong = MyRegOpenKeyForRead(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB", &Handle);
  v3 = Ulong;
  if ( Ulong < 0 )
  {
    v4 = 10;
    v5 = 2;
LABEL_3:
    v7 = Ulong;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1u,
      v4,
      (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
      v7);
    goto LABEL_7;
  }
  Ulong = MyRegQueryUlong(Handle);
  v3 = Ulong;
  if ( Ulong < 0 )
  {
    v4 = 11;
    v5 = 4;
    goto LABEL_3;
  }
  v8 = *a1;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0xCu,
    (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
    v8);
LABEL_7:
  if ( Handle )
    ZwClose(Handle);
  return v3;
}
