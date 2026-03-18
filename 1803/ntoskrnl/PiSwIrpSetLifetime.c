/*
 * XREFs of PiSwIrpSetLifetime @ 0x14064D4A4
 * Callers:
 *     PiSwDispatch @ 0x1405C6040 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PiSwDeviceOperationsAllowed @ 0x1405C65C0 (PiSwDeviceOperationsAllowed.c)
 */

__int64 __fastcall PiSwIrpSetLifetime(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v2; // ebx
  __int64 FsContext2; // rbp
  struct _IRP *MasterIrp; // rsi
  struct _KTHREAD *CurrentThread; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v2 = 0;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  if ( CurrentStackLocation->Parameters.Create.Options == 4
    && (MasterIrp = Irp->AssociatedIrp.MasterIrp, *(_DWORD *)&MasterIrp->Type <= 1u) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( PiSwDeviceOperationsAllowed(FsContext2) )
      *(_DWORD *)(FsContext2 + 180) = *(_DWORD *)&MasterIrp->Type;
    else
      v2 = -1073741637;
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
