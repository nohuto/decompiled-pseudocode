/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x180004000
 * Callers:
 *     <none>
 * Callees:
 *     sub_180077930 @ 0x180077930 (sub_180077930.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformation(int a1, int a2, __int64 a3)
{
  return sub_180077930(0, 2, a1, a2, a3);
}
