/*
 * XREFs of sub_1800DE988 @ 0x1800DE988
 * Callers:
 *     sub_1800DEAD4 @ 0x1800DEAD4 (sub_1800DEAD4.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x18004A690 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall sub_1800DE988(WCHAR *a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  int i; // ebp
  WCHAR v6; // ax
  int v7; // ebx

  v2 = 0;
  v3 = a2;
  for ( i = 31415; v3; --v3 )
  {
    v6 = RtlUpcaseUnicodeChar(*a1);
    v7 = i * v2;
    ++a1;
    i *= 27183;
    v2 = v6 + v7;
  }
  return v2;
}
