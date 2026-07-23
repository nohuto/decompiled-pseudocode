/*
 * XREFs of NtOpenKeyTransactedEx @ 0x14054C768
 * Callers:
 *     NtOpenKeyTransacted @ 0x1406EC040 (NtOpenKeyTransacted.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     CmpTransDereferenceTransaction @ 0x14054C8AC (CmpTransDereferenceTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmOpenKey @ 0x1405AD380 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebp
  int v9; // r15d
  BOOLEAN v10; // al
  struct _KTHREAD *v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rbx
  NTSTATUS v14; // edi
  NTSTATUS v15; // eax
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v18; // [rsp+38h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = (int)ObjectAttributes;
  v9 = (int)KeyHandle;
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v11 = KeGetCurrentThread();
  if ( !v10 )
  {
    KeLeaveCriticalRegionThread((__int64)v11);
    return -1073741431;
  }
  v12 = ObReferenceObjectByHandle(TransactionHandle, 4u, CmRegistryTransactionType, v11->PreviousMode, &Object, 0LL);
  v13 = (__int64)Object;
  v14 = v12;
  if ( v12 == -1073741788 )
  {
    v15 = ObReferenceObjectByHandle(
            TransactionHandle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v18,
            0LL);
    v13 = (__int64)v18;
    v14 = v15;
    goto LABEL_4;
  }
  if ( v12 >= 0 )
  {
    v13 = (unsigned __int64)Object | 1;
LABEL_4:
    if ( v14 >= 0 )
      v14 = CmOpenKey(v9, DesiredAccess, v7, OpenOptions, v13);
  }
  if ( v13 )
    CmpTransDereferenceTransaction(v13);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v14;
}
