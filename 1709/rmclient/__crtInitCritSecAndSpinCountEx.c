/*
 * XREFs of __crtInitCritSecAndSpinCountEx @ 0x180007EF4
 * Callers:
 *     __scrt_initialize_thread_safe_statics @ 0x1800077A0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitCritSecAndSpinCountEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}
