/*
 * XREFs of WPP_SF_qdddD @ 0x1C0030854
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0014C34 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdddD(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           &WPP_92cda79a5bec3e9b654e28582cab3340_Traceguids);
}
