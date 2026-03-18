/*
 * XREFs of BgpGxReadRectangle @ 0x140841048
 * Callers:
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 * Callees:
 *     BgpGetBitsPerPixel @ 0x140165560 (BgpGetBitsPerPixel.c)
 *     BgpGxRectangleCreate @ 0x14083C2B0 (BgpGxRectangleCreate.c)
 *     BgpGxRectangleDestroy @ 0x14083D230 (BgpGxRectangleDestroy.c)
 *     GxpReadFrameBufferPixels @ 0x1408410C4 (GxpReadFrameBufferPixels.c)
 */

__int64 __fastcall BgpGxReadRectangle(__int64 *a1, __int64 a2)
{
  int BitsPerPixel; // eax
  _DWORD *v5; // r9
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  int FrameBufferPixels; // edi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  result = BgpGxRectangleCreate(v5, BitsPerPixel, &v10);
  if ( (int)result >= 0 )
  {
    v7 = a2;
    v8 = v10;
    FrameBufferPixels = GxpReadFrameBufferPixels(v10, v7);
    if ( FrameBufferPixels < 0 )
    {
      if ( v8 )
        BgpGxRectangleDestroy(v8);
    }
    else
    {
      *a1 = v8;
    }
    return (unsigned int)FrameBufferPixels;
  }
  return result;
}
