/*
 * XREFs of NtOpenKeyTransactedEx @ 0x140568A70
 * Callers:
 *     NtOpenKeyTransacted @ 0x140687A84 (NtOpenKeyTransacted.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     CmOpenKey @ 0x1404AC170 (CmOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x140568FAC (CmpTransDereferenceTransaction.c)
 */

NTSTATUS __cdecl NtOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rbx
  NTSTATUS v12; // edi
  NTSTATUS v13; // eax
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v16; // [rsp+38h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  v10 = ObReferenceObjectByHandle(
          TransactionHandle,
          4u,
          CmRegistryTransactionType,
          KeGetCurrentThread()->PreviousMode,
          &Object,
          0LL);
  v11 = (__int64)Object;
  v12 = v10;
  if ( v10 == -1073741788 )
  {
    v13 = ObReferenceObjectByHandle(
            TransactionHandle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v16,
            0LL);
    v11 = (__int64)v16;
    v12 = v13;
    goto LABEL_4;
  }
  if ( v10 >= 0 )
  {
    v11 = (unsigned __int64)Object | 1;
LABEL_4:
    if ( v12 >= 0 )
      v12 = CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, OpenOptions, v11);
  }
  if ( v11 )
    CmpTransDereferenceTransaction(v11);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v12;
}
