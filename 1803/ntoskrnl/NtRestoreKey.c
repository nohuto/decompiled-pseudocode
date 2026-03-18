/*
 * XREFs of NtRestoreKey @ 0x1406ECCC8
 * Callers:
 *     <none>
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
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14071BE50 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG RestoreFlags)
{
  char v6; // r12
  KPROCESSOR_MODE PreviousMode; // si
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ebx
  __int64 v10; // rdx
  void *v11; // r8
  int v12; // eax
  HANDLE v13; // rdi
  int v14; // eax
  PVOID v15; // rdx
  struct _KTHREAD *v16; // rax
  PVOID v17; // rdi
  HANDLE v18; // r14
  int v19; // eax
  __int64 v20; // r9
  HANDLE Handle; // [rsp+40h] [rbp-69h] BYREF
  PVOID Object; // [rsp+48h] [rbp-61h] BYREF
  _SLIST_ENTRY v24; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v25[6]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v26[48]; // [rsp+90h] [rbp-19h] BYREF

  memset(v25, 0, sizeof(v25));
  Object = 0LL;
  Handle = 0LL;
  v6 = 0;
  *((_QWORD *)&v24.Next + 1) = &v24;
  v24.Next = &v24;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v9 = CmCheckNoTxContext();
    if ( v9 < 0 )
    {
LABEL_27:
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return v9;
    }
    if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v9 = -1073741727;
      goto LABEL_27;
    }
    if ( PreviousMode == 1 )
    {
      LOBYTE(v10) = 1;
      v12 = IoConvertFileHandleToKernelHandle(FileHandle, v10, 1LL, 0LL, &Handle);
      v13 = Handle;
      v9 = v12;
      if ( v12 < 0 )
      {
LABEL_24:
        if ( v13 && v13 != FileHandle )
          ZwClose(v13);
        goto LABEL_27;
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
    if ( v14 < 0 )
    {
LABEL_22:
      if ( v15 )
        ObfDereferenceObject(v15);
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) != 0 )
    {
      v9 = -1073741790;
      goto LABEL_22;
    }
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = Object;
    v18 = Handle;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v25[0] = v17;
      v25[1] = v18;
      LODWORD(v25[2]) = RestoreFlags;
      v19 = CmpCallCallBacksEx(0x29u, (__int64)v25, 0LL, 1, 0x2Au, 0LL, &v24);
      v9 = v19;
      if ( v19 < 0 )
      {
        if ( v19 == -1073740541 )
          v9 = 0;
LABEL_21:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v15 = Object;
        v13 = Handle;
        goto LABEL_22;
      }
      v6 = 1;
    }
    CmpAttachToRegistryProcess((__int64)v26);
    LOBYTE(v20) = PreviousMode;
    v9 = CmRestoreKey(v17, v18, RestoreFlags, v20);
    KiUnstackDetachProcess((__int64)v26, 0LL);
    if ( v6 )
      v9 = CmPostCallbackNotificationEx(42, (__int64)v17, v9, (__int64)v25, 0LL, &v24);
    goto LABEL_21;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return -1073741431;
}
