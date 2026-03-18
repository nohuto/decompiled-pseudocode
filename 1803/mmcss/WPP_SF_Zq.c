/*
 * XREFs of WPP_SF_Zq @ 0x1C000209C
 * Callers:
 *     CiDispatchInitialize @ 0x1C000C0B8 (CiDispatchInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_Zq(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_0cf46c375129332dca7ac6861072a04e_Traceguids);
}
