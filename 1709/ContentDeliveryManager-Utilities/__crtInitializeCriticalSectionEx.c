/*
 * XREFs of __crtInitializeCriticalSectionEx @ 0x1800A04C0
 * Callers:
 *     _Mtxinit @ 0x18009F7E4 (_Mtxinit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, DWORD Flags)
{
  return InitializeCriticalSectionEx(lpCriticalSection, dwSpinCount, Flags);
}
