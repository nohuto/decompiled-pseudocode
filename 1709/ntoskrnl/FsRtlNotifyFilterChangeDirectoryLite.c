/*
 * XREFs of FsRtlNotifyFilterChangeDirectoryLite @ 0x140567860
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     FsRtlNotifySetCancelRoutine @ 0x140107FB8 (FsRtlNotifySetCancelRoutine.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     FsRtlNotifyCompleteIrp @ 0x14056765C (FsRtlNotifyCompleteIrp.c)
 *     FsRtlIsNotifyOnList @ 0x140567B8C (FsRtlIsNotifyOnList.c)
 *     FsRtlNotifyInitializeSync @ 0x140567C60 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x14059ACD0 (FsRtlNotifyUninitializeSync.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x1406B21A0 (FsRtlCheckNotifyForDeleteLite.c)
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
  unsigned int v14; // r9d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 IsNotifyOnList; // rax
  _QWORD *PoolWithTag; // rbx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v21; // rdx
  __int16 v22; // cx
  unsigned int v23; // r8d
  PSECURITY_SUBJECT_CONTEXT v24; // rbx
  PNOTIFY_SYNC NotifySync; // [rsp+88h] [rbp+10h] BYREF
  __int64 v26; // [rsp+90h] [rbp+18h]

  v26 = a3;
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
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
  }
  LOBYTE(v14) = 1;
  ++*(_DWORD *)(*a1 + 64);
  if ( !v12 )
  {
    FsRtlCheckNotifyForDeleteLite(a2);
    goto LABEL_32;
  }
  CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
  v12->IoStatus.Status = 0;
  v12->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_28;
  IsNotifyOnList = FsRtlIsNotifyOnList(a2, v26);
  PoolWithTag = (_QWORD *)IsNotifyOnList;
  if ( !IsNotifyOnList )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v14 + 127, 0x4E725346u);
    memset(PoolWithTag, 0, 0x80uLL);
    *((_WORD *)PoolWithTag + 36) |= 0x40u;
    *PoolWithTag = *a1;
    PoolWithTag[1] = v26;
    PoolWithTag[2] = a7;
    PoolWithTag[3] = SubjectContext;
    SubjectContext = 0LL;
    PoolWithTag[8] = a9;
    PoolWithTag[7] = PoolWithTag + 6;
    PoolWithTag[6] = PoolWithTag + 6;
    v14 = 1;
    if ( (a4 & 1) != 0 )
      *((_WORD *)PoolWithTag + 36) |= 1u;
    if ( (a4 & 4) != 0 )
      *((_WORD *)PoolWithTag + 36) |= 0x80u;
    *((_DWORD *)PoolWithTag + 19) = a5;
    if ( (a4 & 2) == 0 )
      *((_DWORD *)PoolWithTag + 24) = CurrentStackLocation->Parameters.Read.Length;
    PoolWithTag[15] = v12->Tail.Overlay.Thread->Process;
    v18 = PoolWithTag + 4;
    v19 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v19 != a2 )
      __fastfail(3u);
    *v18 = a2;
    PoolWithTag[5] = v19;
    *v19 = v18;
    a2[1] = v18;
    *((_DWORD *)PoolWithTag + 28) = 1;
    goto LABEL_16;
  }
  v22 = *(_WORD *)(IsNotifyOnList + 72);
  if ( (v22 & 4) != 0 )
  {
LABEL_28:
    CurrentStackLocation->Control |= v14;
    v12->IoStatus.Status = 267;
    goto LABEL_24;
  }
  if ( (v22 & 0x20) != 0 )
  {
    CurrentStackLocation->Control |= v14;
    v12->IoStatus.Status = -1073741738;
    goto LABEL_24;
  }
  if ( (v22 & 0xA) == 2 )
  {
    *(_WORD *)(IsNotifyOnList + 72) = v22 & 0xFFFD;
    v12->Tail.Overlay.CurrentStackLocation->Control |= v14;
    v12->IoStatus.Status = 268;
LABEL_24:
    IofCompleteRequest(v12, v14);
    goto LABEL_32;
  }
  v23 = *(_DWORD *)(IsNotifyOnList + 104);
  if ( !v23 || (v22 & 8) != 0 )
  {
LABEL_16:
    v12->IoStatus.Information = (ULONG_PTR)PoolWithTag;
    v12->Tail.Overlay.CurrentStackLocation->Control |= v14;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v12->Tail.Overlay.ListEntry;
    v21 = (struct _LIST_ENTRY *)PoolWithTag[7];
    if ( v21->Flink != (struct _LIST_ENTRY *)(PoolWithTag + 6) )
      __fastfail(3u);
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(PoolWithTag + 6);
    v12->Tail.Overlay.ListEntry.Blink = v21;
    v21->Flink = &p_ListEntry->ListEntry;
    PoolWithTag[7] = p_ListEntry;
    _InterlockedAdd((volatile signed __int32 *)PoolWithTag + 28, v14);
    FsRtlNotifySetCancelRoutine((__int64)v12, 0LL);
    goto LABEL_32;
  }
  *(_DWORD *)(IsNotifyOnList + 104) = 0;
  *(_DWORD *)(IsNotifyOnList + 108) = 0;
  FsRtlNotifyCompleteIrp(v12, IsNotifyOnList, v23, 0, 0);
LABEL_32:
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
  v24 = SubjectContext;
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(v24, 0);
  }
}
