/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem_SuppressPrivateApiUse__ @ 0x180001670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__stdcall *wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem_SuppressPrivateApiUse__())()
{
  void (__stdcall *result)(); // rax

  wil::details::g_pfnGetModuleName = (const char *(*)(void))wil::details::GetCurrentModuleName;
  wil::details::g_pfnGetModuleInformation = (bool (*)(void *, unsigned int *, char *, unsigned __int64))wil::details::GetModuleInformation;
  result = wil::details::DebugBreak;
  wil::details::g_pfnDebugBreak = wil::details::DebugBreak;
  return result;
}
