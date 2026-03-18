/*
 * XREFs of PcisuppReleasePciRouting @ 0x1C00A5140
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C0093F98 (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00A505C (PcisuppReleasePciInterfaces.c)
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
