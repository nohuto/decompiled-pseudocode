/*
 * XREFs of PopErratumUpdateCallback @ 0x140241060
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1404E900C (PopSetPowerSettingValueAcDc.c)
 *     ExQueryWnfStateData @ 0x140597570 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopErratumUpdateCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const GUID *a6)
{
  int v7; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v8[4]; // [rsp+24h] [rbp-14h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  v7 = 4;
  if ( (int)((__int64 (__fastcall *)(__int64, __int64 *, _BYTE *, int *))ExQueryWnfStateData)(a1, &v9, v8, &v7) >= 0 )
    PopSetPowerSettingValueAcDc(a6 + 1);
  return 0LL;
}
