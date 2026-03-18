/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1C0114BE4
 * Callers:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00412F0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxTranslateAccelerator @ 0x1C00B81C8 (xxxTranslateAccelerator.c)
 *     xxxGetSysMenuHandle @ 0x1C00C2730 (xxxGetSysMenuHandle.c)
 *     xxxSetDialogSystemMenu @ 0x1C0114B80 (xxxSetDialogSystemMenu.c)
 * Callees:
 *     _DestroyMenu @ 0x1C0042DC0 (_DestroyMenu.c)
 *     xxxLoadSysMenu @ 0x1C00C31F4 (xxxLoadSysMenu.c)
 *     LockDesktopMenu @ 0x1C0114C44 (LockDesktopMenu.c)
 */

struct tagMENU *__fastcall xxxLoadSysDesktopMenu(__int64 a1, int a2)
{
  struct tagMENU *result; // rax
  struct tagMENU *v4; // rbx

  result = (struct tagMENU *)xxxLoadSysMenu(a2);
  v4 = result;
  if ( result )
  {
    if ( *(_QWORD *)a1 )
    {
      DestroyMenu(result);
      return *(struct tagMENU **)a1;
    }
    else
    {
      *((_DWORD *)result + 14) |= 0x80u;
      if ( !(unsigned int)LockDesktopMenu(a1, result) )
      {
        DestroyMenu(v4);
        return 0LL;
      }
      return v4;
    }
  }
  return result;
}
