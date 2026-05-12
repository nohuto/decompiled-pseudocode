/*
 * XREFs of PortFreeDriverParameters @ 0x1C0067AD0
 * Callers:
 *     RaidDeleteAdapter @ 0x1C0029CA0 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
