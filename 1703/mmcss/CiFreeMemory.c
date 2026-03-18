/*
 * XREFs of CiFreeMemory @ 0x1C0004BE0
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000AD40 (CiTaskIndexCreate.c)
 *     CsTerminate @ 0x1C000C13C (CsTerminate.c)
 *     CiSystemTerminate @ 0x1C000C4C4 (CiSystemTerminate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
