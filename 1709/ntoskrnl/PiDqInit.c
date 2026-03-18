/*
 * XREFs of PiDqInit @ 0x14083E364
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiDqObjectManagerInit @ 0x1405C4548 (PiDqObjectManagerInit.c)
 */

__int64 PiDqInit()
{
  __int64 result; // rax

  PiDqObjectManagerInit(&PiDqDeviceManager, 1);
  PiDqObjectManagerInit(&PiDqDeviceInterfaceManager, 3);
  PiDqObjectManagerInit(&PiDqDeviceInterfaceClassManager, 4);
  PiDqObjectManagerInit(&PiDqDeviceContainerManager, 5);
  PiDqObjectManagerInit(&PiDqDeviceInstallerClassManager, 2);
  result = 0LL;
  PiDqSequenceNumber = 0LL;
  return result;
}
