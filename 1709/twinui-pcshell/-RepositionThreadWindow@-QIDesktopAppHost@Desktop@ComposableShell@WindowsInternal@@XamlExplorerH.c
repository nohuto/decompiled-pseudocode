/*
 * XREFs of ?RepositionThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXVRect@Foundation@Windows@@@Z @ 0x1801488D4
 * Callers:
 *     ?RepositionThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@W7E$AAAXVRect@Foundation@Windows@@@Z @ 0x1801498F0 (-RepositionThreadWindow@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@_ea_1801498F0.c)
 * Callees:
 *     ?s_GetCurrentCoreWindowHwnd@XamlExplorerHost@@CAPEAUHWND__@@XZ @ 0x1801486C8 (-s_GetCurrentCoreWindowHwnd@XamlExplorerHost@@CAPEAUHWND__@@XZ.c)
 */

BOOL __fastcall _RepositionThreadWindow__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__XamlExplorerHost__UE_AAAXVRect_Foundation_Windows___Z(
        __int64 a1,
        float *a2)
{
  int v2; // edi
  int cy; // ebx
  float v4; // xmm6_4
  float v5; // xmm7_4
  HWND CurrentCoreWindowHwnd; // rax

  v2 = (int)a2[2];
  cy = (int)a2[3];
  v4 = a2[1];
  v5 = *a2;
  CurrentCoreWindowHwnd = (HWND)XamlExplorerHost::s_GetCurrentCoreWindowHwnd(a1);
  return SetWindowPos(CurrentCoreWindowHwnd, HWND_MESSAGE|0x2LL, (int)v5, (int)v4, v2, cy, 0x10u);
}
