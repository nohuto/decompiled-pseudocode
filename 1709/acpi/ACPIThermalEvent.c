/*
 * XREFs of ACPIThermalEvent @ 0x1C0058D00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIThermalLoopEx @ 0x1C002408C (ACPIThermalLoopEx.c)
 *     WPP_RECORDER_SF_dqssdddd @ 0x1C0024978 (WPP_RECORDER_SF_dqssdddd.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 */

void __fastcall ACPIThermalEvent(ULONG_PTR a1, int a2)
{
  int v3; // edi
  __int64 DeviceExtension; // rbx
  int v5; // esi
  int v6; // [rsp+20h] [rbp-88h]
  union _LARGE_INTEGER Time; // [rsp+70h] [rbp-38h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+78h] [rbp-30h] BYREF

  v3 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Time.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&Time, &TimeFields);
  WPP_RECORDER_SF_dqssdddd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (unsigned int)TimeFields.Minute,
    (unsigned int)TimeFields.Hour,
    0x11u,
    v6);
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
  ACPIThermalLoopEx(DeviceExtension, v3, 0);
}
