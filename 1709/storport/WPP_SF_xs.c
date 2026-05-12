/*
 * XREFs of WPP_SF_xs @ 0x1C0036580
 * Callers:
 *     StorPortGetDeviceBase @ 0x1C001A1D0 (StorPortGetDeviceBase.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_xs(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx

  if ( a5 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_BYTE *)(a5 + v5) );
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids);
}
