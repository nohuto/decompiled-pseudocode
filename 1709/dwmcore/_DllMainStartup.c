/*
 * XREFs of _DllMainStartup @ 0x1800BFEC0
 * Callers:
 *     <none>
 * Callees:
 *     _DllMainCRTStartup @ 0x1800C3EC0 (_DllMainCRTStartup.c)
 */

BOOL __stdcall DllMainStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  HINSTANCE v3; // rsi
  BOOL v4; // ebx
  int v5; // eax

  v3 = hinstDLL;
  v4 = 1;
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      ++avalonutil_proc_attached;
      WPF::g_processHeap = GetProcessHeap();
      fdwReason = 1;
      hinstDLL = v3;
    }
    else if ( fdwReason - 2 > 1 )
    {
      return v4;
    }
    return DllMainCRTStartup(hinstDLL, fdwReason);
  }
  if ( !g_fAlwaysDetach && lpReserved )
    return v4;
  if ( avalonutil_proc_attached > 0 )
  {
    --avalonutil_proc_attached;
    v5 = DllMainCRTStartup(hinstDLL, 0);
    WPF::g_processHeap = 0LL;
    return v5;
  }
  return 0;
}
