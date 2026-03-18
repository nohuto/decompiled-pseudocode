/*
 * XREFs of ACPIThermalRereadTemperature @ 0x1C0058EF0
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x1C0040C10 (AcpiDiagThermalPollingTimerRoutine.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C002408C (ACPIThermalLoopEx.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qssdddd @ 0x1C0059368 (WPP_RECORDER_SF_qssdddd.c)
 */

void __fastcall ACPIThermalRereadTemperature(__int64 a1)
{
  union _LARGE_INTEGER v2; // [rsp+60h] [rbp-28h] BYREF
  struct _TIME_FIELDS v3; // [rsp+68h] [rbp-20h] BYREF

  v2.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&v2, &v3);
  WPP_RECORDER_SF_qssdddd(WPP_GLOBAL_Control->DeviceExtension, v3.Second, v3.Minute, v3.Hour);
  ACPIThermalLoopEx(a1, 536870914, 0);
}
