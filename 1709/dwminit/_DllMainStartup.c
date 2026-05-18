/*
 * XREFs of _DllMainStartup @ 0x1800043D0
 * Callers:
 *     <none>
 * Callees:
 *     AvCreateProcessHeap @ 0x180003EFC (AvCreateProcessHeap.c)
 *     AvDestroyProcessHeap @ 0x180003F0C (AvDestroyProcessHeap.c)
 *     _DllMainCRTStartup @ 0x180008E40 (_DllMainCRTStartup.c)
 */

BOOL __stdcall DllMainStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  HINSTANCE v3; // rsi
  int v4; // ebx

  v3 = hinstDLL;
  v4 = 1;
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      ++avalonutil_proc_attached;
      if ( (int)AvCreateProcessHeap() < 0 )
        return 0;
      fdwReason = 1;
      hinstDLL = v3;
      return DllMainCRTStartup(hinstDLL, fdwReason);
    }
    if ( fdwReason - 2 <= 1 )
      return DllMainCRTStartup(hinstDLL, fdwReason);
  }
  else if ( g_fAlwaysDetach || !lpReserved )
  {
    if ( avalonutil_proc_attached <= 0 )
      return 0;
    --avalonutil_proc_attached;
    v4 = DllMainCRTStartup(hinstDLL, 0);
    if ( (int)AvDestroyProcessHeap() < 0 )
      return 0;
  }
  return v4;
}
