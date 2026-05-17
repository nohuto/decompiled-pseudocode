/*
 * XREFs of sub_1800F77D8 @ 0x1800F77D8
 * Callers:
 *     sub_1800F7988 @ 0x1800F7988 (sub_1800F7988.c)
 *     sub_1800F7A9C @ 0x1800F7A9C (sub_1800F7A9C.c)
 *     sub_1800F7D84 @ 0x1800F7D84 (sub_1800F7D84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F77D8(__int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r9
  unsigned int v3; // r8d

  v2 = *a2;
  v3 = **a2;
  if ( v3 - 55296 <= 0x7FF )
  {
    if ( v3 < 0xDC00 )
      v3 = *++v2 + ((v3 - 55287) << 10);
    else
      v3 += (*--v2 - 55287) << 10;
  }
  *a2 = v2;
  return v3;
}
