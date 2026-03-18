/*
 * XREFs of UsbhBusIf_SuspendChildHub @ 0x1C00247E0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhLatchPdo @ 0x1C000A448 (UsbhLatchPdo.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0019A34 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0023164 (UsbhSyncSuspendPdoPort.c)
 *     UsbhUnlatchPdo @ 0x1C00248C0 (UsbhUnlatchPdo.c)
 *     UsbhSetPdoIdleReady @ 0x1C0024AC0 (UsbhSetPdoIdleReady.c)
 */

__int64 __fastcall UsbhBusIf_SuspendChildHub(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdi
  _DWORD *v5; // rax
  int v6; // ebp
  _DWORD *v7; // rax

  v2 = PdoExt((__int64)DeviceObject);
  v3 = *((_QWORD *)v2 + 147);
  FdoExt(v3);
  if ( (v2[353] & 4) == 0 )
    return 3221225473LL;
  v4 = UsbhLatchPdo(v3, *((_WORD *)v2 + 710), 0LL, 0x48536942u);
  if ( !v4 )
    return 3221225635LL;
  v5 = PdoExt((__int64)DeviceObject);
  v6 = UsbhSyncSuspendPdoPort((__int64)(v5 + 236), (__int64)DeviceObject, 0);
  if ( v6 >= 0 )
  {
    UsbhSet_Pdo_Dx(DeviceObject, (POWER_STATE)3);
    v7 = FdoExt(v3);
    UsbhSetPdoIdleReady(v3, DeviceObject, v7 + 478);
  }
  UsbhUnlatchPdo(v3, v4, 0LL, 1213425986LL);
  return (unsigned int)v6;
}
