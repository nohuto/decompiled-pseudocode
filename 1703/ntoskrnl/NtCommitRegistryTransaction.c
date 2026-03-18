/*
 * XREFs of NtCommitRegistryTransaction @ 0x14065E760
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     CmpCommitLightWeightTransaction @ 0x140669900 (CmpCommitLightWeightTransaction.c)
 */

__int64 __fastcall NtCommitRegistryTransaction(HANDLE Handle, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  NTSTATUS v6; // eax
  PVOID v7; // rdi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    if ( a2 )
    {
      v5 = -1073741811;
    }
    else
    {
      v6 = ObReferenceObjectByHandle(
             Handle,
             8u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v7 = Object;
      v5 = v6;
      if ( v6 >= 0 )
      {
        v5 = CmpCommitLightWeightTransaction(Object);
        if ( v5 >= 0 )
          v5 = 0;
      }
      if ( v7 )
        ObfDereferenceObject(v7);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v5;
}
