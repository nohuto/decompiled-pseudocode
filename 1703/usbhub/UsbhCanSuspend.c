/*
 * XREFs of UsbhCanSuspend @ 0x1C0008BE8
 * Callers:
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x1C0008B40 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

bool __fastcall UsbhCanSuspend(__int64 a1, int a2)
{
  return *(_DWORD *)(FdoExt(a1) + 4LL * a2 + 5008) == 3;
}
