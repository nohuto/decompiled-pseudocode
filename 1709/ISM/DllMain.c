/*
 * XREFs of DllMain @ 0x1800CA1EC
 * Callers:
 *     dllmain_dispatch @ 0x1800C9FC0 (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 && !pRawDllMain )
    DisableThreadLibraryCalls(hinstDLL);
  return 1;
}
