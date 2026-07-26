/*
 * XREFs of ndisGetWoLPatternSize @ 0x1C00ADD3C
 * Callers:
 *     ndisPMAddWOLPattern @ 0x1C001E958 (ndisPMAddWOLPattern.c)
 *     ndisCreateWoLPatternEntry @ 0x1C00ADA20 (ndisCreateWoLPatternEntry.c)
 *     ndisOidPrePMAddWOLPattern @ 0x1C00ADAD0 (ndisOidPrePMAddWOLPattern.c)
 *     ndisQueryWolPatternList @ 0x1C00E0C0C (ndisQueryWolPatternList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetWoLPatternSize(_DWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // r8d

  result = 196LL;
  if ( a1[3] == 1 )
  {
    v2 = a1[41] + a1[40];
    if ( v2 <= a1[42] + a1[43] )
      v2 = a1[42] + a1[43];
    if ( v2 > 0xC4 )
      return v2;
  }
  return result;
}
