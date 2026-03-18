/*
 * XREFs of _RealChildWindowFromPoint @ 0x1C0212FA8
 * Callers:
 *     NtUserRealChildWindowFromPoint @ 0x1C01EA780 (NtUserRealChildWindowFromPoint.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall RealChildWindowFromPoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r9d
  __int64 v13; // r8
  unsigned int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 v20; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp+28h] BYREF

  v21 = a2;
  if ( a1 )
  {
    v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 456);
    if ( (*(_BYTE *)(v5 + 224) & 1) == 0 )
    {
      v9 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7) + 456);
      if ( (*(_BYTE *)(v9 + 224) & 0x20) == 0
        && ((*(_DWORD *)(a1 + 368) >> 8) & 0x1FF) != (((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                       v9,
                                                                       v8,
                                                                       v10,
                                                                       v11) >> 8) & 0x1FF) )
      {
        TransformPointBetweenCoordinateSpaces(&v21, &v21, a1, 0LL);
      }
    }
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    v12 = *(_DWORD *)(a1 + 144) + v21;
    HIDWORD(v21) += *(_DWORD *)(a1 + 148);
    LODWORD(v21) = v12;
  }
  if ( !PtInRect((_DWORD *)(a1 + 144), v21) )
    return 0LL;
  v15 = *(_QWORD *)(a1 + 216);
  if ( v15 )
  {
    if ( !(unsigned int)GrePtInRegion(v15, v14, v13) )
      return 0LL;
  }
  v16 = *(_QWORD *)(a1 + 112);
  v17 = 0LL;
  v20 = v21;
  if ( !v16 )
    return a1;
  do
  {
    if ( (*(_BYTE *)(v16 + 71) & 0x10) != 0
      && (!(unsigned int)IsWindowDesktopComposed(v16) || !(unsigned int)GetWindowCloakState(v16)) )
    {
      TransformPointBetweenCoordinateSpaces(&v21, &v20, v16, a1);
      if ( PtInRect((_DWORD *)(v16 + 128), v21) )
      {
        v18 = *(_QWORD *)(v16 + 216);
        if ( !v18 || (unsigned int)GrePtInRegion(v18, (unsigned int)v21, HIDWORD(v21)) )
        {
          if ( *(_WORD *)(gpsi + 852LL) != *(_WORD *)(*(_QWORD *)(v16 + 168) + 10LL)
            || (*(_BYTE *)(v16 + 68) & 0xF) != 7 )
          {
            return v16;
          }
          v17 = v16;
        }
      }
    }
    v16 = *(_QWORD *)(v16 + 88);
  }
  while ( v16 );
  if ( !v17 )
    return a1;
  return v17;
}
