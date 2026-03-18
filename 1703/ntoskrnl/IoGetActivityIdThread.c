/*
 * XREFs of IoGetActivityIdThread @ 0x140013C40
 * Callers:
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14059D090 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

PVOID IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
}
