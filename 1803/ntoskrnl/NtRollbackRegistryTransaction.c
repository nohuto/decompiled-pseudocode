/*
 * XREFs of NtRollbackRegistryTransaction @ 0x14054BA64
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpRollbackLightWeightTransaction @ 0x14054BB90 (CmpRollbackLightWeightTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtRollbackRegistryTransaction(HANDLE Handle, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // eax
  PVOID v6; // rdi
  int v7; // ebx
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v10[48]; // [rsp+38h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    if ( a2 )
    {
      v7 = -1073741811;
    }
    else
    {
      v5 = ObReferenceObjectByHandle(
             Handle,
             0x10u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v6 = Object;
      v7 = v5;
      if ( v5 >= 0 )
      {
        CmpAttachToRegistryProcess((__int64)v10);
        v7 = CmpRollbackLightWeightTransaction(v6);
        KiUnstackDetachProcess((__int64)v10, 0LL);
        if ( v7 >= 0 )
          v7 = 0;
      }
      if ( v6 )
        ObfDereferenceObject(v6);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v7;
}
