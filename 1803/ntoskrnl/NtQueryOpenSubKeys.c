/*
 * XREFs of NtQueryOpenSubKeys @ 0x1406EC1AC
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     CmpSearchForOpenSubKeys @ 0x14054CAAC (CmpSearchForOpenSubKeys.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  char v4; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  BOOLEAN v7; // r14
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  ULONG v11; // ebx
  PVOID Object; // [rsp+48h] [rbp-190h] BYREF
  _BYTE v14[48]; // [rsp+50h] [rbp-188h] BYREF
  _QWORD v15[38]; // [rsp+80h] [rbp-158h] BYREF

  Object = 0LL;
  memset(v15, 0, 0x128uLL);
  v15[19] = &v15[18];
  v15[18] = &v15[18];
  memset(&v15[27], 0, 0x50uLL);
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v7 )
  {
    LOBYTE(v6) = KeGetCurrentThread()->PreviousMode;
    if ( (_BYTE)v6 == 1 )
    {
      v9 = (__int64)HandleCount;
      if ( (unsigned __int64)HandleCount >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
    v8 = ObReferenceObjectByNameEx(
           (__int64)TargetKey,
           v6,
           0x20019u,
           (__int64)CmKeyObjectType,
           v6,
           (__int64)v15,
           &Object);
    if ( v8 >= 0 )
    {
      CmpLockRegistryExclusive();
      v4 = 1;
      v10 = Object;
      v8 = CmpPerformKeyBodyDeletionCheck((__int64)Object, 0LL);
      if ( v8 >= 0 )
      {
        if ( (*(_DWORD *)(v10[1] + 176LL) & 0x40000) != 0 )
        {
          CmpAttachToRegistryProcess((__int64)v14);
          v11 = CmpSearchForOpenSubKeys(v10[1], 0, 0LL);
          KiUnstackDetachProcess((__int64)v14, 0LL);
          CmpUnlockRegistry();
          v4 = 0;
          *HandleCount = v11;
          v8 = 0;
        }
        else
        {
          v8 = -1073741811;
        }
      }
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v8 = -1073741431;
  }
  if ( v4 )
    CmpUnlockRegistry();
  CmpCleanupParseContext((__int64)v15, 0);
  if ( v7 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v8;
}
