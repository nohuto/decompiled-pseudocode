/*
 * XREFs of NtRestoreKey @ 0x1406889E0
 * Callers:
 *     <none>
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
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406B71C0 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG RestoreFlags)
{
  KPROCESSOR_MODE PreviousMode; // si
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v8; // r14
  NTSTATUS v9; // ebx
  __int64 v10; // rdx
  void *v11; // r8
  int v12; // eax
  HANDLE v13; // rdi
  int v14; // eax
  PVOID v15; // rdx
  struct _KTHREAD *v16; // rax
  int v17; // eax
  __int64 v18; // r9
  unsigned int v19; // eax
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
  v8 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v8 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  v9 = CmCheckNoTxContext();
  if ( v9 >= 0 )
  {
    if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v9 = -1073741727;
      goto LABEL_25;
    }
    if ( PreviousMode == 1 )
    {
      LOBYTE(v10) = 1;
      v12 = IoConvertFileHandleToKernelHandle(FileHandle, v10, 1LL, 0LL, &Handle);
      v13 = Handle;
      v9 = v12;
      if ( v12 < 0 )
      {
LABEL_22:
        if ( v13 && v13 != FileHandle )
          ZwClose(v13);
        goto LABEL_25;
      }
    }
    else
    {
      v13 = FileHandle;
      Handle = FileHandle;
    }
    v14 = CmObReferenceObjectByHandle(KeyHandle, 0, v11, PreviousMode, &Object, 0LL);
    v15 = Object;
    v9 = v14;
    if ( v14 >= 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
      {
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        if ( !CmpCallBackCount
          || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
          || (v23[0] = Object,
              v23[1] = Handle,
              LODWORD(v23[2]) = RestoreFlags,
              v17 = CmpCallCallBacksEx(0x29u, (__int64)v23, 0LL, 1, 0x2Au, 0LL, &v22),
              v9 = v17,
              v17 >= 0) )
        {
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          LOBYTE(v18) = PreviousMode;
          v8 = 0;
          v19 = CmRestoreKey(Object, Handle, RestoreFlags, v18);
          v9 = CmPostCallbackNotificationEx(0x2Au, (__int64)Object, v19, (__int64)v23, 0LL, &v22);
        }
        else if ( v17 == -1073740541 )
        {
          v9 = 0;
        }
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v15 = Object;
        v13 = Handle;
      }
      else
      {
        v9 = -1073741790;
      }
    }
    if ( v15 )
      ObfDereferenceObject(v15);
    goto LABEL_22;
  }
LABEL_25:
  if ( v8 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v9;
}
