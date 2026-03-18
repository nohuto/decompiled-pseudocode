/*
 * XREFs of NtCompressKey @ 0x1406EBDBC
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvMarkBaseBlockDirty @ 0x14049360C (HvMarkBaseBlockDirty.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmCheckNoTxContext @ 0x14049E830 (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1405848F4 (CmpWaitOnHiveWriteQueue.c)
 */

NTSTATUS __stdcall NtCompressKey(HANDLE Key)
{
  NTSTATUS v2; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  void *v4; // r8
  int v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v16[48]; // [rsp+38h] [rbp-40h] BYREF

  Object = 0LL;
  v2 = CmCheckNoTxContext();
  if ( v2 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v5 = (unsigned __int8)Key & 3;
      v2 = CmObReferenceObjectByHandle(Key, 0x20006u, v4, PreviousMode, &Object, 0LL);
      if ( v2 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
        {
          v7 = Object;
          while ( 1 )
          {
            CmpLockRegistryExclusive();
            v2 = CmpPerformKeyBodyDeletionCheck((__int64)v7, 0LL);
            if ( v2 < 0 )
              break;
            v8 = v7[1];
            v9 = *(_QWORD *)(v8 + 24);
            if ( *(_DWORD *)(v8 + 32) != *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) )
            {
              v2 = -1073741811;
              break;
            }
            v10 = *(_DWORD *)(v9 + 4280);
            if ( (v10 & 2) != 0 )
            {
              ExAcquirePushLockExclusiveEx(v9 + 72, 0LL);
              v11 = v9 + 4256;
            }
            else
            {
              if ( (v10 & 1) == 0 )
              {
                CmpAttachToRegistryProcess((__int64)v16);
                v12 = *(_QWORD *)(v7[1] + 24LL);
                if ( (PVOID)v12 == CmpMasterHive || !*(_QWORD *)(v12 + 1536) || (*(_DWORD *)(v12 + 160) & 0x8003) != 0 )
                {
                  v2 = -1073741811;
                }
                else
                {
                  v13 = 0;
                  if ( v5 != 3 )
                    v13 = v5;
                  *(_QWORD *)(*(_QWORD *)(v12 + 64) + 168LL) = v13;
                  HvMarkBaseBlockDirty(v12);
                  v2 = 0;
                }
                KiUnstackDetachProcess((__int64)v16, 0LL);
                break;
              }
              ExAcquirePushLockExclusiveEx(v9 + 72, 0LL);
              v11 = v9 + 4232;
            }
            CmpWaitOnHiveWriteQueue(v9, v11, 0);
          }
          CmpUnlockRegistry();
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
        else
        {
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v2 = -1073741431;
        }
      }
      if ( Object )
        ObfDereferenceObject(Object);
    }
    else
    {
      return -1073741727;
    }
  }
  return v2;
}
