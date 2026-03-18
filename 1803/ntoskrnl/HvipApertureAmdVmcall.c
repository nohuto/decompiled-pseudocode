/*
 * XREFs of HvipApertureAmdVmcall @ 0x1401B4490
 * Callers:
 *     HvipApertureDirectHypercall @ 0x140294380 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
