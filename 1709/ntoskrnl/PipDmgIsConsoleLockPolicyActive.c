/*
 * XREFs of PipDmgIsConsoleLockPolicyActive @ 0x1400FF29C
 * Callers:
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     PiDmaGuardProcessPostRemove @ 0x14055DC84 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     <none>
 */

bool PipDmgIsConsoleLockPolicyActive()
{
  return (unsigned int)(PipDmaGuardPolicy - 2) <= 1;
}
