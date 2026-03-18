/*
 * XREFs of PiSwIrpInterfacePropertySet @ 0x1405746C4
 * Callers:
 *     PiSwDispatch @ 0x14045FBB0 (PiSwDispatch.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiSwValidatePropertyArray @ 0x140460BAC (PiSwValidatePropertyArray.c)
 *     PiSwDeviceOperationsAllowed @ 0x140460E24 (PiSwDeviceOperationsAllowed.c)
 *     PiSwPropertySet @ 0x140460E50 (PiSwPropertySet.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1404613AC (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwUpdateArrayProperties @ 0x140574884 (PiSwUpdateArrayProperties.c)
 */

__int64 __fastcall PiSwIrpInterfacePropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS v4; // ebx
  unsigned int v5; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  __int64 *InterfaceEntry; // rax
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v12 = FsContext2;
  v11 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_20;
  v4 = MesDecodeBufferHandleCreate(Irp->AssociatedIrp.MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v11);
  if ( v4 < 0 )
    goto LABEL_13;
  NdrMesTypeDecode3(v11, "TP 3\a", &off_14074A588, &off_14033C280, 4, &P);
  if ( P && *(_QWORD *)P && *((_QWORD *)P + 2) && (v5 = *((_DWORD *)P + 2)) != 0 )
  {
    v4 = PiSwValidatePropertyArray(*((_QWORD *)P + 2), v5);
    if ( v4 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      if ( PiSwDeviceOperationsAllowed(FsContext2) )
      {
        InterfaceEntry = PiSwDeviceFindInterfaceEntry(v7, *(const wchar_t **)P);
        v4 = InterfaceEntry
           ? PiSwUpdateArrayProperties(
               InterfaceEntry[3],
               *((unsigned int *)InterfaceEntry + 8),
               *((_QWORD *)P + 2),
               *((unsigned int *)P + 2))
           : -1073741275;
      }
      else
      {
        v4 = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v4 >= 0 )
        v4 = PiSwPropertySet(*(_QWORD *)P, 3u, *((_QWORD *)P + 2), *((_DWORD *)P + 2));
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
  if ( v11 )
    MesHandleFree();
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v4;
}
