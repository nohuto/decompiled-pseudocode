/*
 * XREFs of UsbhPdoSetDeviceData @ 0x1C0024B84
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0019BB0 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0024C40 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0024DB0 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhPdoSetDeviceData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  _DWORD *v8; // rax

  PdoExt(a2);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1148478835LL);
  v7 = result;
  if ( result )
  {
    Log(a1, 32, 1936028740, 0LL, result);
    v8 = FdoExt(a1);
    if ( *((_QWORD *)v8 + 547) )
      (*((void (__fastcall **)(_QWORD, __int64, __int64))v8 + 547))(*((_QWORD *)v8 + 529), v7, a2);
    return UsbhDerefPdoDeviceHandle(a1, v7, a3, 1148478835LL);
  }
  return result;
}
