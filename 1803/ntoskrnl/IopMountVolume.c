/*
 * XREFs of IopMountVolume @ 0x140493C24
 * Callers:
 *     IopCheckVpbMounted @ 0x140107070 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x14071C9D0 (IoVerifyVolume.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x140006144 (IopAllocateIrpWithExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x140006198 (IopQueryVpbFlagsSafe.c)
 *     IopWaitForLockAlertable @ 0x1400061DC (IopWaitForLockAlertable.c)
 *     MmIsThisAnNtAsSystem @ 0x140006260 (MmIsThisAnNtAsSystem.c)
 *     IopMountInitializeVpb @ 0x140006270 (IopMountInitializeVpb.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IoGetActivityIdThread @ 0x140075140 (IoGetActivityIdThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140106870 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x140106AE0 (IopDecrementDeviceObjectRef.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     FsRtlIsTotalDeviceFailure @ 0x1401352C0 (FsRtlIsTotalDeviceFailure.c)
 *     IopLogEventIoMgrMountBegin @ 0x14015C5D8 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x14015C6D4 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x14015E290 (IopLogEventIoMgrMountFailed.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IoVolumeDeviceToGuid @ 0x140495D70 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToDosName @ 0x140496270 (IoVolumeDeviceToDosName.c)
 *     IopLoadFileSystemDriver @ 0x1405F3F9C (IopLoadFileSystemDriver.c)
 */

