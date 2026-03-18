/*
 * XREFs of UsbhHardResetWorker @ 0x1C00476D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_HardResetEvent @ 0x1C00141E0 (UsbhDispatch_HardResetEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

void __fastcall UsbhHardResetWorker(__int64 DeviceObject, PVOID Context)
{
  _DWORD *v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // r10
  int v6; // r11d
  int v7; // r8d

  v3 = FdoExt(DeviceObject);
  v4 = FdoExt(DeviceObject);
  Log(DeviceObject, 4, 1919251287, (__int64)(v4 + 566), 0LL);
  v7 = v6;
  if ( (v3[640] & 0x100000) == 0 )
    v7 = v6 + 3;
  UsbhDispatch_HardResetEvent(DeviceObject, v5, v7);
}
