/*
 * XREFs of BgpGxDrawRectangle @ 0x1401651B0
 * Callers:
 *     BgpClearScreen @ 0x140165060 (BgpClearScreen.c)
 *     BgpTxtDisplayCharacter @ 0x1401736FC (BgpTxtDisplayCharacter.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1402C7278 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwpFadeAnimationTimer @ 0x1408404D0 (AnFwpFadeAnimationTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140840D9C (BgpGxDrawBitmapImage.c)
 *     BgpTxtClearRegion @ 0x140841368 (BgpTxtClearRegion.c)
 *     BgpTxtDisplayString @ 0x140841398 (BgpTxtDisplayString.c)
 * Callees:
 *     GxpWriteFrameBufferPixels @ 0x140165238 (GxpWriteFrameBufferPixels.c)
 *     BgpGetBitsPerPixel @ 0x140165560 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x1401739C0 (BgpGxConvertRectangleEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     BgpGxRectangleDestroy @ 0x14083D230 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxDrawRectangle(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rbx
  unsigned int BitsPerPixel; // eax
  _BYTE *v6; // r10
  _BYTE *v7; // rdi
  unsigned int v8; // esi
  __int64 result; // rax
  __int64 v10; // r9
  _BYTE *v11; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v12[80]; // [rsp+30h] [rbp-68h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  BitsPerPixel = BgpGetBitsPerPixel(a1, a2, a3);
  v7 = 0LL;
  if ( *((_DWORD *)v6 + 2) != BitsPerPixel )
  {
    if ( (dword_14039D7F0 & 0xC00) != 0 )
    {
      v10 = 1LL;
      v11 = v12;
    }
    else
    {
      v10 = 0LL;
    }
    result = BgpGxConvertRectangleEx(v6, BitsPerPixel, &v11, v10);
    if ( (int)result < 0 )
      return result;
    v3 = v11;
    v6 = v11;
    v7 = v11;
  }
  v8 = GxpWriteFrameBufferPixels(v6, a2);
  if ( v7 )
  {
    if ( v7 != v12 )
      BgpGxRectangleDestroy(v3);
  }
  return v8;
}
