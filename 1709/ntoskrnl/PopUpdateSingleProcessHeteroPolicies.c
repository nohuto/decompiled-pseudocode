/*
 * XREFs of PopUpdateSingleProcessHeteroPolicies @ 0x1405D61F0
 * Callers:
 *     <none>
 * Callees:
 *     PsEnumProcessThreads @ 0x1405D6210 (PsEnumProcessThreads.c)
 */

__int64 __fastcall PopUpdateSingleProcessHeteroPolicies(__int64 a1)
{
  PsEnumProcessThreads(a1, PopUpdateSingleThreadHeteroPolicies, 0LL);
  return 0LL;
}
