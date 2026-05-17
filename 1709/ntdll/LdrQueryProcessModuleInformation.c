/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x180002C10
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x1800172B8 (LdrQueryProcessModuleInformationEx.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformation(int a1, int a2, __int64 a3)
{
  return LdrQueryProcessModuleInformationEx(0, 2, a1, a2, a3);
}
