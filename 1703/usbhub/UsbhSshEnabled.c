/*
 * XREFs of UsbhSshEnabled @ 0x1C0009C28
 * Callers:
 *     UsbhSshEnableDisable @ 0x1C001B24C (UsbhSshEnableDisable.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BCF0 (Usbh_FDO_WaitPnpRestart.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000B310 (UsbhDecHubBusy.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 */

LONG __fastcall UsbhSshEnabled(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx

  v4 = FdoExt(a1);
  KeWaitForSingleObject((PVOID)(v4 + 3160), Executive, 0, 0, 0LL);
  v5 = _InterlockedExchange64((volatile __int64 *)(v4 + 3296), 0LL);
  Log(a1, 0x10000, 1397244973, 0, v5);
  UsbhDecHubBusy(a1, v6, v5);
  UsbhEnableTimerObject(*(_QWORD *)(a2 + 8), v4 + 3200, 2000, 0, a2, 2001228627);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 3160), 16, 1, 0);
}
