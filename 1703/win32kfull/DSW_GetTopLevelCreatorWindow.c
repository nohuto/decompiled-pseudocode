/*
 * XREFs of DSW_GetTopLevelCreatorWindow @ 0x1C011A460
 * Callers:
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CB59C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DSW_GetTopLevelCreatorWindow(__int64 a1)
{
  __int64 i; // rax

  if ( a1 )
  {
    for ( i = *(_QWORD *)(a1 + 120); i; i = *(_QWORD *)(i + 120) )
      a1 = i;
  }
  return a1;
}
