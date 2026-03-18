/*
 * XREFs of UpdateUcmIsPresentBit @ 0x1C0059D14
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0059DFC (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     MyRegOpenKeyForRead @ 0x1C0059F7C (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x1C005A140 (MyRegQueryUlong.c)
 */

NTSTATUS __fastcall UpdateUcmIsPresentBit(NTSTATUS *a1)
{
  int Ulong; // eax
  unsigned __int16 v3; // r9
  unsigned __int8 v4; // dl
  NTSTATUS result; // eax
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+28h] [rbp-10h]
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  Ulong = MyRegOpenKeyForRead(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB", &Handle);
  if ( Ulong < 0 )
  {
    v3 = 28;
    v4 = 4;
LABEL_3:
    v6 = Ulong;
    result = WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               v4,
               1u,
               v3,
               (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
               v6);
    goto LABEL_7;
  }
  Ulong = MyRegQueryUlong(Handle);
  if ( Ulong < 0 )
  {
    v3 = 29;
    v4 = 3;
    goto LABEL_3;
  }
  v7 = 0;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x1Eu,
    (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
    v7);
  result = *a1 & 0x7FFFFFFF;
  *a1 = result;
LABEL_7:
  if ( Handle )
    return ZwClose(Handle);
  return result;
}
