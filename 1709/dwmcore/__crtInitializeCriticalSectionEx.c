/*
 * XREFs of __crtInitializeCriticalSectionEx @ 0x1800C2B0C
 * Callers:
 *     _Mtxinit @ 0x1800C2AEC (_Mtxinit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, DWORD Flags)
{
  return InitializeCriticalSectionEx(lpCriticalSection, dwSpinCount, Flags);
}
