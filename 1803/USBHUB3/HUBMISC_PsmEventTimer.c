/*
 * XREFs of HUBMISC_PsmEventTimer @ 0x1C0027860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_PsmEventTimer(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64))(a2 + 1240))(a2, 1002LL);
}
