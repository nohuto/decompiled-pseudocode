/*
 * XREFs of KeSetSystemTime @ 0x14014E78C
 * Callers:
 *     ExpSetSystemTime @ 0x1404710F4 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x14062FA00 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407BD00C (NtSetSystemTime.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140004B40 (KeGenericCallDpc.c)
 */

__int64 __fastcall KeSetSystemTime(__int64 a1, __int64 a2, int a3)
{
  _BYTE v4[4]; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+24h] [rbp-34h]
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  char v8; // [rsp+40h] [rbp-18h]

  v6 = a1;
  v7 = a2;
  v4[0] = 0;
  v8 = 0;
  v5 = a3;
  return KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v4);
}
