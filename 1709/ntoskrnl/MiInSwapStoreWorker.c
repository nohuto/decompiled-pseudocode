/*
 * XREFs of MiInSwapStoreWorker @ 0x1404444B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiInSwapStoreContextDereference @ 0x140444548 (MiInSwapStoreContextDereference.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14044456C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     SmSwapStore @ 0x1404445CC (SmSwapStore.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1)
{
  int v2; // edi
  $709EDFC2F9E0D4565D6AA3C4377BC643 v4; // [rsp+20h] [rbp-48h] BYREF

  KiStackAttachProcess(*(_KPROCESS **)(a1 + 32), 0, (__int64)&v4);
  v2 = SmSwapStore(2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v2 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32));
  KiUnstackDetachProcess(&v4, 0LL);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
