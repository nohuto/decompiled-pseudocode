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

__int64 __fastcall NtCreateKeyTransacted(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v11; // eax
  unsigned __int64 v12; // rbx
  NTSTATUS v14; // eax
  int Key; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v17; // [rsp+48h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  v11 = ObReferenceObjectByHandle(
          Handle,
          4u,
          CmRegistryTransactionType,
          KeGetCurrentThread()->PreviousMode,
          &Object,
          0LL);
  v12 = (unsigned __int64)Object;
  Key = v11;
  if ( v11 == -1073741788 )
  {
    v14 = ObReferenceObjectByHandle(
            Handle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v17,
            0LL);
    v12 = (unsigned __int64)v17;
    Key = v14;
LABEL_6:
    if ( Key >= 0 )
      Key = CmCreateKey(a1, a2, a3);
    goto LABEL_8;
  }
  if ( v11 >= 0 )
  {
    v12 = (unsigned __int64)Object | 1;
    goto LABEL_6;
  }
LABEL_8:
  if ( v12 )
    CmpTransDereferenceTransaction(v12);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)Key;
}
