/*
 * XREFs of UsbhSyncResumePort @ 0x1C00442D4
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C00067F0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhCycleDevicePort @ 0x1C0042860 (UsbhCycleDevicePort.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0044168 (UsbhSyncResumeDeviceInternal.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_Enable @ 0x1C0040754 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x1C0040AE4 (UsbhPCE_Resume.c)
 *     UsbhWaitForPortResume @ 0x1C004452C (UsbhWaitForPortResume.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhSyncResumePort(struct _DEVICE_OBJECT *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 PortData; // rax
  __int64 v7; // rbp
  struct _KEVENT *v8; // rbx
  int v9; // ebx
  int v11; // [rsp+48h] [rbp-20h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x4Fu,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x50u,
        (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
        a3);
  }
  PortData = UsbhGetPortData((__int64)a1, a3);
  v7 = PortData;
  if ( PortData )
  {
    v8 = (struct _KEVENT *)(PortData + 520);
    KeWaitForSingleObject((PVOID)(PortData + 520), Executive, 0, 0, 0LL);
    UsbhPCE_Resume((__int64)a1, a2, a3);
    UsbhPCE_Enable((__int64)a1, a2, a3);
    KeSetEvent(v8, 0, 0);
    Log((__int64)a1, 16, 1347573624, 0LL, *(unsigned __int16 *)(v7 + 4));
    v9 = UsbhWaitForPortResume(a1);
    if ( v9 < 0 )
    {
      LOBYTE(v11) = 0;
      UsbhException((int)a1, a3, 134, 0, 0, v9, 0, usbfile_bus_c, 7048, v11);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
