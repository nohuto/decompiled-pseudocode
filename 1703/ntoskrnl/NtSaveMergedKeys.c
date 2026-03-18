/*
 * XREFs of NtSaveMergedKeys @ 0x14065FF88
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x140180E20 (ZwSaveMergedKeys.c)
 *     CmObReferenceObjectByHandle @ 0x14048F490 (CmObReferenceObjectByHandle.c)
 *     CmConvertHandleToKernelHandle @ 0x1404D54E8 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x1404D58A4 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14068B520 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  void *v9; // rdx
  void *v10; // r8
  void *v11; // rdx
  HANDLE v12; // rdi
  void *v13; // r8
  __int64 v14; // r9
  HANDLE HighPrecedenceKeyHandlea; // [rsp+30h] [rbp-20h] BYREF
  HANDLE FileHandlea; // [rsp+38h] [rbp-18h] BYREF
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v19; // [rsp+48h] [rbp-8h] BYREF
  HANDLE LowPrecedenceKeyHandlea; // [rsp+98h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v7 = CmCheckNoTxContext();
    if ( v7 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
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
            v7 = IoConvertFileHandleToKernelHandle((int)FileHandle, &FileHandlea);
            if ( v7 >= 0 )
            {
              v12 = FileHandlea;
              v7 = ZwSaveMergedKeys(HighPrecedenceKeyHandlea, LowPrecedenceKeyHandlea, FileHandlea);
              if ( v12 )
                ZwClose(v12);
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
        v7 = CmObReferenceObjectByHandle(HighPrecedenceKeyHandle, 0, v10, PreviousMode, &v19, 0LL);
        if ( v7 >= 0 )
        {
          v7 = CmObReferenceObjectByHandle(LowPrecedenceKeyHandle, 0, v13, PreviousMode, &Object, 0LL);
          if ( v7 >= 0 )
          {
            LOBYTE(v14) = PreviousMode;
            v7 = CmSaveMergedKeys(v19, Object, FileHandle, v14);
            ObfDereferenceObject(Object);
          }
          ObfDereferenceObject(v19);
        }
      }
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    goto LABEL_21;
  }
  v7 = -1073741431;
LABEL_21:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}
