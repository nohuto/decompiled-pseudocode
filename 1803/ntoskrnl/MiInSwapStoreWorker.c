/*
 * XREFs of MiInSwapStoreWorker @ 0x14052CFF0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiInSwapStoreContextDereference @ 0x14052D088 (MiInSwapStoreContextDereference.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14052D0AC (EtwTraceWorkingSetInSwapStoreFail.c)
 *     SmSwapStore @ 0x14052D160 (SmSwapStore.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1)
{
  int v2; // edi
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF

  KiStackAttachProcess(*(_KPROCESS **)(a1 + 32), 0, (__int64)v4);
  v2 = SmSwapStore(2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v2 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32));
  KiUnstackDetachProcess((__int64)v4, 0LL);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
