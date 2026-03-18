/*
 * XREFs of NtSaveKeyEx @ 0x1406ECF78
 * Callers:
 *     NtSaveKey @ 0x1406ECF5C (NtSaveKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmCheckNoTxContext @ 0x14049E830 (CmCheckNoTxContext.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     CmDumpKey @ 0x1407015A4 (CmDumpKey.c)
 *     CmSaveKey @ 0x1407022E4 (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14071BE50 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  KPROCESSOR_MODE PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  void *v10; // r8
  int v11; // eax
  HANDLE v12; // rdi
  struct _KTHREAD *v13; // rax
  PVOID v14; // rdi
  HANDLE v15; // r14
  int v16; // eax
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // r8
  unsigned int v20; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-69h] BYREF
  PVOID Object; // [rsp+48h] [rbp-61h] BYREF
  _SLIST_ENTRY v24; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v25[6]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v26[48]; // [rsp+90h] [rbp-19h] BYREF

  memset(v25, 0, sizeof(v25));
  Object = 0LL;
  Handle = 0LL;
  *((_QWORD *)&v24.Next + 1) = &v24;
  v24.Next = &v24;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v8 = CmCheckNoTxContext();
    if ( v8 < 0 )
    {
LABEL_31:
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return v8;
    }
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v8 = -1073741727;
      goto LABEL_31;
    }
    if ( ((Flags - 1) & 0xFFFFFFFC) != 0 || Flags == 3 )
    {
      v8 = -1073741811;
      goto LABEL_31;
    }
    if ( PreviousMode == 1 )
    {
      LOBYTE(v9) = 1;
      v11 = IoConvertFileHandleToKernelHandle(FileHandle, v9, 2LL, 0LL, &Handle);
      v12 = Handle;
      v8 = v11;
      if ( v11 < 0 )
      {
LABEL_27:
        if ( v12 && v12 != FileHandle )
          ZwClose(v12);
        goto LABEL_31;
      }
    }
    else
    {
      v12 = FileHandle;
      Handle = FileHandle;
    }
    v8 = CmObReferenceObjectByHandle(KeyHandle, 0, v10, PreviousMode, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      v14 = Object;
      v15 = Handle;
      if ( !CmpCallBackCount
        || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
        || (v25[0] = v14,
            v25[1] = v15,
            LODWORD(v25[2]) = Flags,
            v16 = CmpCallCallBacksEx(0x2Bu, (__int64)v25, 0LL, 1, 0x2Cu, 0LL, &v24),
            v8 = v16,
            v16 >= 0) )
      {
        CmpAttachToRegistryProcess((__int64)v26);
        if ( Flags == 4 )
        {
          v18 = CmDumpKey(v14, v15);
        }
        else
        {
          v19 = 5LL;
          LOBYTE(v17) = PreviousMode;
          if ( Flags != 2 )
            v19 = 3LL;
          v18 = CmSaveKey(v14, v15, v19, v17);
        }
        v20 = v18;
        KiUnstackDetachProcess((__int64)v26, 0LL);
        v8 = CmPostCallbackNotificationEx(44, (__int64)v14, v20, (__int64)v25, 0LL, &v24);
      }
      else if ( v16 == -1073740541 )
      {
        v8 = 0;
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v12 = Handle;
    }
    if ( Object )
      ObfDereferenceObject(Object);
    goto LABEL_27;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return -1073741431;
}
