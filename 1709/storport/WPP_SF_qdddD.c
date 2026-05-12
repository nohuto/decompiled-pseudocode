/*
 * XREFs of WPP_SF_qdddD @ 0x1C0030F48
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0015084 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdddD(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           &WPP_6a92be7ca9eb3b415b66b736f6ea9340_Traceguids);
}
