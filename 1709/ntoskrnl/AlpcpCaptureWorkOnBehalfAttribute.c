/*
 * XREFs of AlpcpCaptureWorkOnBehalfAttribute @ 0x140573684
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1404A1A00 (AlpcpCaptureAttributes.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140025A00 (PoEnergyEstimationEnabled.c)
 *     IoThreadToProcess @ 0x14006A740 (IoThreadToProcess.c)
 *     PsGetWorkOnBehalfThread @ 0x14006AD64 (PsGetWorkOnBehalfThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14011BF20 (PsEncodeThreadWorkOnBehalfTicket.c)
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
