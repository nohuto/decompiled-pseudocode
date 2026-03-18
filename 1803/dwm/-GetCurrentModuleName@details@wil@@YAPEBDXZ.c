/*
 * XREFs of ?GetCurrentModuleName@details@wil@@YAPEBDXZ @ 0x140006FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x140007008 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 */

const char *__fastcall wil::details::GetCurrentModuleName(wil::details *this)
{
  const char *result; // rax
  unsigned __int64 v2; // [rsp+20h] [rbp-8h]

  if ( `wil::details::GetCurrentModuleName'::`2'::s_fModuleValid )
    return (const char *)&`wil::details::GetCurrentModuleName'::`2'::s_szModule;
  wil::details::GetModuleInformation(
    (LPCWSTR)wil::details::RecordFailFast,
    0LL,
    &`wil::details::GetCurrentModuleName'::`2'::s_szModule,
    (char *)0x40,
    v2);
  result = (const char *)&`wil::details::GetCurrentModuleName'::`2'::s_szModule;
  `wil::details::GetCurrentModuleName'::`2'::s_fModuleValid = 1;
  return result;
}
