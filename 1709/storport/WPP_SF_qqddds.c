/*
 * XREFs of WPP_SF_qqddds @ 0x1C00310C4
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C00175D0 (RaidBusEnumeratorProcessModifiedNodes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqddds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9)
{
  __int64 v9; // rdx

  if ( a9 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_BYTE *)(a9 + v9) );
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           &WPP_6a92be7ca9eb3b415b66b736f6ea9340_Traceguids);
}
