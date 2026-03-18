/*
 * XREFs of PipDmgIsConsoleLockPolicyActive @ 0x140145224
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1405C89E0 (PiDmaGuardProcessPostRemove.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 * Callees:
 *     <none>
 */

bool PipDmgIsConsoleLockPolicyActive()
{
  return (unsigned int)(PipDmaGuardPolicy - 2) <= 1;
}
