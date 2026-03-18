/*
 * XREFs of NtRestoreKey @ 0x14065FA60
 * Callers:
 *     <none>
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
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14068B520 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG RestoreFlags)
{
  KPROCESSOR_MODE PreviousMode; // si
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v8; // r14
  NTSTATUS v9; // ebx
  void *v10; // r8
  int v11; // eax
  HANDLE v12; // rdi
  int v13; // eax
  PVOID v14; // rdx
  struct _KTHREAD *v15; // rax
  int v16; // eax
  __int64 v17; // r9
  unsigned int v18; // eax
  PVOID Object; // [rsp+48h] [rbp-19h] BYREF
  _SLIST_ENTRY v21; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v22[7]; // [rsp+60h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+7Fh] BYREF

  memset(v22, 0, 0x30uLL);
  Object = 0LL;
  Handle = 0LL;
  *((_QWORD *)&v21.Next + 1) = &v21;
  v21.Next = &v21;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v8 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
      v11 = IoConvertFileHandleToKernelHandle((int)FileHandle, &Handle);
      v12 = Handle;
      v9 = v11;
      if ( v11 < 0 )
      {
LABEL_22:
        if ( v12 && v12 != FileHandle )
          ZwClose(v12);
        goto LABEL_25;
      }
    }
    else
    {
      v12 = FileHandle;
      Handle = FileHandle;
    }
    v13 = CmObReferenceObjectByHandle(KeyHandle, 0, v10, PreviousMode, &Object, 0LL);
    v14 = Object;
    v9 = v13;
    if ( v13 >= 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
      {
        v15 = KeGetCurrentThread();
        --v15->KernelApcDisable;
        if ( !CmpCallBackCount
          || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
          || (v22[0] = Object,
              v22[1] = Handle,
              LODWORD(v22[2]) = RestoreFlags,
              v16 = CmpCallCallBacksEx(0x29u, (__int64)v22, 0LL, 1, 0x2Au, 0LL, &v21),
              v9 = v16,
              v16 >= 0) )
        {
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          LOBYTE(v17) = PreviousMode;
          v8 = 0;
          v18 = CmRestoreKey(Object, Handle, RestoreFlags, v17);
          v9 = CmPostCallbackNotificationEx(42, (__int64)Object, v18, (__int64)v22, 0LL, &v21);
        }
        else if ( v16 == -1073740541 )
        {
          v9 = 0;
        }
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v14 = Object;
        v12 = Handle;
      }
      else
      {
        v9 = -1073741790;
      }
    }
    if ( v14 )
      ObfDereferenceObject(v14);
    goto LABEL_22;
  }
LABEL_25:
  if ( v8 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v9;
}
