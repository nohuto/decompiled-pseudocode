/*
 * XREFs of PcisuppReleasePciRouting @ 0x1C00A7BEC
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C0096CD8 (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00A7B08 (PcisuppReleasePciInterfaces.c)
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
