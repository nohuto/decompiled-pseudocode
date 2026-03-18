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

__int64 __fastcall NtOpenKeyTransactedEx(int a1, int a2, int a3, int a4, HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v10; // al
  struct _KTHREAD *v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rbx
  int v14; // edi
  NTSTATUS v15; // eax
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v18; // [rsp+38h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v11 = KeGetCurrentThread();
  if ( !v10 )
  {
    KeLeaveCriticalRegionThread((__int64)v11);
    return (unsigned int)-1073741431;
  }
  v12 = ObReferenceObjectByHandle(Handle, 4u, CmRegistryTransactionType, v11->PreviousMode, &Object, 0LL);
  v13 = (__int64)Object;
  v14 = v12;
  if ( v12 == -1073741788 )
  {
    v15 = ObReferenceObjectByHandle(
            Handle,
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
      v14 = CmOpenKey(a1, a2, a3, a4, v13);
  }
  if ( v13 )
    CmpTransDereferenceTransaction(v13);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v14;
}
