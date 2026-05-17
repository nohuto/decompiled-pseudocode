/*
 * XREFs of sub_180089640 @ 0x180089640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180089640(__int16 a1, _DWORD *a2, _DWORD *a3)
{
  if ( !a1 )
  {
    *a2 = 65568;
LABEL_3:
    *a3 = 4096;
    return 0LL;
  }
  if ( a1 == 256 )
  {
    *a2 = 32;
    goto LABEL_3;
  }
  return 3221225659LL;
}
