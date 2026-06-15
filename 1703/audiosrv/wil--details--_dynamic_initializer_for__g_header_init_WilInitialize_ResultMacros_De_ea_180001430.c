/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem_SuppressPrivateApiUse__ @ 0x180001430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const char *(__fastcall *wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem_SuppressPrivateApiUse__())(wil::details *__hidden this)
{
  const char *(__fastcall *result)(wil::details *__hidden); // rax

  result = wil::details::GetCurrentModuleName;
  wil::details::g_pfnGetModuleName = (const char *(*)(void))wil::details::GetCurrentModuleName;
  return result;
}
