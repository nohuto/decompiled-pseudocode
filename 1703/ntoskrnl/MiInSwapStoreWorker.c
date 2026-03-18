/*
 * XREFs of MiInSwapStoreWorker @ 0x1404C9E00
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1404C9D98 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     MiInSwapStoreContextDereference @ 0x1404C9E98 (MiInSwapStoreContextDereference.c)
 *     SmSwapStore @ 0x1404C9EBC (SmSwapStore.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1)
{
  int v2; // edi
  $5BC46E0569261879018906DEC3127961 v4; // [rsp+20h] [rbp-48h] BYREF

  KiStackAttachProcess(*(_KPROCESS **)(a1 + 32), 0, (__int64)&v4);
  v2 = SmSwapStore(2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v2 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32), v2);
  KiUnstackDetachProcess(&v4, 0LL);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
