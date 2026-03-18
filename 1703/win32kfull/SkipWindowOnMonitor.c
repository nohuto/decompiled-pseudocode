/*
 * XREFs of SkipWindowOnMonitor @ 0x1C00B7360
 * Callers:
 *     NextTopWindow @ 0x1C005F5C0 (NextTopWindow.c)
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00B9844 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 */

__int64 __fastcall SkipWindowOnMonitor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 *v3; // rsi
  __int64 v4; // rbp
  __int64 *i; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  if ( v1 && *(_DWORD *)(a1 + 320) == 1 && *(_QWORD *)(v1 + 288) )
  {
    v3 = (__int64 *)(v1 + 312);
    v4 = MonitorFromWindow(a1, 0);
    for ( i = *(__int64 **)(v1 + 312); i != v3; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 6) && MonitorFromWindow(i[2], 0) == v4 )
        return 1;
    }
  }
  return v2;
}
