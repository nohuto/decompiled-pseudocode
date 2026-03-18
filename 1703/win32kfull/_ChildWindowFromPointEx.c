/*
 * XREFs of _ChildWindowFromPointEx @ 0x1C0133F0C
 * Callers:
 *     NtUserChildWindowFromPointEx @ 0x1C0133EA0 (NtUserChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0211DE4 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     LayerHitTest @ 0x1C0003B34 (LayerHitTest.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 */

__int64 __fastcall ChildWindowFromPointEx(__int64 a1, unsigned __int64 a2, char a3)
{
  int v5; // r9d
  __int64 v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp+28h] BYREF

  v14 = a2;
  if ( a1
    && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) == 0
    && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 0x20) == 0
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != (*(_DWORD *)(a1 + 368) & 0xF) )
  {
    TransformPointBetweenCoordinateSpaces(&v14, &v14, a1, 0LL);
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
      v5 = *(_DWORD *)(a1 + 152) - v14;
    else
      v5 = *(_DWORD *)(a1 + 144) + v14;
    HIDWORD(v14) += *(_DWORD *)(a1 + 148);
    LODWORD(v14) = v5;
  }
  v13 = v14;
  if ( !PtInRect((_DWORD *)(a1 + 144), v14) )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 216);
  if ( v8 )
  {
    if ( !(unsigned int)GrePtInRegion(v8, v7, v6) )
      return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 66) & 8) != 0 && (*(_DWORD *)(a1 + 304) & 0x20) == 0 && !LayerHitTest(a1, v14) )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 112);
  if ( !v9 )
    return a1;
  while ( 1 )
  {
    TransformPointBetweenCoordinateSpaces(&v14, &v13, v9, a1);
    if ( (a3 & 1) != 0
      && ((*(_BYTE *)(v9 + 71) & 0x10) == 0
       || (unsigned int)IsWindowDesktopComposed(v9) && (unsigned int)GetWindowCloakState(v9))
      || (a3 & 2) != 0 && (*(_BYTE *)(v9 + 71) & 8) != 0
      || (a3 & 4) != 0 && (*(_BYTE *)(v9 + 64) & 0x20) != 0
      || !PtInRect((_DWORD *)(v9 + 128), v14) )
    {
      goto LABEL_18;
    }
    v12 = *(_QWORD *)(v9 + 216);
    if ( !v12 )
      break;
    if ( (unsigned int)GrePtInRegion(v12, (unsigned int)v14, HIDWORD(v14)) )
    {
      v11 = v14;
      break;
    }
LABEL_18:
    v9 = *(_QWORD *)(v9 + 88);
    if ( !v9 )
      return a1;
  }
  if ( (*(_BYTE *)(v9 + 66) & 8) != 0 && (*(_DWORD *)(a1 + 304) & 0x20) == 0 && !LayerHitTest(v9, v11) )
    goto LABEL_18;
  return v9;
}
