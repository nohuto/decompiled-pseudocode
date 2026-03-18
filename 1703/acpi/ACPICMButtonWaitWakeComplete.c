/*
 * XREFs of ACPICMButtonWaitWakeComplete @ 0x1C00474B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 */

void __fastcall ACPICMButtonWaitWakeComplete(
        ULONG_PTR DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _QWORD *DeviceExtension; // rax
  char v6; // dl
  int Status; // r11d
  const char *v8; // rcx
  const char *v9; // r10
  __int64 v10; // r9
  __int64 v11; // r9

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(DeviceObject);
  v6 = 0;
  Status = IoStatus->Status;
  v8 = byte_1C0066CD0;
  v9 = byte_1C0066CD0;
  if ( IoStatus->Status >= 0 )
  {
    if ( DeviceExtension )
    {
      v11 = DeviceExtension[1];
      v6 = (char)DeviceExtension;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v8 = (const char *)DeviceExtension[70];
        if ( (v11 & 0x400000000000LL) != 0 )
          v9 = (const char *)DeviceExtension[71];
      }
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x16u,
      (__int64)&WPP_93108c2962503f6832bb11825bb6e7a8_Traceguids,
      Status,
      v6,
      v8,
      v9);
  }
  else
  {
    if ( DeviceExtension )
    {
      v10 = DeviceExtension[1];
      v6 = (char)DeviceExtension;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = (const char *)DeviceExtension[70];
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = (const char *)DeviceExtension[71];
      }
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0x15u,
      (__int64)&WPP_93108c2962503f6832bb11825bb6e7a8_Traceguids,
      Status,
      v6,
      v8,
      v9);
  }
}
