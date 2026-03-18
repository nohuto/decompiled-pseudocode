/*
 * XREFs of ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180128ED4
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18006D45C (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800D1EE8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180098678 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CHwndRenderTarget::RenderTargetRectToDesktopRect(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // r10
  __m128 v9[4]; // [rsp+20h] [rbp-78h] BYREF
  int v10; // [rsp+60h] [rbp-38h]
  __int128 v11; // [rsp+70h] [rbp-28h] BYREF

  v10 = 0;
  v5 = *(_QWORD *)(a1 + 776);
  if ( !v5 || (v6 = *(_BYTE *)(v5 + 1097) == 0, v7 = 232LL, v6) )
    v7 = 164LL;
  CMILMatrix::SetToInverse(v9, (const struct CMILMatrix *)(v7 + a1));
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v9, v8, (float *)&v11);
  *a4 = v11;
}
