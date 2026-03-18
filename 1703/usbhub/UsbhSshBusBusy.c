/*
 * XREFs of UsbhSshBusBusy @ 0x1C001B1C4
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C000A910 (UsbhDispatch_BusEvent.c)
 *     Usbh_BS_BusRun @ 0x1C000AB60 (Usbh_BS_BusRun.c)
 *     UsbhHubSSH_PnpStart @ 0x1C0018C40 (UsbhHubSSH_PnpStart.c)
 *     UsbhHubSSH_PnpStop @ 0x1C0057BB0 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000B310 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000BC70 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

void __fastcall UsbhSshBusBusy(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v4; // rdi
  signed __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // r11d
  __int64 v9; // rdx
  _QWORD *v10; // r10

  v4 = (volatile signed __int64 *)FdoExt(a1);
  v5 = UsbhIncHubBusy(a1, a2, a1, 1430418291, 1);
  Log(a1, 2048, 1114863915, _InterlockedCompareExchange64(v4 + 411, v5, 0LL), v5);
  if ( v6 )
  {
    Log(a1, v8, 1114845741, v6, v7);
    UsbhDecHubBusy(a1, v9, v10);
  }
}
