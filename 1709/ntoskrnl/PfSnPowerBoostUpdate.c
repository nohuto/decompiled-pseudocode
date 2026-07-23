/*
 * XREFs of PfSnPowerBoostUpdate @ 0x140443C5C
 * Callers:
 *     PfSnPowerBoost @ 0x140443BEC (PfSnPowerBoost.c)
 *     PfSnPowerBoostWorker @ 0x1406F4690 (PfSnPowerBoostWorker.c)
 * Callees:
 *     NtUpdateWnfStateData @ 0x1404FEFC8 (NtUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PfSnPowerBoostUpdate(int a1)
{
  NTSTATUS result; // eax
  signed __int32 v2; // edx
  int Buffer; // [rsp+58h] [rbp+10h] BYREF
  int Buffer_4; // [rsp+5Ch] [rbp+14h]

  result = -a1;
  v2 = _InterlockedExchangeAdd(&dword_140389E14, a1 != 0 ? 1 : -1);
  if ( !v2 && a1 || v2 == 1 && !a1 )
  {
    Buffer_4 = -1;
    Buffer = (2 * (_BYTE)a1) & 2 | 1;
    return NtUpdateWnfStateData(&WNF_SEB_APP_LAUNCH_PREFETCH, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
  return result;
}
