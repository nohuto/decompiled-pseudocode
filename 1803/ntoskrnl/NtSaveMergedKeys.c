/*
 * XREFs of NtSaveMergedKeys @ 0x1406ED214
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x1401AA440 (ZwSaveMergedKeys.c)
 *     CmCheckNoTxContext @ 0x14049E830 (CmCheckNoTxContext.c)
 *     CmConvertHandleToKernelHandle @ 0x14049EB74 (CmConvertHandleToKernelHandle.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     CmSaveMergedKeys @ 0x1407025D4 (CmSaveMergedKeys.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14071BE50 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  void *v9; // rdx
  void *v10; // r8
  void *v11; // rdx
  __int64 v12; // rdx
  void *v13; // r8
  PVOID Object; // [rsp+30h] [rbp-29h] BYREF
  PVOID v16; // [rsp+38h] [rbp-21h] BYREF
  HANDLE FileHandlea; // [rsp+40h] [rbp-19h] BYREF
  HANDLE LowPrecedenceKeyHandlea; // [rsp+48h] [rbp-11h] BYREF
  HANDLE HighPrecedenceKeyHandlea; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v20[48]; // [rsp+58h] [rbp-1h] BYREF

  LowPrecedenceKeyHandlea = 0LL;
  HighPrecedenceKeyHandlea = 0LL;
  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  Object = 0LL;
  FileHandlea = 0LL;
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v7 = CmCheckNoTxContext();
    if ( v7 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        if ( PreviousMode )
        {
          v7 = CmConvertHandleToKernelHandle(HighPrecedenceKeyHandle, v9, PreviousMode, 0, &HighPrecedenceKeyHandlea);
          if ( v7 >= 0 )
          {
            v7 = CmConvertHandleToKernelHandle(LowPrecedenceKeyHandle, v11, PreviousMode, 0, &LowPrecedenceKeyHandlea);
            if ( v7 >= 0 )
            {
              LOBYTE(v12) = PreviousMode;
              v7 = IoConvertFileHandleToKernelHandle(FileHandle, v12, 2LL, 0LL, &FileHandlea);
              if ( v7 >= 0 )
                v7 = ZwSaveMergedKeys(HighPrecedenceKeyHandlea, LowPrecedenceKeyHandlea, FileHandlea);
            }
          }
        }
        else
        {
          v7 = CmObReferenceObjectByHandle(HighPrecedenceKeyHandle, 0, v10, 0, &v16, 0LL);
          if ( v7 >= 0 )
          {
            v7 = CmObReferenceObjectByHandle(LowPrecedenceKeyHandle, 0, v13, 0, &Object, 0LL);
            if ( v7 >= 0 )
            {
              CmpAttachToRegistryProcess((__int64)v20);
              v7 = CmSaveMergedKeys(v16, Object, FileHandle, 0LL);
              KiUnstackDetachProcess((__int64)v20, 0LL);
            }
          }
        }
      }
      else
      {
        v7 = -1073741727;
      }
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( Object )
      ObfDereferenceObject(Object);
    if ( v16 )
      ObfDereferenceObject(v16);
    if ( FileHandlea )
      ZwClose(FileHandlea);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = -1073741431;
  }
  if ( LowPrecedenceKeyHandlea )
    ZwClose(LowPrecedenceKeyHandlea);
  if ( HighPrecedenceKeyHandlea )
    ZwClose(HighPrecedenceKeyHandlea);
  return v7;
}
