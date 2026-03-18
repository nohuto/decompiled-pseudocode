/*
 * XREFs of ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180119FB8
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801364D8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180136764 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180017884 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::NotifyRenderedRect(__int64 a1, __int128 *a2, char a3)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  if ( a2 && a3 )
  {
    CHwndRenderTarget::DesktopRectToRenderTargetRect(a1, 1, (__int64)a2, &v7);
    a2 = &v7;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 120) + 224LL))(*(_QWORD *)(a1 + 120), a2);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x9ACu);
  else
    *(_BYTE *)(a1 + 804) = 1;
  return v5;
}
