/*
 * XREFs of bShellFontFace @ 0x1C02285E8
 * Callers:
 *     bComputeIFISIZE @ 0x1C0226660 (bComputeIFISIZE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bShellFontFace(char *a1, _BYTE *a2, unsigned int a3)
{
  int v3; // r11d
  unsigned int v4; // r10d
  char v5; // r9
  _BYTE *v6; // rdx

  v3 = 0;
  v4 = 1;
  if ( a3 )
  {
    while ( 1 )
    {
      v5 = *a1;
      v6 = a2 + 1;
      ++a1;
      if ( *v6 != v5 )
        break;
      a2 = v6 + 1;
      if ( ++v3 >= a3 )
        return v4;
    }
    return 0;
  }
  return v4;
}
