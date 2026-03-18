/*
 * XREFs of NtRollbackRegistryTransaction @ 0x14042D2A4
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     CmpRollbackLightWeightTransaction @ 0x14042D390 (CmpRollbackLightWeightTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtRollbackRegistryTransaction(HANDLE Handle, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // eax
  PVOID v6; // rdi
  int v7; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

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
        v7 = CmpRollbackLightWeightTransaction(Object);
        if ( v7 >= 0 )
          v7 = 0;
      }
      if ( v6 )
        ObfDereferenceObject(v6);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v7;
}
