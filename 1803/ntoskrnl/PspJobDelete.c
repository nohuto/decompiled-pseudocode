/*
 * XREFs of PspJobDelete @ 0x14008A250
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1401A8F00 (ZwDeleteWnfStateName.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PsInvokeWin32Callout @ 0x1404B6460 (PsInvokeWin32Callout.c)
 *     ExMapHandleToPointer @ 0x1404B7800 (ExMapHandleToPointer.c)
 *     PspEmptyPropertySet @ 0x1404B9534 (PspEmptyPropertySet.c)
 *     PsReturnSharedPoolQuota @ 0x1404EBEB8 (PsReturnSharedPoolQuota.c)
 *     ExDestroyHandle @ 0x140512040 (ExDestroyHandle.c)
 *     PspJobDeleteStorageArrays @ 0x14052F740 (PspJobDeleteStorageArrays.c)
 *     PspJobIoRateControlDisable @ 0x14052F770 (PspJobIoRateControlDisable.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14052F7E8 (PspGetJobLockHierarchyForDeletion.c)
 *     PspUnlockJobListExclusive @ 0x14052FD2C (PspUnlockJobListExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x140530470 (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14053064C (PspUnlockJobsAndProcessExclusive.c)
 *     PspLockRootJobExclusive @ 0x140534968 (PspLockRootJobExclusive.c)
 *     PspLockJobConditionally @ 0x140534D04 (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x140536FD0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140537010 (PspLockJobExclusive.c)
 *     PspUnlockJobConditionally @ 0x140537718 (PspUnlockJobConditionally.c)
 *     PspRemoveCpuRateControl @ 0x140552120 (PspRemoveCpuRateControl.c)
 *     IoFreeMiniCompletionPacket @ 0x14055F6A0 (IoFreeMiniCompletionPacket.c)
 *     PspRemoveIoAttribution @ 0x14057CDC4 (PspRemoveIoAttribution.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     PspDeleteSilo @ 0x1407794DC (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x14077BAB4 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x14077BD1C (PspRemoveRateControl.c)
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
  char *v10; // rdx
  struct _KTHREAD *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  LONG_PTR result; // rax
  void *v15; // rcx
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
      LODWORD(v25[4]) = 4;
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
    PspLockJobExclusive(Object, CurrentThread);
    PsInvokeWin32Callout(6LL, &v22, 1LL);
    PspUnlockJob(Object, CurrentThread);
  }
  v3 = (void *)*((_QWORD *)Object + 57);
  *((_DWORD *)Object + 64) = 0;
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x624A7350u);
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
  if ( v5[1] != Object + 24 || (v6 = (PVOID *)*((_QWORD *)Object + 4), *v6 != Object + 24) )
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
  v10 = (char *)*((_QWORD *)Object + 130);
  if ( v10 != Object + 1040 )
  {
    if ( *((char **)v10 + 1) != v9 || (v16 = (char **)*((_QWORD *)Object + 131), *v16 != v9) )
      __fastfail(3u);
    *v16 = v10;
    *((_QWORD *)v10 + 1) = v16;
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
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  v12 = *((_DWORD *)Object + 305);
  if ( v12 )
  {
    v13 = ExMapHandleToPointer(PspUniqueJobIdTable, v12);
    ExDestroyHandle(PspUniqueJobIdTable, *((unsigned int *)Object + 305), v13);
  }
  result = KeLeaveCriticalRegionThread(KeGetCurrentThread());
  v15 = (void *)*((_QWORD *)Object + 193);
  if ( v15 )
    return ObfDereferenceObjectWithTag(v15, 0x624A7350u);
  return result;
}
