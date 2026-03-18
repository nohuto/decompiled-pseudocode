/*
 * XREFs of IopMountVolume @ 0x14055FFAC
 * Callers:
 *     IopCheckVpbMounted @ 0x1400855E0 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x1406B7D20 (IoVerifyVolume.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x1400858D0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140085AF0 (IopIncrementDeviceObjectRefCount.c)
 *     FsRtlIsTotalDeviceFailure @ 0x1400EFF00 (FsRtlIsTotalDeviceFailure.c)
 *     IoGetActivityIdThread @ 0x1400FB330 (IoGetActivityIdThread.c)
 *     IopAllocateIrpWithExtension @ 0x1400FFE44 (IopAllocateIrpWithExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x1400FFE98 (IopQueryVpbFlagsSafe.c)
 *     IopWaitForLockAlertable @ 0x1400FFEDC (IopWaitForLockAlertable.c)
 *     MmIsThisAnNtAsSystem @ 0x1400FFF60 (MmIsThisAnNtAsSystem.c)
 *     IopMountInitializeVpb @ 0x1400FFF70 (IopMountInitializeVpb.c)
 *     IopLogEventIoMgrMountBegin @ 0x1401517F4 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x140151C84 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140155BB4 (IopLogEventIoMgrMountFailed.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IoVolumeDeviceToGuid @ 0x140560600 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToDosName @ 0x140560B00 (IoVolumeDeviceToDosName.c)
 *     IopLoadFileSystemDriver @ 0x1405F28C8 (IopLoadFileSystemDriver.c)
 */

