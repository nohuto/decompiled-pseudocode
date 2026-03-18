/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00D6088
 * Callers:
 *     xxxDrawScrollBar @ 0x1C00D5FF8 (xxxDrawScrollBar.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     DrawFrameControl @ 0x1C002B024 (DrawFrameControl.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     BitBltSysBmp @ 0x1C00D642C (BitBltSysBmp.c)
 *     DrawThumb2 @ 0x1C00D66F0 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C00D686C (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreGetTextColor @ 0x1C00D6898 (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C00D68EC (GreGetBkColor.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall xxxDrawSB2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, int a4, unsigned int a5)
{
  int v8; // esi
  int v10; // r14d
  char CurrentThreadDpiAwarenessContext; // al
  int v12; // ebx
  LONG *v13; // rdx
  LONG *v14; // rcx
  int v15; // ecx
  unsigned int v16; // esi
  __int64 v17; // rbx
  int v18; // eax
  unsigned int v19; // r9d
  RECT v20; // [rsp+30h] [rbp-40h] BYREF
  int BkColor; // [rsp+40h] [rbp-30h]
  int TextColor; // [rsp+44h] [rbp-2Ch]
  __int64 v23; // [rsp+48h] [rbp-28h]
  HBRUSH ColorObjects; // [rsp+50h] [rbp-20h]
  LONG v25; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+5Ch] [rbp-14h] BYREF
  LONG v27; // [rsp+64h] [rbp-Ch]

  v8 = *((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6);
  v10 = (*((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4)) / 2;
  if ( v10 > 0 && v8 > 0 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( a4 )
    {
      if ( (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
        v12 = *(_DWORD *)(gpsi + 1960LL);
      else
        v12 = *(_DWORD *)(gpsi + 2348LL);
    }
    else if ( (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
    {
      v12 = *(_DWORD *)(gpsi + 1964LL);
    }
    else
    {
      v12 = *(_DWORD *)(gpsi + 2352LL);
    }
    BkColor = GreGetBkColor(a3);
    TextColor = GreGetTextColor(a3);
    ColorObjects = xxxGetColorObjects(a1, a3);
    v13 = (LONG *)&v26;
    v14 = (LONG *)&v26;
    if ( v10 > v12 )
      v10 = v12;
    if ( a4 )
      v13 = &v25;
    else
      v14 = &v25;
    *v13 = *((_DWORD *)a2 + 6);
    *v14 = *((_DWORD *)a2 + 4);
    v13[2] = *((_DWORD *)a2 + 7);
    v14[2] = *((_DWORD *)a2 + 5);
    v23 = GreSelectBrush(a3, *(_QWORD *)(gpsi + 5232LL));
    if ( a4 )
    {
      if ( v10 == v12 )
      {
        v15 = (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
            ? *(_DWORD *)(gpsi + 1888LL)
            : *(_DWORD *)(gpsi + 2276LL);
        if ( v8 == v15 )
        {
LABEL_16:
          v16 = a5;
          BitBltSysBmp(a3);
          BitBltSysBmp(a3);
LABEL_17:
          v17 = GreSelectBrush(a3, v23);
          DrawThumb2(a1, a2, a3, ColorObjects, a4, v16);
          GreSelectBrush(a3, v17);
          GreSetBkColor(a3, BkColor);
          GreSetTextColor(a3, TextColor);
          return;
        }
      }
      v16 = a5;
      v20.left = v25;
      *(_QWORD *)&v20.top = v26;
      v20.bottom = v26 + v10;
      DrawFrameControl(a3, &v20, 3, (a5 & 1) << 8);
      v20.bottom = v27;
      v19 = ((a5 & 2) << 7) | 1;
      v20.top = v27 - v10;
    }
    else
    {
      if ( v10 == v12 )
      {
        v18 = (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
            ? *(_DWORD *)(gpsi + 1892LL)
            : *(_DWORD *)(gpsi + 2280LL);
        if ( v8 == v18 )
          goto LABEL_16;
      }
      v16 = a5;
      v20.top = v26;
      v20.bottom = v27;
      v20.left = v25;
      v20.right = v25 + v10;
      DrawFrameControl(a3, &v20, 3, ((a5 & 1) << 8) | 2);
      v20.right = HIDWORD(v26);
      v19 = ((a5 & 2) << 7) | 3;
      v20.left = HIDWORD(v26) - v10;
    }
    DrawFrameControl(a3, &v20, 3, v19);
    goto LABEL_17;
  }
}
