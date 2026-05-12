/*
 * XREFs of WPP_SF_qdddD @ 0x1C002C618
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0013BF0 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdddD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_f0a7e80c00373f324f5040e12af5bb70_Traceguids);
}
