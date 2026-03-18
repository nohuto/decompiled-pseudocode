/*
 * XREFs of __crtInitCritSecAndSpinCountEx @ 0x1800C30D8
 * Callers:
 *     __scrt_initialize_thread_safe_statics @ 0x1800C2DC0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitCritSecAndSpinCountEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}
