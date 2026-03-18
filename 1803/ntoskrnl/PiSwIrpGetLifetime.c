/*
 * XREFs of PiSwIrpGetLifetime @ 0x1407354AC
 * Callers:
 *     PiSwDispatch @ 0x1405C6040 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PiSwDeviceOperationsAllowed @ 0x1405C65C0 (PiSwDeviceOperationsAllowed.c)
 */

__int64 __fastcall PiSwIrpGetLifetime(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v2; // ebx
  struct _IRP *MasterIrp; // r14
  __int64 FsContext2; // rsi
  struct _KTHREAD *CurrentThread; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  if ( CurrentStackLocation->Parameters.Read.Length >= 4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( PiSwDeviceOperationsAllowed(FsContext2) )
    {
      *(_DWORD *)&MasterIrp->Type = *(_DWORD *)(FsContext2 + 180);
      Irp->IoStatus.Information = 4LL;
    }
    else
    {
      v2 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    v2 = -1073741811;
  }
  Irp->IoStatus.Status = v2;
  IofCompleteRequest(Irp, 0);
  return v2;
}
