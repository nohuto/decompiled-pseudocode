/*
 * XREFs of PiSwIrpPropertySet @ 0x1406CE008
 * Callers:
 *     PiSwDispatch @ 0x1405749C0 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiSwUpdateArrayProperties @ 0x14044D9AC (PiSwUpdateArrayProperties.c)
 *     PnpAllocatePWSTR @ 0x140524F08 (PnpAllocatePWSTR.c)
 *     PiSwPropertySet @ 0x1405997C8 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x14059C0AC (PiSwValidatePropertyArray.c)
 *     PiSwDeviceOperationsAllowed @ 0x14059EC20 (PiSwDeviceOperationsAllowed.c)
 */

__int64 __fastcall PiSwIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS updated; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v7; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v9 = 0LL;
  v7 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_13;
  updated = MesDecodeBufferHandleCreate(
              Irp->AssociatedIrp.MasterIrp,
              CurrentStackLocation->Parameters.Create.Options,
              &v9);
  if ( updated < 0 )
    goto LABEL_14;
  NdrMesTypeDecode3(v9, "TP 3\a", &off_14078CD58, &off_1403543F0, 1, &v7);
  if ( v7 && *((_QWORD *)v7 + 1) && *(_DWORD *)v7 )
  {
    updated = PiSwValidatePropertyArray(*((_QWORD *)v7 + 1), *(_DWORD *)v7);
    if ( updated >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      if ( PiSwDeviceOperationsAllowed(FsContext2) )
      {
        updated = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(FsContext2 + 80), 0xC8uLL, 0x57706E50u, &P);
        if ( updated >= 0 )
          updated = PiSwUpdateArrayProperties(
                      *(_QWORD *)(FsContext2 + 168),
                      *(_DWORD *)(FsContext2 + 176),
                      *((_QWORD *)v7 + 1),
                      *(_DWORD *)v7);
      }
      else
      {
        updated = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( updated >= 0 )
        updated = PiSwPropertySet((const WCHAR *)P, 1u, *((_QWORD *)v7 + 1), *(_DWORD *)v7);
    }
  }
  else
  {
LABEL_13:
    updated = -1073741811;
  }
LABEL_14:
  if ( P )
    ExFreePoolWithTag(P, 0x57706E50u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x6370726Bu);
  if ( v9 )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
