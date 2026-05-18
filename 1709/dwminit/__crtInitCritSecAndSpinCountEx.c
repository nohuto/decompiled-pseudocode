/*
 * XREFs of __crtInitCritSecAndSpinCountEx @ 0x180009588
 * Callers:
 *     sub_1800090D0 @ 0x1800090D0 (sub_1800090D0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitCritSecAndSpinCountEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}
