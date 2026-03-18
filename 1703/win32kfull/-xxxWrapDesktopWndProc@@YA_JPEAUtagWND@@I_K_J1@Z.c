/*
 * XREFs of ?xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C011B3B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopWndProc @ 0x1C003CEB0 (xxxDesktopWndProc.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C00C5FC0 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 */

__int64 __fastcall xxxWrapDesktopWndProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v6; // esi

  v6 = a2;
  if ( (unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return xxxDesktopWndProc((__int64)a1, v6, a3, a4);
  else
    return 0LL;
}
