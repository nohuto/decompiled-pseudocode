/*
 * XREFs of _GetWindowRect @ 0x1C02392D4
 * Callers:
 *     xxxSoundSentry @ 0x1C0119A28 (xxxSoundSentry.c)
 * Callees:
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 */

__int64 __fastcall GetWindowRect(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r9

  result = *(_WORD *)(a1 + 82) & 0x3FFF;
  if ( (_DWORD)result == 669 )
  {
    *a2 = 0;
    a2[1] = 0;
    a2[2] = GetDwmDependentMetric(0LL, 0LL, a3, a4);
    result = GetDwmDependentMetric(1LL, 0LL, v6, v7);
    a2[3] = result;
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 128);
  }
  return result;
}
