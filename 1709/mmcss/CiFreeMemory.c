/*
 * XREFs of CiFreeMemory @ 0x1C0002854
 * Callers:
 *     CsTerminate @ 0x1C0009F94 (CsTerminate.c)
 *     CiTaskIndexCreate @ 0x1C000A594 (CiTaskIndexCreate.c)
 *     CiSystemTerminate @ 0x1C000B340 (CiSystemTerminate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
