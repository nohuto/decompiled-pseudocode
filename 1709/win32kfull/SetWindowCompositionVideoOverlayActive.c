/*
 * XREFs of SetWindowCompositionVideoOverlayActive @ 0x1C020C844
 * Callers:
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01B73A0 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0057E7C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0057F80 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C0065464 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionVideoOverlayActive(struct tagWND *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v6; // rcx
  void *v7; // rax
  _DWORD v9[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741816;
  v5 = *(_DWORD *)a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v9) )
  {
    if ( -__CFSHR__(v9[0], 8) == v5 )
      return 0;
    v9[0] = v9[0] & 0xFFFFFF7F | (v5 << 7);
    if ( !(unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v9) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v7 = (void *)ReferenceDwmApiPort(v6);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v7, *(_QWORD *)a1, 14, a2);
    }
  }
  return v4;
}
