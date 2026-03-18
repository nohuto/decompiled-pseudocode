/*
 * XREFs of IsChildWindowDpiMessageEnabledX @ 0x1C01C04D4
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 */

__int64 __fastcall IsChildWindowDpiMessageEnabledX(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 TopLevelWindow; // rax

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 368) & 0xF) == 2 )
  {
    TopLevelWindow = GetTopLevelWindow(a1);
    if ( a1 == TopLevelWindow )
    {
      return 1;
    }
    else if ( TopLevelWindow )
    {
      return (*(_DWORD *)(TopLevelWindow + 304) & 0x40000000) != 0;
    }
  }
  return v1;
}
