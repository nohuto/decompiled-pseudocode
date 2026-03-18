/*
 * XREFs of ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180045DA4
 * Callers:
 *     ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045C9C (-GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180079484 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x1800BE1B8 (--$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z.c)
 *     ?Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800BE5A4 (-Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800C0CA8 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CContentBounder::EnsureDrawingContextFrame(CContentBounder *this)
{
  struct CDrawingContext **v1; // rdi
  int v3; // eax
  int v4; // ebx
  struct CComposition *v6; // rbp
  int v7; // eax
  int v8; // eax

  v1 = (struct CDrawingContext **)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    goto LABEL_2;
  v6 = *(struct CComposition **)this;
  v7 = CSwRenderTargetGetBounds::Create(*(struct CComposition **)this, (struct CSwRenderTargetGetBounds **)this + 2);
  v4 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x71u);
  }
  else
  {
    v8 = CDrawingContext::Create(v6, v1);
    v4 = v8;
    if ( v8 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x72u);
  }
  ReleaseInterface<CDrawingContext>(v1);
  ReleaseInterface<CSwRenderTargetGetBounds>((char *)this + 16);
LABEL_6:
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x94u);
    return (unsigned int)v4;
  }
LABEL_2:
  v3 = CDrawingContext::BeginFrame(
         *v1,
         (CSwRenderTargetGetBounds *)((*((_QWORD *)this + 2) + 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 2) >> 64)),
         0LL,
         0,
         0LL,
         0LL,
         0,
         0LL);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xA0u);
  return (unsigned int)v4;
}
