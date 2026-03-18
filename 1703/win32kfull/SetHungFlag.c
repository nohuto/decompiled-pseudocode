/*
 * XREFs of SetHungFlag @ 0x1C00B7CF0
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00F8188 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int16 __fastcall SetHungFlag(__int64 a1, unsigned __int16 a2)
{
  __int64 DesktopWindow; // rax
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 59) & 0x18) == 0 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    if ( *(_QWORD *)(v5 + 104) == DesktopWindow )
      VWPLAddBase(gpvwplHungRedraw, 0LL, (struct tagWND *)v5, 0xAu, v7);
  }
  return SetOrClrWF(1, (_DWORD *)a1, a2, 1);
}
