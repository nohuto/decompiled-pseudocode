/*
 * XREFs of ?RmpCpuSetManagerCompareScores@@YAHPEAXPEBX1@Z @ 0x1800551D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCpuSetManagerCompareScores(_DWORD *a1, _QWORD *a2, int *a3)
{
  __int64 v3; // r10
  bool v4; // r9
  unsigned int v6; // ecx

  v3 = a2[1];
  v4 = (a1[43] & 2) != 0;
  if ( (v3 & 0x80000000) != 0 )
    return (unsigned int)(a3[2] < 0) - 1;
  v6 = a3[2];
  if ( (v6 & 0x80000000) != 0 )
    return 1LL;
  if ( *(_DWORD *)a2 < (unsigned int)*a3 )
    return v4 ? -1 : 1;
  if ( *(_DWORD *)a2 <= (unsigned int)*a3 )
  {
    if ( (unsigned int)v3 > v6 )
      return 0xFFFFFFFFLL;
    if ( (unsigned int)v3 < v6 )
      return 1LL;
    if ( *((_DWORD *)a2 + 1) < (unsigned int)a3[1] )
      return v4 ? -1 : 1;
  }
  return v4 ? 1 : -1;
}
