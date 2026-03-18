/*
 * XREFs of ACPIFilterFastIoDetachCallback @ 0x1C004E480
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000F60C (WPP_RECORDER_SF_qss.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C004F634 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004FC10 (ACPIInitResetDeviceExtension.c)
 */

char __fastcall ACPIFilterFastIoDetachCallback(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  const char *v4; // rax
  const char *v5; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v2 = DeviceExtension;
  if ( DeviceExtension )
  {
    v3 = *(_QWORD *)(DeviceExtension + 8);
    v4 = byte_1C0066CD0;
    v5 = byte_1C0066CD0;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = *(const char **)(v2 + 560);
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = *(const char **)(v2 + 568);
    }
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xCu,
      0xAu,
      (__int64)&WPP_0a6d19c5c580341afc0214e049fe0a3d_Traceguids,
      v2,
      v4,
      v5);
    LOBYTE(DeviceExtension) = *(_BYTE *)(v2 + 8) & 0x60;
    if ( (_BYTE)DeviceExtension == 64 )
    {
      *(_DWORD *)(v2 + 320) = 4;
      ACPIInitDeleteChildDeviceList(v2);
      LOBYTE(DeviceExtension) = ACPIInitResetDeviceExtension(v2);
    }
  }
  return DeviceExtension;
}
