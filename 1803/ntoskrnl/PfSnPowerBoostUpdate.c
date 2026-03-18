/*
 * XREFs of PfSnPowerBoostUpdate @ 0x14048C9AC
 * Callers:
 *     PfSnPowerBoost @ 0x14048C930 (PfSnPowerBoost.c)
 *     PfSnPowerBoostWorker @ 0x14075CBA0 (PfSnPowerBoostWorker.c)
 * Callees:
 *     NtUpdateWnfStateData @ 0x1404F53D8 (NtUpdateWnfStateData.c)
 */

__int64 __fastcall PfSnPowerBoostUpdate(int a1)
{
  __int64 result; // rax
  signed __int32 v2; // edx
  int v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+5Ch] [rbp+14h]

  result = (unsigned int)-a1;
  v2 = _InterlockedExchangeAdd(&dword_1403CD954, a1 != 0 ? 1 : -1);
  if ( !v2 && a1 || v2 == 1 && !a1 )
  {
    v4 = -1;
    v3 = (2 * (_BYTE)a1) & 2 | 1;
    return NtUpdateWnfStateData((unsigned int)&WNF_SEB_APP_LAUNCH_PREFETCH, (unsigned int)&v3, 8, 0, 0LL, 0, 0);
  }
  return result;
}
