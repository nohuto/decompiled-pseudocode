/*
 * XREFs of FsRtlNotifyFilterChangeDirectory @ 0x140431F00
 * Callers:
 *     FsRtlNotifyChangeDirectory @ 0x140686DF0 (FsRtlNotifyChangeDirectory.c)
 *     FsRtlNotifyFullChangeDirectory @ 0x140686F20 (FsRtlNotifyFullChangeDirectory.c)
 * Callees:
 *     FsRtlNotifySetCancelRoutine @ 0x1400188A0 (FsRtlNotifySetCancelRoutine.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlNotifyCompleteIrp @ 0x140432850 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlIsNotifyOnList @ 0x140432CC8 (FsRtlIsNotifyOnList.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     FsRtlCheckNotifyForDelete @ 0x140686D3C (FsRtlCheckNotifyForDelete.c)
 */

void __stdcall FsRtlNotifyFilterChangeDirectory(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PVOID FsContext,
        PSTRING FullDirectoryName,
        BOOLEAN WatchTree,
        BOOLEAN IgnoreBuffer,
        ULONG CompletionFilter,
        PIRP NotifyIrp,
        PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PFILTER_REPORT_CHANGE FilterCallback)
{
  PVOID v12; // r9
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v16; // r10d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 IsNotifyOnList; // rax
  _QWORD *PoolWithTag; // rbx
  __int16 v20; // cx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v22; // rdx
  struct _LIST_ENTRY *v23; // rax
  struct _LIST_ENTRY *Blink; // rcx

  v12 = FsContext;
  if ( NotifyList->Flink == NotifyList && !NotifyIrp )
    return;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v12 = FsContext;
  }
  LOBYTE(v16) = 1;
  ++*((_DWORD *)NotifySync + 16);
  if ( !NotifyIrp )
  {
    FsRtlCheckNotifyForDelete(NotifyList, v12);
    goto LABEL_36;
  }
  CurrentStackLocation = NotifyIrp->Tail.Overlay.CurrentStackLocation;
  NotifyIrp->IoStatus.Status = 0;
  NotifyIrp->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_24;
  IsNotifyOnList = FsRtlIsNotifyOnList(NotifyList, v12);
  PoolWithTag = (_QWORD *)IsNotifyOnList;
  if ( !IsNotifyOnList )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x98uLL, 0x4E725346u);
    memset(PoolWithTag, 0, 0x98uLL);
    *PoolWithTag = NotifySync;
    PoolWithTag[1] = FsContext;
    PoolWithTag[16] = CurrentStackLocation->FileObject->FsContext;
    PoolWithTag[2] = TraverseCallback;
    PoolWithTag[3] = SubjectContext;
    SubjectContext = 0LL;
    PoolWithTag[8] = FilterCallback;
    PoolWithTag[17] = FullDirectoryName;
    PoolWithTag[7] = PoolWithTag + 6;
    PoolWithTag[6] = PoolWithTag + 6;
    v16 = 1;
    if ( WatchTree )
      *((_WORD *)PoolWithTag + 36) |= 1u;
    if ( FullDirectoryName )
    {
      if ( FullDirectoryName->Length < 2u || FullDirectoryName->Buffer[1] )
        *((_BYTE *)PoolWithTag + 144) = 1;
      else
        *((_BYTE *)PoolWithTag + 144) = 2;
      if ( FullDirectoryName->Length == *((unsigned __int8 *)PoolWithTag + 144) )
        *((_WORD *)PoolWithTag + 36) |= 0x10u;
    }
    else
    {
      *((_BYTE *)PoolWithTag + 144) = 1;
    }
    *((_DWORD *)PoolWithTag + 19) = CompletionFilter;
    if ( !IgnoreBuffer )
      *((_DWORD *)PoolWithTag + 24) = CurrentStackLocation->Parameters.Read.Length;
    PoolWithTag[15] = NotifyIrp->Tail.Overlay.Thread->Process;
    v23 = (struct _LIST_ENTRY *)(PoolWithTag + 4);
    Blink = NotifyList->Blink;
    if ( Blink->Flink != NotifyList )
      __fastfail(3u);
    v23->Flink = NotifyList;
    PoolWithTag[5] = Blink;
    Blink->Flink = v23;
    NotifyList->Blink = v23;
    *((_DWORD *)PoolWithTag + 28) = 1;
    goto LABEL_11;
  }
  v20 = *(_WORD *)(IsNotifyOnList + 72);
  if ( (v20 & 4) != 0 )
  {
LABEL_24:
    CurrentStackLocation->Control |= v16;
    NotifyIrp->IoStatus.Status = 267;
LABEL_26:
    IofCompleteRequest(NotifyIrp, v16);
    goto LABEL_36;
  }
  if ( (v20 & 0x20) != 0 )
  {
    CurrentStackLocation->Control |= v16;
    NotifyIrp->IoStatus.Status = -1073741738;
    goto LABEL_26;
  }
  if ( (v20 & 0xA) == 2 )
  {
    *(_WORD *)(IsNotifyOnList + 72) = v20 & 0xFFFD;
    NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= v16;
    NotifyIrp->IoStatus.Status = 268;
    goto LABEL_26;
  }
  if ( !*(_DWORD *)(IsNotifyOnList + 104) || (v20 & 8) != 0 )
  {
LABEL_11:
    NotifyIrp->IoStatus.Information = (ULONG_PTR)PoolWithTag;
    NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= v16;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&NotifyIrp->Tail.Overlay.ListEntry;
    v22 = (struct _LIST_ENTRY *)PoolWithTag[7];
    if ( v22->Flink != (struct _LIST_ENTRY *)(PoolWithTag + 6) )
      __fastfail(3u);
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(PoolWithTag + 6);
    NotifyIrp->Tail.Overlay.ListEntry.Blink = v22;
    v22->Flink = &p_ListEntry->ListEntry;
    PoolWithTag[7] = p_ListEntry;
    _InterlockedAdd((volatile signed __int32 *)PoolWithTag + 28, v16);
    FsRtlNotifySetCancelRoutine((__int64)NotifyIrp, 0LL);
    goto LABEL_36;
  }
  *(_DWORD *)(IsNotifyOnList + 104) = 0;
  *(_DWORD *)(IsNotifyOnList + 108) = 0;
  FsRtlNotifyCompleteIrp(NotifyIrp, 0);
LABEL_36:
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
  if ( SubjectContext )
  {
    if ( FullDirectoryName )
    {
      SeReleaseSubjectContext(SubjectContext);
      ExFreePoolWithTag(SubjectContext, 0);
    }
  }
}
