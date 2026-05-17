/*
 * XREFs of LdrSetDefaultDllDirectories @ 0x180084340
 * Callers:
 *     sub_1800841E4 @ 0x1800841E4 (sub_1800841E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrSetDefaultDllDirectories(int a1)
{
  int v1; // eax

  if ( !a1 )
    return 3221225485LL;
  v1 = 32512;
  if ( (dword_180158674 & 4) == 0 )
    v1 = 31488;
  if ( ((~v1 | 0x100) & a1) != 0 )
    return 3221225485LL;
  dword_18015BF58 = a1;
  return 0LL;
}
