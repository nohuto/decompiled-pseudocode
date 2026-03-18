/*
 * XREFs of HvipApertureDirectHypercall @ 0x140294380
 * Callers:
 *     HviCopyMemory @ 0x140294178 (HviCopyMemory.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x1401B4480 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x1401B4490 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_1403EC85C )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
