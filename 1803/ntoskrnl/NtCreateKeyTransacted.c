/*
 * XREFs of NtCreateKeyTransacted @ 0x14054C064
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     CmCreateKey @ 0x14049F9B0 (CmCreateKey.c)
 *     CmpTransDereferenceTransaction @ 0x14054C8AC (CmpTransDereferenceTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtCreateKeyTransacted(
        HANDLE *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int128 *a5,
        int a6,
        HANDLE Handle,
        _DWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v12; // eax
  __int64 v13; // r9
  __int64 v14; // rbx
  NTSTATUS v15; // eax
  int Key; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v19; // [rsp+48h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  v12 = ObReferenceObjectByHandle(
          Handle,
          4u,
          CmRegistryTransactionType,
          KeGetCurrentThread()->PreviousMode,
          &Object,
          0LL);
  v14 = (__int64)Object;
  Key = v12;
  if ( v12 == -1073741788 )
  {
    v15 = ObReferenceObjectByHandle(
            Handle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v19,
            0LL);
    v14 = (__int64)v19;
    Key = v15;
    goto LABEL_5;
  }
  if ( v12 >= 0 )
  {
    v14 = (unsigned __int64)Object | 1;
LABEL_5:
    if ( Key >= 0 )
      Key = CmCreateKey(a1, a2, a3, v13, a5, a6, a8, v14);
  }
  if ( v14 )
    CmpTransDereferenceTransaction(v14);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)Key;
}
