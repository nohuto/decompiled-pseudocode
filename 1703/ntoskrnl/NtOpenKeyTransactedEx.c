/*
 * XREFs of NtOpenKeyTransactedEx @ 0x14042D618
 * Callers:
 *     NtOpenKeyTransacted @ 0x14065EC70 (NtOpenKeyTransacted.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     CmpTransDereferenceTransaction @ 0x14042DE48 (CmpTransDereferenceTransaction.c)
 *     CmOpenKey @ 0x14052CA30 (CmOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx(int a1, int a2, int a3, int a4, HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rbx
  int v12; // edi
  NTSTATUS v13; // eax
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v16; // [rsp+38h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  v10 = ObReferenceObjectByHandle(
          Handle,
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
            Handle,
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
      v12 = CmOpenKey(a1, a2, a3, a4, v11);
  }
  if ( v11 )
    CmpTransDereferenceTransaction(v11);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
