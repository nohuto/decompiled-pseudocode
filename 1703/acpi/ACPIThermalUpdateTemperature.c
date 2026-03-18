/*
 * XREFs of ACPIThermalUpdateTemperature @ 0x1C0021DA4
 * Callers:
 *     ACPIThermalTMPCallback @ 0x1C0020DA0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalReadTemperatureComplete @ 0x1C0058260 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalReadTemperature @ 0x1C00A4500 (ACPIThermalReadTemperature.c)
 * Callees:
 *     WPP_RECORDER_SF_ddqssdddd @ 0x1C0021024 (WPP_RECORDER_SF_ddqssdddd.c)
 *     ACPIThermalLoop @ 0x1C0021600 (ACPIThermalLoop.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 */

void __fastcall ACPIThermalUpdateTemperature(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v5; // r8
  int v6; // [rsp+20h] [rbp-88h]
  union _LARGE_INTEGER Time; // [rsp+70h] [rbp-38h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+78h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(_DWORD *)(v2 + 16) != a2 )
  {
    *(_DWORD *)(v2 + 16) = a2;
    Time.QuadPart = MEMORY[0xFFFFF78000000008];
    RtlTimeToTimeFields(&Time, &TimeFields);
    WPP_RECORDER_SF_ddqssdddd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      *(_DWORD *)(v2 + 16) / 0xAu,
      (unsigned int)TimeFields.Minute,
      0x13u,
      v6);
    ACPIThermalLoop(a1, 2048LL);
  }
  if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) )
  {
    v5 = MEMORY[0xFFFFF78000000008];
    if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + *(_QWORD *)(v2 + 320) < MEMORY[0xFFFFF78000000008]
      && *(_DWORD *)(v2 + 328) != a2 )
    {
      *(_DWORD *)(v2 + 328) = a2;
      *(_QWORD *)(v2 + 320) = v5;
      ACPIThermalLoop(a1, 0x4000LL);
    }
  }
}
