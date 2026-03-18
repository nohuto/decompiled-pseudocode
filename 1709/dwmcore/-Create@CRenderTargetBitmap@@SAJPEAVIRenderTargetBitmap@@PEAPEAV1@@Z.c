/*
 * XREFs of ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x1800BE0D4
 * Callers:
 *     ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x18008E2A4 (-CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18008B658 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18008B778 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Create(
        __int64 (__fastcall ***a1)(struct IRenderTargetBitmap *, GUID *, CHwTextureRenderTarget **),
        struct CRenderTargetBitmap **a2)
{
  signed int v4; // eax
  unsigned int v5; // edi
  CRenderTargetBitmap *v6; // rax
  CRenderTargetBitmap *v7; // rbx
  signed int v8; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = (*a1)[11]((struct IRenderTargetBitmap *)a1, (GUID *)&v10, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x16u);
  }
  else
  {
    v6 = (CRenderTargetBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0xB8uLL);
    if ( v6 )
      v7 = CRenderTargetBitmap::CRenderTargetBitmap(v6, 0);
    else
      v7 = 0LL;
    if ( v7 )
    {
      (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v7 + 8LL))(v7);
      v8 = CRenderTargetBitmap::Initialize(v7, a1);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1Du);
        (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v7 + 16LL))(v7);
      }
      else
      {
        *a2 = v7;
      }
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1Bu);
    }
  }
  return v5;
}
