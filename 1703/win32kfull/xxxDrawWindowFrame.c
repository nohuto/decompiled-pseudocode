/*
 * XREFs of xxxDrawWindowFrame @ 0x1C003E31C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F72F0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0139BCC (xxxRedrawHungWindow.c)
 * Callees:
 *     DrawEdge @ 0x1C0028C10 (DrawEdge.c)
 *     GetCaptionHeight @ 0x1C0043588 (GetCaptionHeight.c)
 *     GetRect @ 0x1C0062FEC (GetRect.c)
 *     IsVisible @ 0x1C0069E24 (IsVisible.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00C285C (GetWindowBorders.c)
 *     xxxDrawScrollBar @ 0x1C00D5FF8 (xxxDrawScrollBar.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     DrawSize @ 0x1C020ED64 (DrawSize.c)
 *     xxxMenuBarDraw @ 0x1C021640C (xxxMenuBarDraw.c)
 */

char __fastcall xxxDrawWindowFrame(__int64 a1, HDC a2, __int16 a3)
{
  int ClipBox; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int WindowBorders; // esi
  unsigned int v10; // ebp
  __int64 v11; // r8
  int CaptionHeight; // eax
  bool v13; // zf
  __int64 v14; // r8
  RECT v16; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-48h] BYREF

  ClipBox = IsVisible(a1);
  if ( ClipBox )
  {
    LOBYTE(ClipBox) = *(_BYTE *)(v7 + 57) & 0x81;
    if ( (_BYTE)ClipBox != 1 )
    {
      v8 = *(_QWORD *)(v7 + 128) - *(_QWORD *)(a1 + 144);
      if ( !v8 )
        v8 = *(_QWORD *)(a1 + 136) - *(_QWORD *)(a1 + 152);
      if ( v8 )
      {
        if ( *(_QWORD *)(a1 + 176) || (ClipBox = GreGetClipBox(a2, v17, 1LL), ClipBox != 1) )
        {
          if ( ((unsigned __int8)~*(_BYTE *)(a1 + 57) & (*(_BYTE *)(a1 + 71) >> 5) & 1) != 0 )
          {
            v14 = ((*(_BYTE *)(a1 + 56) & 0x40 | 0x240300u) >> 6) | 0x2000;
            if ( (a3 & 0x2000) == 0 )
              v14 = (*(_BYTE *)(a1 + 56) & 0x40 | 0x240300u) >> 6;
            LOBYTE(ClipBox) = xxxDrawCaptionBar(a1, a2, v14);
          }
          else
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(a1 + 68), *(unsigned int *)(a1 + 64));
            GetRect(a1, &v16, 34LL);
            v16.left += WindowBorders;
            v10 = v16.top + WindowBorders;
            v16.right -= WindowBorders;
            v16.bottom -= WindowBorders;
            if ( (*(_BYTE *)(a1 + 56) & ((a3 & 0x2000) == 0)) != 0 )
              v10 += xxxMenuBarDraw(a1, a2, WindowBorders, WindowBorders);
            if ( ((unsigned __int8)~*(_BYTE *)(a1 + 64) & ((*(_BYTE *)(a1 + 70) & 0xC4) == 0)) == 0
              || (*(_BYTE *)(a1 + 65) & 1) != 0
              || ((unsigned __int8)~*(_BYTE *)(a1 + 57) & (*(_BYTE *)(a1 + 66) >> 1) & 1) != 0 )
            {
              v11 = a3 & 0x2000 | 0x900Du;
              if ( (a3 & 1) == 0 )
                v11 = a3 & 0x2000 | 0x900Cu;
              LODWORD(v11) = v11 | 0x800;
              xxxDrawCaptionBar(a1, a2, v11);
            }
            CaptionHeight = GetCaptionHeight(a1);
            v13 = (*(_BYTE *)(a1 + 60) & 0x10) == 0;
            v16.top = CaptionHeight + v10;
            if ( !v13 )
            {
              WindowBorders += 2;
              DrawEdge(a2, &v16, 0xAu, 8207);
            }
            if ( (((a3 & 0x2000) == 0) & (*(_BYTE *)(a1 + 56) >> 1)) != 0 )
            {
              if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
                DrawSize(a1, a2, WindowBorders, WindowBorders, *(_QWORD *)&v16.left, *(_QWORD *)&v16.right);
              xxxDrawScrollBar((struct tagWND *)a1, a2, 1);
            }
            LOBYTE(ClipBox) = ((a3 & 0x2000) == 0) & (*(_BYTE *)(a1 + 56) >> 2);
            if ( (_BYTE)ClipBox )
              LOBYTE(ClipBox) = xxxDrawScrollBar((struct tagWND *)a1, a2, 0);
          }
        }
      }
    }
  }
  return ClipBox;
}
