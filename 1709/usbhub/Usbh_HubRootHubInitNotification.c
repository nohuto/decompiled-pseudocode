/*
 * XREFs of Usbh_HubRootHubInitNotification @ 0x1C0007FB8
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C00041F4 (UsbhFdoSystemPowerState.c)
 *     UsbhHubStart @ 0x1C00089E8 (UsbhHubStart.c)
 *     UsbHubhInitTimeoutTimer @ 0x1C004B9E0 (UsbHubhInitTimeoutTimer.c)
 *     UsbhAsyncStop @ 0x1C004BAD0 (UsbhAsyncStop.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubRootHubInitNotification(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax

  v5 = FdoExt(a1);
  if ( *(_QWORD *)(v5 + 4360) )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v5 + 4360))(*(_QWORD *)(v5 + 4232), a2, a3);
  else
    return 3221225474LL;
}
