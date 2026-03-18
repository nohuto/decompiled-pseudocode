/*
 * XREFs of ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180158EBC
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180060EAC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180158A6C (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800A36A8 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

char __fastcall CHwndRenderTarget::RenderTargetRectToDesktopRect(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // r10
  char result; // al
  __m128 v10[4]; // [rsp+20h] [rbp-78h] BYREF
  int v11; // [rsp+60h] [rbp-38h]
  __int128 v12; // [rsp+70h] [rbp-28h] BYREF

  v11 = 0;
  v5 = *(_QWORD *)(a1 + 840);
  if ( !v5 || (v6 = *(_BYTE *)(v5 + 1195) == 0, v7 = 288LL, v6) )
    v7 = 220LL;
  CMILMatrix::SetToInverse(v10, (const struct CMILMatrix *)(v7 + a1));
  result = CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v10, v8, (float *)&v12);
  *a4 = v12;
  return result;
}
