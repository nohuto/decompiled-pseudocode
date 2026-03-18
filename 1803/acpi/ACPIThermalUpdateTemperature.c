/*
 * XREFs of ACPIThermalUpdateTemperature @ 0x1C003DF1C
 * Callers:
 *     ACPIThermalReadTemperatureComplete @ 0x1C003D690 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalTMPCallback @ 0x1C003DDA0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalReadTemperature @ 0x1C0089374 (ACPIThermalReadTemperature.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     ACPIThermalLoop @ 0x1C003CE74 (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x1C003E734 (WPP_RECORDER_SF_ddqssdddd.c)
 */

void __fastcall ACPIThermalUpdateTemperature(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v5; // r8
  union _LARGE_INTEGER v6; // [rsp+70h] [rbp-38h] BYREF
  struct _TIME_FIELDS v7; // [rsp+78h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(_DWORD *)(v2 + 16) != a2 )
  {
    *(_DWORD *)(v2 + 16) = a2;
    v6.QuadPart = MEMORY[0xFFFFF78000000008];
    RtlTimeToTimeFields(&v6, &v7);
    WPP_RECORDER_SF_ddqssdddd(WPP_GLOBAL_Control->DeviceExtension, *(_DWORD *)(v2 + 16) / 0xAu, v7.Minute, 19);
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
