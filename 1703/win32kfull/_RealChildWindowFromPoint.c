/*
 * XREFs of _RealChildWindowFromPoint @ 0x1C0211A94
 * Callers:
 *     NtUserRealChildWindowFromPoint @ 0x1C01DE660 (NtUserRealChildWindowFromPoint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 */

__int64 __fastcall RealChildWindowFromPoint(__int64 a1, unsigned __int64 a2)
{
  int v3; // r9d
  __int64 v4; // r8
  unsigned int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v11; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp+28h] BYREF

  v12 = a2;
  if ( a1
    && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) == 0
    && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 0x20) == 0
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != (*(_DWORD *)(a1 + 368) & 0xF) )
  {
    TransformPointBetweenCoordinateSpaces(&v12, &v12, a1, 0LL);
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    v3 = *(_DWORD *)(a1 + 144) + v12;
    HIDWORD(v12) += *(_DWORD *)(a1 + 148);
    LODWORD(v12) = v3;
  }
  if ( !PtInRect((_DWORD *)(a1 + 144), v12) )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 216);
  if ( v6 )
  {
    if ( !(unsigned int)GrePtInRegion(v6, v5, v4) )
      return 0LL;
  }
  v7 = *(_QWORD *)(a1 + 112);
  v8 = 0LL;
  v11 = v12;
  if ( !v7 )
    return a1;
  do
  {
    if ( (*(_BYTE *)(v7 + 71) & 0x10) != 0
      && (!(unsigned int)IsWindowDesktopComposed(v7) || !(unsigned int)GetWindowCloakState(v7)) )
    {
      TransformPointBetweenCoordinateSpaces(&v12, &v11, v7, a1);
      if ( PtInRect((_DWORD *)(v7 + 128), v12) )
      {
        v9 = *(_QWORD *)(v7 + 216);
        if ( !v9 || (unsigned int)GrePtInRegion(v9, (unsigned int)v12, HIDWORD(v12)) )
        {
          if ( *(_WORD *)(gpsi + 852LL) != *(_WORD *)(*(_QWORD *)(v7 + 168) + 10LL) || (*(_BYTE *)(v7 + 68) & 0xF) != 7 )
            return v7;
          v8 = v7;
        }
      }
    }
    v7 = *(_QWORD *)(v7 + 88);
  }
  while ( v7 );
  if ( !v8 )
    return a1;
  return v8;
}
