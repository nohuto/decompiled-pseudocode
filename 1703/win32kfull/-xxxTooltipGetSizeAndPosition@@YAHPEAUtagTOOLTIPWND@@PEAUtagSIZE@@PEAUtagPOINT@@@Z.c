/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C020D3F8
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C020D2EC (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C000CC7C (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C000EAB4 (CALL_LPK.c)
 *     _MonitorFromPoint @ 0x1C0020750 (_MonitorFromPoint.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C010DF6C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C020CDCC (-GetCursorHeight@@YAHXZ.c)
 */

__int64 __fastcall xxxTooltipGetSizeAndPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  __int64 v6; // rcx
  struct tagMONITOR *v7; // rax
  __int64 v8; // rbx
  HDC TooltipDC; // r15
  __int64 ThreadWin32Thread; // rax
  const WCHAR *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int16 *v16; // rdx
  __int64 v17; // r8
  LONG *v18; // rbx
  LONG cy; // edx
  LONG y; // ecx
  int v21; // edx
  _QWORD v22[4]; // [rsp+30h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(gpsi + 5368LL);
  *a3 = (struct tagPOINT)v6;
  v7 = (struct tagMONITOR *)MonitorFromPoint(v6, 0);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  TooltipDC = GetTooltipDC(a1, v7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v22;
    ++*(_DWORD *)(v8 + 8);
    v12 = (const WCHAR *)*((_QWORD *)a1 + 6);
    v13 = -1LL;
    v22[1] = v8;
    do
      ++v13;
    while ( v12[v13] );
    xxxClientGetTextExtentPointW(TooltipDC, v12, v13, a2);
    v8 = ThreadUnlock1(v15, v14);
    if ( !v8 )
    {
      _ReleaseDC(TooltipDC);
      return 0LL;
    }
  }
  else
  {
    v16 = (unsigned __int16 *)*((_QWORD *)a1 + 6);
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    GreGetTextExtentW(TooltipDC, v16, v17, a2, 1);
  }
  _ReleaseDC(TooltipDC);
  a2->cx += 6;
  a2->cy += 4;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v18 = (LONG *)(*(_QWORD *)(v8 + 40) + 44LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v18 = (LONG *)(*(_QWORD *)(v8 + 40) + 60LL);
  }
  else
  {
    v18 = (LONG *)(*(_QWORD *)(v8 + 40) + 28LL);
  }
  cy = a2->cy;
  y = a3->y;
  if ( y + cy < v18[3] )
  {
    a3->y += GetCursorHeight();
    *((_DWORD *)a1 + 8) |= 1u;
  }
  else
  {
    *((_DWORD *)a1 + 8) &= ~1u;
    a3->y = y - cy;
  }
  v21 = v18[2];
  if ( a2->cx + a3->x >= v21 )
    a3->x = v21 - a2->cx;
  if ( a3->x < *v18 )
    a3->x = *v18;
  return 1LL;
}
