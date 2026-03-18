/*
 * XREFs of DllMain @ 0x1800DCF5C
 * Callers:
 *     dllmain_dispatch @ 0x1800DC5AC (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
