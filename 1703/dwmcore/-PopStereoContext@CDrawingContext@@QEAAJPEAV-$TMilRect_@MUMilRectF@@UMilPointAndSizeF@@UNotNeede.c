/*
 * XREFs of ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18012D294
 * Callers:
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18006C2A4 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18006D45C (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B4740 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??$SAFE_DELETE@VCLayer@@@@YAXAEAPEAVCLayer@@@Z @ 0x18014AAA0 (--$SAFE_DELETE@VCLayer@@@@YAXAEAPEAVCLayer@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PopStereoContext(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
    *a2 = *(_OWORD *)(a1 + 6716);
  v4 = *(_DWORD *)(a1 + 560) - 1;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 536) + 8LL * v4);
  *(_DWORD *)(a1 + 560) = v4;
  v9 = v5;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a1);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x123Du);
  SAFE_DELETE<CLayer>(&v9);
  return v7;
}
