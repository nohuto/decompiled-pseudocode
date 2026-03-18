/*
 * XREFs of ACPIFanPowerCallback @ 0x1C0024300
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     AcpiDiagTraceFanEvent @ 0x1C00074B4 (AcpiDiagTraceFanEvent.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIFanLoop @ 0x1C0024034 (ACPIFanLoop.c)
 */

void __fastcall ACPIFanPowerCallback(__int64 a1, __int64 a2, int a3)
{
  char v4; // r10
  const char *v5; // rax
  const char *v6; // rdx
  __int64 v7; // rcx
  bool v8; // al
  __int16 v9; // [rsp+50h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+58h] [rbp-40h] BYREF
  __int16 *v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+80h] [rbp-18h]
  int v13; // [rsp+84h] [rbp-14h]

  if ( a3 < 0 )
  {
    v4 = 0;
    v5 = (const char *)&unk_1C005B1F0;
    v6 = (const char *)&unk_1C005B1F0;
    if ( a1 )
    {
      v4 = a1;
      v7 = *(_QWORD *)(a1 + 8);
      if ( (v7 & 0x200000000000LL) != 0 )
      {
        v5 = *(const char **)(a1 + 560);
        if ( (v7 & 0x400000000000LL) != 0 )
          v6 = *(const char **)(a1 + 568);
      }
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x10u,
      0xDu,
      (__int64)&WPP_38ae480aa7ad381ffd3274338b02158a_Traceguids,
      a3,
      v4,
      v5,
      v6);
  }
  v12 = 2;
  v8 = *(_DWORD *)(a1 + 336) == 1;
  v13 = 0;
  v9 = v8;
  v11 = &v9;
  AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_POWER_STATE_CHANGE, 3u, &v10);
  ACPIFanLoop(a1, 2, 0);
}
