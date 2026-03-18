/*
 * XREFs of ACPIDeviceInternalDelayedDeviceRequest @ 0x1C001F0D4
 * Callers:
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C001EF00 (ACPIBuildProcessDevicePhasePsc.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C0002A38 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C00052E8 (WPP_RECORDER_SF_qdqss.c)
 */

__int64 __fastcall ACPIDeviceInternalDelayedDeviceRequest(_QWORD *a1, __int64 a2)
{
  char v3; // r10
  const char *v4; // rcx
  int v5; // edi
  const char *v6; // r8
  __int64 v7; // rax
  __int64 result; // rax

  v3 = 0;
  v4 = (const char *)&unk_1C0067B08;
  v5 = a2;
  v6 = (const char *)&unk_1C0067B08;
  if ( a1 )
  {
    v7 = a1[1];
    a2 = 0x200000000000LL;
    v3 = (char)a1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)a1[70];
      a2 = 0x400000000000LL;
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (const char *)a1[71];
    }
  }
  WPP_RECORDER_SF_qdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    0xAu,
    0x17u,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    0,
    v5 - 1,
    v3,
    v4,
    v6);
  result = ACPIDeviceInitializePowerRequest((__int64)a1, v5, 0LL, 0LL, 0, 0, 9u);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
