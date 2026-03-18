/*
 * XREFs of xxxMenuBarCompute @ 0x1C000E5E4
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000D23C (xxxPaintMenuBar.c)
 *     xxxCalcMenuBar @ 0x1C000E548 (xxxCalcMenuBar.c)
 *     xxxCalcClientRect @ 0x1C0040AB0 (xxxCalcClientRect.c)
 *     xxxMenuBarDraw @ 0x1C021640C (xxxMenuBarDraw.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0217A88 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     ?MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z @ 0x1C000E718 (-MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     xxxMNCompute @ 0x1C00439EC (xxxMNCompute.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MNClearCachedPopupSizes @ 0x1C0113B9C (MNClearCachedPopupSizes.c)
 */

__int64 __fastcall xxxMenuBarCompute(struct tagMENU *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v5; // edi
  __int64 v9; // rax
  __int16 WindowDpiLastNotify; // bx
  int v11; // r14d
  int v12; // ebx
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0;
  LODWORD(v14) = 0;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 304) & 0x10000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
      goto LABEL_7;
    }
    if ( (*(_DWORD *)(a2 + 368) & 0xF) == 0 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 408LL);
      if ( v9 )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 52LL) & 1) != 0 )
          goto LABEL_6;
      }
    }
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) == 0 )
  {
LABEL_6:
    WindowDpiLastNotify = 96;
    goto LABEL_7;
  }
  WindowDpiLastNotify = *(_WORD *)(gpsi + 8678LL);
LABEL_7:
  if ( ((*(_DWORD *)(a2 + 304) & 0x20000000) != 0
     || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 768) & 0x80000) != 0)
    && *((_WORD *)a1 + 42) != WindowDpiLastNotify )
  {
    MNClearCachedPopupSizes(a1);
    *((_WORD *)a1 + 42) = WindowDpiLastNotify;
  }
  v11 = a5;
  v12 = xxxMNCompute(a1, a4, a5, (__int64)&v14);
  if ( (*((_DWORD *)a1 + 14) & 1) == 0 )
  {
    if ( (_DWORD)v14 )
      v12 = xxxMNCompute(a1, a4, v11, (__int64)&v14);
    MBC_RightJustifyMenu(a1);
  }
  if ( v12 )
    return (unsigned int)(v12 + 1);
  return v5;
}
