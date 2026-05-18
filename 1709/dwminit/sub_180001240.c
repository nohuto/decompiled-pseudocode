/*
 * XREFs of sub_180001240 @ 0x180001240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *sub_180001240()
{
  void *result; // rax

  wil::details::g_pfnGetContextAndNotifyFailure = (void (*)(struct wil::FailureInfo *, char *, unsigned __int64))wil::details::GetContextAndNotifyFailure;
  wil::details_abi::g_pProcessLocalData = (__int64)&wil::details::g_processLocalData;
  result = &wil::details::g_threadFailureCallbacks;
  wil::details::g_pThreadFailureCallbacks = (__int64)&wil::details::g_threadFailureCallbacks;
  return result;
}
