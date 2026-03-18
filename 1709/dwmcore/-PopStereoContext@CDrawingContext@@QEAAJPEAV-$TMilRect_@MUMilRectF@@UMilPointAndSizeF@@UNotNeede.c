/*
 * XREFs of ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013DC08
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180018970 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180078680 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801363AC (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??$SAFE_DELETE@VCLayer@@@@YAXAEAPEAVCLayer@@@Z @ 0x18013BEC4 (--$SAFE_DELETE@VCLayer@@@@YAXAEAPEAVCLayer@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PopStereoContext(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // r8d
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rcx
  signed int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v9)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
    *a2 = *(_OWORD *)(a1 + 6776);
  v4 = *(_DWORD *)(a1 + 568) - 1;
  v5 = *(__int64 (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)(a1 + 544) + 8LL * v4);
  *(_DWORD *)(a1 + 568) = v4;
  v9 = v5;
  v6 = (*v5)[3](v5, a1);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x1024u);
  SAFE_DELETE<CLayer>(&v9);
  return v7;
}
