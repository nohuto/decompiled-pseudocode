/*
 * XREFs of WPP_SF_S @ 0x1C0040114
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668 (RaUnitScsiGetDumpPointersIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_S(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return (*(__int64 (__fastcall **)(__int64, __int64, void *, __int64, const wchar_t *, __int64, _QWORD))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
           36LL,
           a4,
           2 * v6,
           0LL);
}
