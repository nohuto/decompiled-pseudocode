/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x180004E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067C7C @ 0x180067C7C (sub_180067C7C.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformation(int a1, int a2, __int64 a3)
{
  return sub_180067C7C(0, 2, a1, a2, a3);
}
