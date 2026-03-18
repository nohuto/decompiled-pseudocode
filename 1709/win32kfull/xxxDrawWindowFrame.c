/*
 * XREFs of xxxDrawWindowFrame @ 0x1C00931B4
 * Callers:
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00813A0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxRedrawHungWindow @ 0x1C0134058 (xxxRedrawHungWindow.c)
 * Callees:
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     IsVisible @ 0x1C006D048 (IsVisible.c)
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C007BB30 (GetWindowBorders.c)
 *     DrawEdge @ 0x1C007EBC4 (DrawEdge.c)
 *     xxxDrawScrollBar @ 0x1C0082E30 (xxxDrawScrollBar.c)
 *     GetCaptionHeight @ 0x1C00930D4 (GetCaptionHeight.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     DrawSize @ 0x1C0210548 (DrawSize.c)
 *     xxxMenuBarDraw @ 0x1C02175E0 (xxxMenuBarDraw.c)
 */

void __fastcall xxxDrawWindowFrame(struct tagWND *a1, HDC a2, __int16 a3)
{
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rcx
  unsigned int WindowBorders; // esi
  unsigned int v10; // r14d
  int v11; // r8d
  int CaptionHeight; // eax
  bool v13; // zf
  bool v14; // bp
  unsigned int v15; // r8d
  RECT v16; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-48h] BYREF

  if ( (unsigned int)IsVisible((__int64)a1) )
  {
    v7 = *(_BYTE *)(v6 + 57);
    if ( (v7 & 1) == 0 || v7 < 0 )
    {
      v8 = *(_QWORD *)(v6 + 128) - *((_QWORD *)a1 + 18);
      if ( !v8 )
        v8 = *((_QWORD *)a1 + 17) - *((_QWORD *)a1 + 19);
      if ( v8 && (*((_QWORD *)a1 + 22) || (unsigned int)GreGetClipBox(a2, v17, 1LL) != 1) )
      {
        if ( (*((_BYTE *)a1 + 71) & 0x20) == 0 || (*((_BYTE *)a1 + 57) & 1) != 0 )
        {
          WindowBorders = GetWindowBorders(*((unsigned int *)a1 + 17), *((unsigned int *)a1 + 16));
          GetRect((__int64)a1, &v16.left, 34);
          v16.left += WindowBorders;
          v10 = v16.top + WindowBorders;
          v16.right -= WindowBorders;
          v16.bottom -= WindowBorders;
          if ( (*((_BYTE *)a1 + 56) & 1) != 0 && (a3 & 0x2000) == 0 )
            v10 += xxxMenuBarDraw(a1, a2, WindowBorders, WindowBorders);
          if ( (((*((_BYTE *)a1 + 70) & 0xC4) == 0) & (*((_BYTE *)a1 + 64) ^ 1)) == 0
            || (*((_BYTE *)a1 + 65) & 1) != 0
            || ((unsigned __int8)~*((_BYTE *)a1 + 57) & (*((_BYTE *)a1 + 66) >> 1) & 1) != 0 )
          {
            v11 = a3 & 0x2000 | 0x900D;
            if ( (a3 & 1) == 0 )
              v11 = a3 & 0x2000 | 0x900C;
            xxxDrawCaptionBar((__int64)a1, a2, v11 | 0x800);
          }
          CaptionHeight = GetCaptionHeight((__int64)a1);
          v13 = (*((_BYTE *)a1 + 60) & 0x10) == 0;
          v16.top = CaptionHeight + v10;
          if ( !v13 )
          {
            WindowBorders += 2;
            DrawEdge(a2, &v16, 10, 8207);
          }
          v14 = (a3 & 0x2000) == 0;
          if ( (v14 & (*((_BYTE *)a1 + 56) >> 1) & 1) != 0 )
          {
            if ( (*((_BYTE *)a1 + 56) & 4) != 0 )
              DrawSize(a1, a2, WindowBorders, WindowBorders, *(_QWORD *)&v16.left, *(_QWORD *)&v16.right);
            xxxDrawScrollBar(a1, a2, 1u);
          }
          if ( (v14 & (*((_BYTE *)a1 + 56) >> 2) & 1) != 0 )
            xxxDrawScrollBar(a1, a2, 0);
        }
        else
        {
          v15 = ((*((_BYTE *)a1 + 56) & 0x40 | 0x240300u) >> 6) | 0x2000;
          if ( (a3 & 0x2000) == 0 )
            v15 = (*((_BYTE *)a1 + 56) & 0x40 | 0x240300u) >> 6;
          xxxDrawCaptionBar((__int64)a1, a2, v15);
        }
      }
    }
  }
}
