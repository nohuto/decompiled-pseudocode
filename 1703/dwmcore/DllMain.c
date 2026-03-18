/*
 * XREFs of DllMain @ 0x1800D45D8
 * Callers:
 *     __DllMainCRTStartup @ 0x1800D3D20 (__DllMainCRTStartup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
