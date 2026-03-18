/*
 * XREFs of VmpPrefetchWorker @ 0x14073DCD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     VmpPrefetchVirtualAddresses @ 0x14027936C (VmpPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall VmpPrefetchWorker(PVOID P)
{
  $709EDFC2F9E0D4565D6AA3C4377BC643 v2; // [rsp+20h] [rbp-48h] BYREF

  KiStackAttachProcess(*((_KPROCESS **)P + 4), 0, (__int64)&v2);
  VmpPrefetchVirtualAddresses(*(volatile LONG **)(*((_QWORD *)P + 4) + 1864LL), *((_QWORD **)P + 5), *((_QWORD *)P + 6));
  KiUnstackDetachProcess(&v2, 0LL);
  ObfDereferenceObject(*((PVOID *)P + 4));
  ExFreePoolWithTag(P, 0);
}
