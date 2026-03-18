/*
 * XREFs of __crtInitCritSecAndSpinCountEx @ 0x140004240
 * Callers:
 *     sub_140003A30 @ 0x140003A30 (sub_140003A30.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitCritSecAndSpinCountEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}
