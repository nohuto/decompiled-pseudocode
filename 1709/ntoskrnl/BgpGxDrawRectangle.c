/*
 * XREFs of BgpGxDrawRectangle @ 0x14013BCD8
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14013BA14 (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x140290508 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1402917C8 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwpFadeAnimationTimer @ 0x1407CF6D0 (AnFwpFadeAnimationTimer.c)
 *     BgpGxDrawBitmapImage @ 0x1407D4204 (BgpGxDrawBitmapImage.c)
 *     BgpTxtClearRegion @ 0x1407D4254 (BgpTxtClearRegion.c)
 *     BgpTxtDisplayString @ 0x1407D4284 (BgpTxtDisplayString.c)
 * Callees:
 *     GxpWriteFrameBufferPixels @ 0x14013BD50 (GxpWriteFrameBufferPixels.c)
 *     BgpGetBitsPerPixel @ 0x14013C074 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x14013C748 (BgpGxConvertRectangleEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     BgpGxRectangleDestroy @ 0x1407CFF98 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxDrawRectangle(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rbx
  unsigned int BitsPerPixel; // eax
  _BYTE *v5; // r10
  unsigned int v6; // edi
  __int64 result; // rax
  _BYTE *v8; // rdx
  _BYTE *v9; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v10[80]; // [rsp+30h] [rbp-68h] BYREF

  v3 = 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  if ( *((_DWORD *)v5 + 2) == BitsPerPixel )
    goto LABEL_2;
  v8 = v10;
  if ( (dword_14035A1B0 & 0xC00) == 0 )
    v8 = 0LL;
  v9 = v8;
  result = BgpGxConvertRectangleEx(v5, BitsPerPixel, &v9, (dword_14035A1B0 & 0xC00) != 0);
  if ( (int)result >= 0 )
  {
    v3 = v9;
    v5 = v9;
LABEL_2:
    v6 = GxpWriteFrameBufferPixels(v5, a2);
    if ( v3 )
    {
      if ( v3 != v10 )
        BgpGxRectangleDestroy(v3);
    }
    return v6;
  }
  return result;
}
