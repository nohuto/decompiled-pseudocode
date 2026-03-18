/*
 * XREFs of SkipWindowOnMonitor @ 0x1C00C83C4
 * Callers:
 *     NextTopWindow @ 0x1C0065110 (NextTopWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C6C40 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall SkipWindowOnMonitor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 *v3; // rsi
  struct tagMONITOR *v4; // rbp
  __int64 *i; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  if ( v1 && *(_DWORD *)(a1 + 320) == 1 && *(_QWORD *)(v1 + 288) )
  {
    v3 = (__int64 *)(v1 + 312);
    v4 = _MonitorFromWindowInternal((struct tagWND *)a1, 0, 0);
    for ( i = *(__int64 **)(v1 + 312); i != v3; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 6) && _MonitorFromWindowInternal((struct tagWND *)i[2], 0, 0) == v4 )
        return 1;
    }
  }
  return v2;
}
