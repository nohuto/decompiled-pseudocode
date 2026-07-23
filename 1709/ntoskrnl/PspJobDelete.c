/*
 * XREFs of PspJobDelete @ 0x1400D3DE0
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x14001ED40 (ExDeleteResourceLite.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14017F2E0 (ZwDeleteWnfStateName.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PspRemoveIoAttribution @ 0x1404459B4 (PspRemoveIoAttribution.c)
 *     PsReturnSharedPoolQuota @ 0x140486060 (PsReturnSharedPoolQuota.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     PsInvokeWin32Callout @ 0x1404D24E0 (PsInvokeWin32Callout.c)
 *     ExMapHandleToPointer @ 0x1404D4D40 (ExMapHandleToPointer.c)
 *     PspEmptyPropertySet @ 0x1404D6A50 (PspEmptyPropertySet.c)
 *     ExDestroyHandle @ 0x1404FBEAC (ExDestroyHandle.c)
 *     PspRemoveCpuRateControl @ 0x14050A35C (PspRemoveCpuRateControl.c)
 *     IoFreeMiniCompletionPacket @ 0x14050AFE0 (IoFreeMiniCompletionPacket.c)
 *     PspJobDeleteStorageArrays @ 0x14050B3C8 (PspJobDeleteStorageArrays.c)
 *     PspJobIoRateControlDisable @ 0x14050B3F8 (PspJobIoRateControlDisable.c)
 *     PspUnlockJobListExclusive @ 0x14050B934 (PspUnlockJobListExclusive.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14050B974 (PspGetJobLockHierarchyForDeletion.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405102E0 (PspLockJobExclusive.c)
 *     PspUnlockJobConditionally @ 0x140510B94 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140510BC0 (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x140510C18 (PspLockRootJobExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x1405127BC (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14051283C (PspUnlockJobsAndProcessExclusive.c)
 *     PspDeleteSilo @ 0x14071534C (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x140717A94 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x140717CFC (PspRemoveRateControl.c)
 */

_QWORD *__fastcall PspJobDelete(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rax
  struct _KTHREAD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  _QWORD *result; // rax
  void *v14; // rcx
  __int64 *v15; // rcx
  __int64 **v16; // rdx
  void *v17; // rcx
  void *v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-31h]
  __int64 v22; // [rsp+40h] [rbp-29h] BYREF
  int v23; // [rsp+48h] [rbp-21h]
  __int64 v24; // [rsp+50h] [rbp-19h]
  _QWORD v25[5]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v26[40]; // [rsp+80h] [rbp+17h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspEmptyPropertySet(a1 + 1264);
  PspJobDeleteStorageArrays(a1);
  if ( *(_QWORD *)(a1 + 1008) || *(_QWORD *)(a1 + 1296) )
  {
    PspLockRootJobExclusive(a1, CurrentThread, &v20);
    PspLockJobConditionally(a1, &v20);
    if ( *(_QWORD *)(a1 + 1008) )
      PspRemoveCpuRateControl(a1);
    v19 = *(_QWORD *)(a1 + 1296);
    if ( v19 )
    {
      memset(v25, 0, sizeof(v25));
      LODWORD(v25[4]) |= 4u;
      v25[0] = *(_QWORD *)(v19 + 56);
      PspNetRateControlDispatch(v25);
      PspRemoveRateControl(a1);
    }
    PspUnlockJobConditionally(a1, &v20);
    PspUnlockJob(v20, CurrentThread);
  }
  PspJobIoRateControlDisable(a1);
  if ( *(_QWORD *)(a1 + 1336) )
  {
    PspLockRootJobExclusive(a1, CurrentThread, &v20);
    PspLockJobConditionally(a1, &v20);
    if ( *(_QWORD *)(a1 + 1336) )
      PspRemoveIoAttribution((PVOID)a1);
    PspUnlockJobConditionally(a1, &v20);
    PspUnlockJob(v20, CurrentThread);
  }
  v21 = *(_DWORD *)(a1 + 480);
  if ( v21 <= 0xFFFFFFFD )
  {
    v22 = a1;
    v23 = 2;
    v24 = 0LL;
    PspLockJobExclusive(a1, CurrentThread);
    PsInvokeWin32Callout(6LL, &v22, 1LL);
    PspUnlockJob(a1, CurrentThread);
  }
  v3 = *(void **)(a1 + 456);
  *(_DWORD *)(a1 + 256) = 0;
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x624A7350u);
    *(_QWORD *)(a1 + 456) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 432);
  if ( v4 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v4 + 8));
    ExFreePoolWithTag(*(PVOID *)(a1 + 432), 0x614A7350u);
    PsReturnSharedPoolQuota(*(PVOID *)(a1 + 440));
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v5 + 8) != a1 + 24 || (v6 = *(_QWORD **)(a1 + 32), *v6 != a1 + 24) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  PspUnlockJobListExclusive(CurrentThread);
  v7 = *(void **)(a1 + 984);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x624A7350u);
    v18 = *(void **)(a1 + 992);
    *(_QWORD *)(a1 + 984) = 0LL;
    PsReturnSharedPoolQuota(v18);
  }
  v8 = *(_QWORD *)(a1 + 1000);
  if ( v8 )
    IoFreeMiniCompletionPacket(v8);
  if ( (*(_DWORD *)(a1 + 1304) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(a1 + 880));
  PspGetJobLockHierarchyForDeletion(a1, v26);
  PspLockJobsAndProcessExclusive(v26, 0LL, CurrentThread, 0LL);
  v9 = (__int64 *)(a1 + 1040);
  if ( (__int64 *)*v9 != v9 )
  {
    v15 = (__int64 *)*v9;
    if ( *(__int64 **)(*v9 + 8) != v9 || (v16 = *(__int64 ***)(a1 + 1048), *v16 != v9) )
      __fastfail(3u);
    *v16 = v15;
    v15[1] = (__int64)v16;
    *(_QWORD *)(a1 + 1048) = a1 + 1040;
    *v9 = (__int64)v9;
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(a1 + 1072), 0x746C6644u);
    *(_QWORD *)(a1 + 1072) = 0LL;
  }
  PspUnlockJobsAndProcessExclusive(v26, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(a1 + 56));
  if ( *(_QWORD *)(a1 + 1104) )
  {
    v17 = *(void **)(a1 + 1112);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x624A7350u);
      *(_QWORD *)(a1 + 1112) = 0LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000000) != 0 )
    PspDeleteSilo(a1);
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  v11 = *(_DWORD *)(a1 + 1220);
  if ( v11 )
  {
    v12 = ExMapHandleToPointer(PspUniqueJobIdTable, v11);
    ExDestroyHandle(PspUniqueJobIdTable, *(unsigned int *)(a1 + 1220), v12);
  }
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v14 = *(void **)(a1 + 1544);
  if ( v14 )
    return (_QWORD *)ObfDereferenceObject(v14);
  return result;
}
