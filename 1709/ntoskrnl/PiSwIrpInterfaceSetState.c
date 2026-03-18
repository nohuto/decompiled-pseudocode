/*
 * XREFs of PiSwIrpInterfaceSetState @ 0x1406CDE70
 * Callers:
 *     PiSwDispatch @ 0x1405749C0 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiSwDeviceOperationsAllowed @ 0x14059EC20 (PiSwDeviceOperationsAllowed.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14059F178 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceInterfaceSetState @ 0x1405E2678 (PiSwDeviceInterfaceSetState.c)
 */

__int64 __fastcall PiSwIrpInterfaceSetState(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  __int64 *InterfaceEntry; // rdx
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v11 = FsContext2;
  v10 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_11;
  v4 = MesDecodeBufferHandleCreate(Irp->AssociatedIrp.MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v10);
  if ( v4 < 0 )
    goto LABEL_12;
  NdrMesTypeDecode3(v10, "TP 3\a", &off_14078CD58, &off_1403543F0, 3, &P);
  if ( P && *(_QWORD *)P )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( PiSwDeviceOperationsAllowed(FsContext2) )
    {
      InterfaceEntry = PiSwDeviceFindInterfaceEntry(v6, *(const wchar_t **)P);
      if ( InterfaceEntry )
        v4 = PiSwDeviceInterfaceSetState(FsContext2, (__int64)InterfaceEntry, *((_BYTE *)P + 8));
      else
        v4 = -1073741275;
    }
    else
    {
      v4 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
LABEL_11:
    v4 = -1073741811;
  }
LABEL_12:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v10 )
    MesHandleFree();
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v4;
}