__int64 __fastcall IopMountVolume(ULONG_PTR BugCheckParameter1, char a2, char a3, char a4, ULONG_PTR *a5)
{
  const GUID *v5; // rsi
  BOOLEAN IsThisAnNtAsSystem; // al
  struct _KTHREAD *CurrentThread; // r15
  BOOLEAN v11; // bl
  struct _KTHREAD *v12; // rax
  NTSTATUS v13; // eax
  signed int v14; // ebx
  char v15; // r12
  char VpbFlagsSafe; // al
  __int64 v17; // rax
  _BYTE *v18; // r13
  int v19; // eax
  __int64 *v20; // rsi
  __int64 **v21; // r14
  int v22; // ecx
  char v23; // dl
  __int64 *v24; // rax
  bool v25; // zf
  struct _DEVICE_OBJECT *v26; // rbx
  char v27; // r15
  struct _DEVICE_OBJECT *v28; // rax
  ULONG_PTR v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 IrpWithExtension; // rax
  IRP *v33; // r15
  __int64 v34; // rcx
  int v35; // eax
  NTSTATUS v36; // eax
  __int64 v37; // r15
  struct _KEVENT *v38; // r14
  ULONG_PTR v40; // rax
  NTSTATUS v41; // eax
  char v42; // al
  char v43; // [rsp+30h] [rbp-71h]
  BOOLEAN v45; // [rsp+32h] [rbp-6Fh]
  char v46; // [rsp+33h] [rbp-6Eh]
  char v47; // [rsp+34h] [rbp-6Dh]
  int v50; // [rsp+38h] [rbp-69h]
  int v51; // [rsp+3Ch] [rbp-65h]
  __int64 v52; // [rsp+40h] [rbp-61h]
  const GUID *ActivityId; // [rsp+48h] [rbp-59h]
  UNICODE_STRING DosName; // [rsp+50h] [rbp-51h] BYREF
  NTSTATUS Status; // [rsp+60h] [rbp-41h] BYREF
  __int64 v56; // [rsp+68h] [rbp-39h]
  ULONG_PTR *v57; // [rsp+70h] [rbp-31h]
  __int64 *v58; // [rsp+78h] [rbp-29h]
  _QWORD v59[2]; // [rsp+80h] [rbp-21h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-11h] BYREF
  _QWORD v61[2]; // [rsp+A8h] [rbp+7h] BYREF

  v5 = 0LL;
  v57 = a5;
  v61[0] = 0LL;
  v61[1] = 0LL;
  *(_QWORD *)&DosName.Length = 0LL;
  DosName.Buffer = 0LL;
  v46 = 0;
  v43 = 0;
  ActivityId = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  CurrentThread = KeGetCurrentThread();
  v52 = (__int64)CurrentThread;
  v11 = IsThisAnNtAsSystem;
  v45 = IsThisAnNtAsSystem;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown) )
    return 3221225865LL;
  if ( v11 )
  {
    ActivityId = (const GUID *)IoGetActivityIdThread();
    v5 = ActivityId;
    IoVolumeDeviceToGuid(BugCheckParameter1, v61);
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
      goto LABEL_51;
    }
    v11 = v45;
    v15 = 1;
    v43 = 1;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  VpbFlagsSafe = IopQueryVpbFlagsSafe(BugCheckParameter1);
  if ( (VpbFlagsSafe & 9) != 0 )
  {
    v14 = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
    goto LABEL_41;
  }
  if ( v11 )
  {
    IopLogEventIoMgrMountBegin(v5, (ULONGLONG)v61, &DosName.Length);
    v46 = 1;
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
  v50 = v22;
  if ( (__int64 *)*v20 == v20 )
  {
LABEL_60:
    ObfDereferenceObject(v18);
    goto LABEL_41;
  }
  v23 = a2;
  while ( 1 )
  {
    if ( v14 >= 0 )
    {
      v15 = v43;
      goto LABEL_41;
    }
    v24 = *v21;
    v25 = *v21 == v20;
    v58 = *v21;
    v47 = v25;
    if ( !v23 && v24 == v20 && v21 != (__int64 **)*v20 )
      goto LABEL_40;
    if ( !v22 || v24 == v20 )
      break;
LABEL_39:
    v21 = (__int64 **)*v21;
    if ( v21 == (__int64 **)v20 )
      goto LABEL_40;
  }
  v26 = (struct _DEVICE_OBJECT *)(v21 - 10);
  v27 = 1;
  v28 = (struct _DEVICE_OBJECT *)*(v21 - 7);
  v29 = (ULONG_PTR)(v21 - 10);
  while ( v28 )
  {
    v26 = v28;
    ++v27;
    v28 = v28->AttachedDevice;
  }
  KeResetEvent(&Event);
  LOBYTE(v30) = v27 + v18[76];
  IrpWithExtension = IopAllocateIrpWithExtension(v31, v30);
  v33 = (IRP *)IrpWithExtension;
  if ( !IrpWithExtension )
  {
    v14 = -1073741670;
    goto LABEL_93;
  }
  v34 = *(_QWORD *)(IrpWithExtension + 184);
  *(_DWORD *)(IrpWithExtension + 16) = 66;
  *(_BYTE *)(IrpWithExtension + 64) = 0;
  *(_QWORD *)(IrpWithExtension + 80) = &Event;
  *(_QWORD *)(IrpWithExtension + 72) = &Status;
  *(_QWORD *)(IrpWithExtension + 152) = v52;
  *(_BYTE *)(v34 - 70) = a2;
  *(_WORD *)(v34 - 72) = 269;
  *(_QWORD *)(v34 - 64) = *(_QWORD *)(BugCheckParameter1 + 56);
  v35 = IopFsRegistrationOps;
  *(_QWORD *)(v34 - 56) = v18;
  v51 = v35;
  ObfReferenceObject(v26);
  IopIncrementDeviceObjectRefCount((ULONG_PTR)(v21 - 10), 1);
  _InterlockedIncrement(&IopMountsInProgress);
  ExReleaseResourceLite(&IopDatabaseResource);
  v36 = IofCallDriver(v26, v33);
  if ( v36 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    v56 = 0LL;
    Status = v36;
  }
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
  if ( IopMountCompletionWaiters )
    KeSetEvent(&IopMountCompletionEvent, 0, 0);
  ObfDereferenceObject(v26);
  IopDecrementDeviceObjectRef((ULONG_PTR)(v21 - 10), 0, 0);
  v14 = Status;
  if ( Status >= 0 )
  {
    v40 = IopMountInitializeVpb(BugCheckParameter1, (__int64)v18, v50, v47);
    *v57 = v40;
LABEL_38:
    v23 = a2;
    v22 = v50;
    goto LABEL_39;
  }
  if ( ((unsigned int)(Status + 1073741662) <= 1
     || (unsigned int)(Status + 1073741805) <= 1
     || Status == -2147483626
     || Status == -1073741643
     || Status == -1073741806)
    && v56 == 1 )
  {
    goto LABEL_40;
  }
  if ( v51 != IopFsRegistrationOps )
  {
    v21 = (__int64 **)v59;
    v59[0] = *v20;
    v14 = -1073741489;
  }
  if ( v14 != -1073741412 )
  {
LABEL_37:
    if ( v14 != -1073741489 && FsRtlIsTotalDeviceFailure(v14) )
    {
      if ( !a2 || v58 == v20 )
        goto LABEL_40;
      v21 = *(__int64 ***)(v20[1] + 8);
    }
    goto LABEL_38;
  }
  IopIncrementDeviceObjectRefCount(v29, 1);
  ExReleaseResourceLite(&IopDatabaseResource);
  v38 = (struct _KEVENT *)(BugCheckParameter1 + 280);
  if ( !a3 )
  {
    KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
    v43 = 0;
  }
  v37 = v52;
  KeLeaveCriticalRegionThread(v52);
  IopLoadFileSystemDriver(v29);
  if ( !a3 )
  {
    v41 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), *(_BYTE *)(v52 + 562), a4);
    v14 = v41;
    if ( v41 == 257 || v41 == 192 )
    {
      ObfDereferenceObject(v18);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v15 = v43;
      goto LABEL_42;
    }
    v43 = 1;
  }
  --*(_WORD *)(v52 + 484);
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v42 = IopQueryVpbFlagsSafe(BugCheckParameter1);
  if ( (v42 & 8) != 0 )
  {
    v14 = -1073741632;
LABEL_93:
    v15 = v43;
    goto LABEL_60;
  }
  if ( (v42 & 1) == 0 )
  {
    v21 = (__int64 **)v59;
    v59[0] = *v20;
    v14 = -1073741489;
    goto LABEL_37;
  }
  ObfDereferenceObject(v18);
  v14 = 0;
LABEL_40:
  v15 = v43;
  if ( v14 < 0 )
    goto LABEL_60;
LABEL_41:
  ExReleaseResourceLite(&IopDatabaseResource);
  v37 = v52;
  v38 = (struct _KEVENT *)(BugCheckParameter1 + 280);
LABEL_42:
  if ( v15 )
  {
    KeSetEvent(v38, 0, 0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  KeLeaveCriticalRegionThread(v37);
  if ( v45 )
  {
    if ( v46 )
    {
      if ( v14 < 0 )
        IopLogEventIoMgrMountFailed(ActivityId, (ULONGLONG)v61, &DosName.Length, v14);
      else
        IopLogEventIoMgrMountSucceeded(ActivityId, (ULONGLONG)v61, &DosName.Length);
    }
    if ( DosName.Buffer )
      ExFreePoolWithTag(DosName.Buffer, 0);
  }
  if ( v14 < 0 && (*(_DWORD *)(BugCheckParameter1 + 48) & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
    KeBugCheckEx(0xEDu, BugCheckParameter1, v14, 0LL, 0LL);
LABEL_51:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown);
  return (unsigned int)v14;
}
