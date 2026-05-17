/*
 * XREFs of LdrSetDefaultDllDirectories @ 0x18007F690
 * Callers:
 *     sub_18007F528 @ 0x18007F528 (sub_18007F528.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrSetDefaultDllDirectories(int a1)
{
  if ( !a1 || ((~((dword_1801596D4 & 4 | 0x7A) << 8) | 0x100) & a1) != 0 )
    return 3221225485LL;
  dword_18015CFE0 = a1;
  return 0LL;
}
