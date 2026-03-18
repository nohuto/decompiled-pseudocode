/*
 * XREFs of NtSaveMergedKeys @ 0x140688F10
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x140180800 (ZwSaveMergedKeys.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     CmConvertHandleToKernelHandle @ 0x1404E34C4 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x1404E3874 (CmCheckNoTxContext.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406B71C0 (IoConvertFileHandleToKernelHandle.c)
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
  HANDLE v13; // rdi
  void *v14; // r8
  __int64 v15; // r9
  HANDLE HighPrecedenceKeyHandlea; // [rsp+30h] [rbp-20h] BYREF
  HANDLE FileHandlea; // [rsp+38h] [rbp-18h] BYREF
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v20; // [rsp+48h] [rbp-8h] BYREF
  HANDLE LowPrecedenceKeyHandlea; // [rsp+98h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v7 = CmCheckNoTxContext();
    if ( v7 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        v7 = -1073741727;
        goto LABEL_21;
      }
      if ( PreviousMode == 1 )
      {
        HighPrecedenceKeyHandlea = 0LL;
        LowPrecedenceKeyHandlea = 0LL;
        FileHandlea = 0LL;
        v7 = CmConvertHandleToKernelHandle(HighPrecedenceKeyHandle, v9, 1, 0, &HighPrecedenceKeyHandlea);
        if ( v7 >= 0 )
        {
          v7 = CmConvertHandleToKernelHandle(LowPrecedenceKeyHandle, v11, 1, 0, &LowPrecedenceKeyHandlea);
          if ( v7 >= 0 )
          {
            LOBYTE(v12) = 1;
            v7 = IoConvertFileHandleToKernelHandle(FileHandle, v12, 2LL, 0LL, &FileHandlea);
            if ( v7 >= 0 )
            {
              v13 = FileHandlea;
              v7 = ZwSaveMergedKeys(HighPrecedenceKeyHandlea, LowPrecedenceKeyHandlea, FileHandlea);
              if ( v13 )
                ZwClose(v13);
            }
            if ( LowPrecedenceKeyHandlea )
              ZwClose(LowPrecedenceKeyHandlea);
          }
          if ( HighPrecedenceKeyHandlea )
            ZwClose(HighPrecedenceKeyHandlea);
        }
      }
      else
      {
        v7 = CmObReferenceObjectByHandle(HighPrecedenceKeyHandle, 0, v10, PreviousMode, &v20, 0LL);
        if ( v7 >= 0 )
        {
          v7 = CmObReferenceObjectByHandle(LowPrecedenceKeyHandle, 0, v14, PreviousMode, &Object, 0LL);
          if ( v7 >= 0 )
          {
            LOBYTE(v15) = PreviousMode;
            v7 = CmSaveMergedKeys(v20, Object, FileHandle, v15);
            ObfDereferenceObject(Object);
          }
          ObfDereferenceObject(v20);
        }
      }
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    goto LABEL_21;
  }
  v7 = -1073741431;
LABEL_21:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v7;
}
