/*
 * XREFs of xxxDrawAnimatedRects @ 0x1C020CA90
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     NtUserDrawAnimatedRects @ 0x1C01D7800 (NtUserDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C020CBF8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     GetThreadDesktopWindow @ 0x1C00F2804 (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C020C454 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 */

__int64 __fastcall xxxDrawAnimatedRects(struct tagWND *a1, int a2, struct tagRECT *a3, struct tagRECT *a4)
{
  struct tagRECT v5; // xmm1
  __int64 v7; // rdi
  __int64 v8; // rcx
  _DWORD *v9; // rbx
  __int64 DCEx; // rax
  int v11; // edx
  __int64 *v12; // r14
  int v13; // r8d
  int v14; // r9d
  int v15; // r10d
  __int64 ThreadDesktopWindow; // rbx
  __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v19; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v20; // [rsp+40h] [rbp-38h] BYREF

  v5 = *a4;
  v19 = *a3;
  v20 = v5;
  if ( a2 != 3 )
    return 1LL;
  v7 = 0LL;
  if ( !a1 || a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0LL;
  if ( (unsigned int)IsToplevelWindowDesktopComposed(v8) )
    return 1LL;
  v9 = (_DWORD *)*((_QWORD *)a1 + 13);
  if ( !v9 )
    goto LABEL_13;
  if ( v9 == (_DWORD *)GetDesktopWindow(*((_QWORD *)a1 + 13)) )
    v9 = 0LL;
  if ( v9 )
  {
    DCEx = _GetDCEx(v9, 1LL, 65665LL);
    v11 = v9[32];
    v12 = (__int64 *)DCEx;
    v13 = v9[36];
    v14 = v9[33];
    v15 = v9[37];
    do
    {
      *(&v19.left + 2 * v7) += v13 - v11;
      *(&v19.top + 2 * v7++) += v15 - v14;
    }
    while ( v7 < 4 );
  }
  else
  {
LABEL_13:
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    v18 = *(_OWORD *)(ThreadDesktopWindow + 144);
    v17 = GreCreateRectRgnIndirect(&v18);
    if ( !v17 )
      v17 = 1LL;
    v12 = (__int64 *)_GetDCEx(ThreadDesktopWindow, v17, 1155LL);
  }
  xxxAnimateCaption(a1, v12, &v19, &v20);
  _ReleaseDC(v12);
  return 1LL;
}
