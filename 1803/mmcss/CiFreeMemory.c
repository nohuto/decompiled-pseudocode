/*
 * XREFs of CiFreeMemory @ 0x1C0002848
 * Callers:
 *     CsTerminate @ 0x1C0009FA4 (CsTerminate.c)
 *     CiTaskIndexCreate @ 0x1C000A598 (CiTaskIndexCreate.c)
 *     CiSystemTerminate @ 0x1C000B334 (CiSystemTerminate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
