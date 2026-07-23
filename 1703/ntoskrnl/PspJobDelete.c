/*
 * XREFs of PspJobDelete @ 0x14011D430
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14017F940 (ZwDeleteWnfStateName.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspRemoveCpuRateControl @ 0x140437174 (PspRemoveCpuRateControl.c)
 *     IoFreeMiniCompletionPacket @ 0x140470DB0 (IoFreeMiniCompletionPacket.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x140479E68 (PspUnlockJobConditionally.c)
 *     PsReturnSharedPoolQuota @ 0x1404F5AC0 (PsReturnSharedPoolQuota.c)
 *     ExDestroyHandle @ 0x1404F81FC (ExDestroyHandle.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 *     ExMapHandleToPointer @ 0x1404FA960 (ExMapHandleToPointer.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     PspEmptyPropertySet @ 0x14053F0CC (PspEmptyPropertySet.c)
 *     PspLockJobConditionally @ 0x14054755C (PspLockJobConditionally.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14054BD0C (PspUnlockJobsAndProcessExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x14054C4B8 (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14054C5A0 (PspGetJobLockHierarchyForDeletion.c)
 *     PspUnlockJobListExclusive @ 0x14054CAD4 (PspUnlockJobListExclusive.c)
 *     PspJobIoRateControlDisable @ 0x14054CB14 (PspJobIoRateControlDisable.c)
 *     PspJobDeleteStorageArrays @ 0x14054CB78 (PspJobDeleteStorageArrays.c)
 *     PspRemoveIoAttribution @ 0x14054DD78 (PspRemoveIoAttribution.c)
 *     PspLockRootJobExclusive @ 0x140560DC4 (PspLockRootJobExclusive.c)
 *     PspDeleteSilo @ 0x1406DEEDC (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x1406E1760 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x1406E194C (PspRemoveRateControl.c)
 */

LONG_PTR __fastcall PspJobDelete(char *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  char **v5; // rdx
  PVOID *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  char *v9; // rax
  struct _KTHREAD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  LONG_PTR result; // rax
  void *v14; // rcx
  __int64 v15; // r8
  char **v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-31h]
  char *v22; // [rsp+40h] [rbp-29h] BYREF
  int v23; // [rsp+48h] [rbp-21h]
  __int64 v24; // [rsp+50h] [rbp-19h]
  _QWORD v25[5]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v26[40]; // [rsp+80h] [rbp+17h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspEmptyPropertySet(Object + 1264);
  PspJobDeleteStorageArrays(Object);
  if ( *((_QWORD *)Object + 126) || *((_QWORD *)Object + 162) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v20);
    PspLockJobConditionally(Object, &v20);
    if ( *((_QWORD *)Object + 126) )
      PspRemoveCpuRateControl(Object);
    v19 = *((_QWORD *)Object + 162);
    if ( v19 )
    {
      memset(v25, 0, sizeof(v25));
      LODWORD(v25[4]) |= 4u;
      v25[0] = *(_QWORD *)(v19 + 56);
      PspNetRateControlDispatch(v25);
      PspRemoveRateControl(Object);
    }
    PspUnlockJobConditionally(Object, &v20);
    PspUnlockJob(v20, CurrentThread);
  }
  PspJobIoRateControlDisable(Object);
  if ( *((_QWORD *)Object + 167) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v20);
    PspLockJobConditionally(Object, &v20);
    if ( *((_QWORD *)Object + 167) )
      PspRemoveIoAttribution(Object);
    PspUnlockJobConditionally(Object, &v20);
    PspUnlockJob(v20, CurrentThread);
  }
  v21 = *((_DWORD *)Object + 120);
  if ( v21 <= 0xFFFFFFFD )
  {
    v22 = Object;
    v23 = 2;
    v24 = 0LL;
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
    PsInvokeWin32Callout(6LL, &v22, 1LL);
    PspUnlockJob(Object, CurrentThread);
  }
  v3 = (void *)*((_QWORD *)Object + 57);
  *((_DWORD *)Object + 64) = 0;
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    *((_QWORD *)Object + 57) = 0LL;
  }
  v4 = *((_QWORD *)Object + 54);
  if ( v4 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v4 + 8));
    ExFreePoolWithTag(*((PVOID *)Object + 54), 0x614A7350u);
    PsReturnSharedPoolQuota(*((PVOID *)Object + 55));
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
  v5 = (char **)*((_QWORD *)Object + 3);
  v6 = (PVOID *)*((_QWORD *)Object + 4);
  if ( v5[1] != Object + 24 || *v6 != Object + 24 )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (char *)v6;
  PspUnlockJobListExclusive(CurrentThread);
  v7 = (void *)*((_QWORD *)Object + 123);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x624A7350u);
    v18 = (void *)*((_QWORD *)Object + 124);
    *((_QWORD *)Object + 123) = 0LL;
    PsReturnSharedPoolQuota(v18);
  }
  v8 = *((_QWORD *)Object + 125);
  if ( v8 )
    IoFreeMiniCompletionPacket(v8);
  if ( (*((_DWORD *)Object + 326) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)Object + 110);
  PspGetJobLockHierarchyForDeletion(Object, v26);
  PspLockJobsAndProcessExclusive(v26, 0LL, CurrentThread, 0LL);
  v9 = Object + 1040;
  if ( *(char **)v9 != v9 )
  {
    v15 = *(_QWORD *)v9;
    v16 = (char **)*((_QWORD *)Object + 131);
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || *v16 != v9 )
      __fastfail(3u);
    *v16 = (char *)v15;
    *(_QWORD *)(v15 + 8) = v16;
    *((_QWORD *)Object + 131) = Object + 1040;
    *(_QWORD *)v9 = v9;
    ObDereferenceObjectDeferDeleteWithTag(*((PVOID *)Object + 134), 0x746C6644u);
    *((_QWORD *)Object + 134) = 0LL;
  }
  PspUnlockJobsAndProcessExclusive(v26, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(Object + 56));
  if ( *((_QWORD *)Object + 138) )
  {
    v17 = (void *)*((_QWORD *)Object + 139);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x624A7350u);
      *((_QWORD *)Object + 139) = 0LL;
    }
  }
  if ( (*((_DWORD *)Object + 326) & 0x40000000) != 0 )
    PspDeleteSilo(Object);
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  v11 = *((_DWORD *)Object + 305);
  if ( v11 )
  {
    v12 = ExMapHandleToPointer(PspUniqueJobIdTable, v11);
    ExDestroyHandle(PspUniqueJobIdTable, *((unsigned int *)Object + 305), v12);
  }
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v14 = (void *)*((_QWORD *)Object + 192);
  if ( v14 )
    return ObfDereferenceObjectWithTag(v14, 0x624A7350u);
  return result;
}
