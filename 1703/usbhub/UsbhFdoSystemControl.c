/*
 * XREFs of UsbhFdoSystemControl @ 0x1C0015F40
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     UsbhFdoChainIrp @ 0x1C003A128 (UsbhFdoChainIrp.c)
 */

__int64 __fastcall UsbhFdoSystemControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rbx
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  unsigned int v7; // ebp
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  void *v10; // r9
  __int64 v11; // rdx
  PDEVICE_OBJECT *v13; // rax
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+70h] [rbp+18h] BYREF

  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  if ( (UsbhLogMask & 8) != 0 )
  {
    v5 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v5 = 1229805382;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = Irp;
  }
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, File, 1u, 0x20u);
  v7 = v6;
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v6;
    Log((__int64)DeviceObject, 16, 561474921, v6, (__int64)Irp);
LABEL_11:
    IofCompleteRequest(Irp, 0);
    return v7;
  }
  v8 = WmiSystemControl((PWMILIB_CONTEXT)(DeviceExtension + 2872), DeviceObject, Irp, &IrpDisposition);
  v9 = IrpDisposition;
  v7 = v8;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v10 = DeviceObject->DeviceExtension;
    if ( v10 )
    {
      v11 = *((_QWORD *)v10 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
      *(_DWORD *)v11 = 1768781638;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v9;
      *(_QWORD *)(v11 + 24) = v8;
    }
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
  if ( IrpDisposition == IrpNotCompleted )
    goto LABEL_11;
  if ( IrpDisposition )
  {
    if ( (unsigned int)(IrpDisposition - 2) > 1 )
    {
      return (unsigned int)UsbhFdoChainIrp(DeviceObject, Irp);
    }
    else
    {
      v13 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      return (unsigned int)IofCallDriver(v13[151], Irp);
    }
  }
  return v7;
}
