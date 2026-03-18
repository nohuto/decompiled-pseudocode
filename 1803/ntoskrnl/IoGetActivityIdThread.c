/*
 * XREFs of IoGetActivityIdThread @ 0x140075140
 * Callers:
 *     IopMountVolume @ 0x140493C24 (IopMountVolume.c)
 *     PnpInsertEventInQueue @ 0x14051E7CC (PnpInsertEventInQueue.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14064DD40 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

PVOID IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
}
