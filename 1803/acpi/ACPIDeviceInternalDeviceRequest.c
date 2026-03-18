/*
 * XREFs of ACPIDeviceInternalDeviceRequest @ 0x1C001A984
 * Callers:
 *     ACPIFanControl @ 0x1C0023A30 (ACPIFanControl.c)
 *     ACPIInitStartDevice @ 0x1C0028FBC (ACPIInitStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C007B250 (ACPIFanStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C007D3C0 (ACPIInitStopDevice.c)
 *     ACPIThermalStartDevice @ 0x1C00895C0 (ACPIThermalStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qdqss @ 0x1C0008814 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001A5DC (ACPIDeviceInitializePowerRequest.c)
 */

__int64 __fastcall ACPIDeviceInternalDeviceRequest(
        _QWORD *a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, _QWORD),
        __int64 a4,
        unsigned int a5)
{
  char v6; // r11
  const char *v7; // rcx
  const char *v9; // r10
  int v11; // esi
  __int64 v12; // rax
  __int64 result; // rax

  v6 = 0;
  v7 = (const char *)&unk_1C005B1F0;
  v9 = (const char *)&unk_1C005B1F0;
  v11 = a2;
  if ( a1 )
  {
    v12 = a1[1];
    a2 = 0x200000000000LL;
    v6 = (char)a1;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)a1[70];
      a2 = 0x400000000000LL;
      if ( (v12 & 0x400000000000LL) != 0 )
        v9 = (const char *)a1[71];
    }
  }
  WPP_RECORDER_SF_qdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    0xAu,
    0x18u,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a4,
    v11 - 1,
    v6,
    v7,
    v9);
  result = ACPIDeviceInitializePowerRequest((__int64)a1, v11, a3, a4, 0, 0, a5);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
