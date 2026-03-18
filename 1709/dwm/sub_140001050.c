/*
 * XREFs of sub_140001050 @ 0x140001050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 (__fastcall *sub_140001050())(wil::details *__hidden this)
{
  unsigned __int8 (__fastcall *result)(wil::details *__hidden); // rax

  wil::details::g_pfnGetModuleName = (const char *(*)(void))wil::details::GetCurrentModuleName;
  wil::details::g_pfnDebugBreak = wil::details::DebugBreak;
  result = wil::details::RtlDllShutdownInProgress;
  wil::details::g_pfnRtlDllShutdownInProgress = (unsigned __int8 (*)(void))wil::details::RtlDllShutdownInProgress;
  return result;
}
