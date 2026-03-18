/*
 * XREFs of _guard_icall_bugcheck @ 0x140189850
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x1400D9B10 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall @ 0x1401898B0 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_bugcheck(ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0LL, 0LL, 0LL, BugCheckParameter4);
}
