/*
 * XREFs of FindBscaStrike @ 0x1C02C8DDC
 * Callers:
 *     sfac_SearchForStrike @ 0x1C02CB888 (sfac_SearchForStrike.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindBscaStrike(__int64 a1, unsigned int a2, __int16 a3, __int16 a4, int *a5)
{
  int v5; // r10d
  unsigned int v7; // r8d
  unsigned int i; // edx

  v5 = 8;
  if ( a2 < 8 )
    return 0LL;
  v7 = _byteswap_ulong(*(_DWORD *)(a1 + 4));
  if ( v7 > (a2 - 8) / 0x1C || !v7 )
    return 0LL;
  for ( i = 33; a3 != *(unsigned __int8 *)(i - 1 + a1) || a4 != *(unsigned __int8 *)(i + a1); i += 28 )
  {
    v5 += 28;
    if ( !--v7 )
      return 0LL;
  }
  *a5 = v5;
  return 1LL;
}
