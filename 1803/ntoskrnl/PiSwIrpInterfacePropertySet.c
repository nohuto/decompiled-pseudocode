/*
 * XREFs of PiSwIrpInterfacePropertySet @ 0x1405C6164
 * Callers:
 *     PiSwDispatch @ 0x1405C6040 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PiSwPropertySet @ 0x1405C6324 (PiSwPropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x1405C644C (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1405C6560 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceOperationsAllowed @ 0x1405C65C0 (PiSwDeviceOperationsAllowed.c)
 *     PiSwValidatePropertyArray @ 0x1405C65EC (PiSwValidatePropertyArray.c)
 */

__int64 __fastcall PiSwIrpInterfacePropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  PVOID FsContext2; // rsi
  NTSTATUS v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  __int64 InterfaceEntry; // rax
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  PVOID v11; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = CurrentStackLocation->FileObject->FsContext2;
  v11 = FsContext2;
  v10 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_20;
  v4 = MesDecodeBufferHandleCreate(Irp->AssociatedIrp.MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v10);
  if ( v4 < 0 )
    goto LABEL_13;
  NdrMesTypeDecode3(v10, "TP 3\a", &off_1407F92F0, &off_140396FB0, 4, &P);
  if ( P && *(_QWORD *)P && *((_QWORD *)P + 2) && *((_DWORD *)P + 2) )
  {
    v4 = PiSwValidatePropertyArray(*((_QWORD *)P + 2));
    if ( v4 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      if ( (unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) )
      {
        InterfaceEntry = PiSwDeviceFindInterfaceEntry(v6, *(_QWORD *)P);
        v4 = InterfaceEntry
           ? PiSwUpdateArrayProperties(
               *(_QWORD *)(InterfaceEntry + 24),
               *(unsigned int *)(InterfaceEntry + 32),
               *((_QWORD *)P + 2),
               *((unsigned int *)P + 2))
           : -1073741275;
      }
      else
      {
        v4 = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v4 >= 0 )
        v4 = PiSwPropertySet(*(_QWORD *)P, 3LL, *((_QWORD *)P + 2), *((unsigned int *)P + 2));
    }
  }
  else
  {
LABEL_20:
    v4 = -1073741811;
  }
LABEL_13:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v10 )
    MesHandleFree();
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v4;
}
