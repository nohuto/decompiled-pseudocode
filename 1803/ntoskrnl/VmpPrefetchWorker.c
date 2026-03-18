/*
 * XREFs of VmpPrefetchWorker @ 0x1407A0FF0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     VmpPrefetchVirtualAddresses @ 0x1402AC55C (VmpPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall VmpPrefetchWorker(PVOID P)
{
  _BYTE v2[48]; // [rsp+20h] [rbp-48h] BYREF

  KiStackAttachProcess(*((_KPROCESS **)P + 4), 0, (__int64)v2);
  VmpPrefetchVirtualAddresses(*(volatile LONG **)(*((_QWORD *)P + 4) + 1864LL), *((_QWORD **)P + 5), *((_QWORD *)P + 6));
  KiUnstackDetachProcess((__int64)v2, 0LL);
  ObfDereferenceObject(*((PVOID *)P + 4));
  ExFreePoolWithTag(P, 0);
}
