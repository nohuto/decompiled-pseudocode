/*
 * XREFs of IopMountVolume @ 0x140560E6C
 * Callers:
 *     IopCheckVpbMounted @ 0x14012B240 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x14068BEE0 (IoVerifyVolume.c)
 * Callees:
 *     IoGetActivityIdThread @ 0x140013C40 (IoGetActivityIdThread.c)
 *     FsRtlIsTotalDeviceFailure @ 0x1400151D0 (FsRtlIsTotalDeviceFailure.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400DB970 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400DBA60 (IopDecrementDeviceObjectRef.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     IopAllocateIrpWithExtension @ 0x14012BFC8 (IopAllocateIrpWithExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x14012C99C (IopQueryVpbFlagsSafe.c)
 *     IopWaitForLockAlertable @ 0x14012C9E0 (IopWaitForLockAlertable.c)
 *     MmIsThisAnNtAsSystem @ 0x14012CA60 (MmIsThisAnNtAsSystem.c)
 *     IopMountInitializeVpb @ 0x14012CA70 (IopMountInitializeVpb.c)
 *     IopLogEventIoMgrMountBegin @ 0x1401510C0 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x1401511BC (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x14015378C (IopLogEventIoMgrMountFailed.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoVolumeDeviceToDosName @ 0x140462E40 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuid @ 0x140570E10 (IoVolumeDeviceToGuid.c)
 *     IopLoadFileSystemDriver @ 0x14059B690 (IopLoadFileSystemDriver.c)
 */

