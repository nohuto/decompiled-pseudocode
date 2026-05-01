/*
 * XREFs of sub_180001120 @ 0x180001120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int (__fastcall *sub_180001120())(wil::details *__hidden this, int)
{
  unsigned int (__fastcall *result)(wil::details *__hidden, int); // rax

  wil::details::g_pfnGetModuleName = (const char *(*)(void))wil::details::GetCurrentModuleName;
  wil::details::g_pfnDebugBreak = wil::details::DebugBreak;
  result = wil::details::RtlNtStatusToDosErrorNoTeb;
  wil::details::g_pfnRtlNtStatusToDosErrorNoTeb = (unsigned int (*)(int))wil::details::RtlNtStatusToDosErrorNoTeb;
  return result;
}
