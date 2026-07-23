/*
 * XREFs of PopPowerRequestFree @ 0x14045D6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PopPowerRequestFree(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x6C564150u);
}
