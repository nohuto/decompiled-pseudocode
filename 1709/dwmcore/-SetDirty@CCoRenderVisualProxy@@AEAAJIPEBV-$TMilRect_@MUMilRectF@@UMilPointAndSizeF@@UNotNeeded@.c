/*
 * XREFs of ?SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180129C38
 * Callers:
 *     ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x180129890 (-SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800513D4 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetDirty(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  signed int v8; // eax

  v3 = 0;
  v4 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v8 = CVisual::AddAdditionalDirtyRects(*(CVisual **)(a1 + 24), (const struct MilRectF *)(a3 + 16LL * v4));
      v3 = v8;
      if ( v8 < 0 )
        break;
      if ( ++v4 >= a2 )
        return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x287u);
  }
  return v3;
}
