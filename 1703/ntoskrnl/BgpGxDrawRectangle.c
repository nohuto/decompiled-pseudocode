/*
 * XREFs of BgpGxDrawRectangle @ 0x140140A34
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14014076C (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x1402661F0 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1402674B4 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwpFadeAnimationTimer @ 0x140757430 (AnFwpFadeAnimationTimer.c)
 *     BgpGxDrawBitmapImage @ 0x14075AB1C (BgpGxDrawBitmapImage.c)
 *     BgpTxtClearRegion @ 0x14075AB6C (BgpTxtClearRegion.c)
 *     BgpTxtDisplayString @ 0x14075AB90 (BgpTxtDisplayString.c)
 * Callees:
 *     GxpWriteFrameBufferPixels @ 0x140140AAC (GxpWriteFrameBufferPixels.c)
 *     BgpGetBitsPerPixel @ 0x140140DD4 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x14014141C (BgpGxConvertRectangleEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     BgpGxRectangleDestroy @ 0x140757D34 (BgpGxRectangleDestroy.c)
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
  if ( (dword_140341A30 & 0xC00) == 0 )
    v8 = 0LL;
  v9 = v8;
  result = BgpGxConvertRectangleEx(v5, BitsPerPixel, &v9, (dword_140341A30 & 0xC00) != 0);
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
