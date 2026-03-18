/*
 * XREFs of UsbDualRoleFeaturesQueryLocalMachine @ 0x1C003827C
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0024260 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     ReadManifestAssignedValue @ 0x1C0037C9C (ReadManifestAssignedValue.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C0037D60 (CheckUSBFnIncludeDefaultCfg.c)
 *     CheckUSBFnConfiguration @ 0x1C0037EF8 (CheckUSBFnConfiguration.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0038118 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     MyRegOpenKeyForRead @ 0x1C00384C4 (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x1C003868C (MyRegQueryUlong.c)
 */

__int64 __fastcall UsbDualRoleFeaturesQueryLocalMachine(int *a1)
{
  int Ulong; // eax
  int v3; // ebx
  unsigned __int16 v4; // r9
  unsigned __int8 v5; // dl
  HANDLE v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int16 v9; // r9
  unsigned __int8 v10; // dl
  int v11; // ebx
  int v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+28h] [rbp-20h]
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+10h] BYREF

  Handle = 0LL;
  Ulong = MyRegOpenKeyForRead(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB", &Handle);
  v3 = Ulong;
  if ( Ulong < 0 )
  {
    v4 = 10;
    v5 = 2;
LABEL_3:
    v13 = Ulong;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1u,
      v4,
      (__int64)&WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids,
      v13);
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
  v15 = *a1;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0xCu,
    (__int64)&WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids,
    v15);
LABEL_7:
  v6 = Handle;
  if ( Handle )
    ZwClose(Handle);
  if ( v3 < 0 )
  {
    ReadManifestAssignedValue(a1);
    *a1 &= 0xFFFFFFF1;
    if ( CheckUSBFnIncludeDefaultCfg(v7) )
      CheckUSBFnConfiguration(a1, L"Default");
    if ( (int)ReadUSBFnFeaturesFromCurrentConfiguration(a1, 0) < 0 )
      ReadUSBFnFeaturesFromCurrentConfiguration(a1, 1);
  }
  KeyHandle = 0LL;
  LODWORD(Handle) = 0;
  v8 = MyRegOpenKeyForRead(v6, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB", &KeyHandle);
  if ( v8 < 0 )
  {
    v9 = 29;
    v10 = 4;
LABEL_16:
    LODWORD(v14) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      1u,
      v9,
      (__int64)&WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids,
      v14);
    goto LABEL_20;
  }
  v8 = MyRegQueryUlong(KeyHandle);
  if ( v8 < 0 )
  {
    v9 = 30;
    v10 = 3;
    goto LABEL_16;
  }
  v11 = (int)Handle;
  LODWORD(v14) = (_DWORD)Handle;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x1Fu,
    (__int64)&WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids,
    v14);
  *a1 = *a1 & 0x7FFFFFFF | (v11 != 0 ? 0x80000000 : 0);
LABEL_20:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  LODWORD(v16) = *a1;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x20u,
    (__int64)&WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids,
    v16);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    34 - ((*a1 & 1) != 0),
    (__int64)&WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids);
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           1u,
           36 - ((*a1 & 2) != 0),
           (__int64)&WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids);
}
