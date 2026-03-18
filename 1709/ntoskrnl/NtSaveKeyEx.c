/*
 * XREFs of NtSaveKeyEx @ 0x140688C8C
 * Callers:
 *     NtSaveKey @ 0x140688C70 (NtSaveKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
 *     CmCheckNoTxContext @ 0x1404E3874 (CmCheckNoTxContext.c)
 *     CmDumpKey @ 0x14069C6E4 (CmDumpKey.c)
 *     CmSaveKey @ 0x14069D3CC (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406B71C0 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  KPROCESSOR_MODE PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v8; // r13
  NTSTATUS v9; // ebx
  __int64 v10; // rdx
  void *v11; // r8
  int v12; // eax
  HANDLE v13; // rdi
  __int64 v14; // r9
  struct _KTHREAD *v15; // rax
  PVOID v16; // rdi
  HANDLE v17; // r14
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // r8
  PVOID Object; // [rsp+48h] [rbp-19h] BYREF
  _SLIST_ENTRY v23; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v24[7]; // [rsp+60h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+7Fh] BYREF

  memset(v24, 0, 0x30uLL);
  Object = 0LL;
  Handle = 0LL;
  *((_QWORD *)&v23.Next + 1) = &v23;
  v23.Next = &v23;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v8 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v9 = CmCheckNoTxContext();
  if ( v9 >= 0 )
  {
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v9 = -1073741727;
      goto LABEL_31;
    }
    if ( ((Flags - 1) & 0xFFFFFFFC) != 0 || Flags == 3 )
    {
      v9 = -1073741811;
      goto LABEL_31;
    }
    if ( PreviousMode == 1 )
    {
      LOBYTE(v10) = 1;
      v12 = IoConvertFileHandleToKernelHandle(FileHandle, v10, 2LL, 0LL, &Handle);
      v13 = Handle;
      v9 = v12;
      if ( v12 < 0 )
      {
LABEL_27:
        if ( v13 && v13 != FileHandle )
          ZwClose(v13);
        goto LABEL_31;
      }
    }
    else
    {
      v13 = FileHandle;
      Handle = FileHandle;
    }
    v9 = CmObReferenceObjectByHandle(KeyHandle, 0, v11, PreviousMode, &Object, 0LL);
    if ( v9 >= 0 )
    {
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      v16 = Object;
      v17 = Handle;
      if ( !CmpCallBackCount
        || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
        || (v24[0] = v16,
            v24[1] = v17,
            LODWORD(v24[2]) = Flags,
            v18 = CmpCallCallBacksEx(0x2Bu, (__int64)v24, 0LL, 1, 0x2Cu, 0LL, &v23),
            v9 = v18,
            v18 >= 0) )
      {
        if ( Flags == 4 )
        {
          v19 = CmDumpKey(v16, v17);
        }
        else
        {
          v20 = 5LL;
          LOBYTE(v14) = PreviousMode;
          if ( Flags != 2 )
            v20 = 3LL;
          v19 = CmSaveKey(v16, v17, v20, v14);
        }
        v9 = CmPostCallbackNotificationEx(0x2Cu, (__int64)v16, v19, (__int64)v24, 0LL, &v23);
      }
      else if ( v18 == -1073740541 )
      {
        v9 = 0;
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v13 = Handle;
    }
    if ( Object )
      ObfDereferenceObject(Object);
    goto LABEL_27;
  }
LABEL_31:
  if ( v8 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v9;
}
