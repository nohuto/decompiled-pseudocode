/*
 * XREFs of NtCreateKeyTransacted @ 0x14042D75C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     CmpTransDereferenceTransaction @ 0x14042DE48 (CmpTransDereferenceTransaction.c)
 *     CmCreateKey @ 0x14042DEF0 (CmCreateKey.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCreateKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        HANDLE TransactionHandle,
        PULONG Disposition)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v12; // eax
  unsigned __int64 v13; // rbx
  NTSTATUS v15; // eax
  NTSTATUS Key; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v18; // [rsp+48h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  v12 = ObReferenceObjectByHandle(
          TransactionHandle,
          4u,
          CmRegistryTransactionType,
          KeGetCurrentThread()->PreviousMode,
          &Object,
          0LL);
  v13 = (unsigned __int64)Object;
  Key = v12;
  if ( v12 == -1073741788 )
  {
    v15 = ObReferenceObjectByHandle(
            TransactionHandle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v18,
            0LL);
    v13 = (unsigned __int64)v18;
    Key = v15;
LABEL_6:
    if ( Key >= 0 )
      Key = CmCreateKey(KeyHandle, DesiredAccess, ObjectAttributes);
    goto LABEL_8;
  }
  if ( v12 >= 0 )
  {
    v13 = (unsigned __int64)Object | 1;
    goto LABEL_6;
  }
LABEL_8:
  if ( v13 )
    CmpTransDereferenceTransaction(v13);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return Key;
}
