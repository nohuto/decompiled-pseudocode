/*
 * XREFs of ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0080B08
 * Callers:
 *     DrawFrameControl @ 0x1C007E640 (DrawFrameControl.c)
 * Callees:
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C007CCE4 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     ?GetCaptionChar@@YAGI@Z @ 0x1C0080050 (-GetCaptionChar@@YAGI@Z.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 */

__int64 __fastcall DrawMenuMark(HDC a1, LPCRECT a2, int a3, char a4)
{
  LONG top; // esi
  int v6; // r10d
  int v7; // ebx
  int v9; // r11d
  int v11; // r13d
  int v12; // ebx
  unsigned __int16 CaptionChar; // ax
  unsigned __int16 v15; // [rsp+70h] [rbp+18h] BYREF

  top = a2->top;
  v6 = a2->right - a2->left;
  v7 = a2->bottom - top;
  v9 = v6;
  if ( v6 >= v7 )
    v9 = a2->bottom - top;
  v11 = a2->left + (a2->right - a2->left - v9) / 2 - (v6 > 11);
  v12 = top + (v7 - v9) / 2;
  FillRect(a1, a2, ghbrWhite);
  GreSetTextColor(a1);
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
  v15 = CaptionChar;
  FlipUserTextOutW(a1, v11, v12, &v15);
  GreSetTextColor(a1);
  return 1LL;
}
