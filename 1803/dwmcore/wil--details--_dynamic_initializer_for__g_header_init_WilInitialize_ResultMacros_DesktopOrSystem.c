/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__ @ 0x1800010E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__())(wil::details *__hidden this)
{
  unsigned __int8 (__fastcall *result)(wil::details *__hidden); // rax

  wil::details::g_pfnGetModuleName = (const char *(*)(void))wil::details::GetCurrentModuleName;
  wil::details::g_pfnDebugBreak = wil::details::DebugBreak;
  wil::details::g_pfnRtlNtStatusToDosErrorNoTeb = (unsigned int (*)(int))wil::details::RtlNtStatusToDosErrorNoTeb;
  result = wil::details::RtlDllShutdownInProgress;
  wil::details::g_pfnRtlDllShutdownInProgress = (unsigned __int8 (*)(void))wil::details::RtlDllShutdownInProgress;
  return result;
}
