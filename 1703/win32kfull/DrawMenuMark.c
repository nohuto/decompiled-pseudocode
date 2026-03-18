/*
 * XREFs of DrawMenuMark @ 0x1C00F68BC
 * Callers:
 *     DrawFrameControl @ 0x1C002B024 (DrawFrameControl.c)
 * Callees:
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     FlipUserTextOutW @ 0x1C00F6CEC (FlipUserTextOutW.c)
 *     GetCaptionChar @ 0x1C00F6D80 (GetCaptionChar.c)
 */

__int64 __fastcall DrawMenuMark(HDC a1, LPCRECT a2, int a3, unsigned int a4)
{
  LONG top; // esi
  int v6; // r10d
  int v8; // ebx
  int v9; // r11d
  int v11; // r13d
  int v12; // ebx
  int v13; // edi
  unsigned __int16 CaptionChar; // ax
  unsigned __int16 v16; // [rsp+70h] [rbp+18h] BYREF

  top = a2->top;
  v6 = a2->right - a2->left;
  v8 = a2->bottom - top;
  v9 = v6;
  if ( v6 >= v8 )
    v9 = a2->bottom - top;
  v11 = a2->left + (a2->right - a2->left - v9) / 2 - (v6 > 11);
  v12 = top + (v8 - v9) / 2;
  FillRect(a1, a2, ghbrWhite);
  v13 = GreSetTextColor(a1, 0);
  if ( a3 == 2 )
  {
    if ( (a4 & 1) != 0 )
    {
      CaptionChar = 97;
    }
    else if ( (a4 & 2) != 0 )
    {
      CaptionChar = 104;
    }
    else if ( (a4 & 4) != 0 )
    {
      CaptionChar = 119;
    }
    else
    {
      CaptionChar = 56;
    }
  }
  else
  {
    CaptionChar = GetCaptionChar(a4);
  }
  v16 = CaptionChar;
  FlipUserTextOutW(a1, v11, v12, &v16);
  GreSetTextColor(a1, v13);
  return 1LL;
}