__int64 __fastcall IopMountVolume(ULONG_PTR BugCheckParameter1, UCHAR a2, char a3, char a4, ULONG_PTR *a5)
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
  UNICODE_STRING *Buffer; // rax
  UNICODE_STRING *v18; // r15
  int v19; // eax
  __int64 *v20; // rsi
  __int64 **v21; // r14
  int v22; // ecx
  UCHAR v23; // dl
  __int64 *v24; // rax
  bool v25; // zf
  struct _DEVICE_OBJECT *v26; // rbx
  char v27; // r12
  struct _DEVICE_OBJECT *v28; // rax
  __int64 v29; // rcx
  IRP *IrpWithExtension; // rax
  IRP *v31; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int v33; // eax
  ULONG_PTR v34; // r12
  NTSTATUS v35; // eax
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
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown) )
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( DosName.Buffer )
        ExFreePoolWithTag(DosName.Buffer, 0);
      goto LABEL_53;
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
    goto LABEL_43;
  }
  if ( v11 )
  {
    IopLogEventIoMgrMountBegin(v5, (ULONGLONG)v59, &DosName.Length);
    v43 = 1;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_DWORD *)(BugCheckParameter1 + 48) &= ~2u;
  v14 = -1073741823;
  Buffer = *(UNICODE_STRING **)(BugCheckParameter1 + 24);
  v18 = (UNICODE_STRING *)BugCheckParameter1;
  while ( Buffer )
  {
    v18 = Buffer;
    Buffer = (UNICODE_STRING *)Buffer[1].Buffer;
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
LABEL_61:
    ObfDereferenceObject(v18);
LABEL_60:
    CurrentThread = (struct _KTHREAD *)v48;
    goto LABEL_43;
  }
  v23 = a2;
  while ( 1 )
  {
    if ( v14 >= 0 )
    {
      v15 = v40;
      goto LABEL_60;
    }
    v24 = *v21;
    v25 = *v21 == v20;
    v56 = *v21;
    v44 = v25;
    if ( !v23 && v24 == v20 && v21 != (__int64 **)*v20 )
    {
LABEL_41:
      CurrentThread = (struct _KTHREAD *)v48;
      goto LABEL_42;
    }
    if ( !v22 || v24 == v20 )
      break;
LABEL_40:
    v21 = (__int64 **)*v21;
    if ( v21 == (__int64 **)v20 )
      goto LABEL_41;
  }
  v26 = (struct _DEVICE_OBJECT *)(v21 - 10);
  v27 = 1;
  v28 = (struct _DEVICE_OBJECT *)*(v21 - 7);
  BugCheckParameter2 = (ULONG_PTR)(v21 - 10);
  while ( v28 )
  {
    v26 = v28;
    ++v27;
    v28 = v28->AttachedDevice;
  }
  KeResetEvent(&Event);
  IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v29, v27 + BYTE4(v18[4].Buffer), 0);
  v31 = IrpWithExtension;
  if ( !IrpWithExtension )
  {
    v14 = -1073741670;
    goto LABEL_94;
  }
  CurrentStackLocation = IrpWithExtension->Tail.Overlay.CurrentStackLocation;
  IrpWithExtension->Flags = 66;
  IrpWithExtension->RequestorMode = 0;
  IrpWithExtension->UserEvent = &Event;
  IrpWithExtension->UserIosb = (PIO_STATUS_BLOCK)&Status;
  IrpWithExtension->Tail.Overlay.Thread = (PETHREAD)v48;
  CurrentStackLocation[-1].Flags = a2;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 269;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = *(_QWORD *)(BugCheckParameter1 + 56);
  v33 = IopFsRegistrationOps;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v18;
  v49 = v33;
  ObfReferenceObject(v26);
  v34 = BugCheckParameter2;
  IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1);
  _InterlockedIncrement(&IopMountsInProgress);
  ExReleaseResourceLite(&IopDatabaseResource);
  v35 = IofCallDriver(v26, v31);
  if ( v35 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    v53 = 0LL;
    Status = v35;
  }
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
  if ( IopMountCompletionWaiters )
    KeSetEvent(&IopMountCompletionEvent, 0, 0);
  ObfDereferenceObject(v26);
  IopDecrementDeviceObjectRef(v34, 0);
  v14 = Status;
  if ( Status >= 0 )
  {
    v37 = IopMountInitializeVpb(BugCheckParameter1, (__int64)v18, v47, v44);
    *v55 = v37;
LABEL_39:
    v23 = a2;
    v22 = v47;
    goto LABEL_40;
  }
  if ( ((unsigned int)(Status + 1073741662) <= 1
     || (unsigned int)(Status + 1073741806) <= 2
     || Status == -2147483626
     || Status == -1073741643)
    && v53 == 1 )
  {
    goto LABEL_41;
  }
  if ( v49 != IopFsRegistrationOps )
  {
    v21 = (__int64 **)v57;
    v57[0] = *v20;
    v14 = -1073741489;
  }
  if ( v14 != -1073741412 )
  {
LABEL_38:
    if ( v14 != -1073741489 && FsRtlIsTotalDeviceFailure(v14) )
    {
      if ( !a2 || v56 == v20 )
        goto LABEL_41;
      v21 = *(__int64 ***)(v20[1] + 8);
    }
    goto LABEL_39;
  }
  IopIncrementDeviceObjectRefCount(v34, 1);
  ExReleaseResourceLite(&IopDatabaseResource);
  if ( !a3 )
  {
    KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
    v40 = 0;
  }
  CurrentThread = (struct _KTHREAD *)v48;
  KeLeaveCriticalRegionThread(v48);
  IopLoadFileSystemDriver(v34);
  if ( !a3 )
  {
    v38 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), *(_BYTE *)(v48 + 562), a4);
    v14 = v38;
    if ( v38 == 257 || v38 == 192 )
    {
      ObfDereferenceObject(v18);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v15 = v40;
      goto LABEL_44;
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
    goto LABEL_61;
  }
  if ( (v39 & 1) == 0 )
  {
    v21 = (__int64 **)v57;
    v57[0] = *v20;
    v14 = -1073741489;
    goto LABEL_38;
  }
  ObfDereferenceObject(v18);
  v14 = 0;
LABEL_42:
  v15 = v40;
  if ( v14 < 0 )
    goto LABEL_61;
LABEL_43:
  ExReleaseResourceLite(&IopDatabaseResource);
LABEL_44:
  if ( v15 )
  {
    KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
LABEL_53:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown);
  return (unsigned int)v14;
}
