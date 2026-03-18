/*
 * XREFs of WmipSendWmiIrpToTraceDeviceList @ 0x1406464B0
 * Callers:
 *     WmiTraceRundownNotify @ 0x1406463C0 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1407A49E4 (WmiSetNetworkNotify.c)
 * Callees:
 *     IoAllocateIrp @ 0x1400075E0 (IoAllocateIrp.c)
 *     IoInitializeIrp @ 0x1400B7210 (IoInitializeIrp.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     WmipForwardWmiIrp @ 0x14051BADC (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrpToTraceDeviceList(__int64 a1, unsigned int a2, UCHAR a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // rbp
  unsigned int v8; // ebx
  CCHAR v9; // r14
  PIRP Irp; // rsi

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
        WmipForwardWmiIrp(Irp, a3, *(_DWORD *)(*(_QWORD *)a1 + 56LL), 0LL, a4, a5);
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
