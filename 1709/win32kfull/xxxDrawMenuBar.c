/*
 * XREFs of xxxDrawMenuBar @ 0x1C013B730
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxDrawMenuBar(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 71) & 0xC0) != 0x40 )
    xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 55);
  return 1LL;
}
