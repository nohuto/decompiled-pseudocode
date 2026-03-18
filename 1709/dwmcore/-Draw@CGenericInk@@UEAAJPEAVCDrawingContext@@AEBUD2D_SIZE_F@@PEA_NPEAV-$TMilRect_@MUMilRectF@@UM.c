/*
 * XREFs of ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180166B70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x18013AA20 (-Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z.c)
 */

__int64 __fastcall CGenericInk::Draw(struct CGenericInk *a1, struct CDrawingContext *a2)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = CWetInkManager::Draw(a1, a2, a1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xA4u);
  else
    **((_DWORD **)a1 + 28) = 0;
  return v4;
}
