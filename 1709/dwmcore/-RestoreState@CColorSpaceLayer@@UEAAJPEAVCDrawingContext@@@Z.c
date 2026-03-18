/*
 * XREFs of ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014BAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180043794 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180081490 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014B9FC (-RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CColorSpaceLayer::RestoreState(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  signed int v6; // eax
  signed int v7; // eax

  v4 = CExternalLayer::RestoreState(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x49u);
  }
  else
  {
    *((_BYTE *)a2 + 6830) = *((_BYTE *)this + 112);
    v6 = CDrawingContext::FlushD2D(a2);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x4Cu);
    }
    else
    {
      v7 = CColorSpaceLayer::RenderLayer(this, a2);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x4Eu);
    }
  }
  return v5;
}
