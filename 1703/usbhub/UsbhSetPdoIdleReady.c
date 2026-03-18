/*
 * XREFs of UsbhSetPdoIdleReady @ 0x1C0017E88
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001100 (UsbhPdoSetDx.c)
 *     UsbhPdoDevicePowerState @ 0x1C0004108 (UsbhPdoDevicePowerState.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C0019BC0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005706C (UsbhIdleIrp_NoIrp.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0024E70 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhSetPdoIdleReady(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // r9d
  unsigned int v10; // r14d
  _DWORD *v11; // rax
  KSPIN_LOCK *v12; // rbp
  KIRQL v13; // r14
  __int64 v14; // r9
  int v15; // r10d
  _DWORD *v16; // rax

  v6 = PdoExt(a2);
  v7 = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232364915LL);
  v8 = v7;
  if ( v7 )
  {
    Log(a1, 32, 1919306034, 0LL, v7);
    v10 = v9 + 1;
    *(_DWORD *)(v6 + 1776) = v9 + 1;
    v11 = FdoExt(a1);
    if ( *((_QWORD *)v11 + 560) )
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))v11 + 560))(*((_QWORD *)v11 + 529), v8, v10);
    v12 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
    v13 = KeAcquireSpinLockRaiseToDpc(v12);
    Log(a1, 256, 1146498353, v8, a3);
    Log(a1, v15, 1146498354, v14, 1232364915LL);
    v16 = FdoExt(a1);
    if ( *((_QWORD *)v16 + 559) )
      (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64))v16 + 559))(
        *((_QWORD *)v16 + 529),
        v8,
        a3,
        1232364915LL);
    KeReleaseSpinLock(v12, v13);
  }
}
