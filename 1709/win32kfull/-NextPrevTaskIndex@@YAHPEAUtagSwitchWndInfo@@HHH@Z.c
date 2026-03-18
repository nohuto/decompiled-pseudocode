/*
 * XREFs of ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01CF594
 * Callers:
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CF200 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CF790 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CF95C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NextPrevTaskIndex(struct tagSwitchWndInfo *a1, int a2, int a3, int a4)
{
  signed int v4; // ecx
  unsigned int v5; // eax
  int v6; // edx

  if ( a4 )
  {
    v4 = *((_DWORD *)a1 + 10);
    v5 = a3 + a2;
    v6 = a3 + a2 - v4;
    if ( (int)v5 < v4 )
      return v5;
  }
  else
  {
    v6 = a2 - a3;
    if ( v6 < 0 )
      v6 += *((_DWORD *)a1 + 10);
  }
  return (unsigned int)v6;
}
