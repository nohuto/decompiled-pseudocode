/*
 * XREFs of WmipSendWmiIrpToTraceDeviceList @ 0x14043C110
 * Callers:
 *     WmiTraceRundownNotify @ 0x14043C010 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x140708DD4 (WmiSetNetworkNotify.c)
 * Callees:
 *     IoInitializeIrp @ 0x14001FF80 (IoInitializeIrp.c)
 *     IoAllocateIrp @ 0x140081530 (IoAllocateIrp.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     WmipForwardWmiIrp @ 0x1404BEDA0 (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrpToTraceDeviceList(__int64 a1, unsigned int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // rbp
  unsigned int v8; // ebx
  CCHAR v9; // si
  PIRP Irp; // rdi

  v6 = a2;
  v8 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v9 = WmipServiceDeviceObject->StackSize + 1;
  KeReleaseMutex(&WmipSMMutex, 0);
  Irp = IoAllocateIrp(v9, 0);
  if ( Irp )
  {
    if ( (_DWORD)v6 )
    {
      do
      {
        IoInitializeIrp(Irp, 72 * v9 + 208, v9);
        --Irp->Tail.Overlay.CurrentStackLocation;
        --Irp->CurrentLocation;
        Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
        Irp->Tail.Overlay.Thread = KeGetCurrentThread();
        WmipForwardWmiIrp(Irp, a4, a5);
        a1 += 16LL;
        --v6;
      }
      while ( v6 );
      v8 = 0;
    }
    IoFreeIrp(Irp);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
