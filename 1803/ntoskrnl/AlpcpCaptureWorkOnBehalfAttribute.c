/*
 * XREFs of AlpcpCaptureWorkOnBehalfAttribute @ 0x1405709E4
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1404CDA80 (AlpcpCaptureAttributes.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x140060460 (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1400604FC (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x140060570 (IoThreadToProcess.c)
 *     PoEnergyEstimationEnabled @ 0x140060580 (PoEnergyEstimationEnabled.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

__int64 __fastcall AlpcpCaptureWorkOnBehalfAttribute(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID WorkOnBehalfThread; // rax
  void *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v8);
  v4 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
  {
    v5 = (__int64)WorkOnBehalfThread;
    goto LABEL_5;
  }
  if ( *(_QWORD *)&IoThreadToProcess(CurrentThread)[2].ThreadSeed[16] || PoEnergyEstimationEnabled() )
  {
    v5 = (__int64)CurrentThread;
LABEL_5:
    PsEncodeThreadWorkOnBehalfTicket(v5, &v9);
    v6 = v9;
    goto LABEL_6;
  }
  v6 = 0LL;
LABEL_6:
  if ( v8 )
    ObfDereferenceObject(v4);
  *(_QWORD *)(a1 + 64) = v6;
  return 0LL;
}
