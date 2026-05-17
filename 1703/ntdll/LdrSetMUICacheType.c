/*
 * XREFs of LdrSetMUICacheType @ 0x18008F6C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005CB40 @ 0x18005CB40 (sub_18005CB40.c)
 */

__int64 __fastcall LdrSetMUICacheType(int a1)
{
  if ( (a1 & 0xFFFFFFF8) != 0 || (a1 & 6) == 6 )
    return 3221225485LL;
  if ( dword_18015A2A8 )
    return 3221225473LL;
  dword_18015A2A8 = a1;
  sub_18005CB40(-1LL, 0LL, 0LL, 0LL, -1, 0, 16, 0, 0LL);
  return 0LL;
}
