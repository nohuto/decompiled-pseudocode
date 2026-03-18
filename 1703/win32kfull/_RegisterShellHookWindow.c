/*
 * XREFs of _RegisterShellHookWindow @ 0x1C0114830
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00F8188 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall RegisterShellHookWindow(struct tagWND *a1)
{
  __int64 v2; // rcx

  if ( *((char *)a1 + 60) < 0 || *((char *)a1 + 59) < 0 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    v2 = *((_QWORD *)a1 + 3);
    if ( v2 && (unsigned int)VWPLAddBase((struct tagVWPL **)(*(_QWORD *)(v2 + 8) + 232LL), 0LL, a1, 2u) )
    {
      SetOrClrWF(1, a1, 0x740u, 1);
      return 1LL;
    }
  }
  return 0LL;
}
