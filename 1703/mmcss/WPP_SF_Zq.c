/*
 * XREFs of WPP_SF_Zq @ 0x1C0004838
 * Callers:
 *     CiDispatchInitialize @ 0x1C000D160 (CiDispatchInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_Zq(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_dd714108735c30899653f2ca1e788838_Traceguids);
}
