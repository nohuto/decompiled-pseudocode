/*
 * XREFs of NtSaveKeyEx @ 0x14065FD04
 * Callers:
 *     NtSaveKey @ 0x14065FCF0 (NtSaveKey.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x14048F490 (CmObReferenceObjectByHandle.c)
 *     CmCheckNoTxContext @ 0x1404D58A4 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmDumpKey @ 0x140671674 (CmDumpKey.c)
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14068B520 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  KPROCESSOR_MODE PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v8; // r13
  NTSTATUS v9; // ebx
  void *v10; // r8
  int v11; // eax
  HANDLE v12; // rdi
  __int64 v13; // r9
  struct _KTHREAD *v14; // rax
  PVOID v15; // rdi
  HANDLE v16; // r14
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // r8
  PVOID Object; // [rsp+48h] [rbp-19h] BYREF
  _SLIST_ENTRY v22; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v23[7]; // [rsp+60h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+7Fh] BYREF

  memset(v23, 0, 0x30uLL);
  Object = 0LL;
  Handle = 0LL;
  *((_QWORD *)&v22.Next + 1) = &v22;
  v22.Next = &v22;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v8 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
      v11 = IoConvertFileHandleToKernelHandle((int)FileHandle, &Handle);
      v12 = Handle;
      v9 = v11;
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
    v9 = CmObReferenceObjectByHandle(KeyHandle, 0, v10, PreviousMode, &Object, 0LL);
    if ( v9 >= 0 )
    {
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      v15 = Object;
      v16 = Handle;
      if ( !CmpCallBackCount
        || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
        || (v23[0] = v15,
            v23[1] = v16,
            LODWORD(v23[2]) = Flags,
            v17 = CmpCallCallBacksEx(0x2Bu, (__int64)v23, 0LL, 1, 0x2Cu, 0LL, &v22),
            v9 = v17,
            v17 >= 0) )
      {
        if ( Flags == 4 )
        {
          v18 = CmDumpKey(v15, v16);
        }
        else
        {
          v19 = 5LL;
          LOBYTE(v13) = PreviousMode;
          if ( Flags != 2 )
            v19 = 3LL;
          v18 = CmSaveKey(v15, v16, v19, v13);
        }
        v9 = CmPostCallbackNotificationEx(44, (__int64)v15, v18, (__int64)v23, 0LL, &v22);
      }
      else if ( v17 == -1073740541 )
      {
        v9 = 0;
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v12 = Handle;
    }
    if ( Object )
      ObfDereferenceObject(Object);
    goto LABEL_27;
  }
LABEL_31:
  if ( v8 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v9;
}
