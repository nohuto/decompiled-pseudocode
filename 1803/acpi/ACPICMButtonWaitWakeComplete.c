/*
 * XREFs of ACPICMButtonWaitWakeComplete @ 0x1C0016E60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

void __fastcall ACPICMButtonWaitWakeComplete(
        ULONG_PTR DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _QWORD *DeviceExtension; // rax
  int v6; // edx
  void *v7; // rcx
  void *v8; // r8
  __int64 v9; // r10
  int v10; // r9d
  void *v11; // r10
  char v12; // al
  __int64 v13; // r10
  char v14; // [rsp+30h] [rbp-28h]

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(DeviceObject);
  v6 = 0;
  v7 = &unk_1C005B1F0;
  v8 = &unk_1C005B1F0;
  if ( IoStatus->Status >= 0 )
  {
    if ( DeviceExtension )
    {
      v13 = DeviceExtension[1];
      v6 = (int)DeviceExtension;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v7 = (void *)DeviceExtension[70];
        if ( (v13 & 0x400000000000LL) != 0 )
          v8 = (void *)DeviceExtension[71];
      }
    }
    v10 = 22;
    v11 = WPP_GLOBAL_Control->DeviceExtension;
    v12 = 4;
  }
  else
  {
    if ( DeviceExtension )
    {
      v9 = DeviceExtension[1];
      v6 = (int)DeviceExtension;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v7 = (void *)DeviceExtension[70];
        if ( (v9 & 0x400000000000LL) != 0 )
          v8 = (void *)DeviceExtension[71];
      }
    }
    v10 = 21;
    v11 = WPP_GLOBAL_Control->DeviceExtension;
    v12 = 2;
  }
  v14 = v6;
  LOBYTE(v6) = v12;
  WPP_RECORDER_SF_Dqss(
    (_DWORD)v11,
    v6,
    17,
    v10,
    (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
    IoStatus->Status,
    v14,
    (__int64)v7,
    (__int64)v8);
}
