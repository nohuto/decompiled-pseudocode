/*
 * XREFs of ExpFinalizeTimerDeletion @ 0x140149160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall ExpFinalizeTimerDeletion(__int64 a1)
{
  void (__fastcall *v2)(unsigned __int64); // rax

  v2 = (void (__fastcall *)(unsigned __int64))(KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(
                                                                                      KiWaitNever ^ *(_QWORD *)(a1 + 136),
                                                                                      KiWaitNever)));
  if ( v2 )
    v2(KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 144), KiWaitNever)));
  *(_BYTE *)(a1 + 152) = ~ExpTimerFreedCookie;
  ExFreePoolWithTag((PVOID)a1, 0x6D547845u);
}
