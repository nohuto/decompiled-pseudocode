/*
 * XREFs of __crtInitializeCriticalSectionEx @ 0x1800D2E44
 * Callers:
 *     _Mtxinit @ 0x1800D2E24 (_Mtxinit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, DWORD Flags)
{
  return InitializeCriticalSectionEx(lpCriticalSection, dwSpinCount, Flags);
}
