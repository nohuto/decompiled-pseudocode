/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x140756470
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiProcessWsInSwapSupport @ 0x14007F488 (MiProcessWsInSwapSupport.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwTraceWorkingSetSwap @ 0x14052C59C (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x14052D1E0 (MiFreeWorkingSetSwapContext.c)
 */

LONG_PTR __fastcall MiInSwapSharedWorkingSetWorker(__int64 a1)
{
  __int64 v1; // rdi
  __int64 ProcessPartition; // rax
  _DWORD v5[10]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v6[48]; // [rsp+48h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  KiStackAttachProcess((_KPROCESS *)v1, 0, (__int64)v6);
  v5[0] = 1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 3, (__int64)v5);
  _InterlockedExchange((volatile __int32 *)(v1 + 1848), 1000);
  MiProcessWsInSwapSupport(*(_QWORD *)(a1 + 8), 1u);
  _InterlockedExchange((volatile __int32 *)(v1 + 1848), 0);
  v5[8] = -1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 1, (__int64)v5);
  KiUnstackDetachProcess((__int64)v6, 0LL);
  ProcessPartition = MiGetProcessPartition(v1);
  *(_QWORD *)(a1 + 48) = 0LL;
  MiFreeWorkingSetSwapContext(ProcessPartition, a1);
  return ObfDereferenceObjectWithTag((PVOID)v1, 0x73576D4Du);
}
