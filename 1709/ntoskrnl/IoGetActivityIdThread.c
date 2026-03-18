/*
 * XREFs of IoGetActivityIdThread @ 0x1400FB330
 * Callers:
 *     PnpInsertEventInQueue @ 0x14054DDBC (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1405C8240 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

PVOID IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
}
