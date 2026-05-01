/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__ @ 0x180001120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__())(wil::details *__hidden this, int)
{
  unsigned int (__fastcall *result)(wil::details *__hidden, int); // rax

  wil::details::g_pfnGetModuleName = (const char *(*)(void))wil::details::GetCurrentModuleName;
  result = wil::details::RtlNtStatusToDosErrorNoTeb;
  wil::details::g_pfnRtlNtStatusToDosErrorNoTeb = (unsigned int (*)(int))wil::details::RtlNtStatusToDosErrorNoTeb;
  return result;
}
