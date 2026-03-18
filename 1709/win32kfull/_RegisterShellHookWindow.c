/*
 * XREFs of _RegisterShellHookWindow @ 0x1C011E0E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C01052BC (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall RegisterShellHookWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( *((char *)a1 + 60) < 0 || *((char *)a1 + 59) < 0 )
  {
    UserSetLastError(87LL, a2);
  }
  else
  {
    v3 = *((_QWORD *)a1 + 3);
    if ( v3 && (unsigned int)VWPLAddBase((struct tagVWPL **)(*(_QWORD *)(v3 + 8) + 232LL), 0LL, a1, 2u) )
    {
      SetOrClrWF(1, a1, 0x740u, 1);
      return 1LL;
    }
  }
  return 0LL;
}
