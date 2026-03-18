/*
 * XREFs of UsbhHubSSH_PnpStop @ 0x1C0057AB0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001CC00 (UsbhDisableTimerObject.c)
 *     UsbhSshBusBusy @ 0x1C001E468 (UsbhSshBusBusy.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     UsbhSshBusIdle @ 0x1C003F620 (UsbhSshBusIdle.c)
 *     UsbhFreeBusyList @ 0x1C0057974 (UsbhFreeBusyList.c)
 */

LONG __fastcall UsbhHubSSH_PnpStop(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  _DWORD *v5; // rbx

  Log(a1, 0x10000, 1936937840, 0LL, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v4 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v5 = FdoExt(*(_QWORD *)(a2 + 8));
  UsbhSshBusBusy(a1, a2);
  UsbhDisableTimerObject(a1, (__int64)(v5 + 800));
  UsbhSshBusIdle(a1);
  return UsbhFreeBusyList(a1);
}
