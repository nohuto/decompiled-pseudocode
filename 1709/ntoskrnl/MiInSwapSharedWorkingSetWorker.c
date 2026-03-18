/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x1406EC850
 * Callers:
 *     <none>
 * Callees:
 *     MiProcessWsInSwapSupport @ 0x140003F98 (MiProcessWsInSwapSupport.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiFreeWorkingSetSwapContext @ 0x140444830 (MiFreeWorkingSetSwapContext.c)
 *     EtwTraceWorkingSetSwap @ 0x1405983E0 (EtwTraceWorkingSetSwap.c)
 */

LONG_PTR __fastcall MiInSwapSharedWorkingSetWorker(__int64 a1)
{
  __int64 v1; // rdi
  __int64 ProcessPartition; // rax
  _DWORD v5[10]; // [rsp+20h] [rbp-68h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v6; // [rsp+48h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  KiStackAttachProcess((_KPROCESS *)v1, 0, (__int64)&v6);
  v5[0] = 1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 3, (__int64)v5);
  _InterlockedExchange((volatile __int32 *)(v1 + 1848), 1000);
  MiProcessWsInSwapSupport(*(_QWORD *)(a1 + 8), 1u);
  _InterlockedExchange((volatile __int32 *)(v1 + 1848), 0);
  v5[8] = -1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 1, (__int64)v5);
  KiUnstackDetachProcess(&v6, 0LL);
  ProcessPartition = MiGetProcessPartition(v1);
  *(_QWORD *)(a1 + 48) = 0LL;
  MiFreeWorkingSetSwapContext(ProcessPartition, a1);
  return ObfDereferenceObjectWithTag((PVOID)v1, 0x73576D4Du);
}
