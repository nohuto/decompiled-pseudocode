/*
 * XREFs of UsbhCanSuspend @ 0x1C0005C48
 * Callers:
 *     UsbhFdoSxIoComplete_Action @ 0x1C0002AE0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x1C0005BA0 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

bool __fastcall UsbhCanSuspend(__int64 a1, int a2)
{
  return *(_DWORD *)(FdoExt(a1) + 4LL * a2 + 5008) == 3;
}
