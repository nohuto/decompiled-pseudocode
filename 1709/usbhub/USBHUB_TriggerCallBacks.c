/*
 * XREFs of USBHUB_TriggerCallBacks @ 0x1C004B944
 * Callers:
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0010FC0 (UsbhFdoReturnPortStatus.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhTrapBadIrp @ 0x1C003CE80 (UsbhTrapBadIrp.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x1C003CEC0 (UsbhTrapFatalTimeout_x9f.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall USBHUB_TriggerCallBacks(__int64 a1))(_QWORD)
{
  _DWORD *v1; // rdi
  void *v2; // rbx
  int v3; // edx
  _DWORD *v4; // rax
  void *v5; // rbx
  __int64 (__fastcall *result)(_QWORD); // rax

  v1 = 0LL;
  v2 = 0LL;
  v3 = **(_DWORD **)(a1 + 64);
  if ( v3 == 541218120 )
  {
    v2 = (void *)a1;
    goto LABEL_6;
  }
  if ( v3 == 1329877064 )
  {
    v4 = PdoExt(a1);
    v2 = (void *)*((_QWORD *)v4 + 147);
    if ( v2 )
    {
      a1 = *((_QWORD *)v4 + 147);
LABEL_6:
      v1 = FdoExt(a1);
    }
  }
  ObfReferenceObject(v2);
  v5 = (void *)_InterlockedExchange64((volatile __int64 *)&WPP_MAIN_CB.Queue.ListEntry.Flink, (__int64)v2);
  result = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v1 + 585);
  if ( result )
    result = (__int64 (__fastcall *)(_QWORD))result(*((_QWORD *)v1 + 582));
  if ( v5 )
    return (__int64 (__fastcall *)(_QWORD))ObfDereferenceObject(v5);
  return result;
}
