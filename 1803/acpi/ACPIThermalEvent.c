/*
 * XREFs of ACPIThermalEvent @ 0x1C003C890
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     ACPIThermalLoopEx @ 0x1C003CE8C (ACPIThermalLoopEx.c)
 *     WPP_RECORDER_SF_dqssdddd @ 0x1C003E4C4 (WPP_RECORDER_SF_dqssdddd.c)
 */

__int64 __fastcall ACPIThermalEvent(ULONG_PTR a1, int a2)
{
  unsigned int v3; // edi
  __int64 DeviceExtension; // rbx
  int v5; // esi
  union _LARGE_INTEGER Time; // [rsp+70h] [rbp-38h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+78h] [rbp-30h] BYREF

  v3 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Time.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&Time, &TimeFields);
  WPP_RECORDER_SF_dqssdddd(WPP_GLOBAL_Control->DeviceExtension, TimeFields.Minute, TimeFields.Hour, 17);
  v5 = a2 - 128;
  if ( v5 )
  {
    if ( v5 == 1 )
      v3 = 536871046;
  }
  else
  {
    v3 = 536870978;
  }
  return ACPIThermalLoopEx(DeviceExtension, v3, 0LL);
}
