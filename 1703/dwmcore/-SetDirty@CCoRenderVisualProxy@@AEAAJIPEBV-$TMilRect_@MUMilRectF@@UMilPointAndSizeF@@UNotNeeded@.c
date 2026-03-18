/*
 * XREFs of ?SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801407D8
 * Callers:
 *     ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x180140410 (-SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800853C0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetDirty(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int v8; // eax

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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x28Bu);
  }
  return v3;
}
