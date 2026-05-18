/*
 * XREFs of _DllMainStartup @ 0x180004020
 * Callers:
 *     <none>
 * Callees:
 *     AvCreateProcessHeap @ 0x180006FDC (AvCreateProcessHeap.c)
 *     AvDestroyProcessHeap @ 0x180006FEC (AvDestroyProcessHeap.c)
 *     _DllMainCRTStartup @ 0x180008430 (_DllMainCRTStartup.c)
 */

BOOL __stdcall DllMainStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  void *v3; // rdi
  HINSTANCE v4; // rsi
  int v5; // ebx

  v3 = lpReserved;
  v4 = hinstDLL;
  v5 = 1;
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      ++avalonutil_proc_attached;
      if ( (int)AvCreateProcessHeap() < 0 )
        return 0;
      lpReserved = v3;
      fdwReason = 1;
      hinstDLL = v4;
      return DllMainCRTStartup(hinstDLL, fdwReason, lpReserved);
    }
    if ( fdwReason - 2 <= 1 )
      return DllMainCRTStartup(hinstDLL, fdwReason, lpReserved);
  }
  else if ( g_fAlwaysDetach || !lpReserved )
  {
    if ( avalonutil_proc_attached <= 0 )
      return 0;
    --avalonutil_proc_attached;
    v5 = DllMainCRTStartup(hinstDLL, 0, lpReserved);
    if ( (int)AvDestroyProcessHeap() < 0 )
      return 0;
  }
  return v5;
}
