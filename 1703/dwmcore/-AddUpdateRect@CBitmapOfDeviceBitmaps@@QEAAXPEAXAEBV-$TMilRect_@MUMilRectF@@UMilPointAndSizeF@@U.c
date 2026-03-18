/*
 * XREFs of ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B2260
 * Callers:
 *     ?MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4BufferState@1@@Z @ 0x1800B1244 (-MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B2510 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 *     ?IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV2@@Z @ 0x1800B81BC (-IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV-$TMilRect_@HUtagRECT@@UMilPo.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::AddUpdateRect(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 result; // rax
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 168);
  v7[0] = 0;
  v7[1] = 0;
  v7[2] = v3;
  v7[3] = *(_DWORD *)(a1 + 172);
  result = IntersectAliasedBoundsRectFWithSurfaceRect(a3, v7, v7);
  if ( (_BYTE)result )
    return CBitmapOfDeviceBitmaps::AddUpdateRect(a1, a2, v7);
  return result;
}
