/*
 * XREFs of AlpcpCaptureWorkOnBehalfAttribute @ 0x140445FC4
 * Callers:
 *     AlpcpCaptureAttributes @ 0x140525C00 (AlpcpCaptureAttributes.c)
 * Callees:
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14002872C (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x14002FAA0 (IoThreadToProcess.c)
 *     PsGetWorkOnBehalfThread @ 0x1400E7974 (PsGetWorkOnBehalfThread.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PoEnergyEstimationEnabled @ 0x140110540 (PoEnergyEstimationEnabled.c)
 */

__int64 __fastcall AlpcpCaptureWorkOnBehalfAttribute(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID WorkOnBehalfThread; // rax
  void *v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v8);
  v4 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
  {
    v7 = (__int64)WorkOnBehalfThread;
  }
  else
  {
    if ( !*(_QWORD *)&IoThreadToProcess(CurrentThread)[2].ThreadSeed[10] && !PoEnergyEstimationEnabled() )
    {
      v5 = 0LL;
      goto LABEL_5;
    }
    v7 = (__int64)CurrentThread;
  }
  PsEncodeThreadWorkOnBehalfTicket(v7, &v9);
  v5 = v9;
LABEL_5:
  if ( v8 )
    ObfDereferenceObject(v4);
  *(_QWORD *)(a1 + 64) = v5;
  return 0LL;
}
