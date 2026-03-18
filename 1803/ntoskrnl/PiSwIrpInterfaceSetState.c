/*
 * XREFs of PiSwIrpInterfaceSetState @ 0x1406465E8
 * Callers:
 *     PiSwDispatch @ 0x1405C6040 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1405C6560 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceOperationsAllowed @ 0x1405C65C0 (PiSwDeviceOperationsAllowed.c)
 *     PiSwDeviceInterfaceSetState @ 0x140646AC0 (PiSwDeviceInterfaceSetState.c)
 */

__int64 __fastcall PiSwIrpInterfaceSetState(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  __int64 *InterfaceEntry; // rdx
  __int64 v8; // r8
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v12 = FsContext2;
  v11 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_16;
  v4 = MesDecodeBufferHandleCreate(Irp->AssociatedIrp.MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v11);
  if ( v4 < 0 )
    goto LABEL_9;
  NdrMesTypeDecode3(v11, "TP 3\a", &off_1407F92F0, &off_140396FB0, 3, &P);
  if ( P && *(_QWORD *)P )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( PiSwDeviceOperationsAllowed(FsContext2) )
    {
      InterfaceEntry = PiSwDeviceFindInterfaceEntry(v6, *(const wchar_t **)P);
      if ( InterfaceEntry )
      {
        LOBYTE(v8) = *((_BYTE *)P + 8);
        v4 = PiSwDeviceInterfaceSetState(FsContext2, InterfaceEntry, v8);
      }
      else
      {
        v4 = -1073741275;
      }
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
LABEL_16:
    v4 = -1073741811;
  }
LABEL_9:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v11 )
    MesHandleFree();
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v4;
}
