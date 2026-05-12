/*
 * XREFs of PortFreeDriverParameters @ 0x1C00696A8
 * Callers:
 *     RaidDeleteAdapter @ 0x1C002FB9C (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
