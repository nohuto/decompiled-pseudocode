/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x140460F78
 * Callers:
 *     PiSwDispatch @ 0x14045FBB0 (PiSwDispatch.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14004C84C (RtlStringCbCopyW.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiSwInterfaceCreate @ 0x14045F13C (PiSwInterfaceCreate.c)
 *     PiSwValidatePropertyArray @ 0x140460BAC (PiSwValidatePropertyArray.c)
 *     PiSwDeviceOperationsAllowed @ 0x140460E24 (PiSwDeviceOperationsAllowed.c)
 *     PiSwPropertySet @ 0x140460E50 (PiSwPropertySet.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404612DC (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1404613AC (PiSwDeviceFindInterfaceEntry.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     PiSwUpdateArrayProperties @ 0x140574884 (PiSwUpdateArrayProperties.c)
 *     PiSwInterfaceFree @ 0x1406A3224 (PiSwInterfaceFree.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 FsContext2; // rsi
  char v4; // r12
  struct _IRP *MasterIrp; // rcx
  NTSTATUS updated; // edi
  __int64 v7; // r8
  unsigned int v8; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rcx
  __int64 InterfaceEntry; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // r8
  struct _KTHREAD *v15; // rax
  __int64 v16; // r8
  NTSTRSAFE_PCWSTR v17; // rsi
  __int64 v18; // rax
  struct _KTHREAD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // [rsp+30h] [rbp-68h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v25[11]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+18h] BYREF
  PVOID P; // [rsp+B8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v25[1] = CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v25[2] = FsContext2;
  v25[0] = 0LL;
  P = 0LL;
  v23 = 0LL;
  pszSrc = 0LL;
  LODWORD(v26) = 0;
  v4 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    updated = -1073741811;
    goto LABEL_45;
  }
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v25);
  if ( updated < 0 )
    goto LABEL_27;
  NdrMesTypeDecode3(v25[0], "TP 3\a", &off_14074A588, &off_14033C280, 2, &P);
  if ( !P
    || !*(_QWORD *)P
    || (v7 = *((_QWORD *)P + 3)) == 0 && *((_DWORD *)P + 4)
    || (v8 = *((_DWORD *)P + 4)) == 0 && v7 )
  {
    updated = -1073741811;
    goto LABEL_27;
  }
  updated = PiSwValidatePropertyArray(*((_QWORD *)P + 3), v8);
  if ( updated < 0 )
    goto LABEL_27;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  if ( !PiSwDeviceOperationsAllowed(FsContext2) || (*(_DWORD *)(FsContext2 + 64) & 8) != 0 )
  {
    updated = -1073741637;
  }
  else
  {
    updated = IopRegisterDeviceInterface(*(_QWORD *)(FsContext2 + 80), (__int64)&pszSrc, (__int64)&v26);
    if ( updated >= 0 )
    {
      v10 = *(_QWORD *)(FsContext2 + 120);
      if ( v10 )
        *(_DWORD *)(v10 + 48) |= v26;
      InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
      v23 = (_QWORD *)InterfaceEntry;
      if ( InterfaceEntry )
      {
        updated = PiSwUpdateArrayProperties(
                    *(_QWORD *)(InterfaceEntry + 24),
                    *(unsigned int *)(InterfaceEntry + 32),
                    *((_QWORD *)P + 3),
                    *((unsigned int *)P + 4));
LABEL_17:
        ExReleaseResourceLite(&PiSwLockObj);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        if ( updated < 0 )
          goto LABEL_45;
        v14 = *((_QWORD *)P + 3);
        if ( v14 )
          updated = PiSwPropertySet(v23[2], 3u, v14, *((_DWORD *)P + 4));
        if ( updated < 0 )
          goto LABEL_45;
        v15 = KeGetCurrentThread();
        --v15->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
        LOBYTE(v16) = *((_BYTE *)P + 32);
        updated = PiSwDeviceInterfaceSetState(FsContext2, v23, v16);
        goto LABEL_22;
      }
      updated = PiSwInterfaceCreate(pszSrc, *((_QWORD *)P + 3), *((_DWORD *)P + 4), &v23);
      if ( updated >= 0 )
      {
        v4 = 1;
        v12 = *(_QWORD **)(FsContext2 + 192);
        if ( *v12 != FsContext2 + 184 )
          __fastfail(3u);
        v13 = v23;
        *v23 = FsContext2 + 184;
        v13[1] = v12;
        *v12 = v13;
        *(_QWORD *)(FsContext2 + 192) = v13;
        goto LABEL_17;
      }
    }
  }
LABEL_22:
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( updated >= 0 )
  {
    v17 = pszSrc;
    updated = RtlStringCbCopyW(
                (NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp,
                CurrentStackLocation->Parameters.Read.Length,
                pszSrc);
    if ( updated >= 0 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v17[v18] );
      Irp->IoStatus.Information = 2 * v18 + 2;
    }
LABEL_27:
    if ( updated >= 0 )
      goto LABEL_28;
  }
LABEL_45:
  if ( v23 && v4 )
  {
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v21 = *v23;
    v22 = (_QWORD *)v23[1];
    if ( *(_QWORD **)(*v23 + 8LL) != v23 || (_QWORD *)*v22 != v23 )
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    ExReleaseResourceLite(&PiSwLockObj);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PiSwInterfaceFree(v23);
  }
LABEL_28:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( pszSrc )
    ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( v25[0] )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
