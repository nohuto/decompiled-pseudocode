/*
 * XREFs of UsbhSetPdoIdleReady @ 0x1C0024AC0
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001100 (UsbhPdoSetDx.c)
 *     UsbhPdoDevicePowerState @ 0x1C0003C98 (UsbhPdoDevicePowerState.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C00247E0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0056F70 (UsbhIdleIrp_NoIrp.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0024C40 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0024DB0 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhSetPdoIdleReady(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbp
  __int64 result; // rax
  __int64 v8; // rbx
  _DWORD *v9; // rax

  v6 = PdoExt(a2);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232364915LL);
  v8 = result;
  if ( result )
  {
    Log(a1, 32, 1919306034, 0LL, result);
    v6[444] = 1;
    v9 = FdoExt(a1);
    if ( *((_QWORD *)v9 + 560) )
      (*((void (__fastcall **)(_QWORD, __int64, __int64))v9 + 560))(*((_QWORD *)v9 + 529), v8, 1LL);
    return UsbhDerefPdoDeviceHandle(a1, v8, a3, 1232364915LL);
  }
  return result;
}
