/*
 * XREFs of PerfControlLegacyPcc @ 0x1C000BA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfControlLegacyPcc(__int64 a1, _DWORD *a2, char a3, char a4)
{
  __int64 result; // rax

  if ( a3 )
  {
    if ( !a4 )
    {
      result = (unsigned int)(100 - *a2);
      *(_DWORD *)(a1 + 24) = result;
    }
  }
  return result;
}
