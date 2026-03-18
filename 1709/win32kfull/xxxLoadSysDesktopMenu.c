/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1C011DAE4
 * Callers:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00777C0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxGetSysMenuHandle @ 0x1C007BAF0 (xxxGetSysMenuHandle.c)
 *     xxxTranslateAccelerator @ 0x1C00FC58C (xxxTranslateAccelerator.c)
 *     xxxSetDialogSystemMenu @ 0x1C011DA80 (xxxSetDialogSystemMenu.c)
 * Callees:
 *     xxxLoadSysMenu @ 0x1C007C804 (xxxLoadSysMenu.c)
 *     _DestroyMenu @ 0x1C009C5C0 (_DestroyMenu.c)
 *     LockDesktopMenu @ 0x1C011DB44 (LockDesktopMenu.c)
 */

__int64 __fastcall xxxLoadSysDesktopMenu(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rbx

  result = xxxLoadSysMenu(a2);
  v4 = result;
  if ( result )
  {
    if ( *(_QWORD *)a1 )
    {
      DestroyMenu(result);
      return *(_QWORD *)a1;
    }
    else
    {
      *(_DWORD *)(result + 56) |= 0x80u;
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
