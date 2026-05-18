/*
 * XREFs of ?GetCurrentModuleName@details@wil@@YAPEBDXZ @ 0x180005670
 * Callers:
 *     <none>
 * Callees:
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x18000553C (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 */

const char *__fastcall wil::details::GetCurrentModuleName(wil::details *this)
{
  if ( !`wil::details::GetCurrentModuleName'::`2'::s_fModuleValid )
  {
    wil::details::GetModuleInformation(
      (LPCWSTR)wil::details::RecordFailFast,
      0LL,
      &`wil::details::GetCurrentModuleName'::`2'::s_szModule,
      (char *)0x40);
    `wil::details::GetCurrentModuleName'::`2'::s_fModuleValid = 1;
  }
  return (const char *)&`wil::details::GetCurrentModuleName'::`2'::s_szModule;
}
