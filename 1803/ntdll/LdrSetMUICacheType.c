/*
 * XREFs of LdrSetMUICacheType @ 0x18008ACF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B698 @ 0x18002B698 (sub_18002B698.c)
 */

__int64 __fastcall LdrSetMUICacheType(int a1)
{
  if ( (a1 & 0xFFFFFFF8) != 0 || (a1 & 6) == 6 )
    return 3221225485LL;
  if ( dword_18015B2AC )
    return 3221225473LL;
  dword_18015B2AC = a1;
  sub_18002B698(-1LL, 0LL, 0LL, 0LL, 0, 16, 0, 0LL);
  return 0LL;
}
