/*
 * XREFs of PortFreeDriverParameters @ 0x1C0065D64
 * Callers:
 *     RaidDeleteAdapter @ 0x1C002EE60 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
