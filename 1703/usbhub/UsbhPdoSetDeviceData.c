/*
 * XREFs of UsbhPdoSetDeviceData @ 0x1C0024DB8
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0019630 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0017678 (UsbhDerefPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0024E70 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhPdoSetDeviceData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  _DWORD *v8; // rax

  PdoExt(a2);
  v6 = UsbhRefPdoDeviceHandle(a1, a2, a3, 1148478835LL);
  v7 = v6;
  if ( v6 )
  {
    Log(a1, 32, 1936028740, 0LL, v6);
    v8 = FdoExt(a1);
    if ( *((_QWORD *)v8 + 547) )
      (*((void (__fastcall **)(_QWORD, __int64, __int64))v8 + 547))(*((_QWORD *)v8 + 529), v7, a2);
    UsbhDerefPdoDeviceHandle(a1, v7, a3, 0x44746573u);
  }
}
