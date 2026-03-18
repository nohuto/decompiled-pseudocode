/*
 * XREFs of DllMain @ 0x1800C4A28
 * Callers:
 *     __DllMainCRTStartup @ 0x1800C3F00 (__DllMainCRTStartup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