__int64 __fastcall IopMountVolume(ULONG_PTR BugCheckParameter1, char a2, char a3, char a4, ULONG_PTR *a5)
{
  const GUID *v5; // rsi
  BOOLEAN IsThisAnNtAsSystem; // al
  struct _KTHREAD *CurrentThread; // r14
  BOOLEAN v11; // bl
  struct _KTHREAD *v12; // rax
  NTSTATUS v13; // eax
  signed int v14; // ebx
  char v15; // r12
  char VpbFlagsSafe; // al
  __int64 v17; // rax
  _BYTE *v18; // r15
  int v19; // eax
  __int64 *v20; // rsi
  __int64 **v21; // r14
  int v22; // ecx
  char v23; // dl
  __int64 *v24; // rax
  bool v25; // zf
  struct _DEVICE_OBJECT *v27; // rbx
  char v28; // r12
  struct _DEVICE_OBJECT *v29; // rax
  __int64 v30; // rcx
  _SLIST_ENTRY *IrpWithExtension; // rax
  IRP *v32; // r13
  __int64 v33; // rcx
  int v34; // eax
  ULONG_PTR v35; // r12
  NTSTATUS v36; // eax
  ULONG_PTR v37; // rax
  NTSTATUS v38; // eax
  char v39; // al
  char v40; // [rsp+30h] [rbp-81h]
  BOOLEAN v42; // [rsp+32h] [rbp-7Fh]
  char v43; // [rsp+33h] [rbp-7Eh]
  char v44; // [rsp+34h] [rbp-7Dh]
  int v47; // [rsp+38h] [rbp-79h]
  __int64 v48; // [rsp+40h] [rbp-71h]
  int v49; // [rsp+48h] [rbp-69h]
  const GUID *ActivityId; // [rsp+50h] [rbp-61h]
  UNICODE_STRING DosName; // [rsp+58h] [rbp-59h] BYREF
  NTSTATUS Status; // [rsp+68h] [rbp-49h] BYREF
  __int64 v53; // [rsp+70h] [rbp-41h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-39h]
  ULONG_PTR *v55; // [rsp+80h] [rbp-31h]
  __int64 *v56; // [rsp+88h] [rbp-29h]
  _QWORD v57[2]; // [rsp+90h] [rbp-21h] BYREF
  struct _KEVENT Event; // [rsp+A0h] [rbp-11h] BYREF
  _QWORD v59[2]; // [rsp+B8h] [rbp+7h] BYREF

  v5 = 0LL;
  v55 = a5;
  v59[0] = 0LL;
  v59[1] = 0LL;
  *(_QWORD *)&DosName.Length = 0LL;
  DosName.Buffer = 0LL;
  v43 = 0;
  v40 = 0;
  ActivityId = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  CurrentThread = KeGetCurrentThread();
  v48 = (__int64)CurrentThread;
  v11 = IsThisAnNtAsSystem;
  v42 = IsThisAnNtAsSystem;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown) )
    return 3221225865LL;
  if ( v11 )
  {
    ActivityId = (const GUID *)IoGetActivityIdThread();
    v5 = ActivityId;
    IoVolumeDeviceToGuid(BugCheckParameter1, v59);
    IoVolumeDeviceToDosName((PVOID)BugCheckParameter1, &DosName);
  }
  if ( a3 )
  {
    v15 = 0;
  }
  else
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), CurrentThread->PreviousMode, a4);
    v14 = v13;
    if ( v13 == 257 || v13 == 192 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( DosName.Buffer )
        ExFreePoolWithTag(DosName.Buffer, 0);
      goto LABEL_35;
    }
    v11 = v42;
    v15 = 1;
    v40 = 1;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  VpbFlagsSafe = IopQueryVpbFlagsSafe(BugCheckParameter1);
  if ( (VpbFlagsSafe & 9) != 0 )
  {
    v14 = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
    goto LABEL_25;
  }
  if ( v11 )
  {
    IopLogEventIoMgrMountBegin(v5, (ULONGLONG)v59, &DosName.Length);
    v43 = 1;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_DWORD *)(BugCheckParameter1 + 48) &= ~2u;
  v14 = -1073741823;
  v17 = *(_QWORD *)(BugCheckParameter1 + 24);
  v18 = (_BYTE *)BugCheckParameter1;
  while ( v17 )
  {
    v18 = (_BYTE *)v17;
    v17 = *(_QWORD *)(v17 + 24);
  }
  ObfReferenceObject(v18);
  v19 = *(_DWORD *)(BugCheckParameter1 + 72);
  if ( v19 == 7 || v19 == 36 )
  {
    v20 = &IopDiskFileSystemQueueHead;
  }
  else
  {
    v20 = &IopCdRomFileSystemQueueHead;
    if ( v19 != 2 )
      v20 = &IopTapeFileSystemQueueHead;
  }
  v21 = (__int64 **)*v20;
  v22 = *(_WORD *)(*(_QWORD *)(BugCheckParameter1 + 56) + 4LL) & 0x10;
  v47 = v22;
  if ( (__int64 *)*v20 == v20 )
  {
LABEL_64:
    ObfDereferenceObject(v18);
LABEL_63:
    CurrentThread = (struct _KTHREAD *)v48;
    goto LABEL_25;
  }
  v23 = a2;
  while ( 1 )
  {
    if ( v14 >= 0 )
    {
      v15 = v40;
      goto LABEL_63;
    }
    v24 = *v21;
    v25 = *v21 == v20;
    v56 = *v21;
    v44 = v25;
    if ( !v23 && v24 == v20 && v21 != (__int64 **)*v20 )
    {
LABEL_23:
      CurrentThread = (struct _KTHREAD *)v48;
      goto LABEL_24;
    }
    if ( !v22 || v24 == v20 )
      break;
LABEL_22:
    v21 = (__int64 **)*v21;
    if ( v21 == (__int64 **)v20 )
      goto LABEL_23;
  }
  v27 = (struct _DEVICE_OBJECT *)(v21 - 10);
  v28 = 1;
  v29 = (struct _DEVICE_OBJECT *)*(v21 - 7);
  BugCheckParameter2 = (ULONG_PTR)(v21 - 10);
  while ( v29 )
  {
    v27 = v29;
    ++v28;
    v29 = v29->AttachedDevice;
  }
  KeResetEvent(&Event);
  IrpWithExtension = IopAllocateIrpWithExtension(v30, v28 + v18[76], 0);
  v32 = (IRP *)IrpWithExtension;
  if ( !IrpWithExtension )
  {
    v14 = -1073741670;
    goto LABEL_94;
  }
  v33 = *((_QWORD *)&IrpWithExtension[11].Next + 1);
  LODWORD(IrpWithExtension[1].Next) = 66;
  LOBYTE(IrpWithExtension[4].Next) = 0;
  IrpWithExtension[5].Next = (_SLIST_ENTRY *)&Event;
  *((_QWORD *)&IrpWithExtension[4].Next + 1) = &Status;
  *((_QWORD *)&IrpWithExtension[9].Next + 1) = v48;
  *(_BYTE *)(v33 - 70) = a2;
  *(_WORD *)(v33 - 72) = 269;
  *(_QWORD *)(v33 - 64) = *(_QWORD *)(BugCheckParameter1 + 56);
  v34 = IopFsRegistrationOps;
  *(_QWORD *)(v33 - 56) = v18;
  v49 = v34;
  ObfReferenceObject(v27);
  v35 = BugCheckParameter2;
  IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1);
  _InterlockedIncrement(&IopMountsInProgress);
  ExReleaseResourceLite(&IopDatabaseResource);
  v36 = IofCallDriver(v27, v32);
  if ( v36 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    v53 = 0LL;
    Status = v36;
  }
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
  if ( IopMountCompletionWaiters )
    KeSetEvent(&IopMountCompletionEvent, 0, 0);
  ObfDereferenceObject(v27);
  IopDecrementDeviceObjectRef(v35, 0, 0);
  v14 = Status;
  if ( Status >= 0 )
  {
    v37 = IopMountInitializeVpb(BugCheckParameter1, (__int64)v18, v47, v44);
    *v55 = v37;
LABEL_46:
    v23 = a2;
    v22 = v47;
    goto LABEL_22;
  }
  if ( ((unsigned int)(Status + 1073741662) <= 1
     || (unsigned int)(Status + 1073741806) <= 2
     || Status == -2147483626
     || Status == -1073741643)
    && v53 == 1 )
  {
    goto LABEL_23;
  }
  if ( v49 != IopFsRegistrationOps )
  {
    v21 = (__int64 **)v57;
    v57[0] = *v20;
    v14 = -1073741489;
  }
  if ( v14 != -1073741412 )
  {
LABEL_54:
    if ( v14 != -1073741489 && FsRtlIsTotalDeviceFailure(v14) )
    {
      if ( !a2 || v56 == v20 )
        goto LABEL_23;
      v21 = *(__int64 ***)(v20[1] + 8);
    }
    goto LABEL_46;
  }
  IopIncrementDeviceObjectRefCount(v35, 1);
  ExReleaseResourceLite(&IopDatabaseResource);
  if ( !a3 )
  {
    KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
    v40 = 0;
  }
  CurrentThread = (struct _KTHREAD *)v48;
  KiLeaveCriticalRegionUnsafe(v48);
  IopLoadFileSystemDriver(v35);
  if ( !a3 )
  {
    v38 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), *(_BYTE *)(v48 + 562), a4);
    v14 = v38;
    if ( v38 == 257 || v38 == 192 )
    {
      ObfDereferenceObject(v18);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v15 = v40;
      goto LABEL_26;
    }
    v40 = 1;
  }
  --*(_WORD *)(v48 + 484);
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v39 = IopQueryVpbFlagsSafe(BugCheckParameter1);
  if ( (v39 & 8) != 0 )
  {
    v14 = -1073741632;
LABEL_94:
    v15 = v40;
    goto LABEL_64;
  }
  if ( (v39 & 1) == 0 )
  {
    v21 = (__int64 **)v57;
    v57[0] = *v20;
    v14 = -1073741489;
    goto LABEL_54;
  }
  ObfDereferenceObject(v18);
  v14 = 0;
LABEL_24:
  v15 = v40;
  if ( v14 < 0 )
    goto LABEL_64;
LABEL_25:
  ExReleaseResourceLite(&IopDatabaseResource);
LABEL_26:
  if ( v15 )
  {
    KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( v42 )
  {
    if ( v43 )
    {
      if ( v14 < 0 )
        IopLogEventIoMgrMountFailed(ActivityId, (ULONGLONG)v59, &DosName.Length, v14);
      else
        IopLogEventIoMgrMountSucceeded(ActivityId, (ULONGLONG)v59, &DosName.Length);
    }
    if ( DosName.Buffer )
      ExFreePoolWithTag(DosName.Buffer, 0);
  }
  if ( v14 < 0 && (*(_DWORD *)(BugCheckParameter1 + 48) & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
    KeBugCheckEx(0xEDu, BugCheckParameter1, v14, 0LL, 0LL);
LABEL_35:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown);
  return (unsigned int)v14;
}
