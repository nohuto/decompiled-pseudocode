/*
 * XREFs of ACPIFilterFastIoDetachCallback @ 0x1C004E100
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDeleteChildDeviceList @ 0x1C000123C (ACPIInitDeleteChildDeviceList.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0003CBC (WPP_RECORDER_SF_qss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004F564 (ACPIInitResetDeviceExtension.c)
 */

char __fastcall ACPIFilterFastIoDetachCallback(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax
  ULONG_PTR v2; // rbx
  __int64 v3; // rcx
  const char *v4; // rax
  const char *v5; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v2 = DeviceExtension;
  if ( DeviceExtension )
  {
    v3 = *(_QWORD *)(DeviceExtension + 8);
    v4 = (const char *)&unk_1C0067B08;
    v5 = (const char *)&unk_1C0067B08;
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
      (__int64)&WPP_a733ebc0c0353af3a414eb8cb5954dc9_Traceguids,
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
