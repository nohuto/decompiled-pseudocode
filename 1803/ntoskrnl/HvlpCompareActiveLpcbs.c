/*
 * XREFs of HvlpCompareActiveLpcbs @ 0x1401A5630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall HvlpCompareActiveLpcbs(_BYTE *a1, _BYTE *a2)
{
  char v2; // r8
  unsigned int v4; // ecx
  unsigned int v5; // edx

  v2 = a2[112];
  if ( a1[112] )
  {
    if ( !v2 )
      return -1;
  }
  else if ( v2 )
  {
    return 1;
  }
  v4 = *((_DWORD *)a1 + 1);
  v5 = *((_DWORD *)a2 + 1);
  if ( v4 < v5 )
    return -1;
  return v4 > v5;
}
