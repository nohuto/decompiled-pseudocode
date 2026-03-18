/*
 * XREFs of PcisuppReleasePciRouting @ 0x1C008C970
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C008C180 (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1C008C88C (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

void PcisuppReleasePciRouting()
{
  if ( InterruptRouting )
  {
    ExFreePoolWithTag(InterruptRouting, 0);
    InterruptRouting = 0LL;
  }
}
