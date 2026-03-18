/*
 * XREFs of KeSetSystemTime @ 0x14020497C
 * Callers:
 *     ExpSetSystemTime @ 0x14043A934 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1405C1F1C (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14075653C (NtSetSystemTime.c)
 * Callees:
 *     KeGenericCallDpc @ 0x14012F0C0 (KeGenericCallDpc.c)
 */

void __fastcall KeSetSystemTime(__int64 a1, __int64 a2, int a3)
{
  _BYTE v3[4]; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+24h] [rbp-34h]
  __int64 v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  char v7; // [rsp+40h] [rbp-18h]

  v5 = a1;
  v6 = a2;
  v3[0] = 0;
  v7 = 0;
  v4 = a3;
  KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v3);
}
