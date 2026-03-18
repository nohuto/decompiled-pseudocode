/*
 * XREFs of Usbh_HubSetDeviceHandleIdleReadyState @ 0x1C0005FA8
 * Callers:
 *     UsbhClearPdoIdleReady @ 0x1C0005F00 (UsbhClearPdoIdleReady.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubSetDeviceHandleIdleReadyState(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx

  v7 = FdoExt(a1);
  v8 = 0;
  if ( *(_QWORD *)(v7 + 4480) )
    *a4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v7 + 4480))(*(_QWORD *)(v7 + 4232), a2, a3);
  else
    return (unsigned int)-1073741822;
  return v8;
}
