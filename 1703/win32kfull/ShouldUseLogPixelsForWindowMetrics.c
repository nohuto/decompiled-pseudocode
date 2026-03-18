/*
 * XREFs of ShouldUseLogPixelsForWindowMetrics @ 0x1C005F568
 * Callers:
 *     UpdateWindowMonitor @ 0x1C005F450 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall ShouldUseLogPixelsForWindowMetrics(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10
  __int64 TopLevelWindow; // rax

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 368) & 0xF) == 2 )
  {
    if ( (unsigned int)IsTopLevelWindow(a1) )
    {
      return (unsigned int)-__CFSHR__(*(_DWORD *)(v2 + 304), 30);
    }
    else
    {
      TopLevelWindow = GetTopLevelWindow(v2);
      if ( TopLevelWindow )
        return (unsigned int)((2 * *(_DWORD *)(TopLevelWindow + 304)) >> 31);
    }
  }
  return v1;
}
