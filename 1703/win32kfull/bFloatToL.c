/*
 * XREFs of bFloatToL @ 0x1C023081C
 * Callers:
 *     bNewXform @ 0x1C0230B3C (bNewXform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bFloatToL(float a1, int *a2)
{
  int v2; // ecx
  char v4; // cl
  int v5; // r8d
  int v6; // r8d
  char v7; // cl

  v2 = (unsigned __int8)(SLODWORD(a1) >> 23) - 111;
  if ( v2 < 0 )
  {
    *a2 = 0;
    return 1LL;
  }
  if ( v2 < 23 )
  {
    v4 = 22 - v2;
    if ( a1 >= 0.0 )
    {
      v6 = (((LODWORD(a1) & 0x7FFFFF | 0x800000) >> v4) + 1) >> 1;
      goto LABEL_9;
    }
    v5 = (((LODWORD(a1) & 0x7FFFFF | 0x800000) >> v4) + 1) >> 1;
LABEL_7:
    v6 = -v5;
LABEL_9:
    *a2 = v6;
    return 1LL;
  }
  if ( v2 <= 30 )
  {
    v7 = (SLODWORD(a1) >> 23) + 122;
    if ( a1 >= 0.0 )
    {
      v6 = (LODWORD(a1) & 0x7FFFFF | 0x800000) << v7;
      goto LABEL_9;
    }
    v5 = (LODWORD(a1) & 0x7FFFFF | 0x800000) << v7;
    goto LABEL_7;
  }
  return 0LL;
}
