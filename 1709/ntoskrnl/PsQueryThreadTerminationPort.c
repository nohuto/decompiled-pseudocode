/*
 * XREFs of PsQueryThreadTerminationPort @ 0x14043C354
 * Callers:
 *     ExpLicensingWorker @ 0x140158B10 (ExpLicensingWorker.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentThread()[1].InitialStack;
}
