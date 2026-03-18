/*
 * XREFs of NtCompactKeys @ 0x1406EBADC
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1400078DC (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmCheckNoTxContext @ 0x14049E830 (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     CmpLogUnsupportedOperation @ 0x1406FB130 (CmpLogUnsupportedOperation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCompactKeys(ULONG Count, PHANDLE KeyArray)
{
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rsi
  unsigned int v5; // r13d
  BOOLEAN v6; // r12
  NTSTATUS v7; // edi
  __int64 v8; // rcx
  char v9; // al
  SIZE_T v10; // r12
  void *v11; // r8
  ULONG v12; // r15d
  void **v13; // r12
  struct _KTHREAD *CurrentThread; // rax
  ULONG v15; // r15d
  __int64 *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  __int16 v19; // cx
  PVOID *v20; // rbx
  __int64 v21; // r14
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h]
  __int64 v25; // [rsp+40h] [rbp-38h]
  char v26; // [rsp+90h] [rbp+18h]
  BOOLEAN v27; // [rsp+98h] [rbp+20h]

  TransientPoolWithQuotaTag = 0LL;
  v5 = 0;
  v26 = 0;
  v6 = 0;
  v7 = CmCheckNoTxContext();
  if ( v7 < 0 )
    goto LABEL_4;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
  {
    v7 = -1073741727;
LABEL_4:
    v9 = 0;
    goto LABEL_39;
  }
  if ( !Count )
  {
    v7 = 0;
    goto LABEL_4;
  }
  if ( Count >= 0x1FFFFFFF )
  {
    v7 = -1073741811;
    goto LABEL_4;
  }
  v10 = 8 * Count;
  TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v8, v10, 0x61624D43u);
  if ( !TransientPoolWithQuotaTag )
  {
    v7 = -1073741670;
    v6 = 0;
    goto LABEL_4;
  }
  if ( PreviousMode == 1 && (_DWORD)v10 )
  {
    if ( ((unsigned __int8)KeyArray & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&KeyArray[v10 / 8] > 0x7FFFFFFF0000LL || &KeyArray[v10 / 8] < KeyArray )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(TransientPoolWithQuotaTag, KeyArray, (unsigned int)v10);
  v12 = 0;
  v13 = (void **)TransientPoolWithQuotaTag;
  do
  {
    v7 = CmObReferenceObjectByHandle(*v13, 0x20006u, v11, PreviousMode, (PVOID *)TransientPoolWithQuotaTag + v12, 0LL);
    if ( v7 < 0 )
    {
      v6 = 0;
      v9 = 0;
      goto LABEL_39;
    }
    ++v5;
    ++v12;
    ++v13;
  }
  while ( v12 < Count );
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v27 = v6;
  if ( v6 )
  {
    CmpLockRegistryExclusive();
    v26 = 1;
    v24 = 0LL;
    v15 = 0;
    v16 = (__int64 *)TransientPoolWithQuotaTag;
    while ( 1 )
    {
      v25 = *v16;
      v7 = CmpPerformKeyBodyDeletionCheck(*v16, 0LL);
      if ( v7 < 0 )
        break;
      v17 = *(_QWORD *)(v25 + 8);
      if ( v15 )
      {
        v18 = v24;
      }
      else
      {
        v18 = *(_QWORD *)(v17 + 24);
        v24 = v18;
      }
      if ( v18 != *(_QWORD *)(v17 + 24) || (v19 = *(_WORD *)(v17 + 178), (v19 & 4) != 0) || (v19 & 0x10) != 0 )
      {
        v7 = -1073741811;
        break;
      }
      if ( *(_WORD *)(v17 + 58) )
      {
        v7 = -1073741822;
        break;
      }
      ++v15;
      ++v16;
      if ( v15 >= Count )
      {
        v6 = v27;
        v7 = 0;
        CmpUnlockRegistry();
        CmpLogUnsupportedOperation(7LL);
        goto LABEL_4;
      }
    }
    v6 = v27;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = -1073741431;
  }
  v9 = v26;
LABEL_39:
  if ( v9 )
    CmpUnlockRegistry();
  if ( v6 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( TransientPoolWithQuotaTag )
  {
    if ( v5 )
    {
      v20 = (PVOID *)TransientPoolWithQuotaTag;
      v21 = v5;
      do
      {
        ObfDereferenceObject(*v20++);
        --v21;
      }
      while ( v21 );
    }
    CmSiFreeMemory(TransientPoolWithQuotaTag);
  }
  return v7;
}
