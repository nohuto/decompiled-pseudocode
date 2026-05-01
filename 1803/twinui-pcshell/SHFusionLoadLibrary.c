/*
 * XREFs of SHFusionLoadLibrary @ 0x1801015DC
 * Callers:
 *     DelayLoadCC @ 0x180101674 (DelayLoadCC.c)
 * Callees:
 *     SHActivateContext @ 0x180101478 (SHActivateContext.c)
 */

HMODULE SHFusionLoadLibrary()
{
  HMODULE Library; // rbx
  ULONG_PTR ulCookie; // [rsp+30h] [rbp+8h] BYREF

  ulCookie = 0LL;
  if ( !SHActivateContext(&ulCookie) )
    return 0LL;
  Library = LoadLibraryExW(L"comctl32.dll", 0LL, 0x4000u);
  if ( ulCookie )
    DeactivateActCtx(0, ulCookie);
  return Library;
}
