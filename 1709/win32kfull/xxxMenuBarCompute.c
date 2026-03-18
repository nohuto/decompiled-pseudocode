/*
 * XREFs of xxxMenuBarCompute @ 0x1C007CD78
 * Callers:
 *     xxxCalcMenuBar @ 0x1C007CC3C (xxxCalcMenuBar.c)
 *     xxxPaintMenuBar @ 0x1C0080FE0 (xxxPaintMenuBar.c)
 *     xxxCalcClientRect @ 0x1C0096048 (xxxCalcClientRect.c)
 *     xxxMenuBarDraw @ 0x1C02175E0 (xxxMenuBarDraw.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0218C14 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     ?MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z @ 0x1C007CEAC (-MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z.c)
 *     xxxMNCompute @ 0x1C007D6E8 (xxxMNCompute.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MNClearCachedPopupSizes @ 0x1C011DC24 (MNClearCachedPopupSizes.c)
 */

__int64 __fastcall xxxMenuBarCompute(struct tagMENU *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int16 WindowDpiLastNotify; // di
  int v11; // ebp
  int v12; // edi
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 304) & 0x10000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 368) & 0xF) == 0 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 432LL);
        if ( v8 )
        {
          v9 = **(_QWORD **)(v8 + 8);
          if ( (*(_DWORD *)(v9 + 52) & 1) != 0 )
            goto LABEL_6;
        }
      }
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 400LL);
      WindowDpiLastNotify = *(_WORD *)(v9 + 284);
    }
  }
  else
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(a1, 0LL) & 0xF) == 0 )
    {
LABEL_6:
      WindowDpiLastNotify = 96;
      goto LABEL_7;
    }
    WindowDpiLastNotify = *(_WORD *)(PsGetCurrentProcessWin32Process(v9) + 284);
  }
LABEL_7:
  if ( ((*(_DWORD *)(a2 + 304) & 0x20000000) != 0
     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x80000) != 0)
    && *((_WORD *)a1 + 42) != WindowDpiLastNotify )
  {
    MNClearCachedPopupSizes(a1);
    *((_WORD *)a1 + 42) = WindowDpiLastNotify;
  }
  v11 = a5;
  v12 = xxxMNCompute(a1, (struct tagWND *)a2, a4, a5, (__int64)&v14);
  if ( (*((_DWORD *)a1 + 14) & 1) == 0 )
  {
    if ( v14 )
      v12 = xxxMNCompute(a1, (struct tagWND *)a2, a4, v11, (__int64)&v14);
    MBC_RightJustifyMenu(a1);
  }
  return (v12 + 1) & (unsigned int)-(v12 != 0);
}
