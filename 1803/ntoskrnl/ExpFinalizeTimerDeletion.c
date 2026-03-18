/*
 * XREFs of ExpFinalizeTimerDeletion @ 0x1400D1DE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFinalizeTimerDeletion(unsigned __int64 P)
{
  void (__fastcall *v2)(unsigned __int64); // rax

  v2 = (void (__fastcall *)(unsigned __int64))(KiWaitAlways ^ _byteswap_uint64(P ^ __ROL8__(
                                                                                     KiWaitNever ^ *(_QWORD *)(P + 136),
                                                                                     KiWaitNever)));
  if ( v2 )
    v2(KiWaitAlways ^ _byteswap_uint64(P ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(P + 144), KiWaitNever)));
  *(_BYTE *)(P + 152) = ~ExpTimerFreedCookie;
  ExFreePoolWithTag((PVOID)P, 0x6D547845u);
}
