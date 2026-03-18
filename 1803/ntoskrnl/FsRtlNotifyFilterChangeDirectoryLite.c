/*
 * XREFs of FsRtlNotifyFilterChangeDirectoryLite @ 0x14055BD00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1400B6670 (FsRtlNotifySetCancelRoutine.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     FsRtlNotifyCompleteIrp @ 0x14055BB84 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlIsNotifyOnList @ 0x14055C02C (FsRtlIsNotifyOnList.c)
 *     FsRtlNotifyInitializeSync @ 0x14055C110 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x140581C10 (FsRtlNotifyUninitializeSync.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x140716C70 (FsRtlCheckNotifyForDeleteLite.c)
 */

void __fastcall FsRtlNotifyFilterChangeDirectoryLite(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        char a4,
        int a5,
        PIRP Irp,
        __int64 a7,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        __int64 a9)
{
  PIRP v12; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int64 v14; // rax
  unsigned int v15; // r9d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 IsNotifyOnList; // rax
  _QWORD *PoolWithTag; // rbx
  __int16 v19; // cx
  unsigned int v20; // r8d
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  PSECURITY_SUBJECT_CONTEXT v25; // rbx
  PNOTIFY_SYNC NotifySync; // [rsp+88h] [rbp+10h] BYREF
  __int64 v27; // [rsp+90h] [rbp+18h]

  v27 = a3;
  v12 = Irp;
  if ( (_QWORD *)*a2 == a2 && !Irp )
    return;
  if ( !*a1 )
  {
    FsRtlNotifyInitializeSync(&NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync, 0LL) )
      FsRtlNotifyUninitializeSync(&NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  v14 = *a1;
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
    v14 = *a1;
  }
  LOBYTE(v15) = 1;
  ++*(_DWORD *)(v14 + 64);
  if ( !v12 )
  {
    FsRtlCheckNotifyForDeleteLite(a2);
    goto LABEL_31;
  }
  CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
  v12->IoStatus.Status = 0;
  v12->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_27;
  IsNotifyOnList = FsRtlIsNotifyOnList(a2, v27);
  PoolWithTag = (_QWORD *)IsNotifyOnList;
  if ( !IsNotifyOnList )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x80uLL, 0x4E725346u);
    memset(PoolWithTag, 0, 0x80uLL);
    *((_WORD *)PoolWithTag + 36) |= 0x40u;
    *PoolWithTag = *a1;
    PoolWithTag[1] = v27;
    PoolWithTag[2] = a7;
    PoolWithTag[3] = SubjectContext;
    SubjectContext = 0LL;
    PoolWithTag[8] = a9;
    PoolWithTag[7] = PoolWithTag + 6;
    PoolWithTag[6] = PoolWithTag + 6;
    v15 = 1;
    if ( (a4 & 1) != 0 )
      *((_WORD *)PoolWithTag + 36) |= 1u;
    if ( (a4 & 4) != 0 )
      *((_WORD *)PoolWithTag + 36) |= 0x80u;
    *((_DWORD *)PoolWithTag + 19) = a5;
    if ( (a4 & 2) == 0 )
      *((_DWORD *)PoolWithTag + 24) = CurrentStackLocation->Parameters.Read.Length;
    PoolWithTag[15] = v12->Tail.Overlay.Thread->Process;
    v23 = PoolWithTag + 4;
    v24 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v24 != a2 )
      __fastfail(3u);
    *v23 = a2;
    PoolWithTag[5] = v24;
    *v24 = v23;
    a2[1] = v23;
    *((_DWORD *)PoolWithTag + 28) = 1;
    CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
    goto LABEL_12;
  }
  v19 = *(_WORD *)(IsNotifyOnList + 72);
  if ( (v19 & 4) != 0 )
  {
LABEL_27:
    CurrentStackLocation->Control |= v15;
    v12->IoStatus.Status = 267;
  }
  else if ( (v19 & 0x20) != 0 )
  {
    CurrentStackLocation->Control |= v15;
    v12->IoStatus.Status = -1073741738;
  }
  else
  {
    if ( (v19 & 0xA) != 2 )
    {
      v20 = *(_DWORD *)(IsNotifyOnList + 104);
      if ( v20 && (v19 & 8) == 0 )
      {
        *(_DWORD *)(IsNotifyOnList + 104) = 0;
        *(_DWORD *)(IsNotifyOnList + 108) = 0;
        FsRtlNotifyCompleteIrp(v12, IsNotifyOnList, v20, 0, 0);
        goto LABEL_31;
      }
LABEL_12:
      v12->IoStatus.Information = (ULONG_PTR)PoolWithTag;
      CurrentStackLocation->Control |= v15;
      p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v12->Tail.Overlay.ListEntry;
      v22 = (struct _LIST_ENTRY *)PoolWithTag[7];
      if ( v22->Flink != (struct _LIST_ENTRY *)(PoolWithTag + 6) )
        __fastfail(3u);
      p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(PoolWithTag + 6);
      v12->Tail.Overlay.ListEntry.Blink = v22;
      v22->Flink = &p_ListEntry->ListEntry;
      PoolWithTag[7] = p_ListEntry;
      _InterlockedAdd((volatile signed __int32 *)PoolWithTag + 28, v15);
      FsRtlNotifySetCancelRoutine((__int64)v12, 0LL);
      goto LABEL_31;
    }
    *(_WORD *)(IsNotifyOnList + 72) = v19 & 0xFFFD;
    v12->Tail.Overlay.CurrentStackLocation->Control |= v15;
    v12->IoStatus.Status = 268;
  }
  IofCompleteRequest(v12, v15);
LABEL_31:
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
  v25 = SubjectContext;
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(v25, 0);
  }
}
