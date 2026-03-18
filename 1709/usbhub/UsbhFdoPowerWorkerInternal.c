/*
 * XREFs of UsbhFdoPowerWorkerInternal @ 0x1C001F960
 * Callers:
 *     UsbhFdoPower @ 0x1C001F920 (UsbhFdoPower.c)
 *     UsbhFdoPowerWorker @ 0x1C00468D0 (UsbhFdoPowerWorker.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall UsbhFdoPowerWorkerInternal(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  volatile signed __int32 *DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  char QuadPart; // r10
  unsigned __int8 MinorFunction; // dl
  __int64 v8; // rcx
  void *v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  PDEVICE_OBJECT *v13; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (volatile signed __int32 *)a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  QuadPart = -1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction )
  {
    if ( (unsigned __int8)(MinorFunction - 2) <= 1u )
    {
      QuadPart = CurrentStackLocation->Parameters.LockControl.ByteOffset.QuadPart;
      if ( CurrentStackLocation->Parameters.Create.Options == 1 )
        QuadPart |= 0x80u;
    }
  }
  else
  {
    QuadPart = CurrentStackLocation->Parameters.SetLock.Lock;
  }
  v8 = ((unsigned __int8)_InterlockedExchangeAdd(DeviceExtension + 321, 1u) + 1) & 0xF;
  *((_BYTE *)DeviceExtension + v8 + 1288) = MinorFunction;
  *((_BYTE *)DeviceExtension + v8 + 1304) = QuadPart;
  *((_DWORD *)DeviceExtension + 4) = MinorFunction;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v9 = a1->DeviceExtension;
    if ( v9 )
    {
      v10 = *((_QWORD *)v9 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v9 + 220) & *((_DWORD *)v9 + 221));
      *(_DWORD *)v10 = 1349477478;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_QWORD *)(v10 + 24) = a2;
    }
  }
  v11 = CurrentStackLocation->MinorFunction;
  if ( v11 < 4u )
    return off_1C005BD08[2 * v11](a1, a2);
  v13 = (PDEVICE_OBJECT *)FdoExt((__int64)a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(v13[151], a2);
}
