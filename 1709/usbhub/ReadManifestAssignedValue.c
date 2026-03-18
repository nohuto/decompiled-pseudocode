/*
 * XREFs of ReadManifestAssignedValue @ 0x1C00596F4
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0059DFC (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     MyRegOpenKeyForRead @ 0x1C0059F7C (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x1C005A140 (MyRegQueryUlong.c)
 */

NTSTATUS __fastcall ReadManifestAssignedValue(int *a1)
{
  int Ulong; // eax
  unsigned __int16 v3; // r9
  NTSTATUS result; // eax
  int v5; // [rsp+28h] [rbp-10h]
  int v6; // [rsp+28h] [rbp-10h]
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  *a1 = 0;
  Ulong = MyRegOpenKeyForRead(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB", &Handle);
  if ( Ulong < 0 )
  {
    v3 = 13;
LABEL_3:
    v5 = Ulong;
    result = WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               2u,
               1u,
               v3,
               (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
               v5);
    goto LABEL_7;
  }
  Ulong = MyRegQueryUlong(Handle);
  if ( Ulong < 0 )
  {
    v3 = 14;
    goto LABEL_3;
  }
  v6 = *a1;
  result = WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             4u,
             1u,
             0xFu,
             (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
             v6);
LABEL_7:
  if ( Handle )
    return ZwClose(Handle);
  return result;
}
