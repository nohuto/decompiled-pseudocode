/*
 * XREFs of HvipApertureIntelVmcall @ 0x1401B4480
 * Callers:
 *     HvipApertureDirectHypercall @ 0x140294380 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
